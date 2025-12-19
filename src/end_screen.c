#include "end_screen.h"
#include "global.h"
#include "data.h"
#include "decompress.h"
#include "menu.h"
#include "menu_helpers.h"
#include "malloc.h"
#include "palette.h"
#include "graphics.h"
#include "gpu_regs.h"
#include "bg.h"
#include "main.h"
#include "text_window.h"
#include "string_util.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "hall_of_fame.h"
#include "sound.h"

static void Task_ManageCredits(u8 taskId);
static void Task_DoConfetti(u8 taskId);

#define TAG_CONFETTI 1001

static const struct CompressedSpriteSheet sSpriteSheet_Confetti[] =
{
    {.data = gConfetti_Gfx, .size = 0x220, .tag = TAG_CONFETTI},
    {},
};

static const struct SpritePalette sSpritePalette_Confetti[] =
{
    {.data = gConfetti_Pal, .tag = TAG_CONFETTI},
    {},
};


static const struct BgTemplate sBgTemplates[3] =
{
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0,
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 14,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0,
    },
    {
        .bg = 3,
        .charBaseIndex = 0,
        .mapBaseIndex = 15,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0,
    },
};

static const struct WindowTemplate sTextWin =
{
    .bg = 0,
    .tilemapLeft = 3,
    .tilemapTop = 2,
    .width = 24,
    .height = 16,
    .paletteNum = 15,
    .baseBlock = 1,
};

