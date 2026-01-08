#include "brave_battle.h"
#include "brave_ai.h"
#include "battle.h"
#include "battle_ai_util.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_gimmick.h"
#include "event_data.h"
#include "even_sprite.h"
#include "item.h"
#include "item_use.h"
#include "line_break.h"
#include "main.h"
#include "malloc.h"
#include "pokemon_icon.h"
#include "sound.h"
#include "string_util.h"
#include "text.h"
#include "constants/songs.h"
#include "constants/characters.h"

#define BATTLER_INDICATOR_TAG 0xDEDE

#define BRAVE_ITEM_USE_SPEED_MULTIPLIER 2

#define GO_BATTLER_BY_BATTLER FALSE

EWRAM_DATA struct BraveBattleAction gBraveBattleAction[MAX_BRAVE_BATTLERS][MAX_BRAVE_ACTIONS];
EWRAM_DATA struct BraveBattleAction gBraveCurrentAction;
EWRAM_DATA u16 gBraveStoredSpeeds[4];

void Brave_TestActions(void)
{
    for (u32 battler = 0; battler < 3; battler++)
    {
        for (u32 action = 0; action < 4; action++)
        {
            u32 target = 0;
            switch (battler)
            {
            case 0:
                target = 1;
                break;
            case 1:
                target = 0;
                break;
            case 2:
                target = 3;
                break;
            case 3:
                target = 2;
                break;
            }
            gBraveBattleAction[battler][action].action = B_ACTION_USE_MOVE;
            gBraveBattleAction[battler][action].battler = battler;
            gBraveBattleAction[battler][action].target = target;
            gBraveBattleAction[battler][action].moveSlot = 0;
            gBraveBattleAction[battler][action].isSlotUsed = TRUE;
            //gBraveBattleAction[battler][action].isDefaulting = TRUE;
        }
    }
    gBraveBattleAction[3][0].action = B_ACTION_USE_MOVE;
    gBraveBattleAction[3][0].battler = 3;
    gBraveBattleAction[3][0].isSlotUsed = TRUE;
    gBraveBattleAction[3][0].isDefaulting = TRUE;
}

u32 BraveGetCurrentAction(void)
{
    return gBraveCurrentAction.action;
}

u32 BraveGetCurrentBattler(void)
{
    return gBraveCurrentAction.battler;
}

u32 BraveGetCurrentTarget(void)
{
    return gBraveCurrentAction.target;
}

u32 BraveGetCurrentMove(void)
{
    bool8 isEnemyMon = GetBattlerSide(gBraveCurrentAction.battler) == B_SIDE_OPPONENT; //needed for Randomizer
    //MgbaPrintf(MGBA_LOG_WARN, "BraveGetCurrentItem slot %d", gBraveCurrentAction.item);

    //Item is used as a place to put an argument if you want to use a move not on its moveset
    if(isEnemyMon && gBraveCurrentAction.moveSlot == 1 && gBraveCurrentAction.item != ITEM_NONE)
        return gBraveCurrentAction.item;
    
    return MOVE_NONE;
}

u32 BraveGetCurrentMoveSlot(void)
{
    return gBraveCurrentAction.moveSlot;
}

static const u8 sBattlerOrders[24][4] =
{
    { 0, 1, 2, 3 },
    { 0, 1, 3, 2 },
    { 0, 2, 1, 3 },
    { 0, 2, 3, 1 },
    { 0, 3, 1, 2 },
    { 0, 3, 2, 1 },
    { 1, 0, 2, 3 },
    { 1, 0, 3, 2 },
    { 1, 2, 0, 3 },
    { 1, 2, 3, 0 },
    { 1, 3, 0, 2 },
    { 1, 3, 2, 0 },
    { 2, 0, 1, 3 },
    { 2, 0, 3, 1 },
    { 2, 1, 0, 3 },
    { 2, 1, 3, 0 },
    { 2, 3, 0, 1 },
    { 2, 3, 1, 0 },
    { 3, 0, 1, 2 },
    { 3, 0, 2, 1 },
    { 3, 1, 0, 2 },
    { 3, 1, 2, 0 },
    { 3, 2, 0, 1 },
    { 3, 2, 1, 0 },
};

