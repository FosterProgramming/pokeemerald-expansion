#include "global.h"
#include "ui_summary_screen.h"
#include "battle_main.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "dynamic_placeholder_text_util.h"
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
#include "region_map.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "trainer_pokemon_sprites.h"
#include "text_window.h"
#include "overworld.h"
#include "pokeball.h"
#include "event_data.h"
#include "constants/abilities.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/moves.h"
#include "constants/rgb.h"
#include "data/pokemon/party_members.h"

enum{
	START_MENU_BG_NORMAL,
	START_MENU_BG_TRANSPARENT,
	NUM_SUMMARY_BACKGROUNDS,
};

enum{
    SUMMARY_SPRITE_POKEBALL,
    SUMMARY_SPRITE_POKEMON,
    SUMMARY_SPRITE_HELD_ITEM_1,
    SUMMARY_SPRITE_HELD_ITEM_2,
    SUMMARY_SPRITE_HELD_ITEM_3,
    SUMMARY_SPRITE_HELD_ITEM_4,
    SUMMARY_SPRITE_MOVE_TYPE_ICON_1,
    SUMMARY_SPRITE_MOVE_TYPE_ICON_2,
    SUMMARY_SPRITE_MOVE_TYPE_ICON_3,
    SUMMARY_SPRITE_MOVE_TYPE_ICON_4,
    NUM_SUMMARY_SPRITES,
};

enum{
    SUMMARY_MODE_DEFAULT,
    SUMMARY_MODE_MOVE_SELECT,
    SUMMARY_MODE_MOVE_CHANGER,
    SUMMARY_MODE_EV_MODIFIER,
    SUMMARY_MODE_SKILL_MODIFIER,
    SUMMARY_MODE_ABILITY_CHANGER,
};
 
//==========DEFINES==========//
struct MenuResources
{
    MainCallback savedCallback;     // determines callback to run when we exit. e.g. where do we want to go after closing the menu
    u8 gfxLoadState;
    //Graphics Data
	u16 bgTilemapBuffers[NUM_SUMMARY_BACKGROUNDS][0x400];
    u16 spriteIDs[NUM_SUMMARY_SPRITES];
    //Default
    struct PartyMemberData sPartyMembers[NUM_PARTY_MEMBERS];
    u8 currentPokemonIdx;
    u8 currentPage;
    u8 summaryMode;
    //Ability Screen
    u8 currentAbilityIdx;
    u16 newAbility;
    //Stat Screen
    u8 currentStat;
    //Move Screen
    u8 currentMoveIdx;
    u8 moveToSwap;
    u16 newMove;
    //Skill Screen
    u8 currentSkill;
    u8 firstSkill;
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
static u8 CreateSummaryMonSprite(struct Pokemon *unused);
static void CreateCaughtBallSprite(struct Pokemon *mon);
static void CreateHeldItemIcons(struct Pokemon *mon);
static void CreateHeldItemIcon(u16 item, u8 iconSlot);

static void SetNormalBackground(void);
static void SetTransparentBackground(void);
static void CreateMoveTypeIcons(void);
static void SetMoveTypeIcons(struct Pokemon *mon);
static u16 GetCurrentMonRemainingEVs(void);

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

static const u8 sSummaryScreen_Icon_Red_Gfx[]              = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_red.4bpp");
static const u8 sSummaryScreen_Icon_Red_1_Gfx[]            = INCBIN_U8("graphics/ui_menus/summary_screen/icons/icon_red_1.4bpp");

static const u8 sSummaryScreen_Icon_Move_Selector_1_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/move_selector_1.4bpp");
static const u8 sSummaryScreen_Icon_Move_Selector_2_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/move_selector_2.4bpp");
static const u8 sSummaryScreen_Icon_Move_Selector_3_Gfx[]  = INCBIN_U8("graphics/ui_menus/summary_screen/icons/move_selector_3.4bpp");

static const u8 sSummaryScreen_Icon_Move_Selector2_1_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/move_selector2_1.4bpp");
static const u8 sSummaryScreen_Icon_Move_Selector2_2_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/move_selector2_2.4bpp");
static const u8 sSummaryScreen_Icon_Move_Selector2_3_Gfx[] = INCBIN_U8("graphics/ui_menus/summary_screen/icons/move_selector2_3.4bpp");

static const u8 sSummaryScreen_Icon_Slider_0_Gfx[]         = INCBIN_U8("graphics/ui_menus/summary_screen/icons/slider_0.4bpp");
static const u8 sSummaryScreen_Icon_Slider_1_Gfx[]         = INCBIN_U8("graphics/ui_menus/summary_screen/icons/slider_1.4bpp");

static const u8 sSummaryScreen_Icon_Select_Button_Gfx[]    = INCBIN_U8("graphics/ui_menus/summary_screen/icons/select_button.4bpp");
static const u8 sSummaryScreen_Icon_Marking_0_Gfx[]        = INCBIN_U8("graphics/ui_menus/summary_screen/icons/marking_0.4bpp");
static const u8 sSummaryScreen_Icon_Marking_1_Gfx[]        = INCBIN_U8("graphics/ui_menus/summary_screen/icons/marking_1.4bpp");
static const u8 sSummaryScreen_Icon_Marking_2_Gfx[]        = INCBIN_U8("graphics/ui_menus/summary_screen/icons/marking_2.4bpp");
static const u8 sSummaryScreen_Icon_Marking_3_Gfx[]        = INCBIN_U8("graphics/ui_menus/summary_screen/icons/marking_3.4bpp");

static const u8 sSummaryScreen_Icon_Skill_Move_Gfx[]       = INCBIN_U8("graphics/ui_menus/summary_screen/icons/skills/move.4bpp");
static const u8 sSummaryScreen_Icon_Skill_Ability_Gfx[]    = INCBIN_U8("graphics/ui_menus/summary_screen/icons/skills/ability.4bpp");
static const u8 sSummaryScreen_Icon_Skill_Stat_Gfx[]       = INCBIN_U8("graphics/ui_menus/summary_screen/icons/skills/stat.4bpp");
static const u8 sSummaryScreen_Icon_Skill_Cap_Gfx[]        = INCBIN_U8("graphics/ui_menus/summary_screen/icons/skills/ev_cap.4bpp");
static const u8 sSummaryScreen_Icon_Skill_Locked_Gfx[]     = INCBIN_U8("graphics/ui_menus/summary_screen/icons/skills/locked.4bpp");


enum Colors
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_RED,
    FONT_RED_2,
    FONT_BLUE,
    FONT_BLUE_2,
};

static const u8 sMenuWindowFontColors[][3] = 
{
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT,   1,   2},
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT,  14,   1},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT,   7,   6},
    [FONT_RED_2]  = {TEXT_COLOR_TRANSPARENT,   7,   2},
    [FONT_BLUE]   = {TEXT_COLOR_TRANSPARENT,  10,   9},
    [FONT_BLUE_2] = {TEXT_COLOR_TRANSPARENT,  10,   2},
};

#define DEFAULT_MAX_SKILL_POINTS 50

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
    u8 i, j;
    if ((sMenuDataPtr = AllocZeroed(sizeof(struct MenuResources))) == NULL)
    {
        SetMainCallback2(callback);
        return;
    }
    
    // initialize stuff
    sMenuDataPtr->gfxLoadState = 0;
    sMenuDataPtr->savedCallback = callback;
    sMenuDataPtr->currentPokemonIdx = 0;
    sMenuDataPtr->currentMoveIdx = 0;
    sMenuDataPtr->summaryMode = SUMMARY_MODE_DEFAULT;
    sMenuDataPtr->currentStat = STAT_HP;
    sMenuDataPtr->moveToSwap = 0xFF;

    sMenuDataPtr->currentSkill = 0;
    sMenuDataPtr->firstSkill = 0;

    sMenuDataPtr->currentAbilityIdx = 0;
    sMenuDataPtr->newAbility = ABILITY_NONE;
    sMenuDataPtr->newMove = MOVE_NONE;
    
    for(i = 0; i < NUM_PARTY_MEMBERS; i++){
        u16 species = sPartyMembersToSpecies[i];
        u8 abilityNum = 0;

        sMenuDataPtr->sPartyMembers[i].maxSkillPoints       = DEFAULT_MAX_SKILL_POINTS;
        sMenuDataPtr->sPartyMembers[i].remainingSkillPoints = DEFAULT_MAX_SKILL_POINTS;

        for(j = 0; j < MAX_MON_INNATES + 1; j++){
            if (j == 0)
                sMenuDataPtr->sPartyMembers[i].abilities[j] = GetAbilityBySpecies(species, abilityNum);
            else if (j <= MAX_MON_INNATES)
                sMenuDataPtr->sPartyMembers[i].abilities[j] = gSpeciesInfo[species].innates[j - 1];
        }
    }

    for(i = 0; i < NUM_SUMMARY_SPRITES; i++)
        sMenuDataPtr->spriteIDs[i] = SPRITE_NONE;
    
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

