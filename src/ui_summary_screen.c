#include "global.h"
#include "ui_summary_screen.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_icon.h"
#include "item_use.h"
#include "international_string_util.h"
#include "main.h"
#include "malloc.h"
#include "move.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"

enum{
	START_MENU_BG_NORMAL,
	START_MENU_BG_TRANSPARENT,
	NUM_SUMMARY_BACKGROUNDS,
};
 
//==========DEFINES==========//
struct MenuResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 gfxLoadState;
    u8 currentPage;
    u8 currentPokemonIdx;
	u16 bgTilemapBuffers[NUM_SUMMARY_BACKGROUNDS][0x400];
};

enum WindowIds
{
    WINDOW_1,
};

//==========EWRAM==========//
static EWRAM_DATA struct MenuResources *sMenuDataPtr = NULL;

//==========STATIC=DEFINES==========//
static void Menu_RunSetup(void);
static bool8 Menu_DoGfxSetup(void);
static bool8 Menu_InitBgs(void);
static void Menu_FadeAndBail(void);
static bool8 Menu_LoadGraphics(void);
static void Menu_InitWindows(void);
static void PrintToWindow(void);
static void Task_MenuWaitFadeIn(u8 taskId);
static void Task_MenuMain(u8 taskId);

static void SetNormalBackground();
static void SetTransparentBackground();

//==========CONST=DATA==========//
static const struct BgTemplate sMenuBgTemplates[NUM_SUMMARY_BACKGROUNDS + 1] =
{
    //Windows
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 0,
    },
	//Front Background
    {
        .bg = 1,
        .charBaseIndex = 2,
        .mapBaseIndex = 29,
        .priority = 1,
    },
	//Transparent Background
    {
        .bg = 2,
        .charBaseIndex = 2,
        .mapBaseIndex = 27,
        .priority = 2,
    },
};

static const struct WindowTemplate sMenuWindowTemplates[] = 
{
    [WINDOW_1] = 
    {
        .bg = 0,            // which bg to print text on
        .tilemapLeft = 0,   // position from left (per 8 pixels)
        .tilemapTop = 0,    // position from top (per 8 pixels)
        .width = 30,        // width (per 8 pixels)
        .height = 20,       // height (per 8 pixels)
        .paletteNum = 0,    // palette index to use for text
        .baseBlock = 1,     // tile start in VRAM
    },
};

static const u32 sMenuTiles[]                         = INCBIN_U32("graphics/ui_menus/summary_screen/tiles.4bpp.lz");
static const u16 sMenuPalette[]                       = INCBIN_U16("graphics/ui_menus/summary_screen/palette.gbapal");

static const u32 sMenuTilemap_Background_0[]          = INCBIN_U32("graphics/ui_menus/summary_screen/summary_background_0.bin.lz");

static const u32 sMenuTilemap_Pokemon_Info[]          = INCBIN_U32("graphics/ui_menus/summary_screen/summary_info.bin.lz");
static const u32 sMenuTilemap_Pokemon_Traits[]        = INCBIN_U32("graphics/ui_menus/summary_screen/summary_traits.bin.lz");
static const u32 sMenuTilemap_Held_Items[]            = INCBIN_U32("graphics/ui_menus/summary_screen/summary_items.bin.lz");
static const u32 sMenuTilemap_Battle_Moves[]          = INCBIN_U32("graphics/ui_menus/summary_screen/summary_moves.bin.lz");
static const u32 sMenuTilemap_Pokemon_Stats[]         = INCBIN_U32("graphics/ui_menus/summary_screen/summary_stats.bin.lz");
static const u32 sMenuTilemap_Pokemon_Skills[]        = INCBIN_U32("graphics/ui_menus/summary_screen/summary_skills.bin.lz");

