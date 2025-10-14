#include "brave_battle.h"
#include "battle.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_gimmick.h"
#include "even_sprite.h"
#include "item.h"
#include "main.h"
#include "malloc.h"
#include "sound.h"
#include "constants/songs.h"

#define BATTLER_INDICATOR_TAG 0xDEDE

#define BRAVE_ITEM_USE_SPEED_MULTIPLIER 2

static void ChangeAPGraphics(u32 battler);

EWRAM_DATA struct BraveBattleAction gBraveBattleAction[MAX_BRAVE_BATTLERS][MAX_BRAVE_ACTIONS];
EWRAM_DATA struct BraveBattleAction gBraveCurrentAction;
EWRAM_DATA u16 gBraveStoredSpeeds[4];

const u32 sBraveItemMenuGfx[] = INCBIN_U32("graphics/brave_item_menu/item_menu.4bpp");
const u16 sBraveItemMenuPal[] = INCBIN_U16("graphics/brave_item_menu/item_menu.gbapal");
const u32 sBraveItemMenuOther[] = INCBIN_U32("graphics/brave_item_menu/item_menu_other_sprites.4bpp");

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

void BraveSetCurrentAction(void)
{
    if (gBattleStruct->braveTurnDone)
    {
        gBattleStruct->braveTurnActuallyDone = TRUE;
        return;
    }
    bool8 battlerWantsToMove[4] = {0, 0, 0, 0};
    u32 battlerSpeeds[4];
    u32 speedThreshold = 0;
    u32 numBattlers = IsDoubleBattle() ? 4 : 2;

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
                speedThreshold += battlerSpeeds[battler];
                battlerWantsToMove[battler] = TRUE;
                break;
            }
            else if (gBraveBattleAction[battler][actionIndex].isSlotUsed
                  && gBraveBattleAction[battler][actionIndex].action == B_ACTION_USE_ITEM)
            {
                battlerSpeeds[battler] = battlerSpeeds[battler] * BRAVE_ITEM_USE_SPEED_MULTIPLIER;
                speedThreshold += battlerSpeeds[battler];
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

        speedThreshold *= 3;

        bool32 thresholdMet = FALSE;
        u32 battlerToMove = 0;
        u32 highestStoredSpeed = 0;

        while (!thresholdMet)
        {
            for (u32 battler = 0; battler < numBattlers; battler++)
            {
                if (!battlerWantsToMove[battler])
                    continue;
                if (gBraveStoredSpeeds[battler] >= speedThreshold)
                {
                    thresholdMet = TRUE;
                    if (gBraveStoredSpeeds[battler] > highestStoredSpeed)
                    {
                        battlerToMove = battler;
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
                if (!thresholdMet)
                    gBraveStoredSpeeds[battler] += battlerSpeeds[battler];
            }
        }

        gBraveStoredSpeeds[battlerToMove] -= speedThreshold;

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

    //  Check if any other mons can move
    for (u32 battler = 0; battler < numBattlers; battler++)
    {
        for (u32 action = 0; action < MAX_BRAVE_ACTIONS; action++)
        {
            if (gBraveBattleAction[battler][action].isSlotUsed)
                return;
        }
    }
    //  If this point is reached, turn is done
    gBattleStruct->braveTurnDone = TRUE;
}

bool32 IsBattlerDefaulting(u32 battler)
{
    if (gProtectStructs[battler].usedDefault)
        return TRUE;
    return FALSE;
}

void BraveClearBattlerAction(u32 battler, u32 action)
{
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

void AddAiActionsForBattler(u32 battler)
{
    // Placeholder
    u32 rnd = Random32() & 1;
    if (rnd)
        BraveAddDefaultToQueue(battler);
    else
    {
        u32 target = Random32() & 0x2;
        BraveAddMoveToQueue(battler, 0, target);
    }
}

void BraveFirstTurnSetAP(void)
{
    for (u32 battler = 0; battler < 4; battler++)
    {
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
        if (gBattleStruct->monStoredAP[battler] < 4)
        {
            gBattleStruct->monStoredAP[battler]++;
            ChangeAPGraphics(battler);
        }
    }
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

static void ChangeAPGraphics(u32 battler)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + TILE_SIZE_4BPP * GetSpriteTileStartByTag(BATTLER_INDICATOR_TAG + battler));
    const u32 *src = GetIndicatorSpriteSrc(battler);
    for (u32 i = 0; i < 16; i++)
        dst[i] = src[i];
}

EWRAM_DATA struct BraveItemMenuState *sBraveItemMenuState;

struct BraveListItem
{
    u16 item;
    u16 count;
};

struct BraveItemMenuState
{
    u8 state;
    u8 itemCategory;
    u8 scrollPos;
    u8 spriteIds[2];
    struct BraveListItem itemList[50];
};

static void PrintBraveItemList(void)
{
    for (u32 i = 0; i < 3; i++)
    {
        //  Skip the top row if first item
        if (sBraveItemMenuState->scrollPos == 0 && i == 0)
            continue;
        if (i == 2 && sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos + 1].item == ITEM_NONE)
            continue;
        if (sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos - 1 + i].item == ITEM_NONE)
            continue;
        const u8 *str = gItemsInfo[sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos - 1 + i].item].name;
        PrintOnBraveItemMenu(str,
                             (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[0]].oam.tileNum * 32) + 512 + i * 512 + 64,
                             (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[1]].oam.tileNum * 32) + 512 + i * 512,
                             0, 0,
                             0,
                             2, 14, 15);
    }
}