#define TAG_MOVE_TYPES    30002
const struct CompressedSpriteSheet gSpriteSheet_MoveTypesUI =
{
    .data = gMoveTypes_Gfx,
    .size = (NUMBER_OF_MON_TYPES) * 0x100,
    .tag = TAG_MOVE_TYPES
};

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
        LoadCompressedPalette(gMoveTypes_Pal, OBJ_PLTT_ID(13), 3 * PLTT_SIZE_4BPP);
        LoadCompressedSpriteSheet(&gSpriteSheet_MoveTypesUI);
        CreateMoveTypeIcons();
        SetMoveTypeIcons(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
        sMenuDataPtr->gfxLoadState++;
        break;
    case 4:
        LoadPalette(sMenuPalette, 0, 32);
        CreateSummaryMonSprite(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
        CreateCaughtBallSprite(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
        CreateHeldItemIcons(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
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

// Pokemon Front Sprite Stuff Start -----------------------------------------------------
static void SpriteCB_Pokemon(struct Sprite *sprite)
{
    if (!gPaletteFade.active && sprite->data[2] != 1)
    {
        sprite->data[1] = IsMonSpriteNotFlipped(sprite->data[0]);
        //PlayMonCry();
        //PokemonSummaryDoMonAnimation(sprite, sprite->data[0], FALSE);
    }
}

#define POKEMON_BACK_SPRITE_X 40
#define POKEMON_BACK_SPRITE_Y 65
#define POKEMON_FRONT_SPRITE_PALETTE 15
#define TAG_FRONT_SPRITE     0xFFFF

static u8 CreateSummaryMonSprite(struct Pokemon *mon)
{
    u16 spriteID = SUMMARY_SPRITE_POKEMON;

    u16 species = GetMonData(mon, MON_DATA_SPECIES);
    u32 personality = GetMonData(mon, MON_DATA_PERSONALITY);
    bool8 isShiny = GetMonData(mon, MON_DATA_IS_SHINY);

    if(sMenuDataPtr->spriteIDs[spriteID] != SPRITE_NONE)
    {
        u8 currentSprite = sMenuDataPtr->spriteIDs[spriteID];
        FreeSpriteTilesByTag(TAG_FRONT_SPRITE);
        FreeSpritePaletteByTag(TAG_FRONT_SPRITE);

        FreeSpriteOamMatrix(&gSprites[currentSprite]);
        DestroySpriteAndFreeResources(&gSprites[currentSprite]);

        FreeAndDestroyTrainerPicSprite(currentSprite);
        sMenuDataPtr->spriteIDs[spriteID] = SPRITE_NONE;
    }

    sMenuDataPtr->spriteIDs[spriteID] = CreateMonPicSprite(species, isShiny, personality, TRUE, POKEMON_BACK_SPRITE_X, POKEMON_BACK_SPRITE_Y, POKEMON_FRONT_SPRITE_PALETTE, TAG_FRONT_SPRITE);

    if (!IsMonSpriteNotFlipped(species))
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].hFlip = TRUE;
    else
        gSprites[sMenuDataPtr->spriteIDs[spriteID]].hFlip = FALSE;

    gSprites[sMenuDataPtr->spriteIDs[spriteID]].callback = SpriteCB_Pokemon;
    gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.priority = 0;
    gSprites[sMenuDataPtr->spriteIDs[spriteID]].data[0] = species;
    gSprites[sMenuDataPtr->spriteIDs[spriteID]].data[2] = 0;
    gSprites[sMenuDataPtr->spriteIDs[spriteID]].invisible = FALSE;


    return sMenuDataPtr->spriteIDs[spriteID];
}
// Pokemon Front Sprite Stuff End -----------------------------------------------------
static void CreateCaughtBallSprite(struct Pokemon *mon)
{
    u8 ball = GetMonData(mon, MON_DATA_POKEBALL);
    u16 spriteID = SUMMARY_SPRITE_POKEBALL;

    LoadBallGfx(ball);

    sMenuDataPtr->spriteIDs[spriteID] = CreateSprite(&gBallSpriteTemplates[ball], 16, 136, 0);
    gSprites[sMenuDataPtr->spriteIDs[spriteID]].callback = SpriteCallbackDummy;
    gSprites[sMenuDataPtr->spriteIDs[spriteID]].oam.priority = 0;
}

// Held Items ---------------
static void CreateHeldItemIcons(struct Pokemon *mon)
{
    u8 i;
    u16 helditem;
    for(i = 0; i < 4; i++){
        switch(i){
            case 0:
                helditem = GetMonData(mon, MON_DATA_HELD_ITEM);
            break;
            default:
                helditem = GetMonData(mon, MON_DATA_HELD_ITEM_2 + (i - 1));
            break;
        }
        CreateHeldItemIcon(helditem, i);
    }
}

static void SpriteCallback_HeldItems(struct Sprite* sprite)
{
    if (sMenuDataPtr->currentPage != SUMMARY_SCREEN_PAGE_HELD_ITEMS)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

#define TAG_ITEM_ICON     4100
static void CreateHeldItemIcon(u16 item, u8 iconSlot)
{
    u8 spriteId = SPRITE_NONE;
    u16 tag = TAG_ITEM_ICON + iconSlot;

    if(sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_HELD_ITEM_1 + iconSlot] != SPRITE_NONE)
    {
        FreeSpriteTilesByTag(tag);
        FreeSpritePaletteByTag(tag);
        FreeSpriteOamMatrix(&gSprites[sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_HELD_ITEM_1 + iconSlot]]);
        DestroySprite(&gSprites[sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_HELD_ITEM_1 + iconSlot]]);
        sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_HELD_ITEM_1 + iconSlot] = SPRITE_NONE;
    }

    if (item == ITEM_NONE){
        return;
    }
    else{
        spriteId = AddItemIconSprite(tag, tag, item);
        if (spriteId != MAX_SPRITES)
        {
            gSprites[spriteId].x2 = 224;
            gSprites[spriteId].y2 = 32 + (32 * iconSlot);
            gSprites[spriteId].callback = SpriteCallback_HeldItems;
        }
    }

    sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_HELD_ITEM_1 + iconSlot] = spriteId;
}
//

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

//Type Icons Stuff
static const struct OamData sOamData_MoveTypes =
{
    .y = 0,
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x16),
    .x = 0,
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x16),
    .tileNum = 0,
    .priority = 1,
    .paletteNum = 0,
    .affineParam = 0,
};

