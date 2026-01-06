#include "brave_ai.h"
#include "brave_battle.h"
#include "battle.h"
#include "battle_ai_util.h"
#include "battle_ai_main.h"
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
#include "constants/abilities.h"
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
#define ANTI_STAT_BOOST_STAT_NUM                3
#define TOTAL_DEFAULT_STAT_STAGES_NUM           48

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

static u8 GetStatStageTotalBoss(u32 battler){
    u32 j;
    u32 statStageTotal = 0;
    
    if(IsBattlerAlive(battler)){
        for (j = 0; j < NUM_BATTLE_STATS; j++)
        {
            statStageTotal += gBattleMons[battler].statStages[j];
        }
    }

    return statStageTotal;
}

static u8 GetStatStageTotalParty(u32 battler){
    u32 j;
    u32 statStageTotal = 0;
    
    if(IsBattlerAlive(B_POSITION_PLAYER_LEFT)){
        for (j = 0; j < NUM_BATTLE_STATS; j++)
        {
            statStageTotal += gBattleMons[B_POSITION_PLAYER_LEFT].statStages[j];
        }
    }
    if(IsBattlerAlive(B_POSITION_PLAYER_RIGHT)){
        for (j = 0; j < NUM_BATTLE_STATS; j++)
        {
            statStageTotal += gBattleMons[B_POSITION_PLAYER_RIGHT].statStages[j];
        }
    }
    return statStageTotal;
}



static u8 GetNumberOfDroppedStats(u32 battler){
    u32 j;
    u8 ret = 0;

    if(IsBattlerAlive(battler)){
        for (j = 0; j < NUM_BATTLE_STATS; j++)
        {
            if (gBattleMons[battler].statStages[j] < DEFAULT_STAT_STAGE)
                ret++;
        }
    }

    return ret;
}

