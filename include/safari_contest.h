#ifndef GUARD_SAFARI_CONTEST_H
#define GUARD_SAFARI_CONTEST_H

enum 
{
    NEGATIVE_CONTEST_MOVE_RESULT,
    NEUTRAL_CONTEST_MOVE_RESULT,
    POSITIVE_CONTEST_MOVE_RESULT,
};

enum
{
    EASY_CONTEST_CUTE,
    EASY_CONTEST_SMART,
    EASY_CONTEST_TOUGH,
    EASY_CONTEST_COUNT
};

struct SafariSpeciesData
{
    u8  initialCatchRate;
    u8  escapeBattleFlag:1;
    u8  overworldShyFlag:1;
    u8  padding:6;
    u16 favoriteBerry;
    u16 favoriteMove;
};

#define NO_MORE_IDLE_ACTION_CLUES (1 << 7)
#define SAFARI_CONTEST_DURATION (60 * 60 * 5)

#define ANY_BERRY 0xFFFF

extern u8 gCatchChance;
extern u8 gFleeChance;
extern u8 gExcludedIdleActions;
extern u8 gBerryTimer;
extern u32 gSafariTimer;
extern u8 gSafariScore;

#define TYPE_EXCLUDED(x, type) (x & (1 << type))
#define EXCLUDE_TYPE(x, type) DebugPrintf("excluded %d", type);(x |= (1 << type))

void InitSafariContest(void);
u8 GetCaptureChance(void);
void PrintCaptureChanceOnHealthbox(u8 battler);
void UpdateCaptureChance(void);
void BtlController_EmitIntroBerryThrow(u32 battler, u32 bufferId);

bool32 IsOverworldMonShy(u32 species);
bool32 CanPokemonRunFromBattle(u32 species);

void SafariContest_NewGameInitData(void);
void SafariContest_SetMoves(void);
void SafariContest_EnterSafariMode(void);
void SafariContestTimerUpdate(void);

bool32 SafariContestTakeStep(void);
#endif // GUARD_BATTLE_H