static const union AnimCmd sSpriteAnim_TypeNone[] = {
    ANIMCMD_FRAME(TYPE_NONE * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeNormal[] = {
    ANIMCMD_FRAME(TYPE_NORMAL * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeFighting[] = {
    ANIMCMD_FRAME(TYPE_FIGHTING * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeFlying[] = {
    ANIMCMD_FRAME(TYPE_FLYING * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypePoison[] = {
    ANIMCMD_FRAME(TYPE_POISON * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeGround[] = {
    ANIMCMD_FRAME(TYPE_GROUND * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeRock[] = {
    ANIMCMD_FRAME(TYPE_ROCK * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeBug[] = {
    ANIMCMD_FRAME(TYPE_BUG * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeGhost[] = {
    ANIMCMD_FRAME(TYPE_GHOST * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeSteel[] = {
    ANIMCMD_FRAME(TYPE_STEEL * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeMystery[] = {
    ANIMCMD_FRAME(TYPE_MYSTERY * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeFire[] = {
    ANIMCMD_FRAME(TYPE_FIRE * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeWater[] = {
    ANIMCMD_FRAME(TYPE_WATER * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeGrass[] = {
    ANIMCMD_FRAME(TYPE_GRASS * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeElectric[] = {
    ANIMCMD_FRAME(TYPE_ELECTRIC * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypePsychic[] = {
    ANIMCMD_FRAME(TYPE_PSYCHIC * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeIce[] = {
    ANIMCMD_FRAME(TYPE_ICE * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeDragon[] = {
    ANIMCMD_FRAME(TYPE_DRAGON * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeDark[] = {
    ANIMCMD_FRAME(TYPE_DARK * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeFairy[] = {
    ANIMCMD_FRAME(TYPE_FAIRY * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};
static const union AnimCmd sSpriteAnim_TypeStellar[] = {
    ANIMCMD_FRAME(TYPE_STELLAR * 8, 0, FALSE, FALSE),
    ANIMCMD_END
};

static const union AnimCmd *const sSpriteAnimTable_MoveTypes[NUMBER_OF_MON_TYPES] = {
    [TYPE_NONE]     = sSpriteAnim_TypeNone,
    [TYPE_NORMAL]   = sSpriteAnim_TypeNormal,
    [TYPE_FIGHTING] = sSpriteAnim_TypeFighting,
    [TYPE_FLYING]   = sSpriteAnim_TypeFlying,
    [TYPE_POISON]   = sSpriteAnim_TypePoison,
    [TYPE_GROUND]   = sSpriteAnim_TypeGround,
    [TYPE_ROCK]     = sSpriteAnim_TypeRock,
    [TYPE_BUG]      = sSpriteAnim_TypeBug,
    [TYPE_GHOST]    = sSpriteAnim_TypeGhost,
    [TYPE_STEEL]    = sSpriteAnim_TypeSteel,
    [TYPE_MYSTERY]  = sSpriteAnim_TypeMystery,
    [TYPE_FIRE]     = sSpriteAnim_TypeFire,
    [TYPE_WATER]    = sSpriteAnim_TypeWater,
    [TYPE_GRASS]    = sSpriteAnim_TypeGrass,
    [TYPE_ELECTRIC] = sSpriteAnim_TypeElectric,
    [TYPE_PSYCHIC]  = sSpriteAnim_TypePsychic,
    [TYPE_ICE]      = sSpriteAnim_TypeIce,
    [TYPE_DRAGON]   = sSpriteAnim_TypeDragon,
    [TYPE_DARK]     = sSpriteAnim_TypeDark,
    [TYPE_FAIRY]    = sSpriteAnim_TypeFairy,
    [TYPE_STELLAR]  = sSpriteAnim_TypeStellar,
};

const struct SpriteTemplate gSpriteTemplate_MoveTypesUI =
{
    .tileTag = TAG_MOVE_TYPES,
    .paletteTag = TAG_MOVE_TYPES,
    .oam = &sOamData_MoveTypes,
    .anims = sSpriteAnimTable_MoveTypes,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

static void SpriteCallback_MoveTypes(struct Sprite* sprite)
{
    if (sMenuDataPtr->currentPage != SUMMARY_SCREEN_PAGE_BATTLE_MOVES)
        sprite->invisible = TRUE;
    else
        sprite->invisible = FALSE;
}

void SetTypeSpritePosAndPalUI(u8 typeId, u8 x, u8 y, u8 spriteId)
{
    struct Sprite *sprite = &gSprites[spriteId];
    StartSpriteAnim(sprite, typeId);
    sprite->oam.paletteNum = gTypesInfo[typeId].palette;
    sprite->x = x + 16;
    sprite->y = y + 8;
    //gSprites[spriteId].callback = SpriteCallback_MoveTypes;
    sprite->callback = SpriteCallback_MoveTypes;
}

static void SetMoveTypeIcons(struct Pokemon *mon)
{
    u16 i, type, move, spriteId;

    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        move = GetMonData(mon, MON_DATA_MOVE1 + i, NULL);
        spriteId = sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_MOVE_TYPE_ICON_1 + i];
        if (move != MOVE_NONE)
        {
            type = GetMoveType(move);
            if (P_SHOW_DYNAMIC_TYPES)
                type = CheckDynamicMoveType(mon, move, 0);
            SetTypeSpritePosAndPalUI(type, 85, 40 + (i * 16), spriteId);
        }
        else{
            gSprites[spriteId].invisible = TRUE;
        }
    }
}

static void CreateMoveTypeIcons(void)
{
    u8 i;
    u16 spriteId = 0;

    for (i = 0; i < MAX_MON_MOVES; i++)
    { 
        if (sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_MOVE_TYPE_ICON_1 + i] == SPRITE_NONE){

            spriteId = CreateSprite(&gSpriteTemplate_MoveTypesUI, 0, 0, 2);
            sMenuDataPtr->spriteIDs[SUMMARY_SPRITE_MOVE_TYPE_ICON_1 + i] = spriteId;
            //MgbaPrintf(MGBA_LOG_WARN, "CreateMoveTypeIcons i = %d", spriteId);

            gSprites[spriteId].invisible = TRUE;
        }
    }
}

static const u8 sText_Page_Title_01[] = _("POKEMON INFO");
static const u8 sText_Page_Title_02[] = _("TRAITS");
static const u8 sText_Page_Title_03[] = _("HELD ITEMS");
static const u8 sText_Page_Title_04[] = _("BATTLE MOVES");
static const u8 sText_Page_Title_05[] = _("POKEMON STATS");
static const u8 sText_Page_Title_06[] = _("POKEMON SKILLS");

static const u8 sText_Summary_Name[]     = _("{STR_VAR_1}\n/{STR_VAR_2}");
static const u8 sText_Summary_PP[]       = _("{PP}{STR_VAR_1}/{STR_VAR_2}");
static const u8 sText_Summary_Num[]      = _("{NO}{STR_VAR_1}");
static const u8 sText_Summary_Level[]    = _("{LV_2}{STR_VAR_1}");
static const u8 sText_Summary_EVS_Left[] = _("EVS LEFT:{STR_VAR_1}");

static const u8 sText_Summary_Screen_Stats[]           = _("STATS");
static const u8 sText_Summary_Screen_Ivs[]             = _("IVS");
static const u8 sText_Summary_Screen_Extra[]           = _("EXTRA");
static const u8 sText_Summary_Screen_Evs[]             = _("EVS");
static const u8 sText_Summary_Screen_Reset_EVs[]       = _("RESET EVS");
static const u8 sText_Summary_Screen_Profile[]         = _("PROFILE");
static const u8 sText_Summary_Screen_Recruit_Info[]    = _("RECRUITMENT INFO");
static const u8 sText_Summary_Screen_Skills[]          = _("SKILLS");
static const u8 sText_Summary_Screen_Description[]     = _("DESCRIPTION");
static const u8 sText_Summary_Screen_Moves[]           = _("MOVES");

static const u8 sText_Summary_Screen_Remaining_Points[] = _("Points Left: {STR_VAR_1}");

static const u8 sText_Summary_Screen_Stat_HP[]         = _("HP");
static const u8 sText_Summary_Screen_Stat_Attack[]     = _("Attack");
static const u8 sText_Summary_Screen_Stat_Defense[]    = _("Defense");
static const u8 sText_Summary_Screen_Stat_SP_Attack[]  = _("Sp.Atk");
static const u8 sText_Summary_Screen_Stat_SP_Defense[] = _("Sp.Def");
static const u8 sText_Summary_Screen_Stat_Speed[]      = _("Speed");

static const u8 sText_Summary_Skill_Stat[]       = _("{STR_VAR_1} + {STR_VAR_2}");
static const u8 sText_Summary_Cap[]              = _("EVs Cap + {STR_VAR_1}");
static const u8 sText_Summary_Locked[]           = _("Skill Locked Until {LV_2}{STR_VAR_1}");
static const u8 sText_Summary_Skill_Points[]     = _("{STR_VAR_1} points");
static const u8 sText_Summary_Unlocked[]         = _("unlocked");

static const u8 sText_Summary_Skill_Description_Move[]    = _("Gives the Player the ability to\ngive the Pokémon this move at\nany time.");
static const u8 sText_Summary_Skill_Description_Ability[] = _("Gives the Player the ability to\ngive the Pokémon this ability\nat any time.");
static const u8 sText_Summary_Skill_Description_Stat[]    = _("Gives the Pokémon extra IVs");
static const u8 sText_Summary_Skill_Description_Cap[]     = _("Gives the Player more EVs to\nfreely invest on the Stat\nScreen.");
static const u8 sText_Summary_Skill_Description_Locked[]  = _("This skill is locked until you\nreach a certain level.");

//Trainer Memo Text Stuff
static const u8 sMemoNatureTextColor[] = _("{COLOR LIGHT_RED}{SHADOW GREEN}");
static const u8 sMemoMiscTextColor[] = _("{COLOR WHITE}{SHADOW DARK_GRAY}"); // This is also affected by palettes, apparently

static void GetMetLevelString(u8 *output, u8 level)
{
    if (level == 0)
        level = 1;
    ConvertIntToDecimalStringN(output, level, STR_CONV_MODE_LEFT_ALIGN, 3);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(3, output);
}

static void BufferNatureString(struct Pokemon *mon)
{
    u16 nature = GetMonData(mon, MON_DATA_HIDDEN_NATURE, NULL);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(2, gNaturesInfo[nature].name);
    DynamicPlaceholderTextUtil_SetPlaceholderPtr(5, gText_EmptyString5);
}

static void BufferMonTrainerMemo(struct Pokemon *mon)
{
    u16 metLocation = GetMonData(mon, MON_DATA_MET_LOCATION, NULL);
    u16 metLevel = GetMonData(mon, MON_DATA_MET_LEVEL, NULL);
    u8 *metLevelString = Alloc(32);
    u8 *metLocationString = Alloc(32);
    const u8 *text;

    DynamicPlaceholderTextUtil_Reset();
    //DynamicPlaceholderTextUtil_SetPlaceholderPtr(0, sMemoNatureTextColor);
    //DynamicPlaceholderTextUtil_SetPlaceholderPtr(1, sMemoMiscTextColor);
    BufferNatureString(mon);

    GetMetLevelString(metLevelString, metLevel);

    if (metLocation < MAPSEC_NONE)
    {
        GetMapNameHandleAquaHideout(metLocationString, metLocation);
        DynamicPlaceholderTextUtil_SetPlaceholderPtr(4, metLocationString);
    }

    if (metLevel == 0)
        text = (metLocation >= MAPSEC_NONE) ? gText_XNatureHatchedSomewhereAt : gText_XNatureHatchedAtYZ;
    else
        text = (metLocation >= MAPSEC_NONE) ? gText_XNatureMetSomewhereAt : gText_XNatureMetAtYZ;

    DynamicPlaceholderTextUtil_ExpandPlaceholders(gStringVar4, text);
    Free(metLevelString);
    Free(metLocationString);
}

#define SUMMARY_MOVE_SELECTOR_PARTS 18

u8 GetCorrectNatureOrderForIndex(u8 index){
    switch(index){
        case STAT_DEF + 1:
            return STAT_SPATK;
        break;
        case STAT_DEF + 2:
            return STAT_SPDEF;
        break;
        case STAT_DEF + 3:
            return STAT_SPEED;
        break;
    }

    return index;
}

u8 GetNumberOfPartyMemberDefinedSkills(u8 partyMember){
    u8 i;
    for(i = 0; i < MAX_SKILLS_PER_TREE; i++){
        if(sSkillTree[partyMember][i].skill_type == SKILL_TYPE_NONE)
            return i;
    }
    return MAX_SKILLS_PER_TREE;
}

u8 getCurrentPartyMember(u16 species){
    u8 i;

    //Special Case
    switch(species){
        case SPECIES_VAPOREON:
        case SPECIES_JOLTEON:
        case SPECIES_FLAREON:
            species = SPECIES_EEVEE;
        break;
    }

    for(i = 0; i < NUM_PARTY_MEMBERS; i++){
        if(sPartyMembersToSpecies[i] == species)
            return i;
    }

    return NUM_PARTY_MEMBERS;
}

#define SPACE_BETWEEN_MARKINGS 8
#define MAX_SHOWN_SKILLS 4

static void PrintToWindow(void)
{
    u8 windowId = WINDOW_1;
    u8 colorIdx = FONT_WHITE;
    u8 i;
    u8 font = FONT_NORMAL;
    u8 x, x2, y, y2 = 0;
    u8 currentPage = sMenuDataPtr->currentPage;
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species    = GetMonData(mon, MON_DATA_SPECIES);
	u16 abilityNum = GetMonData(mon, MON_DATA_ABILITY_NUM);
	u16 level      = GetMonData(mon, MON_DATA_LEVEL);
	u16 nature     = GetMonData(mon, MON_DATA_HIDDEN_NATURE);
    u8 gender      = GetMonGender(mon);
    u8 marking     = GetMonData(mon, MON_DATA_MARKINGS);
    u8 partyMember = getCurrentPartyMember(species);
    struct PartyMemberData sMemberData = sMenuDataPtr->sPartyMembers[partyMember];
    
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
	StringExpandPlaceholders(gStringVar4, sText_Summary_Num);
    AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);

    //Pokemon Name
    x  = 1;
    x2 = 0;
    y  = 12;
    y2 = 0;

    GetMonNickname(mon, gStringVar1);
    StringCopy(gStringVar2, GetSpeciesName(species));
	StringExpandPlaceholders(gStringVar4, sText_Summary_Name);
    AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);

    //Pokemon Level
    x  = 3;
    x2 = 4;
    y  = 16;
    y2 = 0;

	ConvertIntToDecimalStringN(gStringVar1, level, STR_CONV_MODE_LEFT_ALIGN, 3);
	StringExpandPlaceholders(gStringVar4, sText_Summary_Level);
    AddTextPrinterParameterized4(windowId, font, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);

    //Pokemon Gender
    if(species != SPECIES_NIDORAN_M && species != SPECIES_NIDORAN_F){
        if(gender == MON_MALE)
            AddTextPrinterParameterized4(windowId, font, ((x + 5) * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[FONT_BLUE], 0xFF, gText_MaleSymbol);
        else if(gender == MON_FEMALE)
            AddTextPrinterParameterized4(windowId, font, ((x + 5) * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[FONT_RED], 0xFF, gText_FemaleSymbol);
    }

    //Markings - ToDo
    x  = 5;
    x2 = 4;
    y  = 2;
    y2 = 6;

	BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Marking_0_Gfx, (x * 8) + x2 + (SPACE_BETWEEN_MARKINGS * 0), (y * 8) + y2, 8, 8);
	BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Marking_1_Gfx, (x * 8) + x2 + (SPACE_BETWEEN_MARKINGS * 1), (y * 8) + y2, 8, 8);
	BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Marking_2_Gfx, (x * 8) + x2 + (SPACE_BETWEEN_MARKINGS * 2), (y * 8) + y2, 8, 8);
	BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Marking_3_Gfx, (x * 8) + x2 + (SPACE_BETWEEN_MARKINGS * 3), (y * 8) + y2, 8, 8);

    switch(currentPage){
        case SUMMARY_SCREEN_PAGE_POKEMON_INFO:
            //Profile
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 6;
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Profile);

            //Profile Text
            x  = 11;
            x2 = 0;
            y  = 5;
            y2 = 0;

            switch(partyMember){
                case PARTY_MEMBER_PERSIAN:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Persian);
                break;
                case PARTY_MEMBER_EEVEE:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Eevee);
                break;
                case PARTY_MEMBER_DEWGONG:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Dewgong);
                break;
                case PARTY_MEMBER_SNORLAX:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Snorlax);
                break;
                case PARTY_MEMBER_HONCHKROW:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Honchkrow);
                break;
                case PARTY_MEMBER_GENGAR:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Gengar);
                break;
                case PARTY_MEMBER_HUMAN:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Human);
                break;
                default:
                    StringCopy(gStringVar1, sText_Summary_Screen_Profile_Generic);
                break;
            }

            AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar1);

            //Trainer Memo
            x  = 14;
            x2 = 0;
            y  = 10;
            y2 = 6;

            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Recruit_Info);

            //Trainer Memo Text
            x  = 11;
            x2 = 0;
            y  = 13;
            y2 = 0;
            BufferMonTrainerMemo(mon);
            AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);
        break;
        case SUMMARY_SCREEN_PAGE_TRAITS:
        {
            u16 trait;
            bool8 shouldDisplayDescription = sMenuDataPtr->summaryMode == SUMMARY_MODE_ABILITY_CHANGER;

            //Ability Name and Description
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 7;
            for(i = 0; i < MAX_MON_INNATES + 1; i++){
                trait = sMemberData.abilities[i];

                if(trait != ABILITY_NONE){
                    AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gAbilitiesInfo[trait].name);
                    AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x - 3) * 8) + x2, ((y + 2)* 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gAbilitiesInfo[trait].description);
                }

                if(shouldDisplayDescription && sMenuDataPtr->currentAbilityIdx == i){
                    u8 j;
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_1_Gfx, (x * 8) + x2 - 40, (y * 8) + y2, 8, 16);
                    for(j = 1; j < SUMMARY_MOVE_SELECTOR_PARTS; j++)
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_2_Gfx, ((x + j) * 8) + x2 - 40, (y * 8) + y2, 8, 16);
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_3_Gfx, ((x + j) * 8) + x2 - 40, (y * 8) + y2, 8, 16);
                }

                y = y + 4;
            }
        }
        break;
        case SUMMARY_SCREEN_PAGE_HELD_ITEMS:
        {
            u16 heldItem;

            //Item Name and Description
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
                if(heldItem != ITEM_NONE){
                    AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gItemsInfo[heldItem].name);
                    //AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x - 3) * 8) + x2, ((y + 2)* 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gItemsInfo[heldItem].description); //Needs to use 1 line
                    AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x - 3) * 8) + x2, ((y + 2)* 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gItemsInfo[heldItem].name); //Needs to use 1 line
                }
                y = y + 4;
            }
        }
        break;
        case SUMMARY_SCREEN_PAGE_BATTLE_MOVES:
        {
            u16 move;
            bool8 shouldDisplayDescriptin = sMenuDataPtr->summaryMode == SUMMARY_MODE_MOVE_SELECT || sMenuDataPtr->summaryMode == SUMMARY_MODE_MOVE_CHANGER;
            u8 descriptionMoveIdx = sMenuDataPtr->currentMoveIdx;

            //Battle Move Names and PP
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 6;
            
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Moves);

            //Battle Move Names and PP
            x  = 15;
            x2 = 3;
            y  = 5;
            y2 = 0;
            
            for(i = 0; i < 4; i++){
                u8 ppBonuses = GetMonData(mon, MON_DATA_PP_BONUSES, NULL);
                u8 currentPP = GetMonData(mon, MON_DATA_PP1 + i, NULL);
                u8 maxPP = 0;
                
	            move = GetMonData(mon, MON_DATA_MOVE1 + i);
                maxPP = CalculatePPWithBonus(move, ppBonuses, i);
                if(move != MOVE_NONE){
                    AddTextPrinterParameterized4(windowId, FONT_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, GetMoveName(move));

                    ConvertIntToDecimalStringN(gStringVar1, currentPP, STR_CONV_MODE_LEADING_ZEROS, 2);
                    ConvertIntToDecimalStringN(gStringVar2, maxPP, STR_CONV_MODE_LEADING_ZEROS, 2);
                    StringExpandPlaceholders(gStringVar4, sText_Summary_PP);
                    AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x + 9) * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);
                    if(shouldDisplayDescriptin && descriptionMoveIdx == i){
                        u8 j;
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_1_Gfx, (x * 8) + x2 - 40, (y * 8) + y2, 8, 16);
                        for(j = 1; j < SUMMARY_MOVE_SELECTOR_PARTS; j++)
	                        BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_2_Gfx, ((x + j) * 8) + x2 - 40, (y * 8) + y2, 8, 16);
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_3_Gfx, ((x + j) * 8) + x2 - 40, (y * 8) + y2, 8, 16);
                    }
                    else if(shouldDisplayDescriptin && sMenuDataPtr->moveToSwap == i){
                        u8 j;
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector2_1_Gfx, (x * 8) + x2 - 40, (y * 8) + y2, 8, 16);
                        for(j = 1; j < SUMMARY_MOVE_SELECTOR_PARTS; j++)
	                        BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector2_2_Gfx, ((x + j) * 8) + x2 - 40, (y * 8) + y2, 8, 16);
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector2_3_Gfx, ((x + j) * 8) + x2 - 40, (y * 8) + y2, 8, 16);
                    }
                }
                y = y + 2;
            }

            //Description
            x  = 14;
            x2 = 0;
            y  = 13;
            y2 = 6;
            
            if(shouldDisplayDescriptin){
                move = GetMonData(mon, MON_DATA_MOVE1 + descriptionMoveIdx);
                AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Description);
                AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x - 3) * 8) + x2, ((y + 2)* 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, GetMoveDescription(move));
            }
        }
        break;
        case SUMMARY_SCREEN_PAGE_POKEMON_STATS:
        {
            u16 stat;
            u8 fontColor = colorIdx;
            bool8 shouldDisplaySlider = sMenuDataPtr->summaryMode == SUMMARY_MODE_EV_MODIFIER;

            //IVs, EVs and current Stats
            x  = 14;
            x2 = 2;
            y  = 2;
            y2 = 6;
            
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8)        + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Stats);
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, ((x + 4) * 8)  + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Extra);
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, ((x + 8) * 8)  + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Stats);
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, ((x + 12) * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Evs);

            //Stat Numbers
            x  = 11;
            x2 = 0;
            y  = 5;
            y2 = 0;

            for(i = 0; i < NUM_STATS; i++){
                stat = GetCorrectNatureOrderForIndex(i);
	            ConvertIntToDecimalStringN(gStringVar3, sMemberData.extraStats[stat], STR_CONV_MODE_LEFT_ALIGN, 3);
                switch(stat){
                    case STAT_HP:
                        StringCopy(gStringVar1, sText_Summary_Screen_Stat_HP);
	                    ConvertIntToDecimalStringN(gStringVar2, GetMonData(mon, MON_DATA_HP),       STR_CONV_MODE_LEFT_ALIGN, 3);
	                    ConvertIntToDecimalStringN(gStringVar4, GetMonData(mon, MON_DATA_HP_EV),    STR_CONV_MODE_RIGHT_ALIGN, 3);
                    break;
                    case STAT_ATK:
                        StringCopy(gStringVar1, sText_Summary_Screen_Stat_Attack);
	                    ConvertIntToDecimalStringN(gStringVar2, GetMonData(mon, MON_DATA_ATK),      STR_CONV_MODE_LEFT_ALIGN, 3);
	                    ConvertIntToDecimalStringN(gStringVar4, GetMonData(mon, MON_DATA_ATK_EV),   STR_CONV_MODE_RIGHT_ALIGN, 3);
                    break;
                    case STAT_DEF:
                        StringCopy(gStringVar1, sText_Summary_Screen_Stat_Defense);
	                    ConvertIntToDecimalStringN(gStringVar2, GetMonData(mon, MON_DATA_DEF),      STR_CONV_MODE_LEFT_ALIGN, 3);
	                    ConvertIntToDecimalStringN(gStringVar4, GetMonData(mon, MON_DATA_DEF_EV),   STR_CONV_MODE_RIGHT_ALIGN, 3);
                    break;
                    case STAT_SPATK:
                        StringCopy(gStringVar1, sText_Summary_Screen_Stat_SP_Attack);
	                    ConvertIntToDecimalStringN(gStringVar2, GetMonData(mon, MON_DATA_SPATK),    STR_CONV_MODE_LEFT_ALIGN, 3);
	                    ConvertIntToDecimalStringN(gStringVar4, GetMonData(mon, MON_DATA_SPATK_EV), STR_CONV_MODE_RIGHT_ALIGN, 3);
                    break;
                    case STAT_SPDEF:
                        StringCopy(gStringVar1, sText_Summary_Screen_Stat_SP_Defense);
	                    ConvertIntToDecimalStringN(gStringVar2, GetMonData(mon, MON_DATA_SPDEF),    STR_CONV_MODE_LEFT_ALIGN, 3);
	                    ConvertIntToDecimalStringN(gStringVar4, GetMonData(mon, MON_DATA_SPDEF_EV), STR_CONV_MODE_RIGHT_ALIGN, 3);
                    break;
                    case STAT_SPEED:
                        StringCopy(gStringVar1, sText_Summary_Screen_Stat_Speed);
	                    ConvertIntToDecimalStringN(gStringVar2, GetMonData(mon, MON_DATA_SPEED),    STR_CONV_MODE_LEFT_ALIGN, 3);
	                    ConvertIntToDecimalStringN(gStringVar4, GetMonData(mon, MON_DATA_SPEED_EV), STR_CONV_MODE_RIGHT_ALIGN, 3);
                    break;
                }

                if(gNaturesInfo[nature].statDown == gNaturesInfo[nature].statUp)
                    fontColor = colorIdx;
                else if(stat == gNaturesInfo[nature].statUp)
                    fontColor = FONT_RED_2;
                else if(stat == gNaturesInfo[nature].statDown)
                    fontColor = FONT_BLUE_2;
                else
                    fontColor = colorIdx;
                
                AddTextPrinterParameterized4(windowId, FONT_NORMAL, (x * 8)        + x2, ((y + (i * 2)) * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar1);
                AddTextPrinterParameterized4(windowId, FONT_NORMAL, ((x + 9)  * 8) + x2, ((y + (i * 2)) * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar3);
                AddTextPrinterParameterized4(windowId, FONT_NORMAL, ((x + 12) * 8) + x2, ((y + (i * 2)) * 8) + y2, 0, 0, sMenuWindowFontColors[fontColor], 0xFF, gStringVar2);
                AddTextPrinterParameterized4(windowId, FONT_NORMAL, ((x + 15) * 8) + x2, ((y + (i * 2)) * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);

                if(shouldDisplaySlider && sMenuDataPtr->currentStat == i){
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Slider_0_Gfx, ((x + 14) * 8) + x2 - 1, ((y + (i * 2)) * 8) + y2, 8, 16);
	                BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Slider_1_Gfx, ((x + 17) * 8) + x2 + 3, ((y + (i * 2)) * 8) + y2, 8, 16);
                }
            }

            x  = 21;
            x2 = 0;
            y  = 18;
            y2 = 3;
	        BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Select_Button_Gfx, (x * 8) + x2 + 1, (y * 8) + y2, 24, 16);
            AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x + 3) * 8) + x2 + 3, (y * 8) + y2 - 2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Reset_EVs);

            x  = 9;
            x2 = 0;
            y  = 18;
            y2 = 3;
	        ConvertIntToDecimalStringN(gStringVar1, GetCurrentMonRemainingEVs(), STR_CONV_MODE_LEFT_ALIGN, 3);
            StringExpandPlaceholders(gStringVar4, sText_Summary_EVS_Left);
            AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x + 3) * 8) + x2, (y * 8) + y2 - 2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);
        }
        break;
        case SUMMARY_SCREEN_PAGE_POKEMON_SKILLS:{
            u8 selectSkillMode = sMenuDataPtr->summaryMode == SUMMARY_MODE_SKILL_MODIFIER;
            u8 numSkills = GetNumberOfPartyMemberDefinedSkills(partyMember);

            //Skills
            x  = 14;
            x2 = 0;
            y  = 2;
            y2 = 6;
            
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Skills);
            
            ConvertIntToDecimalStringN(gStringVar1, sMemberData.remainingSkillPoints, STR_CONV_MODE_LEFT_ALIGN, 4);
            StringExpandPlaceholders(gStringVar4, sText_Summary_Screen_Remaining_Points);
            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, ((x + 5) * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);

            //Skills
            x  = 10;
            x2 = 6;
            y  = 5;
            y2 = 3;
            for(i = 0; i < MAX_SHOWN_SKILLS; i++){
                u8 currentSkill = sMenuDataPtr->firstSkill + i;
                u8 currentSkillType = sSkillTree[partyMember][currentSkill].skill_type;
                u8 locked = sMemberData.unlockedSkills[currentSkill];

                switch(currentSkillType){
                    case SKILL_TREE_TYPE_MOVE:{
                        u16 move = sSkillTree[partyMember][currentSkill].skill;
                        StringCopy(gStringVar4, GetMoveName(move));
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Skill_Move_Gfx,    (x * 8) + x2, ((y + (i  * 2)) * 8) + y2, 40, 16);
                    }
                    break;
                    case SKILL_TREE_TYPE_ABILITY:{
                        u16 ability = sSkillTree[partyMember][currentSkill].skill;
                        StringCopy(gStringVar4, gAbilitiesInfo[ability].name);
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Skill_Ability_Gfx, (x * 8) + x2, ((y + (i  * 2)) * 8) + y2, 40, 16);
                    }
                    break;
                    case SKILL_TREE_TYPE_STAT:{
                        u16 stat = sSkillTree[partyMember][currentSkill].skill;
                        u16 extraStat = sSkillTree[partyMember][currentSkill].argument;

                        switch(stat){
                            case STAT_HP:
                                StringCopy(gStringVar1, sText_Summary_Screen_Stat_HP);
                            break;
                            case STAT_ATK:
                                StringCopy(gStringVar1, sText_Summary_Screen_Stat_Attack);
                            break;
                            case STAT_DEF:
                                StringCopy(gStringVar1, sText_Summary_Screen_Stat_Defense);
                            break;
                            case STAT_SPATK:
                                StringCopy(gStringVar1, sText_Summary_Screen_Stat_SP_Attack);
                            break;
                            case STAT_SPDEF:
                                StringCopy(gStringVar1, sText_Summary_Screen_Stat_SP_Defense);
                            break;
                            case STAT_SPEED:
                                StringCopy(gStringVar1, sText_Summary_Screen_Stat_Speed);
                            break;
                        }
                        
	                    ConvertIntToDecimalStringN(gStringVar2, extraStat, STR_CONV_MODE_LEFT_ALIGN, 3);
                        StringExpandPlaceholders(gStringVar4, sText_Summary_Skill_Stat);
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Skill_Stat_Gfx,    (x * 8) + x2, ((y + (i  * 2)) * 8) + y2, 40, 16);
                    }
                    break;
                    case SKILL_TREE_TYPE_CAP:{
                        u16 extraStat = sSkillTree[partyMember][currentSkill].skill;
	                    ConvertIntToDecimalStringN(gStringVar1, extraStat, STR_CONV_MODE_LEFT_ALIGN, 3);
                        StringExpandPlaceholders(gStringVar4, sText_Summary_Cap);
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Skill_Cap_Gfx,  (x * 8) + x2, ((y + (i  * 2)) * 8) + y2, 40, 16);
                    }
                    break;
                    default:
                        u16 level = sSkillTree[partyMember][currentSkill].unlockLevel;
	                    ConvertIntToDecimalStringN(gStringVar1, level, STR_CONV_MODE_LEFT_ALIGN, 3);
                        StringExpandPlaceholders(gStringVar4, sText_Summary_Locked);
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Skill_Locked_Gfx,  (x * 8) + x2, ((y + (i  * 2)) * 8) + y2, 40, 16);
                    break;
                }
                AddTextPrinterParameterized4(windowId, FONT_NARROW, ((x + 5) * 8) + x2, ((y + (i  * 2)) * 8) + y2 - 2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);

                if(!locked){
                    u8 pointsToUnlock = sSkillTree[partyMember][currentSkill].neededPoints;
	                ConvertIntToDecimalStringN(gStringVar1, pointsToUnlock, STR_CONV_MODE_LEFT_ALIGN, 3);
                    StringExpandPlaceholders(gStringVar4, sText_Summary_Skill_Points);
                    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, ((x + 13) * 8) + x2, ((y + (i  * 2)) * 8) + y2 - 2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);
                }
                else{
                    AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, ((x + 13) * 8) + x2, ((y + (i  * 2)) * 8) + y2 - 2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Unlocked);
                }

                if(selectSkillMode){
                    if(currentSkill == sMenuDataPtr->currentSkill){
                        u8 j;
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_1_Gfx, ((x + 4) * 8) + x2 - 34, ((y + (i * 2)) * 8) + y2 - 3, 8, 16);
                        for(j = 1; j < SUMMARY_MOVE_SELECTOR_PARTS; j++)
	                        BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_2_Gfx, ((x + 4 + j) * 8) + x2 - 34, ((y + (i * 2)) * 8) + y2 - 3, 8, 16);
	                    BlitBitmapToWindow(windowId, sSummaryScreen_Icon_Move_Selector_3_Gfx, (((x + 4) + j) * 8) + x2 - 34, ((y + (i * 2)) * 8) + y2 - 3, 8, 16);
                    }
                }
            }

            //Description
            x  = 14;
            x2 = 0;
            y  = 13;
            y2 = 6;

            AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, (x * 8) + x2, (y * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, sText_Summary_Screen_Description);
            
            if(selectSkillMode){
                u8 currentSkill = sMenuDataPtr->currentSkill;
                u8 currentSkillType = sSkillTree[partyMember][currentSkill].skill_type;
                switch(currentSkillType){
                    case SKILL_TREE_TYPE_MOVE:
                        StringCopy(gStringVar4, sText_Summary_Skill_Description_Move);
                    break;
                    case SKILL_TREE_TYPE_ABILITY:
                        StringCopy(gStringVar4, sText_Summary_Skill_Description_Ability);
                    break;
                    case SKILL_TREE_TYPE_STAT:
                        StringCopy(gStringVar4, sText_Summary_Skill_Description_Stat);
                    break;
                    case SKILL_TREE_TYPE_CAP:
                        StringCopy(gStringVar4, sText_Summary_Skill_Description_Cap);
                    break;
                    default:
                        StringCopy(gStringVar4, sText_Summary_Skill_Description_Locked);
                    break;
                }
                AddTextPrinterParameterized4(windowId, FONT_SMALL_NARROW, ((x - 3) * 8) + x2, ((y + 2) * 8) + y2, 0, 0, sMenuWindowFontColors[colorIdx], 0xFF, gStringVar4);
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
    u16 species;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES);

        if (species == SPECIES_NONE || species == SPECIES_EGG)
            return i;
    }
    return PARTY_SIZE;
}