static const uq4_12_t sPriorityMultipliers[13] =
{
    UQ_4_12(6.0),   //  +5
    UQ_4_12(5.0),   //  +4
    UQ_4_12(4.0),   //  +3
    UQ_4_12(3.0),   //  +2
    UQ_4_12(2.0),   //  +1
    UQ_4_12(1.0),   //   0
    UQ_4_12(0.5),   //  -1
    UQ_4_12(0.33),  //  -2
    UQ_4_12(0.25),  //  -3
    UQ_4_12(0.2),   //  -4
    UQ_4_12(0.16),  //  -5
    UQ_4_12(0.14),  //  -6
    UQ_4_12(0.12),  //  -7
};

u16 GetBravePrioMod(u32 move, u32 battler)
{
    s8 movePrio = GetBattleMovePriority(battler, move);
    return sPriorityMultipliers[movePrio + 5];
}

bool32 AreAllBattlersDone(void)
{
    //  Check if any other mons can move
    u32 numBattlers = IsDoubleBattle() ? 4 : 2;
    for (u32 battler = 0; battler < numBattlers; battler++)
    {
        for (u32 action = 0; action < MAX_BRAVE_ACTIONS; action++)
        {
            if (gBraveBattleAction[battler][action].isSlotUsed)
                return FALSE;
        }
    }
    //  If this point is reached, turn is done
    gBattleStruct->braveTurnDone = TRUE;
    return TRUE;
}