static u8 GetNumberOfBoostedStats(u32 battler){
    u32 j;
    u8 ret = 0;

    if(IsBattlerAlive(battler)){
        for (j = 0; j < NUM_BATTLE_STATS; j++)
        {
            if (gBattleMons[battler].statStages[j] > DEFAULT_STAT_STAGE)
                ret++;
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

static u16 GetPlayerSpeciesMon(u32 battler){
    u16 species = gBattleMons[battler].species;
    switch(species){
        case SPECIES_EEVEE:
        case SPECIES_JOLTEON:
        case SPECIES_FLAREON:
        case SPECIES_VAPOREON:
            return SPECIES_EEVEE;
        break;
    }

    return species;
}

static u16 sBattlerHasMove(u32 battler, u16 move){
    //Mostly to check player moves
    u8 i;

    for(i = 0; i < MAX_MON_MOVES; i++){
        if(gBattleMons[battler].moves[i] == move);
            return TRUE;
    }

    return FALSE;
}

static u16 sBattlerHasMoveType(u32 battler, u8 moveType){
    //Mostly to check player moves
    u8 i, type;

    for(i = 0; i < MAX_MON_MOVES; i++){
        type = gMovesInfo[gBattleMons[battler].moves[i]].type;
        if(type == moveType);
            return TRUE;
    }

    return FALSE;
}

const u16 sElectivireMiscSupportMoves[] =
{
    MOVE_BULK_UP,
    MOVE_LEER,
    MOVE_SCREECH,
    MOVE_SWORDS_DANCE,
    0xFFFF
};

static u8 GetCurrentBravePhase_Electivire(u32 battler){
    s8 bossCurrentAP           = gBattleStruct->monStoredAP[battler];
    s8 playerMonCurrentAP      = gBattleStruct->monStoredAP[B_POSITION_PLAYER_LEFT];
    s8 playerMonCurrentAP2     = gBattleStruct->monStoredAP[B_POSITION_PLAYER_RIGHT];
    u16 playerMonSpecies       = gBattleMons[B_POSITION_PLAYER_LEFT].species;
    u16 playerMonSpecies2      = gBattleMons[B_POSITION_PLAYER_RIGHT].species;
    u16 bossHP                 = gBattleMons[battler].hp;
    u16 bossHPMaxHP            = gBattleMons[battler].maxHP;
    bool8 canFaintTarget1      = CanAIFaintTarget(battler, B_POSITION_PLAYER_LEFT,  bossCurrentAP) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);
    bool8 canFaintTarget2      = CanAIFaintTarget(battler, B_POSITION_PLAYER_RIGHT, bossCurrentAP) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT);
    bool8 isBossAtLowHP        = bossHP < (bossHPMaxHP / 8);
    bool8 playerHasOnePokemon  = GetNumberOfAliveMonsInParty() == 1;
    bool8 Enemy1CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);  //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
    bool8 Enemy2CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT); //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
    bool8 useRandomPhase       = (Random() % 2) == 0; //Chances have to be changed as needed to spice up things
    u8 bossNumber              = VarGet(VAR_BOSS_BRAVE_AI_ID);
    u16 statTotalDifference    = GetStatStageTotalParty(battler) - GetStatStageTotalBoss(battler) - TOTAL_DEFAULT_STAT_STAGES_NUM;
    u16 bossAtkStage           = gBattleMons[battler].statStages[STAT_ATK];

    GenerateRandomTarget();

    //If the boss does not have any AP return nothing
    if(gBattleStruct->monStoredAP[battler] <= 0)
        return BOSS_BRAVE_PHASE_NOTHING;
    
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
        sCurrentTarget = B_POSITION_PLAYER_LEFT;
        //Chain 2: to be used if eevee is in flareon form and can KO Eevee with the current AP
        if(playerMonSpecies == SPECIES_FLAREON)
            return BOSS_BRAVE_PHASE_2;
        //Chain 3: to be used to target Seel specifically, if Boss can KO Seel with the current AP
        else if(playerMonSpecies == SPECIES_DEWGONG)
            return BOSS_BRAVE_PHASE_3;
        else
        //If Electivire can KO an specific target with the current AP, tries to do it
            return BOSS_BRAVE_PHASE_RANDOM;
    }
    else if(canFaintTarget2){
        //Chain 2: to be used if eevee is in flareon form and can KO Eevee with the current AP
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;
        if(playerMonSpecies2 == SPECIES_FLAREON)
            return BOSS_BRAVE_PHASE_2;
        //Chain 3: to be used to target Seel specifically, if Boss can KO Seel with the current AP
        else if(playerMonSpecies2 == SPECIES_DEWGONG)
            return BOSS_BRAVE_PHASE_3;
        else
        //If Electivire can KO an specific target with the current AP, tries to do it
        return BOSS_BRAVE_PHASE_RANDOM;
    }
    //Try to paralyze both targets if the player has tried to lower the enemy stats, also try to bulk up if attack is lower than 6
    if(((Enemy1CanBeParalyzed || Enemy2CanBeParalyzed) && GetNumberOfDroppedStats(battler) >= ANTI_STAT_DROP_STAT_NUM)
    || statTotalDifference >= TOTAL_DEFAULT_STAT_STAGES_NUM
    || bossAtkStage < DEFAULT_STAT_STAGE){
        return BOSS_BRAVE_PHASE_MISC;
    }
    //Makes Sure Electivire will not default if either opponent is in a deficit.
    if(playerMonCurrentAP <= 0){
        sCurrentTarget = B_POSITION_PLAYER_LEFT;
        return BOSS_BRAVE_PHASE_RANDOM;
    }
    else if (playerMonCurrentAP2 <= 0)
    {
        sCurrentTarget = B_POSITION_PLAYER_RIGHT;
        return BOSS_BRAVE_PHASE_RANDOM;
    }
    //Expect big attack. Default.
    if((playerMonCurrentAP == MAX_BRAVE_ACTIONS && playerMonCurrentAP2 == MAX_BRAVE_ACTIONS)
        || (isBossAtLowHP && playerMonCurrentAP + playerMonCurrentAP2 >= MAX_BRAVE_ACTIONS )){
        return BOSS_PHASE_DEFAULT;
    }
    
    //Try to build more AP if nothing is met
    if(bossCurrentAP != MAX_BRAVE_ACTIONS){
        if(useRandomPhase && ENABLE_USE_RANDOM_PHASES_50_PERCENT_OF_THE_TIME){
            //Can randomly start attacking to spice up things - This can be disabled since the specs says "Preferably if the player is on the lower end of the health, to apply more pressure. Say if the player has <50% health he starts mixing in smaller chains 50% of the time."
            //MgbaPrintf(MGBA_LOG_WARN, "Can randomly start attacking to spice up things");
            return BOSS_BRAVE_PHASE_RANDOM;
        }
        else{
            //Use default if nothing is met
            //MgbaPrintf(MGBA_LOG_WARN, "Use default if nothing is met");
            return BOSS_PHASE_DEFAULT; //Default restores AP
        }
    }

    //If nothing is met but it has enough for a chain, use a Random Chain
    //MgbaPrintf(MGBA_LOG_WARN, "If nothing else throw a Random Chain");
    return BOSS_BRAVE_PHASE_RANDOM;
}

