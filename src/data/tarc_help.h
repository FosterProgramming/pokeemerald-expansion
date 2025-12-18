#include "tarc_help_system.h"

const u32 sHelpHealGfx[] = INCBIN_U32("graphics/help_messages/help_heal.4bpp");
const u16 sHelpHealPal[] = INCBIN_U16("graphics/help_messages/help_heal.gbapal");
const u32 sHelpBrave2Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_2.4bpp");
const u16 sHelpBrave2Pal[] = INCBIN_U16("graphics/help_messages/help_brave_2.gbapal");
const u32 sHelpBrave3Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_3.4bpp");
const u16 sHelpBrave3Pal[] = INCBIN_U16("graphics/help_messages/help_brave_3.gbapal");
const u32 sHelpBrave9Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_9.4bpp");
const u16 sHelpBrave9Pal[] = INCBIN_U16("graphics/help_messages/help_brave_9.gbapal");
const u32 sHelpBrave4Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_4.4bpp");
const u16 sHelpBrave4Pal[] = INCBIN_U16("graphics/help_messages/help_brave_4.gbapal");
const u32 sHelpBrave5Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_5.4bpp");
const u16 sHelpBrave5Pal[] = INCBIN_U16("graphics/help_messages/help_brave_5.gbapal");
const u32 sHelpBrave6Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_6.4bpp");
const u16 sHelpBrave6Pal[] = INCBIN_U16("graphics/help_messages/help_brave_6.gbapal");
const u32 sHelpBrave7Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_7.4bpp");
const u16 sHelpBrave7Pal[] = INCBIN_U16("graphics/help_messages/help_brave_7.gbapal");
const u32 sHelpBrave8Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_8.4bpp");
const u16 sHelpBrave8Pal[] = INCBIN_U16("graphics/help_messages/help_brave_8.gbapal");
const u32 sHelpBrave10Gfx[] = INCBIN_U32("graphics/help_messages/help_brave_10.4bpp");
const u16 sHelpBrave10Pal[] = INCBIN_U16("graphics/help_messages/help_brave_10.gbapal");
const u32 sHelpDefault1Gfx[] = INCBIN_U32("graphics/help_messages/help_default_1.4bpp");
const u16 sHelpDefault1Pal[] = INCBIN_U16("graphics/help_messages/help_default_1.gbapal");
const u32 sHelpDefault2Gfx[] = INCBIN_U32("graphics/help_messages/help_default_2.4bpp");
const u16 sHelpDefault2Pal[] = INCBIN_U16("graphics/help_messages/help_default_2.gbapal");
const u32 sHelpDefault3Gfx[] = INCBIN_U32("graphics/help_messages/help_default_3.4bpp");
const u16 sHelpDefault3Pal[] = INCBIN_U16("graphics/help_messages/help_default_3.gbapal");

const struct HelpData sHelpDatas[] =
{
    [TRIGGER_BRAVE_1] = {
        .x = 150,
        .y = 105,
        .spritePtr = sHelpHealGfx,
        .palettePtr = sHelpHealPal,
        .flag = FLAG_BRAVE_HELP_1,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_2] = {
        .x = 150,
        .y = 105,
        .spritePtr = sHelpBrave2Gfx,
        .palettePtr = sHelpBrave2Pal,
        .flag = FLAG_BRAVE_HELP_2,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_3] = {
        .x = 158,
        .y = 59,
        .spritePtr = sHelpBrave3Gfx,
        .palettePtr = sHelpBrave3Pal,
        .flag = FLAG_BRAVE_HELP_3,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_9] = {
        .x = 158,
        .y = 59,
        .spritePtr = sHelpBrave9Gfx,
        .palettePtr = sHelpBrave9Pal,
        .flag = FLAG_BRAVE_HELP_9,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_4] = {
        .x = 176,
        .y = 95,
        .spritePtr = sHelpBrave4Gfx,
        .palettePtr = sHelpBrave4Pal,
        .flag = FLAG_BRAVE_HELP_4,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_5] = {
        .x = 176,
        .y = 85,
        .spritePtr = sHelpBrave5Gfx,
        .palettePtr = sHelpBrave5Pal,
        .flag = FLAG_BRAVE_HELP_5,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_6] = {
        .x = 176,
        .y = 85,
        .spritePtr = sHelpBrave6Gfx,
        .palettePtr = sHelpBrave6Pal,
        .flag = FLAG_BRAVE_HELP_6,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_7] = {
        .x = 176,
        .y = 85,
        .spritePtr = sHelpBrave7Gfx,
        .palettePtr = sHelpBrave7Pal,
        .flag = FLAG_BRAVE_HELP_7,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_8] = {
        .x = 176,
        .y = 85,
        .spritePtr = sHelpBrave8Gfx,
        .palettePtr = sHelpBrave8Pal,
        .flag = FLAG_BRAVE_HELP_8,
        .numSprites = 2,
    },

    [TRIGGER_BRAVE_10] = {
        .x = 176,
        .y = 85,
        .spritePtr = sHelpBrave10Gfx,
        .palettePtr = sHelpBrave10Pal,
        .flag = FLAG_BRAVE_HELP_10,
        .numSprites = 2,
    },

    [TRIGGER_DEFAULT_1] = {
        .x = 176,
        .y = 105,
        .spritePtr = sHelpDefault1Gfx,
        .palettePtr = sHelpDefault1Pal,
        .flag = FLAG_DEFAULT_HELP_1,
        .numSprites = 2,
    },

    [TRIGGER_DEFAULT_2] = {
        .x = 176,
        .y = 105,
        .spritePtr = sHelpDefault2Gfx,
        .palettePtr = sHelpDefault2Pal,
        .flag = FLAG_DEFAULT_HELP_2,
        .numSprites = 2,
    },

    [TRIGGER_DEFAULT_3] = {
        .x = 176,
        .y = 105,
        .spritePtr = sHelpDefault3Gfx,
        .palettePtr = sHelpDefault3Pal,
        .flag = FLAG_DEFAULT_HELP_3,
        .numSprites = 2,
    },
};
