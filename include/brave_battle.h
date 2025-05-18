#include "gba/types.h"
#include "global.h"

#define MAX_BRAVE_ACTIONS       4
#define MAX_BRAVE_BATTLERS      4

struct BraveBattleAction
{
    u32 action:8;
    u32 battler:2;
    u32 target:3;
    u32 moveSlot:2;
    u32 isSlotUsed:1;
    u32 isDefaulting:1;
    u32 padding:15;
};

extern struct BraveBattleAction gBraveBattleAction[MAX_BRAVE_BATTLERS][MAX_BRAVE_ACTIONS];
extern struct BraveBattleAction gBraveCurrentAction;
extern u16 gBraveStoredSpeeds[4];

void Brave_TestActions(void);

u32 BraveGetCurrentAction(void);
u32 BraveGetCurrentBattler(void);
u32 BraveGetCurrentTarget(void);
u32 BraveGetCurrentMoveSlot(void);
u16 GetBravePrioMod(u32 move, u32 battler);
bool32 IsBattlerDefaulting(u32 battler);

void BraveSetCurrentAction(void);
void BraveClearBattlerAction(u32 battler, u32 action);
