#include "brave_battle.h"
#include "battle.h"

EWRAM_DATA struct BraveBattleAction gBraveBattleAction[NUM_BRAVE_PRIORITIES][MAX_BRAVE_ACTIONS][MAX_BRAVE_BATTLERS];
EWRAM_DATA struct BraveBattleAction gBraveCurrentAction;

void Brave_TestActions(void)
{
    for (u32 i = 0; i < 4; i++)
    {
        gBraveBattleAction[0][i][0].action = B_ACTION_USE_MOVE;
        gBraveBattleAction[0][i][0].battler = 0;
        gBraveBattleAction[0][i][0].target = 1;
        gBraveBattleAction[0][i][0].moveSlot = i%2;
        gBraveBattleAction[0][i][0].isSlotUsed = TRUE;

        gBraveBattleAction[0][i][1].action = B_ACTION_USE_MOVE;
        gBraveBattleAction[0][i][1].battler = 1;
        gBraveBattleAction[0][i][1].target = 0;
        gBraveBattleAction[0][i][1].moveSlot = i%2;
        gBraveBattleAction[0][i][1].isSlotUsed = TRUE;

        gBraveBattleAction[0][i][2].action = B_ACTION_USE_MOVE;
        gBraveBattleAction[0][i][2].battler = 2;
        gBraveBattleAction[0][i][2].target = 3;
        gBraveBattleAction[0][i][2].moveSlot = i%2;
        gBraveBattleAction[0][i][2].isSlotUsed = TRUE;

        gBraveBattleAction[0][i][3].action = B_ACTION_USE_MOVE;
        gBraveBattleAction[0][i][3].battler = 3;
        gBraveBattleAction[0][i][3].target = 2;
        gBraveBattleAction[0][i][3].moveSlot = i%2;
        gBraveBattleAction[0][i][3].isSlotUsed = TRUE;
    }
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

void BraveSetCurrentAction(void)
{
    for (u32 priority = 0; priority < NUM_BRAVE_PRIORITIES; priority++)
    {
        for (u32 action = 0; action < MAX_BRAVE_ACTIONS; action++)
        {
            for (u32 battler = 0; battler < MAX_BRAVE_BATTLERS; battler++)
            {
                if (gBraveBattleAction[priority][action][battler].isSlotUsed)
                {
                    MgbaPrintf(MGBA_LOG_WARN, "%u %u %u", priority, action, battler);
                    gBraveCurrentAction = gBraveBattleAction[priority][action][battler];
                    gBraveBattleAction[priority][action][battler].isSlotUsed = FALSE;
                    return;
                }
            }
        }
    }
    //  If this point is reached, turn is done
    gCurrentTurnActionNumber = 4;
}
