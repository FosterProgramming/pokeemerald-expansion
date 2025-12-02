#include "brave_battle.h"
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

static void ChangeAPGraphics(u32 battler);

EWRAM_DATA struct BraveBattleAction gBraveBattleAction[MAX_BRAVE_BATTLERS][MAX_BRAVE_ACTIONS];
EWRAM_DATA struct BraveBattleAction gBraveCurrentAction;
EWRAM_DATA u16 gBraveStoredSpeeds[4];
EWRAM_DATA u8 sCurrentTarget;

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

#define VAR_BRAVE_ACTION_NUM VAR_VERDANTURF_TOWN_STATE
void BraveAddAnyMoveToQueue(u32 battler, u32 move, u32 target)
{
    u32 currAction = gBattleStruct->monBraveActions[battler]++;
    u8 action = VarGet(VAR_BRAVE_ACTION_NUM);

    gBraveBattleAction[battler][currAction].battler = battler;
    gBraveBattleAction[battler][currAction].item = move;
    gBraveBattleAction[battler][currAction].moveSlot = 1;
    gBraveBattleAction[battler][currAction].target = target;
    gBraveBattleAction[battler][currAction].isSlotUsed = TRUE;
    gBraveBattleAction[battler][currAction].isDefaulting = FALSE;
    gBraveBattleAction[battler][currAction].action = B_ACTION_USE_MOVE;

    action++;
    VarSet(VAR_BRAVE_ACTION_NUM, action);

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

/*
#define B_POSITION_PLAYER_LEFT        0
#define B_POSITION_OPPONENT_LEFT      1
#define B_POSITION_PLAYER_RIGHT       2
#define B_POSITION_OPPONENT_RIGHT     3
*/

#define BOSS_PHASE_DEFAULT                      0
#define BOSS_BRAVE_PHASE_1                      1
#define BOSS_BRAVE_PHASE_2                      2
#define BOSS_BRAVE_PHASE_3                      3
#define BOSS_BRAVE_PHASE_4                      4
#define BOSS_BRAVE_PHASE_MISC                   5
#define BOSS_BRAVE_PHASE_HAZE                   6 //Clear its own stat drops
#define BOSS_BRAVE_PHASE_RANDOM                 7 //Use the best move against the target with less HP
#define BOSS_BRAVE_PHASE_ELECTRIC_TERRAIN       8
#define MAX_NUM_PHASES                          9
#define ANTI_STAT_DROP_STAT_NUM                 6

static void GenerateRandomTarget(void){
    u8 newTarget = MAX_BATTLERS_COUNT;

    if(IsBattlerAlive(B_POSITION_PLAYER_LEFT) || IsBattlerAlive(B_POSITION_PLAYER_RIGHT)){
        do{
            newTarget = Random32() % MAX_BATTLERS_COUNT; //Random Target
        }
        while(GetBattlerSide(newTarget) == B_SIDE_OPPONENT || newTarget == MAX_BATTLERS_COUNT || !IsBattlerAlive(newTarget));
    }
    else{
        //To avoid infinite loops if no possible target is alive
        newTarget = B_POSITION_PLAYER_LEFT;
    }

    sCurrentTarget = newTarget;
}

static u8 GetNumberOfDroppedStats(u32 battler){
    u32 j;
    u8 ret = 0;

    if(IsBattlerAlive(battler)){
        for (j = 0; j < NUM_BATTLE_STATS; j++)
        {
            if (gBattleMons[battler].statStages[j] < DEFAULT_STAT_STAGE)
                ret++; // returns TRUE if any stat was reset
        }
    }

    return ret;
}

static u8 GetNumberOfAliveMonsInParty(void){
    u8 i;
    u8 ret = 0;
    
    for(i = 0; i < PARTY_SIZE; i++){
        if(GetMonData(&gPlayerParty[i], MON_DATA_SPECIES) != SPECIES_NONE && GetMonData(&gPlayerParty[i], MON_DATA_HP) != 0)
            ret++;
    }
    
    return ret;
}

#define ENABLE_USE_RANDOM_PHASES_50_PERCENT_OF_THE_TIME FALSE

static u8 GetCurrentBravePhase(u32 battler){
    u16 playerMonSpecies       = gBattleMons[B_POSITION_PLAYER_LEFT].species;
    u16 playerMonSpecies2      = gBattleMons[B_POSITION_PLAYER_RIGHT].species;
    u16 bossHP                 = gBattleMons[battler].hp;
    u16 bossHPMaxHP            = gBattleMons[battler].maxHP;
    bool8 canFaintTarget1      = CanAIFaintTarget(battler, B_POSITION_PLAYER_LEFT, 0)  && IsBattlerAlive(B_POSITION_PLAYER_LEFT);
    bool8 canFaintTarget2      = CanAIFaintTarget(battler, B_POSITION_PLAYER_RIGHT, 0) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT);
    bool8 isBossAtLowHP        = bossHP < (bossHPMaxHP / 8);
    bool8 playerHasOnePokemon  = GetNumberOfAliveMonsInParty() == 1;
    u8 bossCurrentAP           = gBattleStruct->monStoredAP[battler];
    bool8 Enemy1CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT); //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
    bool8 Enemy2CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT); //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
    u8 currentTurnNumber       = VarGet(VAR_BRAVE_ACTION_NUM);
    bool8 useRandomPhase       = (Random() % 2) == 0; //Chances have to be changed as needed to spice up things
    bool8 actionNumber         = VarGet(VAR_BRAVE_ACTION_NUM) % MAX_BRAVE_ACTIONS; //Used

    GenerateRandomTarget();

    //Chain 4: to be used only when the player is down to one Pokemon in KO range and elective is also low health. 
    //This one id like him to use regardless of if he has AP stored or not, it’s basically an all out suicide attack
    //to try to make the player draw. Also I’d like a message box to appear before using this chain that I can have
    //as a story point/character development. (Currently used at 1/8 of HP)
    if(isBossAtLowHP && playerHasOnePokemon){
        if(gBattleMons[B_POSITION_PLAYER_LEFT].maxHP != 0)
            sCurrentTarget = B_POSITION_PLAYER_LEFT;
        else
            sCurrentTarget = B_POSITION_PLAYER_RIGHT;

        //Message Box is handled somewhere else
        return BOSS_BRAVE_PHASE_4;
    }
    else if(gBattleMons[sCurrentTarget].hp < (gBattleMons[sCurrentTarget].maxHP / 2) && useRandomPhase){
        //If the player is on the lower end of the health, to apply more pressure. Say if the player has <50% health he starts mixing in smaller chains 50% of the time.
        return BOSS_BRAVE_PHASE_RANDOM;
    }
    else if(gBattleMons[BATTLE_PARTNER(sCurrentTarget)].hp < (gBattleMons[BATTLE_PARTNER(sCurrentTarget)].maxHP / 2) && useRandomPhase){
        //If the player is on the lower end of the health, to apply more pressure. Say if the player has <50% health he starts mixing in smaller chains 50% of the time.
        sCurrentTarget = BATTLE_PARTNER(sCurrentTarget);
        return BOSS_BRAVE_PHASE_RANDOM;
    }

    //Does not have enough AP for a Chain
    if(bossCurrentAP != MAX_BRAVE_ACTIONS){
        if(canFaintTarget1){
            //Can faint the target to the left
            sCurrentTarget = B_POSITION_PLAYER_LEFT;
            MgbaPrintf(MGBA_LOG_WARN, "Can faint the target to the left");
            return BOSS_BRAVE_PHASE_RANDOM;
        }
        else if(canFaintTarget2){
            //Can faint the target to the right
            sCurrentTarget = B_POSITION_PLAYER_RIGHT;
            MgbaPrintf(MGBA_LOG_WARN, "Can faint the target to the right");
            return BOSS_BRAVE_PHASE_RANDOM;
        }
        else if((Enemy1CanBeParalyzed || Enemy2CanBeParalyzed) && GetNumberOfDroppedStats(battler) >= ANTI_STAT_DROP_STAT_NUM)
        {
            //Try to paralyze both targets if the player has tried to lower the enemy stats
            switch(actionNumber){
                case 0:
                    if(Enemy1CanBeParalyzed){
                        sCurrentTarget = B_POSITION_PLAYER_LEFT;
                        return BOSS_BRAVE_PHASE_MISC;
                    }
                    else if(Enemy2CanBeParalyzed){
                        sCurrentTarget = B_POSITION_PLAYER_RIGHT;
                        return BOSS_BRAVE_PHASE_MISC;
                    }
                break;
                case 1:
                    if(Enemy1CanBeParalyzed && Enemy2CanBeParalyzed){
                        //Means it paralyzed the enemy 1 in the last action
                        sCurrentTarget = B_POSITION_PLAYER_RIGHT;
                        return BOSS_BRAVE_PHASE_MISC;
                    }
                    else{
                        //Means it only paralyzed the enemy 2 or that it paralyzed the enemy 1 but enemy 2 cant be paralyzed, either way the rest of the actions will be charge AP
                        return BOSS_BRAVE_PHASE_HAZE; //Default restores AP
                    }
                break;
                case 2:
                    if(Enemy1CanBeParalyzed && Enemy2CanBeParalyzed){
                        //Means it paralyzed both targets
                        return BOSS_BRAVE_PHASE_HAZE;
                    }
                    else{
                        //Means it only paralyzed one target so it already used haze
                        return BOSS_PHASE_DEFAULT; //Default restores AP
                    }
                break;
            }

            //Use default if nothing is met
            MgbaPrintf(MGBA_LOG_WARN, "Use default if nothing is met");
            return BOSS_PHASE_DEFAULT; //Default restores AP
        }
        else{
            if(useRandomPhase && ENABLE_USE_RANDOM_PHASES_50_PERCENT_OF_THE_TIME){
                //Can randomly start attacking to spice up things - This can be disabled since the specs says "Preferably if the player is on the lower end of the health, to apply more pressure. Say if the player has <50% health he starts mixing in smaller chains 50% of the time."
                MgbaPrintf(MGBA_LOG_WARN, "Can randomly start attacking to spice up things");
                return BOSS_BRAVE_PHASE_RANDOM;
            }

            //Use default if nothing is met
            MgbaPrintf(MGBA_LOG_WARN, "Use default if nothing is met");
            return BOSS_PHASE_DEFAULT; //Default restores AP
        }
    }

    //Chain 3: to be used to target Seel specifically, if Seel is within KO range
    if((playerMonSpecies  == SPECIES_DEWGONG && CanAIFaintTarget(battler, B_POSITION_PLAYER_LEFT, MAX_BRAVE_ACTIONS))){
        MgbaPrintf(MGBA_LOG_WARN, "Chain 3: to be used to target Seel specifically, if Seel is within KO range");
        sCurrentTarget = B_POSITION_PLAYER_LEFT;

        return BOSS_BRAVE_PHASE_3;
    }
    else if(playerMonSpecies2 == SPECIES_DEWGONG && CanAIFaintTarget(battler, B_POSITION_PLAYER_RIGHT, MAX_BRAVE_ACTIONS)){
        MgbaPrintf(MGBA_LOG_WARN, "Chain 3: to be used to target Seel specifically, if Seel is within KO range");
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;

        return BOSS_BRAVE_PHASE_3;
    }

    //Chain 2: to be used if eevee is in flareon form and target eevee specifically.
    if(playerMonSpecies == SPECIES_FLAREON){
        MgbaPrintf(MGBA_LOG_WARN, "Chain 2: to be used if eevee is in flareon form and target eevee specifically.");
        sCurrentTarget = B_POSITION_PLAYER_LEFT;

        return BOSS_BRAVE_PHASE_2;
    }
    else if(playerMonSpecies2 == SPECIES_FLAREON){
        MgbaPrintf(MGBA_LOG_WARN, "Chain 2: to be used if eevee is in flareon form and target eevee specifically.");
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;

        return BOSS_BRAVE_PHASE_2;
    }

    if(currentTurnNumber < MAX_BRAVE_ACTIONS){
        //Chain 1: used at the start of the battle to set the tone. Pre determined actions with no chance of anything else happening
        MgbaPrintf(MGBA_LOG_WARN, "Chain 1: used at the start of the battle to set the tone. Pre determined actions with no chance of anything else happening");
        return BOSS_BRAVE_PHASE_1;
    }

    //If nothing is met but it has enough for a chain, use a Random Chain
    MgbaPrintf(MGBA_LOG_WARN, "If nothing else throw a Random Chain");
    return BOSS_BRAVE_PHASE_RANDOM;
}