static const u8 sSummaryScreen_Icon_01_Enabled_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_01_enabled.4bpp");
static const u8 sSummaryScreen_Icon_01_Disabled_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_01_disabled.4bpp");
static const u8 sSummaryScreen_Icon_02_Enabled_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_02_enabled.4bpp");
static const u8 sSummaryScreen_Icon_02_Disabled_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_02_disabled.4bpp");
static const u8 sSummaryScreen_Icon_03_Enabled_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_03_enabled.4bpp");
static const u8 sSummaryScreen_Icon_03_Disabled_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_03_disabled.4bpp");
static const u8 sSummaryScreen_Icon_04_Enabled_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_04_enabled.4bpp");
static const u8 sSummaryScreen_Icon_04_Disabled_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_04_disabled.4bpp");
static const u8 sSummaryScreen_Icon_05_Enabled_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_05_enabled.4bpp");
static const u8 sSummaryScreen_Icon_05_Disabled_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_05_disabled.4bpp");
static const u8 sSummaryScreen_Icon_06_Enabled_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_06_enabled.4bpp");
static const u8 sSummaryScreen_Icon_06_Disabled_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_06_disabled.4bpp");

static const u8 sSummaryScreen_Icon_Red_Gfx[]         = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_red.4bpp");
static const u8 sSummaryScreen_Icon_Red_1_Gfx[]       = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_red_1.4bpp");

enum Colors
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_RED,
    FONT_BLUE,
};

static const u8 sMenuWindowFontColors[][3] = 
{
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT,   1,   2},
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT,  14,   1},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT,   6,   7},
    [FONT_BLUE]   = {TEXT_COLOR_TRANSPARENT,   5,  14},
};

//==========FUNCTIONS==========//
// UI loader template
void Task_OpenSummaryScreenFromStartMenu(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        SummaryScreen_Init(CB2_ReturnToFieldWithOpenMenu);
        DestroyTask(taskId);
    }
}

// This is our main initialization function if you want to call the menu from elsewhere
void SummaryScreen_Init(MainCallback callback)
{
    if ((sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }
    
    // initialize stuff
    sMenuDataPtr->gfxLoadState = 0;
    sMenuDataPtr->savedCallback = callback;
    sMenuDataPtr->currentPokemonIdx = 0;
    
    SetMainCallback2(Menu_RunSetup);
}

static void Menu_RunSetup(void)
{
    while (1)
    {
        if (Menu_DoGfxSetup() == TRUE)
            break;
    }
}

static void Menu_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void Menu_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static bool8 Menu_DoGfxSetup(void)
{
    u8 taskId;
    switch (gMain.state)
    {
    case 0:
        DmaClearLarge16(3, (void *)VRAM, VRAM_SIZE, 0x1000)
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
        ResetVramOamAndBgCntRegs();
        gMain.state++;
        break;
    case 1:
        ScanlineEffect_Stop();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        gMain.state++;
        break;
    case 2:
        if (Menu_InitBgs())
        {
            sMenuDataPtr->gfxLoadState = 0;
            gMain.state++;
        }
        else
        {
            Menu_FadeAndBail();
            return TRUE;
        }
        break;
    case 3:
        if (Menu_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        LoadMessageBoxAndBorderGfx();
        Menu_InitWindows();
        gMain.state++;
        break;
    case 5:
        PrintToWindow();
        taskId = CreateTask(Task_MenuWaitFadeIn, 0);
        BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    default:
        SetVBlankCallback(Menu_VBlankCB);
        SetMainCallback2(Menu_MainCB);
        return TRUE;
    }
    return FALSE;
}

#define try_free(ptr) ({        \
    void ** ptr__ = (void **)&(ptr);   \
    if (*ptr__ != NULL)                \
        Free(*ptr__);                  \
})

static void Menu_FreeResources(void)
{
    try_free(sMenuDataPtr);
    FreeAllWindowBuffers();
}

static void Task_MenuWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMenuDataPtr->savedCallback);
        Menu_FreeResources();
        DestroyTask(taskId);
    }
}

static void Menu_FadeAndBail(void)
{
    BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_MenuWaitFadeAndBail, 0);
    SetVBlankCallback(Menu_VBlankCB);
    SetMainCallback2(Menu_MainCB);
}

enum{
	BACKGROUND_WINDOWS,
	BACKGROUND_NORMAL,
	BACKGROUND_TRANSPARENT,
	NUM_EXTRA_BACKGROUNDS,
};