void BraveSetCurrentAction(void)
{
    if (gBattleStruct->braveTurnDone)
    {
        gBattleStruct->braveTurnActuallyDone = TRUE;
        return;
    }
    bool8 battlerWantsToMove[4] = {0, 0, 0, 0};
    u32 battlerSpeeds[4];
    u32 numBattlers = IsDoubleBattle() ? 4 : 2;

    if (gBraveBattleAction[0][0].action == B_ACTION_RUN)
    {
        gBraveCurrentAction.action = B_ACTION_RUN;
        gBraveCurrentAction.battler = 0;
        BraveClearBattlerAction(0, 0);
        return;
    }

    if (gBraveBattleAction[2][0].action == B_ACTION_RUN)
    {
        gBraveCurrentAction.action = B_ACTION_RUN;
        gBraveCurrentAction.battler = 0;
        BraveClearBattlerAction(0, 1);
        return;
    }

    //  Check for switching
    if (gBraveBattleAction[0][0].action == B_ACTION_SWITCH
     || gBraveBattleAction[1][0].action == B_ACTION_SWITCH
     || gBraveBattleAction[2][0].action == B_ACTION_SWITCH
     || gBraveBattleAction[3][0].action == B_ACTION_SWITCH)
    {
        //  Find the fastest mon that wants to switch
        for (u32 i = 0; i < 4; i++)
        {
            if (gBraveBattleAction[i][0].action == B_ACTION_SWITCH)
            {
                battlerWantsToMove[i] = TRUE;
                battlerSpeeds[i] = GetBattlerTotalSpeedStat(i);
            }
        }
        u32 battlerToUse = 5;
        for (u32 i = 0; i < 4; i++)
        {
            if (battlerWantsToMove[i])
            {
                if (battlerToUse == 5)
                {
                    battlerToUse = i;
                }
                else
                {
                    if (battlerSpeeds[i] > battlerSpeeds[battlerToUse])
                    {
                        battlerToUse = i;
                    }
                    else if (battlerSpeeds[i] == battlerSpeeds[battlerToUse]
                      && sBattlerOrders[gBattleStruct->speedTieBreaks][i] > sBattlerOrders[gBattleStruct->speedTieBreaks][battlerToUse])
                    {
                        battlerToUse = i;
                    }
                }
            }
        }
        gBraveCurrentAction.action = B_ACTION_SWITCH;
        gBraveCurrentAction.battler = battlerToUse;
        gBraveCurrentAction.target = gBraveBattleAction[battlerToUse][0].target;
        gBattleStruct->monToSwitchIntoId[battlerToUse] = gBraveCurrentAction.target;
        BraveClearBattlerAction(battlerToUse, 0);
        BraveResetAP(battlerToUse);

        //  Check actions done
        AreAllBattlersDone();
        return;
    }

    for (u32 battler = 0; battler < numBattlers; battler++)
    {
        battlerSpeeds[battler] = GetBattlerTotalSpeedStat(battler);
        for (u32 actionIndex = 0; actionIndex < MAX_BRAVE_ACTIONS; actionIndex++)
        {
            if (gBraveBattleAction[battler][actionIndex].isSlotUsed
             && gBraveBattleAction[battler][actionIndex].action == B_ACTION_USE_MOVE)
            {
                u32 move = gBattleMons[battler].moves[gBraveBattleAction[battler][actionIndex].moveSlot];

                battlerSpeeds[battler] = uq4_12_multiply_by_int_half_down(GetBravePrioMod(move, battler), battlerSpeeds[battler]);
                battlerWantsToMove[battler] = TRUE;
                break;
            }
            else if (gBraveBattleAction[battler][actionIndex].isSlotUsed
                  && gBraveBattleAction[battler][actionIndex].action == B_ACTION_USE_ITEM)
            {
                battlerSpeeds[battler] = battlerSpeeds[battler] * BRAVE_ITEM_USE_SPEED_MULTIPLIER;
                battlerWantsToMove[battler] = TRUE;
                break;
            }
        }
    }

    //  Check if any battler should Default before executing moves
    bool32 battlerIsDefaulting = FALSE;
    u32 battlerToDefault = 0;
    for (u32 battler = 0; battler < numBattlers; battler++)
    {
        if (gBraveBattleAction[battler][0].isDefaulting)
        {
            if (battlerIsDefaulting)
            {
                if (battlerSpeeds[battler] > battlerSpeeds[battlerToDefault])
                {
                    battlerToDefault = battler;
                }
                else if (battlerSpeeds[battler] == battlerSpeeds[battlerToDefault]
                      && sBattlerOrders[gBattleStruct->speedTieBreaks][battler] > sBattlerOrders[gBattleStruct->speedTieBreaks][battlerToDefault])
                {
                    battlerToDefault = battler;
                }
            }
            else
            {
                battlerToDefault = battler;
                battlerIsDefaulting = TRUE;
            }
        }
    }

    if (battlerIsDefaulting)
    {
        gBraveCurrentAction = gBraveBattleAction[battlerToDefault][0];
        BraveClearBattlerAction(battlerToDefault, 0);
    }
    else
    {
        u32 battlerToMove = 0;
        u32 highestStoredSpeed = 0;

        for (u32 battler = 0; battler < numBattlers; battler++)
        {
            if (!battlerWantsToMove[battler])
                continue;

            if (GO_BATTLER_BY_BATTLER)
            {
                battlerToMove = battler;
                break;
            }

            gBraveStoredSpeeds[battler] += battlerSpeeds[battler];

            if (gBraveStoredSpeeds[battler] > highestStoredSpeed)
            {
                battlerToMove = battler;
                highestStoredSpeed = gBraveStoredSpeeds[battler];
            }
            else if (gBraveStoredSpeeds[battler] == highestStoredSpeed)
            {
                //  Deal with the speed tiebreaks here
                s32 order1 = sBattlerOrders[gBattleStruct->speedTieBreaks][battlerToMove];
                s32 order2 = sBattlerOrders[gBattleStruct->speedTieBreaks][battler];
                if (order2 > order1)
                    battlerToMove = battler;
            }
        }

        gBraveStoredSpeeds[battlerToMove] = 0;

        for (u32 i = 0; i < MAX_BRAVE_ACTIONS; i++)
        {
            if (gBraveBattleAction[battlerToMove][i].isSlotUsed)
            {
                gBraveCurrentAction = gBraveBattleAction[battlerToMove][i];
                BraveClearBattlerAction(battlerToMove, i);
                break;
            }
        }
    }

    AreAllBattlersDone();
}

bool32 IsBattlerDefaulting(u32 battler)
{
    if (gProtectStructs[battler].usedDefault)
        return TRUE;
    return FALSE;
}

void BraveClearBattlerAction(u32 battler, u32 action)
{
    if (battler == 0 || battler == 2)
    {
        if (gBraveBattleAction[battler][action].isSlotUsed
         && gBraveBattleAction[battler][action].action == B_ACTION_USE_ITEM)
        {
            AddBagItem(gBraveBattleAction[battler][action].item, 1);
        }
    }
    u32 value = 0;
    memcpy(&gBraveBattleAction[battler][action], &value, sizeof(struct BraveBattleAction));
}