static u8 ChooseBestMoveAgainstTargetWithLowestHP(u8 battler){
    u8 i;
    u16 currentScore = 0;
    u16 maxScore = 0;
    u8  maxScoreMoveId = 0;

    if(CanAIFaintTarget(battler, B_POSITION_PLAYER_LEFT, 0))
        sCurrentTarget = B_POSITION_PLAYER_LEFT;
    else if(CanAIFaintTarget(battler, B_POSITION_PLAYER_RIGHT, 0))
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;

    for(i = 0; i < MAX_MON_MOVES; i++){
        currentScore = gBattleStruct->aiFinalScore[battler][sCurrentTarget][i];
        if(currentScore > maxScore){
            maxScore       = currentScore;
            maxScoreMoveId = i;
        }
    }

    return maxScoreMoveId;
}

static void AddRandomActionForBattler(u32 battler){
    u32 rnd = Random32() & 1;
    if (rnd)
        BraveAddDefaultToQueue(battler);
    else
    {
        u32 target = Random32() & 0x2;
        BraveAddMoveToQueue(battler, 0, target);
    }
}

static void AddOptimalActionForBattler(u32 battler){
    u32 rnd = Random32() & 1;
    if (rnd)
        BraveAddDefaultToQueue(battler);
    else
    {
        u32 target = MAX_BATTLERS_COUNT;
        u8 moveId = ChooseBestMoveAgainstTargetWithLowestHP(battler);
        BraveAddMoveToQueue(battler, moveId, target);
    }
}