static bool8 Menu_InitBgs(void)
{
    u8 i;
    ResetBgsAndClearDma3BusyFlags(0);
    ResetAllBgsCoordinates();

    InitBgsFromTemplates(0, sMenuBgTemplates, ARRAY_COUNT(sMenuBgTemplates));

    SetNormalBackground();
    SetTransparentBackground();

    return TRUE;
}

static void SetNormalBackground(){
    SetBgAttribute(BACKGROUND_NORMAL, BG_ATTR_PRIORITY, BACKGROUND_NORMAL);
    SetBgTilemapBuffer(BACKGROUND_NORMAL, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
    ScheduleBgCopyTilemapToVram(BACKGROUND_NORMAL);

    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);

    ShowBg(0);
    ShowBg(BACKGROUND_NORMAL);
	ChangeBgX(BACKGROUND_NORMAL, 0, 1);
	ChangeBgY(BACKGROUND_NORMAL, 0, 1);
}

#define START_MENU_TRANSPARENCY_STRENGTH 9
static void SetTransparentBackground(){
    SetBgAttribute(BACKGROUND_TRANSPARENT, BG_ATTR_PRIORITY, START_MENU_BG_TRANSPARENT);
    SetBgTilemapBuffer(BACKGROUND_TRANSPARENT, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_NORMAL]);
    ScheduleBgCopyTilemapToVram(BACKGROUND_TRANSPARENT);

    //Transparency
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_BLEND | BLDCNT_TGT2_ALL | BLDCNT_TGT1_BG1); //Blend Background over the rest
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(START_MENU_TRANSPARENCY_STRENGTH, START_MENU_TRANSPARENCY_STRENGTH));
    SetGpuRegBits(REG_OFFSET_WININ, WININ_WIN0_CLR);

    ShowBg(BACKGROUND_TRANSPARENT);
    ChangeBgX(BACKGROUND_TRANSPARENT, 0, 0);
    ChangeBgY(BACKGROUND_TRANSPARENT, 0, 0);
}

