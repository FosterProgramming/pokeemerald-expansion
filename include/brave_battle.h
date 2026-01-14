#ifndef GUARD_BRAVE_BATTLE
#define GUARD_BRAVE_BATTLE

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
    u32 item:15;
};

extern struct BraveBattleAction gBraveBattleAction[MAX_BRAVE_BATTLERS][MAX_BRAVE_ACTIONS];
extern struct BraveBattleAction gBraveCurrentAction;
extern u16 gBraveStoredSpeeds[4];

void Brave_TestActions(void);

u32 BraveGetCurrentAction(void);
u32 BraveGetCurrentBattler(void);
u32 BraveGetCurrentTarget(void);
u32 BraveGetCurrentMoveSlot(void);
u32 BraveGetCurrentMove(void);
u16 GetBravePrioMod(u32 move, u32 battler);
bool32 IsBattlerDefaulting(u32 battler);

void BraveSetCurrentAction(void);
void BraveClearBattlerAction(u32 battler, u32 action);
void BraveClearAllActions(void);

void BraveAddMoveToQueue(u32 battler, u32 movePos, u32 target);
void BraveAddAnyMoveToQueue(u32 battler, u32 move, u32 target);
void BraveAddSwitchToQueue(u32 battler, u32 target);
void BraveAddItemToQueue(u32 battler, u32 item, u32 target, u32 slot);
void BraveAddDefaultToQueue(u32 battler);
void BraveAddRunToQueue(u32 battler);

void BravePrintActions(void);
u32 BraveGetBattlerActionCount(u32 battler);

bool32 IsBraveTurnActuallyDone(void);
void BraveFirstTurnSetAP(void);
void BraveIncrementAP(void);
void BraveConsumeAP(u32 battler, u32 move);
void BraveResetAP(u32 battler);
void BraveModAP(u32 battler, s32 change, bool8 turnBased);
void BraveCancelChain(u32 battler);
bool32 BraveCanAddMoveToChain(u32 battler, u32 move);
u32 GetMoveAPCost(u32 move, u32 battler);

void ChangeAPGraphics(u32 battler);

void BraveTryShowIndicators(void);
void BraveHideIndicators(void);


#endif
