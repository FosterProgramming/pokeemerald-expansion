#include "gba/types.h"
#include "global.h"

#define NUM_BRAVE_PRIORITIES    13
#define MAX_BRAVE_ACTIONS       4
#define MAX_BRAVE_BATTLERS      4

struct BraveBattleAction
{
    u32 action:8;
    u32 battler:2;
    u32 target:3;
    u32 moveSlot:2;
    u32 isSlotUsed:1;
};

extern struct BraveBattleAction gBraveBattleAction[NUM_BRAVE_PRIORITIES][MAX_BRAVE_ACTIONS][MAX_BRAVE_BATTLERS];
extern struct BraveBattleAction gBraveCurrentAction;

void Brave_TestActions(void);

u32 BraveGetCurrentAction(void);
u32 BraveGetCurrentBattler(void);
u32 BraveGetCurrentTarget(void);
u32 BraveGetCurrentMoveSlot(void);

void BraveSetCurrentAction(void);
