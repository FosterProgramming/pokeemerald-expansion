#include "brave_battle.h"
#include "battle.h"

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
    for (u32 battler = 0; battler < numBattlers; battler++)
    {
        battlerSpeeds[battler] = GetBattlerTotalSpeedStat(battler);
        for (u32 actionIndex = 0; actionIndex < MAX_BRAVE_ACTIONS; actionIndex++)
        {
            if (gBraveBattleAction[battler][actionIndex].isSlotUsed)
            {
                u32 move = gBattleMons[battler].moves[gBraveBattleAction[battler][actionIndex].moveSlot];
                battlerSpeeds[battler] = uq4_12_multiply_by_int_half_down(GetBravePrioMod(move, battler), battlerSpeeds[battler]);
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
        MgbaPrintf(MGBA_LOG_WARN, "To Default: %u", battlerToDefault);
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
        //BravePrintActions();
        //MgbaPrintf(MGBA_LOG_WARN, "%u %u %u %u", gBraveBattleAction[0][0].isSlotUsed, gBraveBattleAction[0][1].isSlotUsed, gBraveBattleAction[0][2].isSlotUsed, gBraveBattleAction[0][3].isSlotUsed);
        //MgbaPrintf(MGBA_LOG_WARN, "%u %u %u %u", gBraveBattleAction[1][0].isSlotUsed, gBraveBattleAction[1][1].isSlotUsed, gBraveBattleAction[1][2].isSlotUsed, gBraveBattleAction[1][3].isSlotUsed);
        //MgbaPrintf(MGBA_LOG_WARN, "%u %u %u %u", gBraveBattleAction[2][0].isSlotUsed, gBraveBattleAction[2][1].isSlotUsed, gBraveBattleAction[2][2].isSlotUsed, gBraveBattleAction[2][3].isSlotUsed);
        //MgbaPrintf(MGBA_LOG_WARN, "%u %u %u %u", battlerWantsToMove[0], battlerWantsToMove[1], battlerWantsToMove[2],battlerWantsToMove[3]);
        //MgbaPrintf(MGBA_LOG_WARN, "%u", battlerToMove);
        MgbaPrintf(MGBA_LOG_WARN, "Battler, target, move: %u %u %u", gBraveCurrentAction.battler, gBraveCurrentAction.target, gBraveCurrentAction.moveSlot);
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
    //MgbaPrintf(MGBA_LOG_WARN, "Done");
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
}

void BraveAddItemToQueue(u32 battler, u32 item, u32 target)
{
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
    MgbaPrintf(MGBA_LOG_WARN, "Set AP to 1 for all battlers");
    for (u32 i = 0; i < 4; i++)
        gBattleStruct->monStoredAP[i] = 1;

    //  Set up the gimmick indicators
}

void BraveIncrementAP(void)
{
    MgbaPrintf(MGBA_LOG_WARN, "Increment AP for all pokemon");
    for (u32 i = 0; i < 4; i++)
    {
        if (gBattleStruct->monStoredAP[i] < 4)
            gBattleStruct->monStoredAP[i]++;
    }
    // Update the gimmick indicators
}

void BraveConsumeAP(u32 battler, u32 move)
{
    if (move != MOVE_DEFAULT)
        gBattleStruct->monStoredAP[battler] -= 1 + gMovesInfo[move].extraApCost;
}