void BraveClearAllActions(void)
{
    for (u32 battler = 0; battler < 4; battler++)
        for (u32 action = 0; action < 4; action ++)
            BraveClearBattlerAction(battler, action);

    for (u32 it = 0; it < 4; it++)
        gBattleStruct->monBraveActions[it] = 0;

    gBattleStruct->braveTurnDone = FALSE;
    gBattleStruct->braveTurnActuallyDone = FALSE;
}

void BraveAddMoveToQueue(u32 battler, u32 movePos, u32 target)
{
    u32 currAction = gBattleStruct->monBraveActions[battler]++;
    gBraveBattleAction[battler][currAction].battler = battler;
    gBraveBattleAction[battler][currAction].moveSlot = movePos;
    gBraveBattleAction[battler][currAction].target = target;
    gBraveBattleAction[battler][currAction].isSlotUsed = TRUE;
    gBraveBattleAction[battler][currAction].isDefaulting = FALSE;
    gBraveBattleAction[battler][currAction].action = B_ACTION_USE_MOVE;
}

void BraveAddAnyMoveToQueue(u32 battler, u32 move, u32 target)
{
    u32 currAction = gBattleStruct->monBraveActions[battler]++;

    gBraveBattleAction[battler][currAction].battler = battler;
    gBraveBattleAction[battler][currAction].item = move;
    gBraveBattleAction[battler][currAction].moveSlot = 1;
    gBraveBattleAction[battler][currAction].target = target;
    gBraveBattleAction[battler][currAction].isSlotUsed = TRUE;
    gBraveBattleAction[battler][currAction].isDefaulting = FALSE;
    gBraveBattleAction[battler][currAction].action = B_ACTION_USE_MOVE;

    //MgbaPrintf(MGBA_LOG_WARN, "BraveAddAnyMoveToQueue battler %d move %d target %d currAction %d", battler, move, target, action);
}

void BraveAddDefaultToQueue(u32 battler)
{
    u32 currAction = gBattleStruct->monBraveActions[battler]++;
    gBraveBattleAction[battler][currAction].battler = battler;
    gBraveBattleAction[battler][currAction].moveSlot = 0;
    gBraveBattleAction[battler][currAction].target = battler;
    gBraveBattleAction[battler][currAction].isSlotUsed = TRUE;
    gBraveBattleAction[battler][currAction].isDefaulting = TRUE;
    gBraveBattleAction[battler][currAction].action = B_ACTION_USE_MOVE;
}

void BraveAddSwitchToQueue(u32 battler, u32 target)
{
    gBraveBattleAction[battler][0].action = B_ACTION_SWITCH;
    gBraveBattleAction[battler][0].target = target;
    gBraveBattleAction[battler][0].isSlotUsed = TRUE;
}

void BraveAddItemToQueue(u32 battler, u32 item, u32 target, u32 slot)
{
    u32 currAction = gBattleStruct->monBraveActions[battler]++;
    gBraveBattleAction[battler][currAction].battler = battler;
    gBraveBattleAction[battler][currAction].item = item;
    gBraveBattleAction[battler][currAction].moveSlot = slot;
    gBraveBattleAction[battler][currAction].target = target;
    gBraveBattleAction[battler][currAction].isSlotUsed = TRUE;
    gBraveBattleAction[battler][currAction].isDefaulting = FALSE;
    gBraveBattleAction[battler][currAction].action = B_ACTION_USE_ITEM;

    //  If on player side, remove item from bags
    if (battler == 0 || battler == 2)
        RemoveBagItem(item, 1);
}

void BraveAddRunToQueue(u32 battler)
{
    gBraveBattleAction[battler][0].action = B_ACTION_RUN;
}