static u8 GetCurrentBravePhase_Porygon(u32 battler){
    u16 bossHP                 = gBattleMons[battler].hp;
    u16 bossHPMaxHP            = gBattleMons[battler].maxHP;
    bool8 isBossAtLowHP        = bossHP < (bossHPMaxHP / 4);
    s8 bossCurrentAP           = gBattleStruct->monStoredAP[battler];

    /*MgbaPrintf(MGBA_LOG_WARN, "gBattleMons[battler].hp = %d", gBattleMons[battler].hp);
    MgbaPrintf(MGBA_LOG_WARN, "gBattleMons[battler].maxHP = %d", gBattleMons[battler].maxHP);
    MgbaPrintf(MGBA_LOG_WARN, "bossHP < (bossHPMaxHP / 4) = %d", bossHP < (bossHPMaxHP / 4));
    MgbaPrintf(MGBA_LOG_WARN, "gBattleStruct->monStoredAP[battler]; = %d", gBattleStruct->monStoredAP[battler]);*/

    if(isBossAtLowHP)
        return BOSS_BRAVE_PHASE_RECOVER;

    if(bossCurrentAP >= 2){
        u8 eeveeType, conversionTarget;

        if(gBattleMons[B_POSITION_PLAYER_LEFT].species == SPECIES_DEWGONG)
            conversionTarget = B_POSITION_PLAYER_RIGHT;
        else
            conversionTarget = B_POSITION_PLAYER_LEFT;

        eeveeType = gBattleMons[conversionTarget].types[0];

        if(IS_BATTLER_OF_TYPE(battler, eeveeType)) 
            return BOSS_BRAVE_PHASE_RANDOM; 
        else{
            sCurrentTarget = conversionTarget;
            return BOSS_BRAVE_PHASE_MISC;
        }
    }

    MgbaPrintf(MGBA_LOG_WARN, "Use default if nothing is met");
    return BOSS_PHASE_DEFAULT; //Default restores AP
}

static u8 GetCurrentBravePhase_Magmortar(u32 battler){
    bool8 Enemy1CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);  //Checks if it can be burned, this includes a check to see if the target is Flareon
    bool8 Enemy2CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT); //Checks if it can be burned, this includes a check to see if the target is Flareon
    u16 bossHP              = gBattleMons[battler].hp;
    u16 bossHPMaxHP         = gBattleMons[battler].maxHP;
    bool8 isBossAtLowHP     = bossHP < ((bossHPMaxHP * 100 / 40)); //Below 40%
    s8 bossCurrentAP        = gBattleStruct->monStoredAP[battler];
    bool8 Enemy1HasSEMove   = sBattlerHasMoveType(B_POSITION_PLAYER_LEFT, TYPE_WATER)  || sBattlerHasMoveType(B_POSITION_PLAYER_LEFT, TYPE_ICE);
    bool8 Enemy2HasSEMove   = sBattlerHasMoveType(B_POSITION_PLAYER_RIGHT, TYPE_WATER) || sBattlerHasMoveType(B_POSITION_PLAYER_RIGHT, TYPE_ICE);
    s8 Enemy1CurrentAP      = gBattleStruct->monStoredAP[B_POSITION_PLAYER_LEFT];
    s8 Enemy2CurrentAP      = gBattleStruct->monStoredAP[B_POSITION_PLAYER_RIGHT];

    if(gDisableStructs[battler].isFirstTurn){
        //Chain 1: used at the start of the battle to set the tone. Pre determined actions with no chance of anything else happening
        return BOSS_BRAVE_PHASE_4;
    }
    
    //Burn new target
    if((Enemy1CanBeBurned && gDisableStructs[B_POSITION_PLAYER_LEFT].isFirstTurn) || (Enemy2CanBeBurned && gDisableStructs[B_POSITION_PLAYER_RIGHT].isFirstTurn)){
        MgbaPrintf(MGBA_LOG_WARN, "Burn new target");
        return BOSS_BRAVE_PHASE_1;
    }

    if(Enemy1CanBeBurned && Enemy2CanBeBurned && 
    ((GetPlayerSpeciesMon(B_POSITION_PLAYER_LEFT)  == SPECIES_EEVEE && sBattlerHasMove(B_POSITION_PLAYER_LEFT, MOVE_HEAL_BELL)) || 
     (GetPlayerSpeciesMon(B_POSITION_PLAYER_RIGHT) == SPECIES_EEVEE && sBattlerHasMove(B_POSITION_PLAYER_RIGHT, MOVE_HEAL_BELL)))){
        MgbaPrintf(MGBA_LOG_WARN, "Check Burn Cleanse Punisher");
        return BOSS_BRAVE_PHASE_3;
    }

    if(GetNumberOfBoostedStats(B_POSITION_PLAYER_LEFT) >= ANTI_STAT_BOOST_STAT_NUM || GetNumberOfBoostedStats(B_POSITION_PLAYER_RIGHT) >= ANTI_STAT_BOOST_STAT_NUM){
        MgbaPrintf(MGBA_LOG_WARN, "Clear Smog");
        return BOSS_BRAVE_PHASE_MISC;
    }

    if(isBossAtLowHP && ((Enemy1HasSEMove && Enemy1CurrentAP >= 2) || (Enemy2HasSEMove && Enemy2CurrentAP >= 2)) && bossCurrentAP < 0){
        //Needs to have negative AP
        //Enemy should have more than 2 AP and an SE Move in that specific party member
        //Should be at low HP
        MgbaPrintf(MGBA_LOG_WARN, "Check Default Conditions");
        return BOSS_PHASE_DEFAULT;  //Default restores AP
    }

    if(Enemy1CanBeBurned || Enemy2CanBeBurned){
        MgbaPrintf(MGBA_LOG_WARN, "Ensure Burn Coverage");
        return BOSS_BRAVE_PHASE_1;
    }

    if(AI_IsFaster(battler, B_POSITION_PLAYER_LEFT, MOVE_POUND) || AI_IsFaster(battler, B_POSITION_PLAYER_RIGHT, MOVE_POUND)){
        MgbaPrintf(MGBA_LOG_WARN, "Normal Aggression");
        return BOSS_BRAVE_PHASE_2;
    }

    return BOSS_BRAVE_PHASE_RANDOM; //Fallback
}

