#include "tarc_help_system.h"

const u32 sHelpHealGfx[] = INCBIN_U32("graphics/help_messages/help_heal.4bpp");
const u16 sHelpHealPal[] = INCBIN_U16("graphics/help_messages/help_heal.gbapal");

const struct HelpData sHelpDatas[] =
{
    [TRIGGER_HEAL] = {
        .x = 120,
        .y = 92,
        .spritePtr = sHelpHealGfx,
        .palettePtr = sHelpHealPal,
        .flag = FLAG_NEVER_SET_0x0DC,
        .numSprites = 2,
    },
};