u8 GetCurrentMonUsableMoves(void)
{
    u8 i;
    for (i = 0; i < MAX_MON_MOVES; i++)
    {
        if (GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_MOVE1 + i) == MOVE_NONE)
            return i;
    }
    return MAX_MON_MOVES;
}

static void Task_RefreshSummaryPage(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (data[0])
    {
    case 0:
        PrintToWindow();
        break;
    default:
        data[0] = 0;
        gTasks[taskId].func = Task_MenuMain;
        return;
    }
    data[0]++;
}

static void Task_ChangeSummaryPage(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    switch (data[0])
    {
    case 0:
        LoadTilemapFromMode();
        break;
    default:
        data[0] = 0;
        gTasks[taskId].func = Task_RefreshSummaryPage;
        return;
    }
    data[0]++;
}

static void Task_ChangeSummaryMon(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];

    switch (data[0])
    {
    case 0:
        CreateSummaryMonSprite(mon);
        break;
    case 1:
        SetMoveTypeIcons(mon);
        break;
    case 2:
        CreateCaughtBallSprite(mon);
        break;
    case 3:
        CreateHeldItemIcons(mon);
        break;
    default:
        data[0] = 0;
        PrintToWindow();
        gTasks[taskId].func = Task_ChangeSummaryPage;
        return;
    }
    data[0]++;
}

