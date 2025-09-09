#include "global.h"
#include "main.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"

static void AnimTask_MonPretending_Step(u8 taskId);

//16, 128, ANIM_ATTACKER, 2
void AnimTask_MonPretending(u8 taskId)
{
    u8 spriteId = GetAnimBattlerSpriteId(gBattleAnimArgs[2]);
    PrepareBattlerSpriteForRotScale(spriteId, ST_OAM_OBJ_NORMAL);
    gTasks[taskId].data[1] = 0;
    gTasks[taskId].data[2] = 16;//gBattleAnimArgs[0];
    if (gBattleAnimArgs[2] == ANIM_ATTACKER)
    {
        if (!IsOnPlayerSide(gBattleAnimAttacker))
        {
            gBattleAnimArgs[1] = -gBattleAnimArgs[1];
        }
    }
    else
    {
        if (!IsOnPlayerSide(gBattleAnimTarget))
        {
            gBattleAnimArgs[1] = -gBattleAnimArgs[1];
        }
    }
    if (gBattleAnimArgs[3] != 1)
    {
        gTasks[taskId].data[3] = 0;
    }
    else
    {
        gTasks[taskId].data[3] = gBattleAnimArgs[0] * gBattleAnimArgs[1];
    }
    gTasks[taskId].data[3] = -16 * 128;
    gTasks[taskId].data[4] = -128;//gBattleAnimArgs[1];
    gTasks[taskId].data[5] = spriteId;
    gTasks[taskId].data[6] = 2;//gBattleAnimArgs[3];
    gTasks[taskId].data[7] = 1;
    gTasks[taskId].data[3] *= -1;
    gTasks[taskId].data[4] *= -1;
    gTasks[taskId].func = AnimTask_MonPretending_Step;
}

static void AnimTask_MonPretending_Step(u8 taskId)
{
    gTasks[taskId].data[3] += gTasks[taskId].data[4];
    SetSpriteRotScale(gTasks[taskId].data[5], -0x100, 0x100, gTasks[taskId].data[3]);
    if (gTasks[taskId].data[7])
    {
        SetBattlerSpriteYOffsetFromRotation(gTasks[taskId].data[5]);
    }
    if (++gTasks[taskId].data[1] >= gTasks[taskId].data[2])
    {
        switch (gTasks[taskId].data[6])
        {
        case 1:
            ResetSpriteRotScale(gTasks[taskId].data[5]);
        case 0:
        default:
            DestroyAnimVisualTask(taskId);
            return;
        case 2:
            gTasks[taskId].data[1] = 0;
            gTasks[taskId].data[4] *= -1;
            gTasks[taskId].data[6] = 1;
            break;
        }
    }
}