static void BuildItemList(u32 category)
{
    u32 listIndex = 0;
    u32 itemIndex = 0;
    for (u32 i = 0; i < 50; i++)
        sBraveItemMenuState->itemList[i].item = ITEM_NONE;

    while (TRUE)
    {
        u32 item = BagGetItemIdByPocketPosition(POCKET_ITEMS, itemIndex);
        if (item == ITEM_NONE)
            break;
        u32 count = BagGetQuantityByPocketPosition(POCKET_ITEMS , itemIndex);

        if (gItemsInfo[item].braveType == category)
        {
            sBraveItemMenuState->itemList[listIndex].item = item;
            sBraveItemMenuState->itemList[listIndex].count = count;
            listIndex++;
        }
        itemIndex++;
    }

    while (TRUE)
    {
        u32 item = BagGetItemIdByPocketPosition(POCKET_BERRIES, itemIndex);
        if (item == ITEM_NONE)
            break;
        u32 count = BagGetQuantityByPocketPosition(POCKET_BERRIES , itemIndex);

        if (gItemsInfo[item].braveType == category)
        {
            sBraveItemMenuState->itemList[listIndex].item = item;
            sBraveItemMenuState->itemList[listIndex].count = count;
            listIndex++;
        }
        itemIndex++;
    }
}

static void SelectBraveItemMenuCategory(u32 category)
{
    u32 *dst;
    const u32 *src = &sBraveItemMenuOther[32 * 9 + category * 32];
    if (category < 3)
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC1) + 2 + 2 * category) * TILE_SIZE_4BPP);
    }
    else
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC2) + 2 * (category - 3)) * TILE_SIZE_4BPP);
    }

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void UnselectBraveItemMenuCategory(u32 category)
{
    u32 *dst;
    const u32 *src = &sBraveItemMenuOther[32 + category * 32];
    if (category < 3)
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC1) + 2 + 2 * category) * TILE_SIZE_4BPP);
    }
    else
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC2) + 2 * (category - 3)) * TILE_SIZE_4BPP);
    }

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void ClearItemList(void)
{
    u32 *dst1 = (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[0]].oam.tileNum * 32);
    u32 *dst2 = (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[1]].oam.tileNum * 32);
    for (u32 i = 0; i < 48; i++)
    {
        dst1[128 + 16 + i] = 0x22222222;
        dst1[128 + 16+ 64 + i] = 0x22222222;
        dst1[256 + 16+ i] = 0x22222222;
        dst1[256 + 16+ 64 + i] = 0x22222222;
        dst1[384 + 16+ i] = 0x22222222;
        dst1[384 + 16+ 64 + i] = 0x22222222;
    }

    for (u32 i = 0; i < 32; i++)
    {
        dst2[128 + i] = 0x22222222;
        dst2[128 + 64 + i] = 0x22222222;
        dst2[256 + i] = 0x22222222;
        dst2[256 + 64 + i] = 0x22222222;
        dst2[384 + i] = 0x22222222;
        dst2[384 + 64 + i] = 0x22222222;
    }
}

static void SetLeftToActive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[0];

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void SetRightToActive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[32 * 7];

    for (u32 i = 0; i < 16; i++)
    {
        dst[48 + i] = src[i];
        dst[48 + 64 + i] = src[16 + i];
    }
}

static void SetLeftToInactive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[32 * 8];

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void SetRightToInactive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[32 * 15];

    for (u32 i = 0; i < 16; i++)
    {
        dst[48 + i] = src[i];
        dst[48 + 64 + i] = src[16 + i];
    }
}

static void FreeAndExitBraveItemMenu(u32 battler)
{
    SetControllerFuncToInputFromBraveItemMenu(battler);
    DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[0]]);
    DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[1]]);
    FreeSpritePaletteByTag(0xCEC1);
    FreeSpriteTilesByTag(0xCEC1);
    FreeSpriteTilesByTag(0xCEC2);
    Free(sBraveItemMenuState);
    sBraveItemMenuState = NULL;
}