static void ResetCurrentMonEVs(void){
    u8 newEVs = 0;

    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV,    &newEVs);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_ATK_EV,   &newEVs);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_DEF_EV,   &newEVs);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPATK_EV, &newEVs);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPDEF_EV, &newEVs);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPEED_EV, &newEVs);
}

#define PARTY_EXTRA_EVS 252

static u16 GetCurrentMonRemainingEVs(void){
    u16 HP_Evs     = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV);
    u16 Atk_Evs    = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_ATK_EV);
    u16 Def_Evs    = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_DEF_EV);
    u16 SpA_Evs    = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPATK_EV);
    u16 SpD_Evs    = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPDEF_EV);
    u16 Speed_Evs  = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPEED_EV);
	u16 species    = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPECIES);
    u8 partyMember = getCurrentPartyMember(species);
    u16 totalEvs   = HP_Evs + Atk_Evs + Def_Evs + SpA_Evs + SpD_Evs + Speed_Evs;
    u16 maxEvs     = PARTY_EXTRA_EVS + sMenuDataPtr->sPartyMembers[partyMember].extraEVs; //This can be changed to accomodate skills

    if(totalEvs >= maxEvs)
        return 0;

    return maxEvs - totalEvs;
}

static u16 CalculateEvsRemainingForStat(u8 stat){
    u16 EvsForStat = 0;

    switch(stat){
        case 0:
            EvsForStat = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV);
        break;
        case 1:
            EvsForStat = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_ATK_EV);
        break;
        case 2:
            EvsForStat = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_DEF_EV);
        break;
        case 3:
            EvsForStat = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPATK_EV);
        break;
        case 4:
            EvsForStat = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPDEF_EV);
        break;
        case 5:
            EvsForStat = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_SPEED_EV);
        break;
    }

    if(EvsForStat >= MAX_PER_STAT_EVS)
        return 0;

    return MAX_PER_STAT_EVS - EvsForStat;
}