#define USE_DAMAGE_FOR_OPTIMAL_CALCULATION TRUE //Use damage instead of score

bool8 IsMoveBeingRedirected(u8 battlerAtk, u16 move, u8 battlerDef){
    u32 moveType = GetMoveType(move);

    switch(moveType){
        case TYPE_ELECTRIC:
            if (IsAbilityOnSide(battlerDef, ABILITY_LIGHTNING_ROD))
                return TRUE;
        break;
        case TYPE_WATER:
            if (IsAbilityOnSide(battlerDef, ABILITY_STORM_DRAIN))
                return TRUE;
        break;
    }

    /* //Status Moves not yet implemented
    if (AISearchTraits(AIBattlerTraits, ABILITY_SWEET_VEIL)  && (moveEffect == EFFECT_SLEEP || moveEffect == EFFECT_YAWN))
        return TRUE;

    if(AISearchTraits(AIBattlerTraits, ABILITY_MAGIC_BOUNCE) && (MoveCanBeBouncedBack(move) && moveTarget & (MOVE_TARGET_BOTH | MOVE_TARGET_FOES_AND_ALLY | MOVE_TARGET_OPPONENTS_FIELD)))
        return TRUE;

    if(AISearchTraits(AIBattlerTraits, ABILITY_FLOWER_VEIL) && ((IS_BATTLER_OF_TYPE(battlerDef, TYPE_GRASS)) && (IsNonVolatileStatusMoveEffect(moveEffect) || IsStatLoweringEffect(moveEffect))))
        return TRUE;

    if(AISearchTraits(AIBattlerTraits, ABILITY_AROMA_VEIL) && (IsAromaVeilProtectedEffect(moveEffect)))
        return TRUE;*/


    return FALSE;
}