static bool8 Menu_LoadGraphics(void)
{
    switch (sMenuDataPtr->gfxLoadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        DecompressAndCopyTileDataToVram(1, sMenuTiles, 0, 0, 0);
        sMenuDataPtr->gfxLoadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sMenuTilemap_Background_0, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_NORMAL]);
            sMenuDataPtr->gfxLoadState++;
        }
        break;
    case 2:
		//Load Background
        LZDecompressWram(sMenuTilemap_Pokemon_Info, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
        sMenuDataPtr->gfxLoadState++;
        break;
    case 3:
        LoadPalette(sMenuPalette, 0, 32);
        sMenuDataPtr->gfxLoadState++;
        break;
    default:
        sMenuDataPtr->gfxLoadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void Menu_InitWindows(void)
{
    u32 i;

    InitWindows(sMenuWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
    
    FillWindowPixelBuffer(WINDOW_1, 0);
    LoadUserWindowBorderGfx(WINDOW_1, 720, 14 * 16);
    PutWindowTilemap(WINDOW_1);
    CopyWindowToVram(WINDOW_1, 3);
    
    ScheduleBgCopyTilemapToVram(2);
}

enum{
    SUMMARY_SCREEN_PAGE_POKEMON_INFO,
    SUMMARY_SCREEN_PAGE_TRAITS,
    SUMMARY_SCREEN_PAGE_HELD_ITEMS,
    SUMMARY_SCREEN_PAGE_BATTLE_MOVES,
    SUMMARY_SCREEN_PAGE_POKEMON_STATS,
    SUMMARY_SCREEN_PAGE_POKEMON_SKILLS,
    NUM_SUMMARY_SCREEN_PAGES,
};

/*
#define STRINGLIST_MAX_LENGHT 20

struct StringList
{
    const u8 *string;
};

struct StringList sSummaryScreen_Title[NUM_SUMMARY_SCREEN_PAGES] =
{
	[SUMMARY_SCREEN_PAGE_POKEMON_INFO]   = COMPOUND_STRING("POKEMON INFO"),
	[SUMMARY_SCREEN_PAGE_TRAITS]         = COMPOUND_STRING("TRAITS"),
	[SUMMARY_SCREEN_PAGE_HELD_ITEMS]     = COMPOUND_STRING("HELD ITEMS"),
	[SUMMARY_SCREEN_PAGE_BATTLE_MOVES]   = COMPOUND_STRING("BATTLE MOVES"),
	[SUMMARY_SCREEN_PAGE_POKEMON_STATS]  = COMPOUND_STRING("POKEMON STATS"),
	[SUMMARY_SCREEN_PAGE_POKEMON_SKILLS] = COMPOUND_STRING("POKEMON SKILLS"),
};
*/

void LoadTilemapFromMode(void) {
    try_free(sMenuDataPtr->bgTilemapBuffers[BACKGROUND_NORMAL]);

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMenuBgTemplates, NELEMS(sMenuBgTemplates));
    SetBgTilemapBuffer(BACKGROUND_NORMAL, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
    ScheduleBgCopyTilemapToVram(BACKGROUND_NORMAL);

    ShowBg(0);
    ShowBg(1);
    ShowBg(2);

    switch (sMenuDataPtr->currentPage) {
        case SUMMARY_SCREEN_PAGE_POKEMON_INFO:
            LZDecompressWram(sMenuTilemap_Pokemon_Info, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
        break;
        case SUMMARY_SCREEN_PAGE_TRAITS:
            LZDecompressWram(sMenuTilemap_Pokemon_Traits, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
        break;
        case SUMMARY_SCREEN_PAGE_HELD_ITEMS:
            LZDecompressWram(sMenuTilemap_Held_Items, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
        break;
        case SUMMARY_SCREEN_PAGE_BATTLE_MOVES:
            LZDecompressWram(sMenuTilemap_Battle_Moves, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
        break;
        case SUMMARY_SCREEN_PAGE_POKEMON_STATS:
            LZDecompressWram(sMenuTilemap_Pokemon_Stats, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
        break;
        case SUMMARY_SCREEN_PAGE_POKEMON_SKILLS:
            LZDecompressWram(sMenuTilemap_Pokemon_Skills, sMenuDataPtr->bgTilemapBuffers[START_MENU_BG_TRANSPARENT]);
        break;
    }
}
static const u8 sText_Page_Title_01[] = _("POKEMON INFO");
static const u8 sText_Page_Title_02[] = _("TRAITS");
static const u8 sText_Page_Title_03[] = _("HELD ITEMS");
static const u8 sText_Page_Title_04[] = _("BATTLE MOVES");
static const u8 sText_Page_Title_05[] = _("POKEMON STATS");
static const u8 sText_Page_Title_06[] = _("POKEMON SKILLS");

static const u8 sText_Summary_Name[] = _("{STR_VAR_1}\n/{STR_VAR_2}");

static const u8 sText_MyMenu_Text_1[] = _("PP35/35");
static const u8 sText_MyMenu_Text_2[] = _("PROFILE");
static const u8 sText_MyMenu_Text_3[] = _("TRAINER MEMO");
static const u8 sText_MyMenu_Text_4[] = _("Lax nature,\nmet at Lv5\nRoute 1.");
static const u8 sText_MyMenu_Text_6[] = _("No.004");
static const u8 sText_MyMenu_Text_7[] = _("If attacked, it strikes back");
static const u8 sText_MyMenu_Text_8[] = _("MOVES");
static const u8 sText_MyMenu_Text_9[] = _("DESCRIPTION");

static void PrintToWindow(void)
{
    u8 windowId = WINDOW_1;
    u8 colorIdx = FONT_WHITE;
    u8 i;
    u8 font = FONT_NORMAL;
    u8 x, x2, y, y2 = 0;
    u8 currentPage = sMenuDataPtr->currentPage;
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species = GetMonData(mon, MON_DATA_SPECIES);
	u16 abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);
    
    FillWindowPixelBuffer(windowId, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    //Title
    x  = 0;
    x2 = 2;
    y  = 0;
    y2 = 0;
    switch(currentPage){
        case SUMMARY_SCREEN_PAGE_POKEMON_INFO:
            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Page_Title_01);
        break;
        case SUMMARY_SCREEN_PAGE_TRAITS:
            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Page_Title_02);
        break;
        case SUMMARY_SCREEN_PAGE_HELD_ITEMS:
            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Page_Title_03);
        break;
        case SUMMARY_SCREEN_PAGE_BATTLE_MOVES:
            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Page_Title_04);
        break;
        case SUMMARY_SCREEN_PAGE_POKEMON_STATS:
            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Page_Title_05);
        break;
        case SUMMARY_SCREEN_PAGE_POKEMON_SKILLS:
            AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Page_Title_06);
        break;
    }

    //Pokemon Number
    x  = 1;
    x2 = 0;
    y  = 2;
    y2 = 0;
    
	ConvertIntToDecimalStringN(gStringVar1, species, STR_CONV_MODE_LEADING_ZEROS, 4);
    AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar1);

    //Pokemon Name
    x  = 1;
    x2 = 0;
    y  = 12;
    y2 = 0;

    StringCopy(gStringVar1, GetSpeciesName(species));
    StringCopy(gStringVar2, GetSpeciesName(species));
	StringExpandPlaceholders(gStringVar4, sText_Summary_Name);
    AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);

    switch(currentPage){
        case SUMMARY_SCREEN_PAGE_POKEMON_INFO:
            //Profile
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 6;
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_MyMenu_Text_2);

            //Profile Text
            x  = 11;
            x2 = 0;
            y  = 5;
            y2 = 0;
            AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_MyMenu_Text_7);

            //Trainer Memo
            x  = 14;
            x2 = 0;
            y  = 10;
            y2 = 6;
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_MyMenu_Text_3);

            //Trainer Memo Text
            x  = 11;
            x2 = 0;
            y  = 13;
            y2 = 0;
            AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_MyMenu_Text_4);
        break;
        case SUMMARY_SCREEN_PAGE_TRAITS:
        {
            u16 trait;

            //Ability Name and Description
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 7;
            for(i = 0; i < 4; i++){
                if (i == 0)
                    trait = GetAbilityBySpecies(species, abilityNum);
                else if (i <= MAX_MON_INNATES)
                    trait = gSpeciesInfo[species].innates[i - 1];

                AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gAbilitiesInfo[trait].name);
                AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x - 3) * 8) + x2, ((y + 2)* 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gAbilitiesInfo[trait].description);
                y = y + 4;
            }
        }
        break;
        case SUMMARY_SCREEN_PAGE_HELD_ITEMS:
        {
            u16 heldItem;

            //Ability Name and Description
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 7;

            for(i = 0; i < 4; i++){
                switch(i){
                    case 0:
	                    heldItem = GetMonData(mon, MON_DATA_HELD_ITEM);
                    break;
                    case 1:
	                    heldItem = GetMonData(mon, MON_DATA_HELD_ITEM_2);
                    break;
                    case 2:
	                    heldItem = GetMonData(mon, MON_DATA_HELD_ITEM_3);
                    break;
                    case 3:
	                    heldItem = GetMonData(mon, MON_DATA_HELD_ITEM_4);
                    break;
                }
                AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gItemsInfo[heldItem].name);
                AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x - 3) * 8) + x2, ((y + 2)* 8) + y2 - 4, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gItemsInfo[heldItem].description); //Needs to use 1 line
                y = y + 4;
            }
        }
        break;
        case SUMMARY_SCREEN_PAGE_BATTLE_MOVES:
        {
            u16 move;
            bool8 shouldDisplayDescriptin = FALSE;
            u8 descriptionMoveIdx = 0;

            //Battle Move Names and PP
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 6;
            
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_MyMenu_Text_8);

            //Battle Move Names and PP
            x  = 15;
            x2 = 3;
            y  = 5;
            y2 = 0;
            
            for(i = 0; i < 4; i++){
	            move = GetMonData(mon, MON_DATA_MOVE1 + i);
                AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, GetMoveName(move));
                AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x + 9) * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_MyMenu_Text_1);
                y = y + 2;
            }

            //Description
            x  = 14;
            x2 = 0;
            y  = 13;
            y2 = 6;
            
            if(shouldDisplayDescriptin){
                move = GetMonData(mon, MON_DATA_MOVE1 + descriptionMoveIdx);
                AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_MyMenu_Text_9);
                AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x - 3) * 8) + x2, ((y + 2)* 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, GetMoveDescription(move));
            }
        }
        break;
    }

    //Icons
    x  = 12;
    x2 = 0;
    y  = 0;
    y2 = 0;

    if(currentPage != 0)
	    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Red_1_Gfx, (x * 8) + x2 + 1, (y * 8) + y2, 16, 16);

    for(i = 0; i < NUM_SUMMARY_SCREEN_PAGES; i++){
        if(i < currentPage){
            u8 newX = i + 1;
            if(newX == (currentPage))
	            BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Red_Gfx,   ((x + (newX * 2)) * 8) + x2 + 1, (y * 8) + y2, 16, 16);
            else
	            BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Red_1_Gfx, ((x + (newX * 2)) * 8) + x2 + 1, (y * 8) + y2, 16, 16);
        }

        switch(i){
            case SUMMARY_SCREEN_PAGE_POKEMON_INFO:
                if(i == currentPage)
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_01_Enabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
                else
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_01_Disabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
            break;
            case SUMMARY_SCREEN_PAGE_TRAITS:
                if(i == currentPage)
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_02_Enabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
                else
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_02_Disabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
            break;
            case SUMMARY_SCREEN_PAGE_HELD_ITEMS:
                if(i == currentPage)
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_03_Enabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
                else
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_03_Disabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
            break;
            case SUMMARY_SCREEN_PAGE_BATTLE_MOVES:
                if(i == currentPage)
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_04_Enabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
                else
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_04_Disabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
            break;
            case SUMMARY_SCREEN_PAGE_POKEMON_STATS:
                if(i == currentPage)
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_05_Enabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
                else
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_05_Disabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
            break;
            case SUMMARY_SCREEN_PAGE_POKEMON_SKILLS:
                if(i == currentPage)
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_06_Enabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
                else
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_06_Disabled_Gfx, ((x + (i * 2)) * 8) + x2, (y * 8) + y2, 16, 16);
            break;
        }
    }

    PutWindowTilemap(windowId);
    CopyWindowToVram(windowId, 3);
}

