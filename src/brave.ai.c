#include "brave_ai.h"
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

EWRAM_DATA u8 sCurrentTarget;
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
#define BOSS_BRAVE_PHASE_RECOVER                6  //Clear its own stat drops or Recovers its own HP(Porygon)
#define BOSS_BRAVE_PHASE_RANDOM                 7  //Use the best move against the target with less HP
#define BOSS_BRAVE_PHASE_ELECTRIC_TERRAIN       8
#define MAX_NUM_PHASES                          9
#define BOSS_BRAVE_PHASE_NOTHING                10 //Use the best move against the target with less HP

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

static u8 GetCurrentBravePhase_Electivire(u32 battler){
    u8 bossCurrentAP           = gBattleStruct->monStoredAP[battler];
    u16 playerMonSpecies       = gBattleMons[B_POSITION_PLAYER_LEFT].species;
    u16 playerMonSpecies2      = gBattleMons[B_POSITION_PLAYER_RIGHT].species;
    u16 bossHP                 = gBattleMons[battler].hp;
    u16 bossHPMaxHP            = gBattleMons[battler].maxHP;
    bool8 canFaintTarget1      = CanAIFaintTarget(battler, B_POSITION_PLAYER_LEFT, bossCurrentAP)  && IsBattlerAlive(B_POSITION_PLAYER_LEFT);
    bool8 canFaintTarget2      = CanAIFaintTarget(battler, B_POSITION_PLAYER_RIGHT, bossCurrentAP) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT);
    bool8 isBossAtLowHP        = bossHP < (bossHPMaxHP / 8);
    bool8 playerHasOnePokemon  = GetNumberOfAliveMonsInParty() == 1;
    bool8 Enemy1CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);  //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
    bool8 Enemy2CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT); //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
    u8 currentTurnNumber       = VarGet(VAR_BRAVE_ACTION_NUM);
    bool8 useRandomPhase       = (Random() % 2) == 0; //Chances have to be changed as needed to spice up things
    u8 bossNumber              = VarGet(VAR_BOSS_BRAVE_AI_ID);

    GenerateRandomTarget();
    
    if(gDisableStructs[battler].isFirstTurn){
        //Chain 1: used at the start of the battle to set the tone. Pre determined actions with no chance of anything else happening
        MgbaPrintf(MGBA_LOG_WARN, "Chain 1: used at the start of the battle to set the tone. Pre determined actions with no chance of anything else happening");
        return BOSS_BRAVE_PHASE_1;
    }

    //Chain 4: to be used only when the player is down to one Pokemon in KO range and elective is also low health. 
    //This one id like him to use regardless of if he has AP stored or not, it’s basically an all out suicide attack
    //to try to make the player draw. Also I’d like a message box to appear before using this chain that I can have
    //as a story point/character development. (Currently used at 1/8 of HP)
    if(isBossAtLowHP && playerHasOnePokemon){
        if(gBattleMons[B_POSITION_PLAYER_LEFT].hp != 0)
            sCurrentTarget = B_POSITION_PLAYER_LEFT;
        else
            sCurrentTarget = B_POSITION_PLAYER_RIGHT;

        //Message Box is handled somewhere else
        return BOSS_BRAVE_PHASE_4;
    }
    else if(canFaintTarget1){
        //If Electivire can KO an specific target with the current AP, tries to do it
        sCurrentTarget = B_POSITION_PLAYER_LEFT;
        return BOSS_BRAVE_PHASE_RANDOM;
    }
    else if(canFaintTarget2){
        //If Electivire can KO an specific target with the current AP, tries to do it
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;
        return BOSS_BRAVE_PHASE_RANDOM;
    }

    //Try to paralyze both targets if the player has tried to lower the enemy stats
    if((Enemy1CanBeParalyzed || Enemy2CanBeParalyzed) && GetNumberOfDroppedStats(battler) >= ANTI_STAT_DROP_STAT_NUM)
        return BOSS_BRAVE_PHASE_MISC;
    
    //Chain 2: to be used if eevee is in flareon form and can KO Eevee with the current AP
    if(playerMonSpecies == SPECIES_FLAREON && (CanAIFaintTarget(battler, B_POSITION_PLAYER_LEFT, bossCurrentAP - 1) || bossCurrentAP == MAX_BRAVE_ACTIONS)){
        //MgbaPrintf(MGBA_LOG_WARN, "Chain 2: to be used if eevee is in flareon form and target eevee specifically.");
        sCurrentTarget = B_POSITION_PLAYER_LEFT;

        return BOSS_BRAVE_PHASE_2;
    }
    else if(playerMonSpecies2 == SPECIES_FLAREON && (CanAIFaintTarget(battler, B_POSITION_PLAYER_RIGHT, bossCurrentAP - 1) || bossCurrentAP == MAX_BRAVE_ACTIONS)){
        //MgbaPrintf(MGBA_LOG_WARN, "Chain 2: to be used if eevee is in flareon form and target eevee specifically.");
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;

        return BOSS_BRAVE_PHASE_2;
    }

    //Chain 3: to be used to target Seel specifically, if Boss can KO Seel with the current AP
    if(playerMonSpecies  == SPECIES_DEWGONG && (CanAIFaintTarget(battler, B_POSITION_PLAYER_LEFT, bossCurrentAP) || bossCurrentAP == MAX_BRAVE_ACTIONS)){
        //MgbaPrintf(MGBA_LOG_WARN, "Chain 3: to be used to target Seel specifically, if Seel is within KO range");
        sCurrentTarget = B_POSITION_PLAYER_LEFT;

        return BOSS_BRAVE_PHASE_3;
    }
    else if(playerMonSpecies2 == SPECIES_DEWGONG && (CanAIFaintTarget(battler, B_POSITION_PLAYER_RIGHT, bossCurrentAP) || bossCurrentAP == MAX_BRAVE_ACTIONS)){
        //MgbaPrintf(MGBA_LOG_WARN, "Chain 3: to be used to target Seel specifically, if Seel is within KO range");
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;

        return BOSS_BRAVE_PHASE_3;
    }

    //Try to build more AP if nothing is met
    if(bossCurrentAP != MAX_BRAVE_ACTIONS){
        if(useRandomPhase && ENABLE_USE_RANDOM_PHASES_50_PERCENT_OF_THE_TIME){
            //Can randomly start attacking to spice up things - This can be disabled since the specs says "Preferably if the player is on the lower end of the health, to apply more pressure. Say if the player has <50% health he starts mixing in smaller chains 50% of the time."
            MgbaPrintf(MGBA_LOG_WARN, "Can randomly start attacking to spice up things");
            return BOSS_BRAVE_PHASE_RANDOM;
        }
        else{
            //Use default if nothing is met
            MgbaPrintf(MGBA_LOG_WARN, "Use default if nothing is met");
            return BOSS_PHASE_DEFAULT; //Default restores AP
        }
    }

    //If nothing is met but it has enough for a chain, use a Random Chain
    MgbaPrintf(MGBA_LOG_WARN, "If nothing else throw a Random Chain");
    return BOSS_BRAVE_PHASE_RANDOM;
}