static u8 ChooseBestMoveAgainstTargetWithLowestHP(u8 battler){
    u8 i, k, target;
    u16 globalMaxScore, globalBestMoveId, maxScore, maxScoreMoveId;

    maxScoreMoveId   = 0;
    globalBestMoveId = 0;
    globalMaxScore   = 0;

    for(k = 0; k < MAX_BATTLERS_COUNT; k++){
        target = k;
        maxScore = 0;

        if(IsBattlerAlive(target) && GetBattlerSide(target) != GetBattlerSide(battler)){
            u16 currentHP = gBattleMons[target].hp;

            for(i = 0; i < MAX_MON_MOVES; i++){
                u16 score = gBattleStruct->aiFinalScore[battler][target][i];
                u16 damage = AI_DATA->simulatedDmg[battler][target][i].expected;
                bool8 isRedirected = IsMoveBeingRedirected(battler, gBattleMons[battler].moves[i], target);

                //If can defeat target try to do it
                if(damage > currentHP){
                    sCurrentTarget = target;
                    return i;
                }

                //Calculate Best Score or Best Damage
                if(USE_DAMAGE_FOR_OPTIMAL_CALCULATION){
                    if(damage > maxScore && !isRedirected){
                        maxScore       = damage;
                        maxScoreMoveId = i;
                    }
                }
                else{
                    if(score > maxScore && !isRedirected){
                        maxScore       = score;
                        maxScoreMoveId = i;
                    }
                }
            }
        }

        if(globalMaxScore < maxScore){
            globalMaxScore   = maxScore;
            globalBestMoveId = maxScoreMoveId;
            sCurrentTarget   = target;
        }
    }

    //MgbaPrintf(MGBA_LOG_WARN, "Choose move = %d currentScore = %d, target = %d", globalMaxScore, globalBestMoveId, target);
    return globalBestMoveId;
}

