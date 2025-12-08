#ifndef GUARD_TARC_HELP_SYSTEM
#define GUARD_TARC_HELP_SYSTEM

#include "gba/types.h"
#include "global.h"
#include "constants/flags.h"

#define MAX_HELP_QUEUE 10

enum HelpTriggers
{
    TRIGGER_BRAVE_1,
    TRIGGER_BRAVE_2,
    TRIGGER_BRAVE_3,
    TRIGGER_BRAVE_9,
    TRIGGER_BRAVE_4,
    TRIGGER_BRAVE_5,
    TRIGGER_BRAVE_6,
    TRIGGER_BRAVE_7,
    TRIGGER_BRAVE_8,
    TRIGGER_BRAVE_10,
    TRIGGER_DEFAULT_1,
    TRIGGER_DEFAULT_2,
    TRIGGER_DEFAULT_3,
};

struct HelpData
{
    u16 x;
    u16 y;
    const u32 *spritePtr;
    const u16 *palettePtr;
    u16 flag;
    u16 numSprites;
};

struct HelpStruct
{
    u8 numInQueue;
    bool8 isShowingHelp;
    u16 numSprites;
    u16 queue[MAX_HELP_QUEUE];
    u32 spriteIds[2];

};

extern struct HelpStruct gHelpStruct;

bool32 HelpSystem_Process(void);
void HelpSystem_AddTrigger(u32 trigger);

#endif