static void BraveItemMenu_HandleInput(u32 battler)
{
    if (JOY_NEW(L_BUTTON))
    {
        if (sBraveItemMenuState->itemCategory != 1)
        {
            UnselectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            sBraveItemMenuState->itemCategory--;
            SelectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            BuildItemList(sBraveItemMenuState->itemCategory);
            sBraveItemMenuState->scrollPos = 0;
            ClearItemList();
            PrintBraveItemList();
            if (sBraveItemMenuState->itemCategory == 1)
                SetLeftToInactive();
            else if (sBraveItemMenuState->itemCategory == 5)
                SetRightToActive();
        }
    }
    else if (JOY_NEW(R_BUTTON))
    {
        if (sBraveItemMenuState->itemCategory != 6)
        {
            UnselectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            sBraveItemMenuState->itemCategory++;
            SelectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            BuildItemList(sBraveItemMenuState->itemCategory);
            sBraveItemMenuState->scrollPos = 0;
            ClearItemList();
            PrintBraveItemList();
            if (sBraveItemMenuState->itemCategory == 6)
                SetRightToInactive();
            else if (sBraveItemMenuState->itemCategory == 2)
                SetLeftToActive();
        }
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (sBraveItemMenuState->scrollPos != 0)
        {
            sBraveItemMenuState->scrollPos--;
            ClearItemList();
            PrintBraveItemList();
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos + 1].item != ITEM_NONE)
        {
            sBraveItemMenuState->scrollPos++;
            ClearItemList();
            PrintBraveItemList();
        }
    }
    else if (JOY_NEW(A_BUTTON))
    {
        switch (gItemsInfo[sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos].item].battleUsage)
        {
        //  Direct use items that don't need targeting
        case EFFECT_ITEM_INCREASE_STAT:
        case EFFECT_ITEM_INCREASE_ALL_STATS:
        case EFFECT_ITEM_SET_MIST:
        case EFFECT_ITEM_SET_FOCUS_ENERGY:
            //  Add item to queue and return to action choice
            PlaySE(SE_SELECT);
            BraveAddItemToQueue(battler, sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos].item, battler, 0);
            FreeAndExitBraveItemMenu(battler);
            break;
        //  Items that requires targeting a party member
        case EFFECT_ITEM_RESTORE_HP:
        case EFFECT_ITEM_CURE_STATUS:
        case EFFECT_ITEM_REVIVE:
            //  Open mon selection menu and continue mon selection
            break;
        //  Items that requires targeting a move index
        case EFFECT_ITEM_RESTORE_PP:
            //  Open mon selection menu and continue to move selection
            break;
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        FreeAndExitBraveItemMenu(battler);
    }
    else if (JOY_NEW(START_BUTTON))
    {
        gBattleStruct->isBraveSelector = FALSE;
        PlayerBufferExecCompleted(battler);
    }
}

static void BraveInitItemMenu(u32 battler)
{
    if (sBraveItemMenuState->state == 0)
    {
        struct Even_CreateSpriteStruct cs = {0};
        cs.sprite = sBraveItemMenuGfx;
        cs.tileTag = 0xCEC1;
        cs.palette = sBraveItemMenuPal;
        cs.palTag = 0xCEC1;
        cs.spriteSize = SPRITE_SIZE(64x64);
        cs.spriteShape = SPRITE_SHAPE(64x64);
        cs.posX = 240 - 96;
        cs.posY = 32;
        sBraveItemMenuState->spriteIds[0] = Even_CreateSprite(&cs);
        cs.sprite = &sBraveItemMenuGfx[512];
        cs.tileTag = 0xCEC2;
        cs.posX = 240 - 32;
        sBraveItemMenuState->spriteIds[1] = Even_CreateSprite(&cs);
    }
    else if (sBraveItemMenuState->state == 1)
    {
        BuildItemList(sBraveItemMenuState->itemCategory);
        PrintBraveItemList();
    }
    else
    {
        gBattlerControllerFuncs[battler] = BraveItemMenu_HandleInput;
    }
    sBraveItemMenuState->state++;
}

void BraveOpenItemMenu(u32 battler)
{
    gBattlerControllerFuncs[battler] = BraveInitItemMenu;
    sBraveItemMenuState = Alloc(sizeof(struct BraveItemMenuState));
    sBraveItemMenuState->state = 0;
    sBraveItemMenuState->itemCategory = 1;
    sBraveItemMenuState->scrollPos = 0;
}