static void AddRandomActionForBattler(u32 battler)
{
    u32 rnd = Random32() & 1;
    if (rnd && gBattleStruct->monStoredAP[battler] != MAX_BRAVE_ACTIONS)
    {
        BraveAddDefaultToQueue(battler);
    }
    else
    {
        for (u32 i = 0; i < gBattleStruct->monStoredAP[battler]; i++)
        {
            u32 target = Random32() & 0x2;
            u32 moveIndex = RandomUniform(RNG_NONE, 0, 3);
            u32 move = gBattleMons[battler].moves[moveIndex];
            while (move == MOVE_NONE)
            {
                moveIndex = RandomUniform(RNG_NONE, 0, 3);
                move = gBattleMons[battler].moves[moveIndex];
            }
            BraveAddMoveToQueue(battler, moveIndex, target);
        }
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

bool8 CanBattlerBeTaunted(u32 battler){
    if (IsBattlerAlive(battler)
    && !IsAbilityOnSide(battler, ABILITY_AROMA_VEIL)
    && !BattlerHasTrait(battler, ABILITY_OBLIVIOUS)
    && gDisableStructs[battler].tauntTimer == 0)
        return TRUE;
    
    return FALSE;
}

static const u16 sBraveBossesActions[NUMBER_OF_BOSSES][BOSS_BRAVE_PHASE_4 + 1][MAX_BRAVE_ACTIONS] = {
    [BRAVE_BOSS_ELECTIVIRE] = {
        [BOSS_PHASE_DEFAULT]      = { MOVE_NONE,          MOVE_NONE,          MOVE_NONE,          MOVE_NONE},
        [BOSS_BRAVE_PHASE_1]      = { MOVE_CHARGE,        MOVE_THUNDER_PUNCH, MOVE_CHARGE,        MOVE_THUNDER_PUNCH},
        [BOSS_BRAVE_PHASE_2]      = { MOVE_THUNDER_WAVE,  MOVE_BULLDOZE,      MOVE_BULLDOZE,      MOVE_BULLDOZE},
        [BOSS_BRAVE_PHASE_3]      = { MOVE_THUNDER_PUNCH, MOVE_THUNDER_PUNCH, MOVE_THUNDER_PUNCH, MOVE_THUNDER_PUNCH},
        [BOSS_BRAVE_PHASE_4]      = { MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH,    MOVE_BULLDOZE,      MOVE_SELFDESTRUCT},
    },
    [BRAVE_BOSS_MAGMORTAR] = {
        [BOSS_PHASE_DEFAULT]      = { MOVE_NONE,          MOVE_NONE,          MOVE_NONE,          MOVE_NONE},
        [BOSS_BRAVE_PHASE_1]      = { MOVE_WILL_O_WISP,   MOVE_FIRE_SPIN,     MOVE_NONE,          MOVE_NONE},
        [BOSS_BRAVE_PHASE_2]      = { MOVE_ROCK_TOMB,     MOVE_FLAME_CHARGE,  MOVE_FLAME_CHARGE,  MOVE_FLAME_CHARGE},
        [BOSS_BRAVE_PHASE_3]      = { MOVE_WILL_O_WISP,   MOVE_TAUNT,         MOVE_NONE,          MOVE_NONE},
        [BOSS_BRAVE_PHASE_4]      = { MOVE_WILL_O_WISP,   MOVE_WILL_O_WISP,   MOVE_FIRE_SPIN,     MOVE_FIRE_SPIN},
    }
};

s8 GetBattlerPossibleMaxActionsThisTurn(u32 battler){
    u8 i;
    s8 currentAP  = gBattleStruct->monStoredAP[battler];

    if(currentAP < 0)
        return MAX_BRAVE_ACTIONS + currentAP;
    
    return MAX_BRAVE_ACTIONS;
}

bool8 BraveAddAnyMoveToQueueIfPossible(u32 battler, u16 move, u8 target, u32 currAction, s8 maxPossibleActions){
    if(currAction <= maxPossibleActions){
        BraveAddAnyMoveToQueue(battler, move, target);
        return TRUE;
    }

    return FALSE;
}

void AddAiActionsForBattler(u32 battler)
{
    u8 i;
    u8 bossNumber = VarGet(VAR_BOSS_BRAVE_AI_ID);
    u32 currAction = gBattleStruct->monBraveActions[battler];
    s8  currentAP  = gBattleStruct->monStoredAP[battler];
    s8  maxPossibleActions = GetBattlerPossibleMaxActionsThisTurn(battler);
    GenerateRandomTarget();
    //MgbaPrintf(MGBA_LOG_WARN, "Running AddAiActionsForBattler for battler %d, currAction %d currentAP %d monStoredAP %d", battler, currAction, currentAP, gBattleStruct->monStoredAP[battler]);

    switch(bossNumber){
        case BRAVE_BOSS_NONE:
        default:
        {
            AddOptimalActionForBattler(battler);
        }
        break;
        case BRAVE_BOSS_MAGMORTAR:
        {
            if(battler == B_POSITION_OPPONENT_LEFT){
                u8 phase      = GetCurrentBravePhase_Magmortar(battler);
                u16 move      = MOVE_NONE;
                bool8 useSlot = FALSE;

                //MgbaPrintf(MGBA_LOG_WARN, "GetCurrentBravePhase phase %d, newTarget %d", BOSS_BRAVE_PHASE_RANDOM, sCurrentTarget);
                switch(phase){
                    default:
                        for(currAction = 0; currAction < maxPossibleActions; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_RANDOM:
                        for(currAction = 0; currAction < maxPossibleActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_1:
                    {
                        //Burn the targets that can be burned and attack normally for up to 3 actions
                        bool8 Enemy1CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);
                        bool8 Enemy2CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT);

                        if(Enemy1CanBeBurned){
                            sCurrentTarget = B_POSITION_PLAYER_LEFT;
                            if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_WILL_O_WISP, sCurrentTarget, currAction, maxPossibleActions))
                                currAction++;
                        }

                        if(Enemy2CanBeBurned){
                            sCurrentTarget = B_POSITION_PLAYER_RIGHT;
                            if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_WILL_O_WISP, sCurrentTarget, currAction, maxPossibleActions))
                                currAction++;
                        }

                        //Limit the number of max actions it can use this turn
                        if(maxPossibleActions > 3)
                            maxPossibleActions = 3;

                        for(; currAction < maxPossibleActions; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    }
                    break;
                    case BOSS_BRAVE_PHASE_2:
                    {
                        //Slow down the player mons for speed control and boost its own speed
                        bool8 isEnemy1Faster = AI_IsFaster(battler, B_POSITION_PLAYER_LEFT, MOVE_POUND)  && IsBattlerAlive(B_POSITION_PLAYER_LEFT);
                        bool8 isEnemy2Faster = AI_IsFaster(battler, B_POSITION_PLAYER_RIGHT, MOVE_POUND) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT);

                        if(isEnemy1Faster){
                            sCurrentTarget = B_POSITION_PLAYER_LEFT;
                            if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_ROCK_TOMB, sCurrentTarget, currAction, maxPossibleActions))
                                currAction++;
                        }

                        if(isEnemy2Faster){
                            sCurrentTarget = B_POSITION_PLAYER_RIGHT;
                            if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_ROCK_TOMB, sCurrentTarget, currAction, maxPossibleActions))
                                currAction++;
                        }

                        //Limit the number of max actions it can use this turn
                        if(maxPossibleActions > 3)
                            maxPossibleActions = 3;

                        for(; currAction < maxPossibleActions; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    }
                    break;
                    case BOSS_BRAVE_PHASE_3:
                    {
                        //When the player cures itself tries to burn them again and negate the use of status moves, needs to add a way to track if the player was previously burned and who cured it
                        bool8 Enemy1CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);
                        bool8 Enemy2CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT);

                        if(Enemy1CanBeBurned){
                            sCurrentTarget = B_POSITION_PLAYER_LEFT;

                            if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_WILL_O_WISP, sCurrentTarget, currAction, maxPossibleActions))
                                currAction++;

                            if (CanBattlerBeTaunted(sCurrentTarget) && GetPlayerSpeciesMon(sCurrentTarget) == SPECIES_EEVEE){
                                if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_TAUNT, sCurrentTarget, currAction, maxPossibleActions))
                                    currAction++;
                            }
                        }

                        if(Enemy2CanBeBurned){
                            sCurrentTarget = B_POSITION_PLAYER_RIGHT;

                            if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_WILL_O_WISP, sCurrentTarget, currAction, maxPossibleActions))
                                currAction++;

                            if (CanBattlerBeTaunted(sCurrentTarget) && GetPlayerSpeciesMon(sCurrentTarget) == SPECIES_EEVEE){
                                if(BraveAddAnyMoveToQueueIfPossible(battler, MOVE_TAUNT, sCurrentTarget, currAction, maxPossibleActions))
                                    currAction++;
                            }
                        }

                        //Limit the number of max actions it can use this turn
                        if(maxPossibleActions > 3)
                            maxPossibleActions = 3;

                        for(; currAction < maxPossibleActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }
                    }
                    break;
                    case BOSS_BRAVE_PHASE_4:
                    {
                        //First turn chain - Tries to always start the battle with the player burned and trapped
                        bool8 Enemy1CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);  //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
                        bool8 Enemy2CanBeBurned = AI_CanBurn(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, BATTLE_PARTNER(battler), MOVE_WILL_O_WISP, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT); //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon

                        if(Enemy1CanBeBurned && BraveAddAnyMoveToQueueIfPossible(battler, MOVE_WILL_O_WISP, B_POSITION_PLAYER_LEFT, currAction, maxPossibleActions))
                            currAction++;

                        if(Enemy2CanBeBurned && BraveAddAnyMoveToQueueIfPossible(battler, MOVE_WILL_O_WISP, B_POSITION_PLAYER_RIGHT, currAction, maxPossibleActions))
                            currAction++;

                        if(!IsBattlerTrapped(B_POSITION_PLAYER_LEFT, TRUE) && BraveAddAnyMoveToQueueIfPossible(battler, MOVE_FIRE_SPIN, B_POSITION_PLAYER_LEFT, currAction, maxPossibleActions))
                            currAction++;

                        if(!IsBattlerTrapped(B_POSITION_PLAYER_RIGHT, TRUE) && BraveAddAnyMoveToQueueIfPossible(battler, MOVE_FIRE_SPIN, B_POSITION_PLAYER_RIGHT, currAction, maxPossibleActions))
                            currAction++;

                        //Limit the number of max actions it can use this turn
                        if(maxPossibleActions > 3)
                            maxPossibleActions = 3;

                        for(; currAction < maxPossibleActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }
                    }
                    break;
                    case BOSS_BRAVE_PHASE_MISC:
                        //Clear the enemy stats if they are too boosted
                        bool8 shouldClearEnemy1 = GetNumberOfBoostedStats(B_POSITION_PLAYER_LEFT)  >= ANTI_STAT_BOOST_STAT_NUM;
                        bool8 shouldClearEnemy2 = GetNumberOfBoostedStats(B_POSITION_PLAYER_RIGHT) >= ANTI_STAT_BOOST_STAT_NUM;

                        if(shouldClearEnemy1 && BraveAddAnyMoveToQueueIfPossible(battler, MOVE_CLEAR_SMOG, B_POSITION_PLAYER_LEFT, currAction, maxPossibleActions))
                            currAction++;

                        if(shouldClearEnemy2  && BraveAddAnyMoveToQueueIfPossible(battler, MOVE_CLEAR_SMOG, B_POSITION_PLAYER_RIGHT, currAction, maxPossibleActions))
                            currAction++;

                        //Limit the number of max actions it can use this turn
                        if(maxPossibleActions > 3)
                            maxPossibleActions = 3;

                        for(; currAction < maxPossibleActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
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
        case BRAVE_BOSS_PORYGON:
        {
            if(battler == B_POSITION_OPPONENT_LEFT){
                u8 phase      = GetCurrentBravePhase_Porygon(battler);
                u16 move      = MOVE_NONE;
                bool8 useSlot = FALSE;

                if(maxPossibleActions >= 2)
                    maxPossibleActions = 2; //Porygon only attacks twice per turn

                //MgbaPrintf(MGBA_LOG_WARN, "GetCurrentBravePhase phase %d, newTarget %d", BOSS_BRAVE_PHASE_RANDOM, sCurrentTarget);
                switch(phase){
                    default:
                        for(currAction = 0; currAction < maxPossibleActions; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_RANDOM:
                        for(currAction = 0; currAction < maxPossibleActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_MISC:
                        BraveAddAnyMoveToQueue(battler, MOVE_CONVERSION, sCurrentTarget);
                        for(currAction = 1; currAction < maxPossibleActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_RECOVER:
                        BraveAddAnyMoveToQueue(battler, MOVE_RECOVER, sCurrentTarget);
                        for(currAction = 1; currAction < maxPossibleActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
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
                        for(currAction = 0; currAction < maxPossibleActions; currAction++){
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_1:
                    case BOSS_BRAVE_PHASE_3:
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
                        for(currAction = 0; currAction < maxPossibleActions; currAction++){
                            phase = (Random() % 4) + 1;
                            move = sBraveBossesActions[bossNumber][phase][currAction];
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                        }
                    break;
                    case BOSS_BRAVE_PHASE_MISC:
                    {
                        bool8 Enemy1CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_LEFT,  gBattleMons[B_POSITION_PLAYER_LEFT].ability,  MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_LEFT);  //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
                        bool8 Enemy2CanBeParalyzed = AI_CanParalyze(battler, B_POSITION_PLAYER_RIGHT, gBattleMons[B_POSITION_PLAYER_RIGHT].ability, MOVE_THUNDER_WAVE, MOVE_NONE) && IsBattlerAlive(B_POSITION_PLAYER_RIGHT); //Checks if it can be paralyzed, this includes a check to see if the target is Jolteon
                        u16 statTotalDifference    = GetStatStageTotalParty(battler) - GetStatStageTotalBoss(battler) - TOTAL_DEFAULT_STAT_STAGES_NUM; // checks difference in stat stages between party and boss
                        u16 hazeChance             = (statTotalDifference * TOTAL_DEFAULT_STAT_STAGES_NUM / 5);
                        u16 rand                   = Random() % 100;
                        u16 bossAtkDrops           = DEFAULT_STAT_STAGE - gBattleMons[battler].statStages[STAT_ATK]; // checks how many times electivires attack stage has been dropped
                        u16 supportChance          = (bossAtkDrops * 17);
                        u16 currentTurnActions     = 1 + (Random() % 3);
                        s8 bossCurrentAP           = gBattleStruct->monStoredAP[battler];

                        if(bossCurrentAP > currentTurnActions)
                            currentTurnActions = bossCurrentAP;

                        MgbaPrintf(MGBA_LOG_WARN, "currentTurnActions = %d", currentTurnActions);
                                               
                        if(currAction < currentTurnActions && rand < hazeChance){
                            BraveAddAnyMoveToQueue(battler, MOVE_HAZE, B_POSITION_PLAYER_RIGHT);
                            currAction++;
                        }
                        else if(currAction < currentTurnActions && rand < supportChance){
                            u16 move = sElectivireMiscSupportMoves[Random() % 4];
                            GenerateRandomTarget();
                            BraveAddAnyMoveToQueue(battler, move, sCurrentTarget);
                            currAction++;
                        }
                        
                        if(Enemy1CanBeParalyzed && currAction < currentTurnActions){
                            BraveAddAnyMoveToQueue(battler, MOVE_THUNDER_WAVE, B_POSITION_PLAYER_LEFT);
                            currAction++;
                        }

                        if(Enemy2CanBeParalyzed && currAction < currentTurnActions){
                            BraveAddAnyMoveToQueue(battler, MOVE_THUNDER_WAVE, B_POSITION_PLAYER_RIGHT);
                            currAction++;
                        }
                        for(currAction; currAction < currentTurnActions; currAction++){
                            move = ChooseBestMoveAgainstTargetWithLowestHP(battler);
                            BraveAddMoveToQueue(battler, move, sCurrentTarget);
                        }

                    }
                    break;
                    case BOSS_PHASE_DEFAULT:
                        BraveAddDefaultToQueue(battler);
                    break;
                    case BOSS_BRAVE_PHASE_NOTHING: // Does nothing when at negative AP
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