static u8 GetCurrentBravePhase_Porygon(u32 battler){
    u16 bossHP                 = gBattleMons[battler].hp;
    u16 bossHPMaxHP            = gBattleMons[battler].maxHP;
    bool8 isBossAtLowHP        = bossHP < (bossHPMaxHP / 4);
    u8 bossCurrentAP           = gBattleStruct->monStoredAP[battler];

    MgbaPrintf(MGBA_LOG_WARN, "gBattleMons[battler].hp = %d", gBattleMons[battler].hp);
    MgbaPrintf(MGBA_LOG_WARN, "gBattleMons[battler].maxHP = %d", gBattleMons[battler].maxHP);
    MgbaPrintf(MGBA_LOG_WARN, "bossHP < (bossHPMaxHP / 4) = %d", bossHP < (bossHPMaxHP / 4));
    MgbaPrintf(MGBA_LOG_WARN, "gBattleStruct->monStoredAP[battler]; = %d", gBattleStruct->monStoredAP[battler]);

    if(isBossAtLowHP)
        return BOSS_BRAVE_PHASE_RECOVER;

    if(bossCurrentAP == 2)
        return BOSS_BRAVE_PHASE_RANDOM;

    MgbaPrintf(MGBA_LOG_WARN, "Use default if nothing is met");
    return BOSS_PHASE_DEFAULT; //Default restores AP
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
        u32 move = Random32() & (MAX_MON_MOVES - 1);
        BraveAddMoveToQueue(battler, move, target);
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
    u8 i;
    u8 bossNumber = VarGet(VAR_BOSS_BRAVE_AI_ID);
    u32 currAction = gBattleStruct->monBraveActions[battler];
    u8  currentAP  = gBattleStruct->monStoredAP[battler];
    GenerateRandomTarget();
    //MgbaPrintf(MGBA_LOG_WARN, "Running AddAiActionsForBattler for battler %d, currAction %d currentAP %d", battler, currAction, currentAP);

    switch(bossNumber){
        case BRAVE_BOSS_NONE:
        default:
        {
            AddRandomActionForBattler(battler);
        }
        break;
        case BRAVE_BOSS_PORYGON:
        {
            if(battler == B_POSITION_OPPONENT_LEFT){
                u8 phase      = GetCurrentBravePhase_Porygon(battler);
                u16 move      = MOVE_NONE;
                bool8 useSlot = FALSE;

                //MgbaPrintf(MGBA_LOG_WARN, "GetCurrentBravePhase phase %d, newTarget %d", BOSS_BRAVE_PHASE_RANDOM, sCurrentTarget);
                switch(phase){
                    default:
                        for(currAction = 0; currAction < currentAP; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_RANDOM:
                        for(currAction = 0; currAction < currentAP; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_RECOVER:
                        MgbaPrintf(MGBA_LOG_WARN, "Adding Recover");
                        BraveAddAnyMoveToQueue(battler, MOVE_RECOVER, sCurrentTarget);
                    break;
                    case BOSS_PHASE_DEFAULT:
                        BraveAddDefaultToQueue(battler);
                    break;
                }
            }
            else{
                AddRandomActionForBattler(battler);
            }
        }
        break;
        case BRAVE_BOSS_ELECTIVIRE:
        {
            if(battler == B_POSITION_OPPONENT_LEFT){
                u8 phase = GetCurrentBravePhase_Electivire(battler);
                u16 move = MOVE_NONE;

                //MgbaPrintf(MGBA_LOG_WARN, "GetCurrentBravePhase phase %d, newTarget %d", BOSS_BRAVE_PHASE_RANDOM, sCurrentTarget);

                switch(phase){
                    default:
                        //Chain 2: to be used if eevee is in flareon form and target eevee specifically.
                        //Chain 3: to be used to target Seel specifically, if Seel is within KO range
                        for(currAction = 0; currAction < currentAP; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_1:
                    case BOSS_BRAVE_PHASE_4:
                        //Chain 4: to be used only when the player is down to one Pokemon in KO range and elective is also low health. 
                        //This one id like him to use regardless of if he has AP stored or not, it’s basically an all out suicide attack
                        //to try to make the player draw. Also I’d like a message box to appear before using this chain that I can have
                        //as a story point/character development. (Currently used at 1/8 of HP)
                        for(currAction = 0; currAction < MAX_BRAVE_ACTIONS; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_RANDOM:
                        for(currAction = 0; currAction < currentAP; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_MISC:
                    {
                        bool8 Enemy1CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);  //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
                        bool8 Enemy2CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT); //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon

                        if(Enemy1CanBeParalyzed){
                            BraveAddAnyMoveToQueue(battler, MOVE_THUNDER_WAVE, B_POSITION_PLAYER_LEFT);
                            currAction++;
                        }

                        if(Enemy2CanBeParalyzed){
                            BraveAddAnyMoveToQueue(battler, MOVE_THUNDER_WAVE, B_POSITION_PLAYER_RIGHT);
                            currAction++;
                        }

                        if(currAction < currentAP)
                            BraveAddAnyMoveToQueue(battler, MOVE_HAZE, B_POSITION_PLAYER_RIGHT);
                    }
                    break;
                    case BOSS_PHASE_DEFAULT:
                        BraveAddDefaultToQueue(battler);
                    break;
                }
            }
            else{
                AddRandomActionForBattler(battler);
            }
        }
        break;
    }
}