#define EVS_PER_LR_INPUT         8
#define EVS_PER_LEFT_RIGHT_INPUT 1

static void PressedRightAtEVDistribution(bool8 enableCycle){
    u16 EvsLeft       = GetCurrentMonRemainingEVs();
    u8 currentStat    = GetCorrectNatureOrderForIndex(sMenuDataPtr->currentStat);
    u16 newEvs        = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV + currentStat, NULL);
    u8 EvsLeftForStat = CalculateEvsRemainingForStat(currentStat);

    if(EvsLeftForStat > EvsLeft)
        EvsLeftForStat = EvsLeft;

    if(EvsLeftForStat != 0){
        newEvs++;
        SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV + currentStat, &newEvs);
    }
    else if(enableCycle){
        newEvs = 0;
        SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV + currentStat, &newEvs);
    }

    //MgbaPrintf(MGBA_LOG_WARN, "PressedRightAtEVDistribution EVs = %d EvsLeftForStat = %d EvsLeft = %d", newEvs, EvsLeftForStat, EvsLeft);
}


static void PressedLeftAtEVDistribution(bool8 enableCycle){
    u16 EvsLeft       = GetCurrentMonRemainingEVs();
    u8 currentStat    = GetCorrectNatureOrderForIndex(sMenuDataPtr->currentStat);
    u16 newEvs        = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV + currentStat, NULL);
    u8 EvsLeftForStat = CalculateEvsRemainingForStat(currentStat);

    if(EvsLeftForStat > EvsLeft)
        EvsLeftForStat = EvsLeft;

    PlaySE(SE_SELECT);
    if(newEvs != 0){
        newEvs--;
        SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV + currentStat, &newEvs);
    }
    else if(enableCycle){
        newEvs = EvsLeftForStat;
        SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_HP_EV + currentStat, &newEvs);
    }
}

static void SwapMonMoves(u8 moveIndex1, u8 moveIndex2)
{
    u16 move1    = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_MOVE1 + moveIndex1);
    u16 move2    = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_MOVE1 + moveIndex2);
    u8 move1pp   = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_PP1   + moveIndex1); 
    u8 move2pp   = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_PP1   + moveIndex2); 

    u8 ppBonuses = GetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_PP_BONUSES); 

    // Calculate PP bonuses
    u8 ppUpMask1 = gPPUpGetMask[moveIndex1];
    u8 ppBonusMove1 = (ppBonuses & ppUpMask1) >> (moveIndex1 * 2);
    u8 ppUpMask2 = gPPUpGetMask[moveIndex2];
    u8 ppBonusMove2 = (ppBonuses & ppUpMask2) >> (moveIndex2 * 2);
    ppBonuses &= ~ppUpMask1;
    ppBonuses &= ~ppUpMask2;
    ppBonuses |= (ppBonusMove1 << (moveIndex2 * 2)) + (ppBonusMove2 << (moveIndex1 * 2));

    // Swap the moves
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_MOVE1 + moveIndex1, &move2);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_MOVE1 + moveIndex2, &move1);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_PP1   + moveIndex1, &move2pp);
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_PP1   + moveIndex2, &move1pp);

    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_PP_BONUSES, &ppBonuses);

    SetMoveTypeIcons(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
}