static const u16 sBraveBossesActions[NUMBER_OF_BOSSES][BOSS_BRAVE_PHASE_4 + 1][MAX_BRAVE_ACTIONS] = {
    [BRAVE_BOSS_ELECTIVIRE] = {
        [BOSS_PHASE_DEFAULT]      = { MOVE_NONE,          MOVE_NONE,          MOVE_NONE,          MOVE_NONE},
        [BOSS_BRAVE_PHASE_1]      = { MOVE_CHARGE,        MOVE_THUNDER_PUNCH, MOVE_CHARGE,        MOVE_THUNDER_PUNCH},
        [BOSS_BRAVE_PHASE_2]      = { MOVE_THUNDER_WAVE,  MOVE_BULLDOZE,      MOVE_BULLDOZE,      MOVE_BULLDOZE},
        [BOSS_BRAVE_PHASE_3]      = { MOVE_THUNDER_PUNCH, MOVE_THUNDER_PUNCH, MOVE_THUNDER_PUNCH, MOVE_THUNDER_PUNCH},
        [BOSS_BRAVE_PHASE_4]      = { MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH,    MOVE_BULLDOZE,      MOVE_SELFDESTRUCT},
    }
};

void AddAiActionsForBattler(u32 battler)
{
    // Placeholder
    u8 bossNumber = VarGet(VAR_BOSS_BRAVE_AI_ID);
    GenerateRandomTarget();

    switch(bossNumber){
        case BRAVE_BOSS_NONE:
        default:
        {
            u32 rnd = Random32() & 1;
            if (rnd)
                AddRandomActionForBattler(battler);
            else
                AddOptimalActionForBattler(battler);
        }
        break;
        case BRAVE_BOSS_ELECTIVIRE:
        {
            if(battler == B_POSITION_OPPONENT_LEFT){
                u8 actionNum  = (VarGet(VAR_BRAVE_ACTION_NUM) % MAX_BRAVE_ACTIONS);
                u8 phase      = GetCurrentBravePhase(battler);
                u16 move      = MOVE_NONE;
                bool8 useSlot = FALSE;

                MgbaPrintf(MGBA_LOG_WARN, "GetCurrentBravePhase phase %d, newTarget %d", BOSS_BRAVE_PHASE_RANDOM, sCurrentTarget);

                if(phase != BOSS_PHASE_DEFAULT){
                    switch(phase){
                        default:
                            move = sBraveBossesActions[bossNumber][phase][actionNum];
                        break;
                        //Chain 2: to be used if eevee is in flareon form and target eevee specifically.
                        case BOSS_BRAVE_PHASE_2:
                            move   = sBraveBossesActions[bossNumber][phase][actionNum];
                        break;
                        //Chain 3: to be used to target Seel specifically, if Seel is within KO range
                        case BOSS_BRAVE_PHASE_3:
                            move   = sBraveBossesActions[bossNumber][phase][actionNum];
                        break;
                        case BOSS_BRAVE_PHASE_RANDOM:
                        {
                            move    = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            useSlot = TRUE;
                        }
                        break;
                        case BOSS_BRAVE_PHASE_MISC:
                            move = MOVE_THUNDER_WAVE;
                        break;
                        case BOSS_BRAVE_PHASE_HAZE:
                            move = MOVE_HAZE;
                        break;
                    }

                    if(sCurrentTarget == MAX_BATTLERS_COUNT)
                        GenerateRandomTarget();
                    
                    if(useSlot)
                        BraveAddMoveToQueue(battler, move, sCurrentTarget);
                    else
                        BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);

                    //MgbaPrintf(MGBA_LOG_WARN, "AddAiActionsForBattler battler %d move %d target %d phase %d", battler, move, target, phase);
                }
                else{
                    BraveAddDefaultToQueue(battler);
                }
            }
            else{
                AddRandomActionForBattler(battler);
            }
        }
        break;
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

void BraveModAP(u32 battler, s32 change)
{
    gBattleStruct->monStoredAP[battler] += change;
    if (gBattleStruct->monStoredAP[battler] > 4)
        gBattleStruct->monStoredAP[battler] = 4;
    else if (gBattleStruct->monStoredAP[battler] < -4)
        gBattleStruct->monStoredAP[battler] = -4;
    ChangeAPGraphics(battler);
}