static void Task_MenuWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_MenuMain;
}

static void Task_MenuTurnOff(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (!gPaletteFade.active)
    {
        SetMainCallback2(sMenuDataPtr->savedCallback);
        Menu_FreeResources();
        DestroyTask(taskId);
    }
}

u8 GetPlayerUsableMons(void)
{
    int i;
	u8 PartySize = 0;
    u16 species;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES);

        if (species == SPECIES_NONE || species == SPECIES_EGG)
        {
            PartySize++;
        }
    }
    return PartySize;
}

/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    u8 partySize = PARTY_SIZE;
    if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_MenuTurnOff;
    }

    if (JOY_NEW(DPAD_RIGHT))
    {
        PlaySE(SE_SELECT);
        if(sMenuDataPtr->currentPage < NUM_SUMMARY_SCREEN_PAGES - 1)
            sMenuDataPtr->currentPage++;
        else
            sMenuDataPtr->currentPage = 0;
        PrintToWindow();
        LoadTilemapFromMode();
    }

    if (JOY_NEW(DPAD_LEFT))
    {
        PlaySE(SE_SELECT);
        if(sMenuDataPtr->currentPage != 0)
            sMenuDataPtr->currentPage--;
        else
            sMenuDataPtr->currentPage = NUM_SUMMARY_SCREEN_PAGES - 1;
        PrintToWindow();
        LoadTilemapFromMode();
    }

    if (JOY_NEW(DPAD_DOWN))
    {
        PlaySE(SE_SELECT);
        if(sMenuDataPtr->currentPokemonIdx < GetPlayerUsableMons())
            sMenuDataPtr->currentPokemonIdx++;
        else
            sMenuDataPtr->currentPokemonIdx = 0;
        PrintToWindow();
        LoadTilemapFromMode();
    }

    if (JOY_NEW(DPAD_UP))
    {
        PlaySE(SE_SELECT);
        if(sMenuDataPtr->currentPokemonIdx != 0)
            sMenuDataPtr->currentPokemonIdx--;
        else
            sMenuDataPtr->currentPokemonIdx = GetPlayerUsableMons();
        PrintToWindow();
        LoadTilemapFromMode();
    }
}