static void ReplaceMonMove(u8 moveIndex, u16 newMove){
    SetMonData(&gPlayerParty[sMenuDataPtr->currentPokemonIdx], MON_DATA_MOVE1 + moveIndex, &newMove);
    SetMoveTypeIcons(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
}

static void ReplaceMonAbility(u8 abilityIndex, u16 newAbility){
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 partyMember      = getCurrentPartyMember(species);

    sMenuDataPtr->sPartyMembers[partyMember].abilities[abilityIndex] = newAbility;
}

static void Menu_PressedButtonUp_OnSkillMenu(void)
{
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 numEntries       = GetNumberOfPartyMemberDefinedSkills(getCurrentPartyMember(species));
    u8 halfScreen       = MAX_SHOWN_SKILLS / 2;
    u8 finalhalfScreen  = numEntries - halfScreen + 1;

    if (numEntries < MAX_SHOWN_SKILLS)
    {
        if (sMenuDataPtr->currentSkill > 0)
            sMenuDataPtr->currentSkill--;
        else
            sMenuDataPtr->currentSkill = numEntries - 1;
    }
    else
    {
        if(sMenuDataPtr->currentSkill > halfScreen && sMenuDataPtr->currentSkill <= (finalhalfScreen - 1)){
            sMenuDataPtr->currentSkill--;
            sMenuDataPtr->firstSkill--;
        }
        else if(sMenuDataPtr->currentSkill == 0){ 
            //If you are in the first option go to the last one
            sMenuDataPtr->currentSkill = numEntries - 1;
            sMenuDataPtr->firstSkill = numEntries - MAX_SHOWN_SKILLS;
        }
        else{
            sMenuDataPtr->currentSkill--;
        }
    }
}

static void Menu_PressedButtonDown_OnSkillMenu(void)
{
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 numEntries       = GetNumberOfPartyMemberDefinedSkills(getCurrentPartyMember(species));
    u8 halfScreen       = MAX_SHOWN_SKILLS / 2;
    u8 finalhalfScreen  = numEntries - halfScreen + 1;

    if (numEntries < MAX_SHOWN_SKILLS)
    {
        if (sMenuDataPtr->currentSkill < numEntries)
            sMenuDataPtr->currentSkill++;
        else
            sMenuDataPtr->currentSkill = 0;
    }
    else
    {
        if(sMenuDataPtr->currentSkill < halfScreen){
            sMenuDataPtr->currentSkill++;
        }
        else if(sMenuDataPtr->currentSkill >= (numEntries - 1)){ //If you are in the last option go to the first one
            sMenuDataPtr->currentSkill = 0;
            sMenuDataPtr->firstSkill = 0;
        }
        else if(sMenuDataPtr->currentSkill >= (finalhalfScreen - 1)){
            sMenuDataPtr->currentSkill++;
        }
        else{
            sMenuDataPtr->currentSkill++;
            sMenuDataPtr->firstSkill++;
        }
    }

    //MgbaPrintf(MGBA_LOG_WARN, "Menu_PressedButtonDown_OnSkillMenu currentSkill = %d, firstSkill = %d, numEntries = %d", sMenuDataPtr->currentSkill, sMenuDataPtr->firstSkill, numEntries);
}

static void TryToGiveAbility(u8 taskId){
    u8 i;
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 partyMember      = getCurrentPartyMember(species);
    u8 skillNum         = sMenuDataPtr->currentSkill;

    struct PartyMemberData sMemberData = sMenuDataPtr->sPartyMembers[partyMember];
    struct SkillTree       sSkillData  = sSkillTree[partyMember][skillNum];
    u16 abilityToGive = sSkillData.skill;

    for(i = 0; i < MAX_MON_INNATES + 1; i++){
        if(abilityToGive == sMemberData.abilities[i])
            return; //Abilitie already given to this mon
        else if(sMemberData.abilities[i] == ABILITY_NONE){
            sMenuDataPtr->sPartyMembers[partyMember].abilities[i] = abilityToGive;
            return;
        }
    }

    sMenuDataPtr->summaryMode    = SUMMARY_MODE_ABILITY_CHANGER;
    sMenuDataPtr->currentMoveIdx = 0;
    sMenuDataPtr->currentPage    = SUMMARY_SCREEN_PAGE_TRAITS;
    sMenuDataPtr->newAbility     = abilityToGive;
    gTasks[taskId].func          = Task_ChangeSummaryPage;
}

static void TryToGiveMove(u8 taskId){
    u8 i;
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 partyMember      = getCurrentPartyMember(species);
    u8 skillNum         = sMenuDataPtr->currentSkill;

    struct PartyMemberData sMemberData = sMenuDataPtr->sPartyMembers[partyMember];
    struct SkillTree       sSkillData  = sSkillTree[partyMember][skillNum];
    u16 moveToGive = sSkillData.skill;

    for(i = 0; i < MAX_MON_MOVES; i++){
        if(moveToGive == GetMonData(mon, MON_DATA_MOVE1 + i))
            return; //Abilitie already given to this mon
        else if(GetMonData(mon, MON_DATA_MOVE1 + i) == MOVE_NONE){
            SetMonData(mon, MON_DATA_MOVE1 + i, &moveToGive);
            return;
        }
    }

    sMenuDataPtr->summaryMode    = SUMMARY_MODE_MOVE_CHANGER;
    sMenuDataPtr->currentMoveIdx = 0;
    sMenuDataPtr->currentPage    = SUMMARY_SCREEN_PAGE_BATTLE_MOVES;
    sMenuDataPtr->newMove        = moveToGive;
    gTasks[taskId].func          = Task_ChangeSummaryPage;
}

static void TryToGiveStat(void){
    u8 i;
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 partyMember      = getCurrentPartyMember(species);
    u8 skillNum         = sMenuDataPtr->currentSkill;

    struct PartyMemberData sMemberData = sMenuDataPtr->sPartyMembers[partyMember];
    struct SkillTree       sSkillData  = sSkillTree[partyMember][skillNum];
    u16 statToGive = sSkillData.skill;
    u16 numStats   = sSkillData.argument;

    sMenuDataPtr->sPartyMembers[partyMember].extraStats[statToGive] += numStats;
}

static void TryToGiveEVs(void){
    u8 i;
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 partyMember      = getCurrentPartyMember(species);
    u8 skillNum         = sMenuDataPtr->currentSkill;

    struct PartyMemberData sMemberData = sMenuDataPtr->sPartyMembers[partyMember];
    struct SkillTree       sSkillData  = sSkillTree[partyMember][skillNum];
    u16 EVsToGive = sSkillData.skill;

    sMenuDataPtr->sPartyMembers[partyMember].extraEVs += EVsToGive;
}

static void TryToUseUnlockedSkill(u8 taskId, bool8 isBeingUnlocked){
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 partyMember      = getCurrentPartyMember(species);
    u8 skillNum         = sMenuDataPtr->currentSkill;

    struct PartyMemberData sMemberData = sMenuDataPtr->sPartyMembers[partyMember];
    struct SkillTree       sSkillData  = sSkillTree[partyMember][skillNum];

    switch(sSkillData.skill_type){
        case SKILL_TREE_TYPE_ABILITY:
            TryToGiveAbility(taskId);
        break;
        case SKILL_TREE_TYPE_MOVE:
            TryToGiveMove(taskId);
            SetMoveTypeIcons(mon);
        break;
        case SKILL_TREE_TYPE_STAT:
            if(isBeingUnlocked)
                TryToGiveStat();
            PrintToWindow();
        break;
        case SKILL_TREE_TYPE_CAP:
            if(isBeingUnlocked)
                TryToGiveEVs();
            PrintToWindow();
        break;
    }
}

static void TryToUnlockSkill(u8 taskId){
    struct Pokemon *mon = &gPlayerParty[sMenuDataPtr->currentPokemonIdx];
	u16 species         = GetMonData(mon, MON_DATA_SPECIES);
    u8 partyMember      = getCurrentPartyMember(species);
    u8 skillNum         = sMenuDataPtr->currentSkill;

    struct PartyMemberData sMemberData = sMenuDataPtr->sPartyMembers[partyMember];
    struct SkillTree       sSkillData  = sSkillTree[partyMember][skillNum];

    if(sMemberData.unlockedSkills[skillNum]){
        TryToUseUnlockedSkill(taskId, FALSE);
    }
    else{
        if(sMemberData.remainingSkillPoints >= sSkillData.neededPoints){
            //Unlock Skill
            sMenuDataPtr->sPartyMembers[partyMember].unlockedSkills[skillNum] = TRUE;
            sMenuDataPtr->sPartyMembers[partyMember].remainingSkillPoints = sMemberData.remainingSkillPoints - sSkillData.neededPoints;
            TryToUseUnlockedSkill(taskId, TRUE);
        }
        else{
            //Not enough points
            PlaySE(SE_PC_OFF);
        }
    }
}

/* This is the meat of the UI. This is where you wait for player inputs and can branch to other tasks accordingly */
static void Task_MenuMain(u8 taskId)
{
    if (JOY_NEW(B_BUTTON))
    {
        switch(sMenuDataPtr->summaryMode){
            case SUMMARY_MODE_MOVE_SELECT:
            case SUMMARY_MODE_EV_MODIFIER:
            case SUMMARY_MODE_SKILL_MODIFIER:
                sMenuDataPtr->summaryMode    = SUMMARY_MODE_DEFAULT;
                sMenuDataPtr->currentMoveIdx = 0;
                sMenuDataPtr->moveToSwap     = 0xFF;
                sMenuDataPtr->currentStat    = 0;
                sMenuDataPtr->currentSkill   = 0;
                sMenuDataPtr->firstSkill     = 0;
                gTasks[taskId].func          = Task_RefreshSummaryPage;
            break;
            case SUMMARY_MODE_MOVE_CHANGER:
                //Go back to the skill screen -- To change
                sMenuDataPtr->currentPage = SUMMARY_SCREEN_PAGE_POKEMON_SKILLS;
                sMenuDataPtr->summaryMode = SUMMARY_MODE_SKILL_MODIFIER;
                gTasks[taskId].func = Task_ChangeSummaryPage;
            break;
            case SUMMARY_MODE_ABILITY_CHANGER:
                //Go back to the skill screen -- To change
                sMenuDataPtr->currentPage = SUMMARY_SCREEN_PAGE_POKEMON_SKILLS;
                sMenuDataPtr->summaryMode = SUMMARY_MODE_SKILL_MODIFIER;
                gTasks[taskId].func = Task_ChangeSummaryPage;
            break;
            default:
                PlaySE(SE_PC_OFF);
                BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
                gTasks[taskId].func = Task_MenuTurnOff;
            break;
        }
    }

    if (JOY_NEW(A_BUTTON))
    {
        switch(sMenuDataPtr->currentPage){
            case SUMMARY_SCREEN_PAGE_BATTLE_MOVES:
            {
                switch(sMenuDataPtr->summaryMode){
                    case SUMMARY_MODE_DEFAULT:
                        //Go to Move Selec Mode
                        sMenuDataPtr->summaryMode    = SUMMARY_MODE_MOVE_SELECT;
                        sMenuDataPtr->moveToSwap     = 0xFF;
                        sMenuDataPtr->currentMoveIdx = 0;
                        gTasks[taskId].func          = Task_RefreshSummaryPage;
                    break;
                    case SUMMARY_MODE_MOVE_SELECT:
                        //Swap Moves
                        if(sMenuDataPtr->moveToSwap != 0xFF){
                            SwapMonMoves(sMenuDataPtr->moveToSwap, sMenuDataPtr->currentMoveIdx);
                            sMenuDataPtr->moveToSwap  = 0xFF;
                        }
                        else{
                            sMenuDataPtr->moveToSwap = sMenuDataPtr->currentMoveIdx;
                        }
                        gTasks[taskId].func = Task_RefreshSummaryPage;
                    break;
                    case SUMMARY_MODE_MOVE_CHANGER:
                        //Replace Move with new Move
                        ReplaceMonMove(sMenuDataPtr->currentMoveIdx, sMenuDataPtr->newMove);
                        sMenuDataPtr->currentPage    = SUMMARY_SCREEN_PAGE_POKEMON_SKILLS;
                        sMenuDataPtr->newMove        = MOVE_NONE;
                        sMenuDataPtr->currentMoveIdx = 0;
                        sMenuDataPtr->summaryMode    = SUMMARY_MODE_SKILL_MODIFIER;
                        gTasks[taskId].func          = Task_ChangeSummaryPage;
                    break;
                }
            }
            break;
            case SUMMARY_SCREEN_PAGE_TRAITS:
                if(sMenuDataPtr->summaryMode == SUMMARY_MODE_ABILITY_CHANGER){
                    //Replace Ability with a new one
                    ReplaceMonAbility(sMenuDataPtr->currentAbilityIdx, sMenuDataPtr->newAbility);
                    sMenuDataPtr->currentPage       = SUMMARY_SCREEN_PAGE_POKEMON_SKILLS;
                    sMenuDataPtr->newAbility        = ABILITY_NONE;
                    sMenuDataPtr->currentAbilityIdx = 0;
                    sMenuDataPtr->summaryMode       = SUMMARY_MODE_SKILL_MODIFIER;
                    gTasks[taskId].func             = Task_ChangeSummaryPage;
                }
            break;
            case SUMMARY_SCREEN_PAGE_POKEMON_STATS:
                //Go back to normal mode from the EV Modifier Mode
                sMenuDataPtr->currentStat = 0;
                if(sMenuDataPtr->summaryMode != SUMMARY_MODE_EV_MODIFIER)
                    sMenuDataPtr->summaryMode = SUMMARY_MODE_EV_MODIFIER;
                else
                    sMenuDataPtr->summaryMode = SUMMARY_MODE_DEFAULT;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            break;
            case SUMMARY_SCREEN_PAGE_POKEMON_SKILLS:
                if(sMenuDataPtr->summaryMode != SUMMARY_MODE_SKILL_MODIFIER){
                    //Go to Skill Modifier Mode
                    sMenuDataPtr->summaryMode  = SUMMARY_MODE_SKILL_MODIFIER;
                    sMenuDataPtr->currentSkill = 0;
                    sMenuDataPtr->firstSkill   = 0;
                    gTasks[taskId].func        = Task_RefreshSummaryPage;
                }
                else{
                    TryToUnlockSkill(taskId);
                }
            break;
        }
    }

    if (JOY_NEW(SELECT_BUTTON))
    {
        switch(sMenuDataPtr->currentPage){
            case SUMMARY_SCREEN_PAGE_POKEMON_STATS:
                ResetCurrentMonEVs();
                gTasks[taskId].func = Task_RefreshSummaryPage;
            break;
        }
    }

    switch(sMenuDataPtr->summaryMode){
        case SUMMARY_MODE_DEFAULT:
            if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentPage < NUM_SUMMARY_SCREEN_PAGES - 1)
                    sMenuDataPtr->currentPage++;
                else
                    sMenuDataPtr->currentPage = 0;
                gTasks[taskId].func = Task_ChangeSummaryPage;
            }

            if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentPage != 0)
                    sMenuDataPtr->currentPage--;
                else
                    sMenuDataPtr->currentPage = NUM_SUMMARY_SCREEN_PAGES - 1;
                gTasks[taskId].func = Task_ChangeSummaryPage;
            }

            if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentPokemonIdx < GetPlayerUsableMons() - 1)
                    sMenuDataPtr->currentPokemonIdx++;
                else
                    sMenuDataPtr->currentPokemonIdx = 0;
                gTasks[taskId].func = Task_ChangeSummaryMon;
            }

            if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentPokemonIdx != 0)
                    sMenuDataPtr->currentPokemonIdx--;
                else
                    sMenuDataPtr->currentPokemonIdx = GetPlayerUsableMons() - 1;
                gTasks[taskId].func = Task_ChangeSummaryMon;
            }
        break;
        case SUMMARY_MODE_MOVE_SELECT:
            if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentMoveIdx < GetCurrentMonUsableMoves() - 1)
                    sMenuDataPtr->currentMoveIdx++;
                else
                    sMenuDataPtr->currentMoveIdx = 0;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentMoveIdx != 0)
                    sMenuDataPtr->currentMoveIdx--;
                else
                    sMenuDataPtr->currentMoveIdx = GetCurrentMonUsableMoves() - 1;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }
        break;
        case SUMMARY_MODE_MOVE_CHANGER:
            if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentMoveIdx < GetCurrentMonUsableMoves() - 1)
                    sMenuDataPtr->currentMoveIdx++;
                else
                    sMenuDataPtr->currentMoveIdx = 0;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentMoveIdx != 0)
                    sMenuDataPtr->currentMoveIdx--;
                else
                    sMenuDataPtr->currentMoveIdx = GetCurrentMonUsableMoves() - 1;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }
        break;
        case SUMMARY_MODE_ABILITY_CHANGER:
            if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentAbilityIdx < MAX_MON_INNATES + 1)
                    sMenuDataPtr->currentAbilityIdx++;
                else
                    sMenuDataPtr->currentAbilityIdx = 0;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentAbilityIdx != 0)
                    sMenuDataPtr->currentAbilityIdx--;
                else
                    sMenuDataPtr->currentAbilityIdx = MAX_MON_INNATES + 1;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }
        break;
        case SUMMARY_MODE_EV_MODIFIER:
        {
            if (JOY_NEW(DPAD_RIGHT) || JOY_REPEAT(DPAD_RIGHT))
            {
                u8 times = EVS_PER_LEFT_RIGHT_INPUT;
                PlaySE(SE_SELECT);
                if(times == 1){
                    PressedRightAtEVDistribution(TRUE);
                }
                else{
                    do{
                        PressedRightAtEVDistribution(FALSE);
                        times--;
                    }
                    while(times != 0);
                }
                CalculateMonStats(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(R_BUTTON) || JOY_REPEAT(R_BUTTON))
            {
                u8 times = EVS_PER_LR_INPUT;
                PlaySE(SE_SELECT);
                do{
                    PressedRightAtEVDistribution(FALSE);
                    times--;
                }
                while(times != 0);
                CalculateMonStats(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(DPAD_LEFT) || JOY_REPEAT(DPAD_LEFT))
            {
                u8 times = EVS_PER_LEFT_RIGHT_INPUT;
                PlaySE(SE_SELECT);
                if(times == 1){
                    PressedLeftAtEVDistribution(TRUE);
                }
                else{
                    do{
                        PressedLeftAtEVDistribution(FALSE);
                        times--;
                    }
                    while(times != 0);
                }
                CalculateMonStats(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(L_BUTTON) || JOY_REPEAT(L_BUTTON))
            {
                u8 times = EVS_PER_LR_INPUT;
                PlaySE(SE_SELECT);
                do{
                    PressedLeftAtEVDistribution(FALSE);
                    times--;
                }
                while(times != 0);
                CalculateMonStats(&gPlayerParty[sMenuDataPtr->currentPokemonIdx]);
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentStat < NUM_STATS - 1)
                    sMenuDataPtr->currentStat++;
                else
                    sMenuDataPtr->currentStat = 0;
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
            {
                PlaySE(SE_SELECT);
                if(sMenuDataPtr->currentStat != 0)
                    sMenuDataPtr->currentStat--;
                else
                    sMenuDataPtr->currentStat = NUM_STATS - 1;
                PrintToWindow();
            }
        }
        break;
        case SUMMARY_MODE_SKILL_MODIFIER:
        {
            if (JOY_NEW(DPAD_DOWN) || JOY_REPEAT(DPAD_DOWN))
            {
                Menu_PressedButtonDown_OnSkillMenu();
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }

            if (JOY_NEW(DPAD_UP) || JOY_REPEAT(DPAD_UP))
            {
                Menu_PressedButtonUp_OnSkillMenu();
                gTasks[taskId].func = Task_RefreshSummaryPage;
            }
        }
        break;
    }
}