void BravePrintActions(void)
{
    MgbaPrintf(MGBA_LOG_WARN, "0: %u %u %u %u", gBraveBattleAction[0][0].isSlotUsed, gBraveBattleAction[0][1].isSlotUsed, gBraveBattleAction[0][2].isSlotUsed, gBraveBattleAction[0][3].isSlotUsed);
    MgbaPrintf(MGBA_LOG_WARN, "1: %u %u %u %u", gBraveBattleAction[1][0].isSlotUsed, gBraveBattleAction[1][1].isSlotUsed, gBraveBattleAction[1][2].isSlotUsed, gBraveBattleAction[1][3].isSlotUsed);
    MgbaPrintf(MGBA_LOG_WARN, "2: %u %u %u %u", gBraveBattleAction[2][0].isSlotUsed, gBraveBattleAction[2][1].isSlotUsed, gBraveBattleAction[2][2].isSlotUsed, gBraveBattleAction[2][3].isSlotUsed);
    MgbaPrintf(MGBA_LOG_WARN, "3: %u %u %u %u", gBraveBattleAction[3][0].isSlotUsed, gBraveBattleAction[3][1].isSlotUsed, gBraveBattleAction[3][2].isSlotUsed, gBraveBattleAction[3][3].isSlotUsed);
    MgbaPrintf(MGBA_LOG_WARN, "=======");
}

u32 BraveGetBattlerActionCount(u32 battler)
{
    return gBattleStruct->monBraveActions[battler];
}

bool32 IsBraveTurnActuallyDone(void)
{
    return gBattleStruct->braveTurnDone && gBattleStruct->braveTurnActuallyDone;
}

void BraveFirstTurnSetAP(void)
{
    for (u32 battler = 0; battler < 4; battler++)
    {
        if (gBattleMons[battler].species == 0)
            continue;
        gBattleStruct->monStoredAP[battler] = 1;
        //  Set up graphics
        struct Pokemon *party = GetBattlerParty(battler);
        struct Pokemon *mon = &party[gBattlerPartyIndexes[battler]];
        SetActiveGimmick(battler, GIMMICK_MEGA);
        UpdateHealthboxAttribute(gHealthboxSpriteIds[battler], mon, HEALTHBOX_ALL);
        ChangeAPGraphics(battler);
    }
}

void BraveIncrementAP(void)
{
    for (u32 battler = 0; battler < 4; battler++)
    {
        BraveModAP(battler, 1, TRUE);
    }

    gFieldTimers.turnAPTimer ^= 1;
}

void BraveConsumeAP(u32 battler, u32 move)
{
    if (gBraveCurrentAction.isDefaulting)
        return;
    if (gBraveCurrentAction.action == B_ACTION_USE_MOVE)
    {
        gBattleStruct->monStoredAP[battler] -= 1 + gMovesInfo[move].extraApCost;
        ChangeAPGraphics(battler);
    }
    else if (gBraveCurrentAction.action == B_ACTION_USE_ITEM)
    {
        gBattleStruct->monStoredAP[battler] -= 1;
        ChangeAPGraphics(battler);
    }
}

void BraveResetAP(u32 battler)
{
    gBattleStruct->monStoredAP[battler] = 0;
    ChangeAPGraphics(battler);
}

void ChangeAPGraphics(u32 battler)
{
    if (gBattleMons[battler].species == SPECIES_NONE)
        return;
    u32 *dst = (u32 *)(OBJ_VRAM0 + TILE_SIZE_4BPP * GetSpriteTileStartByTag(BATTLER_INDICATOR_TAG + battler));
    const u32 *src = GetIndicatorSpriteSrc(battler);
    for (u32 i = 0; i < 16; i++)
        dst[i] = src[i];
}

void BraveModAP(u32 battler, s32 change, bool8 turnBased)
{
    if(turnBased && IsBattlerTerrainAffected(battler, STATUS_FIELD_SLOW_AP_TERRAIN) && gFieldTimers.turnAPTimer == 1)
        return;

    if(IsBattlerTerrainAffected(battler, STATUS_FIELD_EXTRA_AP_TERRAIN))
        change *= 2;

    gBattleStruct->monStoredAP[battler] += change;

    if (gBattleStruct->monStoredAP[battler] > 4)
        gBattleStruct->monStoredAP[battler] = 4;
    else if (gBattleStruct->monStoredAP[battler] < -4)
        gBattleStruct->monStoredAP[battler] = -4;
    
    ChangeAPGraphics(battler);
}

void BraveCancelChain(u32 battler)
{
    for (u32 i = 0; i < 4; i++)
        BraveClearBattlerAction(battler, i);

    //  Check if there are any remaining actions in any brave chain
    AreAllBattlersDone();
}