static void EndScreen_MainCB2(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void EndScreen_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static const u8 sText_Color0[] =
{
    TEXT_COLOR_WHITE,
    TEXT_COLOR_DARK_GRAY,
    TEXT_COLOR_LIGHT_GRAY
};

static const u8 sText_Text1[] = _("CONGRATULATIONS!");
static void SampleUi_PrintUiSampleWindowText(void)
{
    FillWindowPixelBuffer(1, PIXEL_FILL(TEXT_COLOR_WHITE));

    AddTextPrinterParameterized4(1, FONT_NORMAL, 48, 0, 0, 0,
        sText_Color0, TEXT_SKIP_DRAW, sText_Text1);

    CopyWindowToVram(1, COPYWIN_GFX);
}

static const u16 sMainMenuBgPal[] = INCBIN_U16("graphics/interface/main_menu_bg.gbapal");

void EndScreen_InitCB2(void)
{
    if (!gPaletteFade.active)
        return;
    ResetVramOamAndBgCntRegs();
    ResetAllBgsCoordinates();
    FreeAllWindowBuffers();

    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    LoadBgTiles(0, gTextWindowFrame1_Gfx, 0x120, 0x214);
    DeactivateAllTextPrinters();
    ResetTasks();
    ResetPaletteFade();
    LoadPalette(gTextWindowFrame1_Pal, 0xE0, 0x20);
    LoadPalette(gStandardMenuPalette, 0xF0, 0x20);
    LoadPalette(sMainMenuBgPal, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
    LoadCompressedSpriteSheet(sSpriteSheet_Confetti);
    LoadSpritePalette(sSpritePalette_Confetti);
    u32 window = AddWindow(&sTextWin);
    DebugPrintf("window %d", window);
    DrawStdFrameWithCustomTileAndPalette(window, TRUE, 0x214, 0xE);
    ShowBg(0);
    SampleUi_PrintUiSampleWindowText();
    SetVBlankCallback(EndScreen_VBlankCB);
    SetMainCallback2(EndScreen_MainCB2);
    CreateTask(Task_ManageCredits, 0);
    
    BeginNormalPaletteFade(PALETTES_ALL, 2, 16, 0, RGB_BLACK);
}



static const u8 sText_Text2[] = _(
"You finished Jamie's Tech Demo. This game \n"
"was made for a small romhacking competi-\n"
"tion named TARC2 and I hope you enjoyed\n"
"playing it.\n"
);

static const u8 sText_Text3[] = _("Jamie Foster");

static const u8 sText_Credits[] = _(
"Developed by Jamie Foster\n"
"Playtested by Kildie & Boyo\n\n"
"This hack wouldn't be possible without\n" 
"Pokemon Emerald by Game Freak\n"
"pokeemerald-expansion by RHH/Pret\n"
"Emerald Rogue's followmon by Pokabbie\n"
);

static const u8 sText_Thanks[] = _(
"\n"
"Special thanks to Team Aqua for making\n"
"romhacking easier and more fun and to the\n"
"Poketuber Cecilily for inspiring me to\n"
"start romhacking.\n"
);

static const u8 sText_Contact[] = _(
"If you wish to commision me to develop\n"
"features for your romhack or are looking\n"
"to hire a software developer, you can\n"
"contact me on Discord:"
);

static void MakeDiscordName(void)
{
    u8 *s;

    s = StringCopy(gStringVar1, COMPOUND_STRING(" "));
    *s++ = CHAR_EXTRA_SYMBOL;
    *s++ = 0xDA;
    s = StringCopy(s, COMPOUND_STRING("foster"));
    *s++ = CHAR_EXTRA_SYMBOL;
    *s++ = CHAR_UNDERSCORE;
    StringCopy(s, COMPOUND_STRING("harmony"));

}

static void PrintPageFooter(u32 page)
{
    ConvertIntToDecimalStringN(gStringVar1, page, STR_CONV_MODE_LEADING_ZEROS, 1);
    StringExpandPlaceholders(gStringVar4, COMPOUND_STRING("{STR_VAR_1}/4"));
    AddTextPrinterParameterized4(1, FONT_SMALL,
                170, 108, // x, y
                2, 0,  // letter, line spacing
                sText_Color0, //color
                0, //speed
                gStringVar4);
}

#define tState data[0]
#define tPage data[1]

static void PrintPage(u8 taskId)
{
    FillWindowPixelBuffer(1, PIXEL_FILL(TEXT_COLOR_WHITE));

    switch (gTasks[taskId].tPage)
    {
        case 1:
            AddTextPrinterParameterized4(1, FONT_NORMAL, 48, 0, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, sText_Text1);
            AddTextPrinterParameterized4(1, FONT_SMALL,
                0, 24, // x, y
                2, 0,  // letter, line spacing
                sText_Color0, //color
                TEXT_SKIP_DRAW, //speed
                sText_Text2);
            AddTextPrinterParameterized4(1, FONT_SMALL,
                100, 76, // x, y
                2, 0,  // letter, line spacing
                sText_Color0, //color
                TEXT_SKIP_DRAW, //speed
                sText_Text3);
            break;
        case 2:
            AddTextPrinterParameterized4(1, FONT_NORMAL, 76, 0, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, COMPOUND_STRING("CREDITS"));
            AddTextPrinterParameterized4(1, FONT_SMALL, 0, 24, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, sText_Credits);
            break;
        case 3:
            AddTextPrinterParameterized4(1, FONT_NORMAL, 80, 0, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, COMPOUND_STRING("THANKS"));
            AddTextPrinterParameterized4(1, FONT_SMALL, 0, 24, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, sText_Thanks);
            break;
        case 4:
            AddTextPrinterParameterized4(1, FONT_NORMAL, 72, 0, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, COMPOUND_STRING("CONTACT ME"));
            AddTextPrinterParameterized4(1, FONT_SMALL, 0, 24, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, sText_Contact);
            MakeDiscordName();
            //StringCopy(gStringVar1, COMPOUND_STRING("foster_harmony"));
            AddTextPrinterParameterized4(1, FONT_SMALL, 8, 84, 0, 0,
                sText_Color0, TEXT_SKIP_DRAW, gStringVar1);
            break;
    }
    PrintPageFooter(gTasks[taskId].tPage);
    CopyWindowToVram(1, COPYWIN_GFX);
}

static void PrintNextPage(u8 taskId)
{
    if (gTasks[taskId].tPage == 4)
        return;
    gTasks[taskId].tPage++;
    PrintPage(taskId);
}

static void PrintPreviousPage(u8 taskId)
{
    if (gTasks[taskId].tPage == 1)
        return;
    gTasks[taskId].tPage--;
    PrintPage(taskId);
}

static void Task_ManageCredits(u8 taskId)
{
    switch (gTasks[taskId].tState)
    {
    case 0:
        if (!gPaletteFade.active)
            return;
        gTasks[taskId].tPage = 1;
        AddTextPrinterParameterized4(1, FONT_SMALL,
            0, 24, // x, y
            2, 0,  // letter, line spacing
            sText_Color0, //color
            3, //speed
            sText_Text2);
        PlayBGM(MUS_HALL_OF_FAME);
        u8 confettiTask = CreateTask(Task_DoConfetti, 1);
        gTasks[confettiTask].data[0] = 400;
        gTasks[taskId].tState++;
        break;
    case 1:
        RunTextPrinters();
        if (!IsTextPrinterActive(1))
        {
            AddTextPrinterParameterized4(1, FONT_SMALL,
                100, 76, // x, y
                2, 0,  // letter, line spacing
                sText_Color0, //color
                3, //speed
                sText_Text3);
            gTasks[taskId].tState++;
        }
        break;
    case 2:
        RunTextPrinters();
        if (!IsTextPrinterActive(1))
        {
            PrintPageFooter(1);
            gTasks[taskId].tState++;
        }
        break;
    case 3:
        if (JOY_NEW(A_BUTTON) || JOY_NEW(R_BUTTON))
            PrintNextPage(taskId);
        else if (JOY_NEW(B_BUTTON) || JOY_NEW(L_BUTTON))
            PrintPreviousPage(taskId);
        break;
    }
}

static void Task_DoConfetti(u8 taskId)
{
    if (gTasks[taskId].data[0] != 0)
    {
        gTasks[taskId].data[0]--;

        // Create new confetti every 4th frame for the first 290 frames
        // For the last 110 frames wait for the existing confetti to fall offscreen
        if ((gTasks[taskId].data[0] & 3) == 0 && gTasks[taskId].data[0] > 110)
            CreateHofConfettiSprite();
    }
    else
    {
        DestroyTask(taskId);
    }
}

