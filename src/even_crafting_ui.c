#include "even_crafting_ui.h"
#include "even_crafting.h"

#include "gba/types.h"
#include "gba/defines.h"
#include "global.h"
#include "main.h"
#include "bg.h"
#include "text_window.h"
#include "window.h"
#include "constants/characters.h"
#include "palette.h"
#include "task.h"
#include "overworld.h"
#include "malloc.h"
#include "gba/macro.h"
#include "list_menu.h"
#include "menu_helpers.h"
#include "menu.h"
#include "malloc.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "constants/rgb.h"
#include "decompress.h"
#include "constants/songs.h"
#include "sound.h"
#include "string_util.h"
#include "pokemon_icon.h"
#include "graphics.h"
#include "data.h"
#include "pokedex.h"
#include "gpu_regs.h"
#include "item_icon.h"
#include "item.h"
#include "script.h"

#include "data/even_crafting_ui_data.h"

struct EvenCraftingUiState
{
    MainCallback savedCallback;
    u8 loadState;
    u8 mode;
    u8 monIconSpriteId;
    bool8 hasCraftResult;
    u16 monIconDexNum;
    u16 currentIngredient;
    u16 outputItem;
    u8 numItemsAdded;
    u8 outputSprite;
    u8 animCounter;
    bool8 switchedMode;
    u8 listTaskid;
    bool8 listIsInitialized;
    u8 itemSprites[12];
    u16 itemsAdded[12];
    enum IngredientCategories currIngredientCategory;
    enum RecipeCategories currRecipeCategory;
    enum Recipes currentRecipe;
    const struct EvenCraftingUiTemplate *template;
    u8 ingredientScollPositions[NUM_INGREDIENT_CATEGORIES];
    u8 recipeScrollPositions[NUM_RECIPE_CATEGORIES];
    struct ListMenuItem listBuffer[MAX_CATEGORY_INGREDIENTS];
    struct ListMenuTemplate list;
};

enum WindowIds
{
    WIN_UI_HINTS_A,
    WIN_UI_HINTS_B,
    WIN_UI_HINTS_START,
    WIN_UI_HINTS_SELECT,
    WIN_LIST_HEADER,
    WIN_LIST_CATEGORY,
    WIN_LIST,
};

static EWRAM_DATA struct EvenCraftingUiState *sEvenCraftingUiState = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

#define ECU_ADD_ITEM_SOUND      SE_SELECT
#define ECU_ADD_RECIPE_SOUND    SE_SELECT
#define ECU_ADD_ITEM_FAIL_SOUND SE_PC_OFF

enum CraftModes
{
    MODE_ITEMS,
    MODE_RECIPES,
};

static const u8 sModeNameItems[] =  _("Items");
static const u8 sModeNameRecipes[] =  _("Recipes");
static const u8 *const sModeNames[3] = {
    [MODE_ITEMS]   = sModeNameItems,
    [MODE_RECIPES]  = sModeNameRecipes,
};

static const struct BgTemplate sEvenCraftingUiBgTemplates[] =
{
    {
        .bg = 0,
        .charBaseIndex = 0,
        .mapBaseIndex = 31,
        .priority = 1
    },
    {
        .bg = 1,
        .charBaseIndex = 3,
        .mapBaseIndex = 20,
        .priority = 2
    }
};

#define HINTS_A_WIDTH     6
#define HINTS_B_WIDTH     7
#define HINTS_START_WIDTH 7
#define HINTS_SELECT_WIDTH 10
#define HINTS_HEIGHT    2
#define HEADER_WIDTH    10
#define HEADER_HEIGHT   2
#define CATEGORY_WIDTH  10
#define CATEGORY_HEIGHT 2
#define LIST_WIDTH      10
#define LIST_HEIGHT     14

#define HINTS_A_SIZE      HINTS_A_WIDTH * HINTS_HEIGHT
#define HINTS_B_SIZE      HINTS_B_WIDTH * HINTS_HEIGHT
#define HINTS_START_SIZE      HINTS_START_WIDTH * HINTS_HEIGHT
#define HINTS_SELECT_SIZE      HINTS_SELECT_WIDTH * HINTS_HEIGHT
#define HEADER_SIZE     HEADER_WIDTH * HEADER_HEIGHT
#define CATEGORY_SIZE   CATEGORY_WIDTH * CATEGORY_HEIGHT
#define LIST_SIZE       LIST_WIDTH * LIST_HEIGHT

#define HINTS_A_BASEBLOCK       1
#define HINTS_B_BASEBLOCK       HINTS_A_BASEBLOCK + HINTS_A_SIZE
#define HINTS_START_BASEBLOCK   HINTS_B_BASEBLOCK + HINTS_B_SIZE
#define HINTS_SELECT_BASEBLOCK  HINTS_START_BASEBLOCK + HINTS_START_SIZE
#define HEADER_BASEBLOCK        HINTS_SELECT_BASEBLOCK + HINTS_SELECT_SIZE
#define LIST_BASEBLOCK          HEADER_BASEBLOCK + HEADER_SIZE
#define CATEGORY_BASEBLOCK      LIST_BASEBLOCK + LIST_SIZE

static const struct WindowTemplate sEvenCraftingUiWindowTemplates[] =
{
    [WIN_UI_HINTS_A] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 18,
        .width = HINTS_A_WIDTH,
        .height = HINTS_HEIGHT,
        .paletteNum = 15,
        .baseBlock = HINTS_A_BASEBLOCK
    },
    [WIN_UI_HINTS_B] =
    {
        .bg = 0,
        .tilemapLeft = HINTS_A_WIDTH,
        .tilemapTop = 18,
        .width = HINTS_B_WIDTH,
        .height = HINTS_HEIGHT,
        .paletteNum = 15,
        .baseBlock = HINTS_B_BASEBLOCK
    },
    [WIN_UI_HINTS_START] =
    {
        .bg = 0,
        .tilemapLeft = HINTS_A_WIDTH + HINTS_B_WIDTH,
        .tilemapTop = 18,
        .width = HINTS_START_WIDTH,
        .height = HINTS_HEIGHT,
        .paletteNum = 15,
        .baseBlock = HINTS_START_BASEBLOCK
    },
    [WIN_UI_HINTS_SELECT] =
    {
        .bg = 0,
        .tilemapLeft = HINTS_A_WIDTH + HINTS_B_WIDTH + HINTS_START_WIDTH,
        .tilemapTop = 18,
        .width = HINTS_SELECT_WIDTH,
        .height = HINTS_HEIGHT,
        .paletteNum = 15,
        .baseBlock = HINTS_SELECT_BASEBLOCK
    },
    [WIN_LIST_HEADER] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = HEADER_WIDTH,
        .height = HEADER_HEIGHT,
        .paletteNum = 15,
        .baseBlock = HEADER_BASEBLOCK
    },
    [WIN_LIST_CATEGORY] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 2,
        .width = CATEGORY_WIDTH,
        .height = CATEGORY_HEIGHT,
        .paletteNum = 15,
        .baseBlock = CATEGORY_BASEBLOCK
    },
    [WIN_LIST] =
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 4,
        .width = LIST_WIDTH,
        .height = LIST_HEIGHT,
        .paletteNum = 15,
        .baseBlock = LIST_BASEBLOCK
    },
    DUMMY_WIN_TEMPLATE
};

enum FontColor
{
    FONT_BLACK,
    FONT_WHITE,
    FONT_RED,
    FONT_BLUE,
};

static const u8 sEvenCraftingUiWindowFontColors[][3] =
{
    [FONT_BLACK]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_DARK_GRAY,  TEXT_COLOR_LIGHT_GRAY},
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GRAY},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED,        TEXT_COLOR_LIGHT_GRAY},
    [FONT_BLUE]   = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_BLUE,       TEXT_COLOR_LIGHT_GRAY},
};

static void EvenCraftingUi_SetupCB(void);
static void EvenCraftingUi_MainCB(void);
static void EvenCraftingUi_VBlankCB(void);

static void Task_EvenCraftingUiWaitFadeIn(u8 taskId);
static void Task_EvenCraftingUiMainInput(u8 taskId);
static void Task_EvenCraftingUiWaitFadeAndBail(u8 taskId);
static void Task_EvenCraftingUiWaitFadeAndExitGracefully(u8 taskId);

void EvenCraftingUi_Init(MainCallback callback, enum EvenCraftingUiTemplates template);
static void EvenCraftingUi_ResetGpuRegsAndBgs(void);
static bool8 EvenCraftingUi_InitBgs(void);
static void EvenCraftingUi_FadeAndBail(void);
static bool8 EvenCraftingUi_LoadGraphics(void);
static void EvenCraftingUi_InitWindows(void);
static void EvenCraftingUi_PrintFixedUiButtonHints();
static void EvenCraftingUi_PrintDynamicUiButtonHints();
static void EvenCraftingUi_PrintListHeader(void);
static void EvenCraftingUi_PrintListCategory(void);
static void EvenCraftingUi_PrintList(void);
static void EvenCraftingUi_AddIngredientSprite(u16 itemId, u8 id);
static void EvenCraftingUi_RemoveLastItem(void);
static void EvenCraftingUi_FreeResources(void);
static void EvenCraftingUi_AddCurrentItem(void);
static void EvenCraftingUi_AddItem(u16 item);
static void EvenCraftingUi_CraftItem(enum Recipes recipe);
static void EvenCraftingUi_AddResultSprite(u16 itemId);
static void EvenCraftingUi_RemoveOutput(void);
static void EvenCraftingUi_AddRecipe(void);

static u32 EvenCraftingUi_GetTotalBagSlots(void);

static bool32 EvenCraftingUi_SpriteIsUsedMultipleTimes(u16 item);

static u32 EvenCraftingUi_JustifyCenter(const u8 *input, u32 width, u8 fontId);

static void EvenCraftingUi_InitScrollList(void);
static void EvenCraftingUi_BuildListIngredients(void);
static void EvenCraftingUi_BuildListRecipes(void);

static const struct ListMenuTemplate sItemListMenu =
{
    .items = NULL,
    .moveCursorFunc = ListMenuDefaultCursorMoveFunc,
    .totalItems = 0,
    .maxShowed = 7,
    .windowId = WIN_LIST,
    .header_X = 0,
    .item_X = 8,
    .cursor_X = 0,
    .upText_Y = 1,
    .cursorPal = 15,
    .fillValue = 0,
    .cursorShadowPal = 3,
    .lettersSpacing = 0,
    .itemVerticalPadding = 0,
    .scrollMultiple = LIST_NO_MULTIPLE_SCROLL,
    .fontId = FONT_NARROW,
    .cursorKind = CURSOR_BLACK_ARROW,
};

void Task_OpenEvenCraftingUi(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        CleanupOverworldWindowsAndTilemaps();
        EvenCraftingUi_Init(CB2_ReturnToFieldWithOpenMenu, ECU_DEFAULT);
        DestroyTask(taskId);
    }
}

void OpenEvenCraftingUI_FromScript(struct ScriptContext *ctx)
{
    if (!gPaletteFade.active)
    {
        enum EvenCraftingUiTemplates template = ScriptReadByte(ctx);
        CleanupOverworldWindowsAndTilemaps();
        EvenCraftingUi_Init(CB2_ReturnToField, template);
    }
}

void EvenCraftingUi_Init(MainCallback callback, enum EvenCraftingUiTemplates template)
{
    sEvenCraftingUiState = AllocZeroed(sizeof(struct EvenCraftingUiState));
    if (sEvenCraftingUiState == NULL)
    {
        SetMainCallback2(callback);
        return;
    }

    sEvenCraftingUiState->loadState = 0;
    sEvenCraftingUiState->animCounter = 0;
    sEvenCraftingUiState->listIsInitialized = FALSE;
    sEvenCraftingUiState->savedCallback = callback;
    sEvenCraftingUiState->template = &sECU_Templates[template];

    SetMainCallback2(EvenCraftingUi_SetupCB);
}

static void EvenCraftingUi_ResetGpuRegsAndBgs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);

    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);

    SetGpuReg(REG_OFFSET_BG3CNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    ChangeBgX(2, 0, BG_COORD_SET);
    ChangeBgY(2, 0, BG_COORD_SET);
    ChangeBgX(3, 0, BG_COORD_SET);
    ChangeBgY(3, 0, BG_COORD_SET);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WIN1H, 0);
    SetGpuReg(REG_OFFSET_WIN1V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    CpuFill16(0, (void *)VRAM, VRAM_SIZE);
    CpuFill32(0, (void *)OAM, OAM_SIZE);
}

static void EvenCraftingUi_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        EvenCraftingUi_ResetGpuRegsAndBgs();
        SetVBlankHBlankCallbacksToNull();
        ClearScheduledBgCopiesToVram();
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
        if (EvenCraftingUi_InitBgs())
        {
            sEvenCraftingUiState->loadState = 0;
            gMain.state++;
        }
        else
        {
            EvenCraftingUi_FadeAndBail();
            return;
        }
        break;
    case 3:
        if (EvenCraftingUi_LoadGraphics() == TRUE)
            gMain.state++;
        break;
    case 4:
        EvenCraftingUi_InitWindows();
        gMain.state++;
        break;
    case 5:
        sEvenCraftingUiState->currIngredientCategory = INGREDIENT_CATEGORY_PLANT;
        sEvenCraftingUiState->currRecipeCategory = RECIPE_CATEGORY_MEDICINE;
        sEvenCraftingUiState->numItemsAdded = 0;
        sEvenCraftingUiState->hasCraftResult = FALSE;
        sEvenCraftingUiState->switchedMode = FALSE;

        EvenCraftingUi_InitScrollList();

        EvenCraftingUi_PrintFixedUiButtonHints();

        EvenCraftingUi_PrintDynamicUiButtonHints();

        EvenCraftingUi_PrintListHeader();

        EvenCraftingUi_PrintListCategory();

        EvenCraftingUi_PrintList();

        CreateTask(Task_EvenCraftingUiWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        SetVBlankCallback(EvenCraftingUi_VBlankCB);
        SetMainCallback2(EvenCraftingUi_MainCB);
        break;
    }
}

static void EvenCraftingUi_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void EvenCraftingUi_VBlankCB(void)
{

    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_EvenCraftingUiWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
        gTasks[taskId].func = Task_EvenCraftingUiMainInput;
}

static void Task_EvenCraftingUiMainInput(u8 taskId)
{
    u32 listPosition = ListMenu_ProcessInput(sEvenCraftingUiState->listTaskid);
    if (JOY_NEW(A_BUTTON))
    {
        if (sEvenCraftingUiState->mode == MODE_ITEMS)
        {
            sEvenCraftingUiState->currentIngredient = listPosition;
            if (sEvenCraftingUiState->hasCraftResult)
            {
                EvenCraftingUi_RemoveOutput();
                EvenCraftingUi_PrintDynamicUiButtonHints();
            }
            else if (sEvenCraftingUiState->numItemsAdded < sEvenCraftingUiState->template->maxIngredients)
            {
                PlaySE(ECU_ADD_ITEM_SOUND);
                EvenCraftingUi_AddCurrentItem();
                if (sEvenCraftingUiState->numItemsAdded == 1)
                    EvenCraftingUi_PrintDynamicUiButtonHints();
            }
            else
            {
                PlaySE(ECU_ADD_ITEM_FAIL_SOUND);
            }
        }
        else
        {
            sEvenCraftingUiState->currentRecipe = listPosition;
            if (sEvenCraftingUiState->hasCraftResult)
            {
                EvenCraftingUi_RemoveOutput();
            }
            else if (GetNumIngredientsFromRecipe(sEvenCraftingUiState->currentRecipe) <= sEvenCraftingUiState->template->maxIngredients)
            {
                EvenCraftingUi_AddRecipe();
            }
            else
            {
                PlaySE(ECU_ADD_ITEM_FAIL_SOUND);
            }
        }
        EvenCraftingUi_PrintDynamicUiButtonHints();
    }
    if (JOY_NEW(B_BUTTON))
    {
        if (sEvenCraftingUiState->numItemsAdded != 0)
        {
            //  Remove last item
            EvenCraftingUi_RemoveLastItem();
            if (sEvenCraftingUiState->numItemsAdded == 0)
                EvenCraftingUi_PrintDynamicUiButtonHints();
        }
        else
        {
            PlaySE(SE_PC_OFF);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_EvenCraftingUiWaitFadeAndExitGracefully;
        }
    }
    if (JOY_NEW(R_BUTTON))
    {
        sEvenCraftingUiState->switchedMode = TRUE;
        PlaySE(SE_SELECT);
        if (sEvenCraftingUiState->mode == MODE_RECIPES)
        {
            if (sEvenCraftingUiState->currRecipeCategory != NUM_RECIPE_CATEGORIES - 1)
                sEvenCraftingUiState->currRecipeCategory++;
            else
                sEvenCraftingUiState->currRecipeCategory = 0;
        }
        else
        {
            if (sEvenCraftingUiState->currIngredientCategory != NUM_INGREDIENT_CATEGORIES - 1)
                sEvenCraftingUiState->currIngredientCategory++;
            else
                sEvenCraftingUiState->currIngredientCategory = 0;
        }

        EvenCraftingUi_InitScrollList();
        EvenCraftingUi_PrintDynamicUiButtonHints();
        EvenCraftingUi_PrintListHeader();
        EvenCraftingUi_PrintListCategory();
        EvenCraftingUi_PrintList();
    }
    if (JOY_NEW(L_BUTTON))
    {
        sEvenCraftingUiState->switchedMode = TRUE;
        PlaySE(SE_SELECT);
        if (sEvenCraftingUiState->mode == MODE_RECIPES)
        {
            if (sEvenCraftingUiState->currRecipeCategory != 0)
                sEvenCraftingUiState->currRecipeCategory--;
            else
                sEvenCraftingUiState->currRecipeCategory = NUM_RECIPE_CATEGORIES - 1;
        }
        else
        {
            if (sEvenCraftingUiState->currIngredientCategory != 0)
                sEvenCraftingUiState->currIngredientCategory--;
            else
                sEvenCraftingUiState->currIngredientCategory = NUM_INGREDIENT_CATEGORIES - 1;
        }

        EvenCraftingUi_InitScrollList();
        EvenCraftingUi_PrintDynamicUiButtonHints();
        EvenCraftingUi_PrintListHeader();
        EvenCraftingUi_PrintListCategory();
        EvenCraftingUi_PrintList();
    }
    if (JOY_NEW(SELECT_BUTTON))
    {
        sEvenCraftingUiState->switchedMode = TRUE;
        switch (sEvenCraftingUiState->mode)
        {
        case MODE_ITEMS:
            sEvenCraftingUiState->mode = MODE_RECIPES;
            break;
        case MODE_RECIPES:
            sEvenCraftingUiState->mode = MODE_ITEMS;
            break;
        }

        EvenCraftingUi_InitScrollList();
        EvenCraftingUi_PrintDynamicUiButtonHints();
        EvenCraftingUi_PrintListHeader();
        EvenCraftingUi_PrintListCategory();
        EvenCraftingUi_PrintList();
    }
    if (JOY_NEW(START_BUTTON))
    {
        if (!sEvenCraftingUiState->hasCraftResult)
        {
            enum Recipes result = TryCraftItem(sEvenCraftingUiState->numItemsAdded, sEvenCraftingUiState->itemsAdded);
            switch (result)
            {
            case ERROR_MISSING_INGREDIENTS:
                PlaySE(ECU_ADD_ITEM_FAIL_SOUND);
                break;
            case ERROR_RECIPE_REQUIRES_UNLOCK:
            case RECIPE_NONE:
                PlaySE(ECU_ADD_ITEM_FAIL_SOUND);
                if (sEvenCraftingUiState->mode == MODE_ITEMS)
                {
                    for (u32 i = 0; i < sEvenCraftingUiState->numItemsAdded; i++)
                    {
                    }
                }
                break;
            default:
                EvenCraftingUi_CraftItem(result);
                PlaySE(ECU_ADD_ITEM_SOUND);
                EvenCraftingUi_InitScrollList();
                EvenCraftingUi_PrintDynamicUiButtonHints();
            }
        }
        else
        {
            PlaySE(ECU_ADD_ITEM_FAIL_SOUND);
        }
    }
}

static void Task_EvenCraftingUiWaitFadeAndBail(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sEvenCraftingUiState->savedCallback);
        EvenCraftingUi_FreeResources();
        DestroyTask(taskId);
    }
}

static void Task_EvenCraftingUiWaitFadeAndExitGracefully(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetMainCallback2(sEvenCraftingUiState->savedCallback);
        EvenCraftingUi_FreeResources();
        DestroyTask(taskId);
    }
}

static bool8 EvenCraftingUi_InitBgs(void)
{
    const u32 TILEMAP_BUFFER_SIZE = (1024 * 2);

    ResetAllBgsCoordinates();

    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
        return FALSE;

    ResetBgsAndClearDma3BusyFlags(0);

    InitBgsFromTemplates(0, sEvenCraftingUiBgTemplates, NELEMS(sEvenCraftingUiBgTemplates));

    SetBgTilemapBuffer(1, sBg1TilemapBuffer);

    ScheduleBgCopyTilemapToVram(1);

    ShowBg(0);
    ShowBg(1);

    return TRUE;
}

static void EvenCraftingUi_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_EvenCraftingUiWaitFadeAndBail, 0);

    SetVBlankCallback(EvenCraftingUi_VBlankCB);
    SetMainCallback2(EvenCraftingUi_MainCB);
}

static bool8 EvenCraftingUi_LoadGraphics(void)
{
    switch (sEvenCraftingUiState->loadState)
    {
    case 0:
        ResetTempTileDataBuffers();

        DecompressAndCopyTileDataToVram(1, sEvenCraftingUiState->template->tiles, 0, 0, 0);
        sEvenCraftingUiState->loadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            LZDecompressWram(sEvenCraftingUiState->template->tilemap, sBg1TilemapBuffer);
            sEvenCraftingUiState->loadState++;
        }
        break;
    case 2:
        LoadPalette(sEvenCraftingUiState->template->palette, BG_PLTT_ID(0), PLTT_SIZE_4BPP);
        LoadPalette(gMessageBox_Pal, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sEvenCraftingUiState->loadState++;
    default:
        sEvenCraftingUiState->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void EvenCraftingUi_InitWindows(void)
{
    InitWindows(sEvenCraftingUiWindowTemplates);

    DeactivateAllTextPrinters();

    ScheduleBgCopyTilemapToVram(0);

    FillWindowPixelBuffer(WIN_UI_HINTS_A, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_UI_HINTS_B, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_UI_HINTS_START, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_UI_HINTS_SELECT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_LIST_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_LIST_CATEGORY, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_LIST, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    PutWindowTilemap(WIN_UI_HINTS_A);
    PutWindowTilemap(WIN_UI_HINTS_B);
    PutWindowTilemap(WIN_UI_HINTS_START);
    PutWindowTilemap(WIN_UI_HINTS_SELECT);
    PutWindowTilemap(WIN_LIST_HEADER);
    PutWindowTilemap(WIN_LIST_CATEGORY);
    PutWindowTilemap(WIN_LIST);

    CopyWindowToVram(WIN_UI_HINTS_A, COPYWIN_FULL);
    CopyWindowToVram(WIN_UI_HINTS_B, COPYWIN_FULL);
    CopyWindowToVram(WIN_UI_HINTS_START, COPYWIN_FULL);
    CopyWindowToVram(WIN_UI_HINTS_SELECT, COPYWIN_FULL);
    CopyWindowToVram(WIN_LIST_HEADER, COPYWIN_FULL);
    CopyWindowToVram(WIN_LIST_CATEGORY, COPYWIN_FULL);
    //CopyWindowToVram(WIN_LIST, COPYWIN_FULL);
}

static const u8 sText_EvenCraftingUi_AButtonItem[] = _("{A_BUTTON} Add item");
static const u8 sText_EvenCraftingUi_AButtonRecipe[] = _("{A_BUTTON} Use recipe");
static const u8 sText_EvenCraftingUi_AButtonContinue[] = _("{A_BUTTON} Continue");
static const u8 sText_EvenCraftingUi_BButtonExit[] = _("{B_BUTTON} Exit");
static const u8 sText_EvenCraftingUi_BButtonRemoveItem[] = _("{B_BUTTON} Remove item");
static const u8 sText_EvenCraftingUi_BButtonRemoveRecipe[] = _("{B_BUTTON} Remove recipe");
static const u8 sText_EvenCraftingUi_RightTrigger[] = _("{R_BUTTON}");
static const u8 sText_EvenCraftingUi_LeftTrigger[] = _("{L_BUTTON}");
static const u8 sText_EvenCraftingUi_StartButton[] = _("{START_BUTTON} Craft");
static const u8 sText_EvenCraftingUi_SelectButton[] = _("{SELECT_BUTTON} Select mode");

static void EvenCraftingUi_PrintDynamicUiButtonHints(void)
{
    u8 fontToUse = FONT_SMALL_NARROWER;
    FillWindowPixelBuffer(WIN_UI_HINTS_A, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_UI_HINTS_B, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch (sEvenCraftingUiState->mode)
    {
        case MODE_ITEMS:
            if (sEvenCraftingUiState->hasCraftResult)
            {
                StringExpandPlaceholders(gStringVar1, sText_EvenCraftingUi_AButtonContinue);
                AddTextPrinterParameterized4(WIN_UI_HINTS_A,
                                             fontToUse,
                                             1, 0, 0, 0,
                                             sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                             TEXT_SKIP_DRAW,
                                             gStringVar1);
            }
            else
            {
                StringExpandPlaceholders(gStringVar1, sText_EvenCraftingUi_AButtonItem);
                AddTextPrinterParameterized4(WIN_UI_HINTS_A,
                                             fontToUse,
                                             1, 0, 0, 0,
                                             sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                             TEXT_SKIP_DRAW,
                                             gStringVar1);
            }
            if (sEvenCraftingUiState->numItemsAdded == 0)
            {
                StringExpandPlaceholders(gStringVar2, sText_EvenCraftingUi_BButtonExit);
                AddTextPrinterParameterized4(WIN_UI_HINTS_B,
                                             fontToUse,
                                             0, 0, 0, 0,
                                             sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                             TEXT_SKIP_DRAW,
                                             gStringVar2);
            }
            else
            {
                StringExpandPlaceholders(gStringVar2, sText_EvenCraftingUi_BButtonRemoveItem);
                AddTextPrinterParameterized4(WIN_UI_HINTS_B,
                                             fontToUse,
                                             0, 0, 0, 0,
                                             sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                             TEXT_SKIP_DRAW,
                                             gStringVar2);
            }
            break;
        case MODE_RECIPES:
            if (sEvenCraftingUiState->hasCraftResult)
            {
                StringExpandPlaceholders(gStringVar1, sText_EvenCraftingUi_AButtonContinue);
                AddTextPrinterParameterized4(WIN_UI_HINTS_A,
                                             fontToUse,
                                             1, 0, 0, 0,
                                             sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                             TEXT_SKIP_DRAW,
                                             gStringVar1);
            }
            else
            {
                StringExpandPlaceholders(gStringVar1, sText_EvenCraftingUi_AButtonRecipe);
                AddTextPrinterParameterized4(WIN_UI_HINTS_A,
                                             fontToUse,
                                             1, 0, 0, 0,
                                             sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                             TEXT_SKIP_DRAW,
                                             gStringVar1);
            }
            if (sEvenCraftingUiState->numItemsAdded > 0)
                StringExpandPlaceholders(gStringVar2, sText_EvenCraftingUi_BButtonRemoveItem);
            else
                StringExpandPlaceholders(gStringVar2, sText_EvenCraftingUi_BButtonExit);
            AddTextPrinterParameterized4(WIN_UI_HINTS_B,
                                         fontToUse,
                                         0, 0, 0, 0,
                                         sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                         TEXT_SKIP_DRAW,
                                         gStringVar2);
            break;
    }

    CopyWindowToVram(WIN_UI_HINTS_A, COPYWIN_GFX);
    CopyWindowToVram(WIN_UI_HINTS_B, COPYWIN_GFX);
}

static void EvenCraftingUi_PrintFixedUiButtonHints()
{
    u8 fontToUse = FONT_SMALL_NARROWER;
    FillWindowPixelBuffer(WIN_UI_HINTS_START, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    FillWindowPixelBuffer(WIN_UI_HINTS_SELECT, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    StringExpandPlaceholders(gStringVar3, sText_EvenCraftingUi_StartButton);
    AddTextPrinterParameterized4(WIN_UI_HINTS_START,
                                 fontToUse,
                                 0, 0, 0, 0,
                                 sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                 TEXT_SKIP_DRAW,
                                 gStringVar3);
    StringExpandPlaceholders(gStringVar4, sText_EvenCraftingUi_SelectButton);
    AddTextPrinterParameterized4(WIN_UI_HINTS_SELECT,
                                 fontToUse,
                                 0, 0, 0, 0,
                                 sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                 TEXT_SKIP_DRAW,
                                 gStringVar4);
    CopyWindowToVram(WIN_UI_HINTS_START, COPYWIN_GFX);
    CopyWindowToVram(WIN_UI_HINTS_SELECT, COPYWIN_GFX);
}

static void EvenCraftingUi_PrintListHeader(void)
{
    u8 fontToUse = FONT_NORMAL;
    FillWindowPixelBuffer(WIN_LIST_HEADER, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    switch (sEvenCraftingUiState->mode)
    {
    case MODE_ITEMS:
        AddTextPrinterParameterized4(WIN_LIST_HEADER,
                                     fontToUse,
                                     EvenCraftingUi_JustifyCenter(sModeNames[MODE_ITEMS], 80, fontToUse), 0, 0, 0,
                                     sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                     TEXT_SKIP_DRAW,
                                     sModeNames[MODE_ITEMS]);
        break;
    case MODE_RECIPES:
        AddTextPrinterParameterized4(WIN_LIST_HEADER,
                                     fontToUse,
                                     EvenCraftingUi_JustifyCenter(sModeNames[MODE_RECIPES], 80, fontToUse), 0, 0, 0,
                                     sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                     TEXT_SKIP_DRAW,
                                     sModeNames[MODE_RECIPES]);
        break;
    default:
        break;
    }

    CopyWindowToVram(WIN_LIST_HEADER, COPYWIN_GFX);
}

static void EvenCraftingUi_PrintListCategory(void)
{
    u8 fontToUse = FONT_NORMAL;
    FillWindowPixelBuffer(WIN_LIST_CATEGORY, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    StringExpandPlaceholders(gStringVar1, sText_EvenCraftingUi_LeftTrigger);
    StringExpandPlaceholders(gStringVar2, sText_EvenCraftingUi_RightTrigger);


    AddTextPrinterParameterized4(WIN_LIST_CATEGORY,
                                 fontToUse,
                                 0, 0, 0, 0,
                                 sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                 TEXT_SKIP_DRAW,
                                 gStringVar1);
    AddTextPrinterParameterized4(WIN_LIST_CATEGORY,
                                 fontToUse,
                                 63, 0, 0, 0,
                                 sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                 TEXT_SKIP_DRAW,
                                 gStringVar2);

    switch (sEvenCraftingUiState->mode)
    {
    case MODE_ITEMS:
        AddTextPrinterParameterized4(WIN_LIST_CATEGORY,
                                     fontToUse,
                                     EvenCraftingUi_JustifyCenter(sIngredientCategoryTexts[sEvenCraftingUiState->currIngredientCategory], 80, fontToUse), 0, 0, 0,
                                     sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                     TEXT_SKIP_DRAW,
                                     sIngredientCategoryTexts[sEvenCraftingUiState->currIngredientCategory]);
        break;
    case MODE_RECIPES:
        AddTextPrinterParameterized4(WIN_LIST_CATEGORY,
                                     fontToUse,
                                     EvenCraftingUi_JustifyCenter(sRecipeCategoryTexts[sEvenCraftingUiState->currRecipeCategory], 80, fontToUse), 0, 0, 0,
                                     sEvenCraftingUiWindowFontColors[FONT_BLACK],
                                     TEXT_SKIP_DRAW,
                                     sRecipeCategoryTexts[sEvenCraftingUiState->currRecipeCategory]);
        break;
    default:
        break;
    }

    CopyWindowToVram(WIN_LIST_CATEGORY, COPYWIN_GFX);
}

static void EvenCraftingUi_PrintList(void)
{
}

static void EvenCraftingUi_FreeResources(void)
{
    if (sEvenCraftingUiState != NULL)
    {
        Free(sEvenCraftingUiState);
    }
    if (sBg1TilemapBuffer != NULL)
    {
        Free(sBg1TilemapBuffer);
    }
    FreeAllWindowBuffers();
    ResetSpriteData();
}

static u32 EvenCraftingUi_JustifyCenter(const u8 *input, u32 width, u8 fontId)
{
    u32 currWidth = GetStringWidth(fontId, input, 0);
    if (currWidth < width)
        return (width - currWidth) >> 1;
    else
        return 0;
}

static void EvenCraftingUi_AddIngredientSprite(u16 itemId, u8 id)
{
    u8 iconSpriteId = AddItemIconSprite(itemId, itemId, itemId);
    if (iconSpriteId != MAX_SPRITES)
    {
        sEvenCraftingUiState->itemSprites[id] = iconSpriteId;
        gSprites[iconSpriteId].x2 = sEvenCraftingUiState->template->positions[id].x;
        gSprites[iconSpriteId].y2 = sEvenCraftingUiState->template->positions[id].y;
    }
}

static void EvenCraftingUi_AddResultSprite(u16 itemId)
{
    u8 iconSpriteId = AddItemIconSprite(itemId, itemId, itemId);
    sEvenCraftingUiState->outputItem = itemId;
    if (iconSpriteId != MAX_SPRITES)
    {
        sEvenCraftingUiState->outputSprite = iconSpriteId;
        gSprites[iconSpriteId].x2 = sEvenCraftingUiState->template->outputX;
        gSprites[iconSpriteId].y2 = sEvenCraftingUiState->template->outputY;
    }
}

static void EvenCraftingUi_RemoveLastItem(void)
{
    u8 id = sEvenCraftingUiState->itemSprites[--sEvenCraftingUiState->numItemsAdded];
    u16 currItem = sEvenCraftingUiState->itemsAdded[sEvenCraftingUiState->numItemsAdded];
    sEvenCraftingUiState->itemsAdded[sEvenCraftingUiState->numItemsAdded] = 0;
    if (EvenCraftingUi_SpriteIsUsedMultipleTimes(currItem))
    {
        DestroySprite(&gSprites[id]);
    }
    else
    {
        DestroySprite(&gSprites[id]);
        FreeSpriteTilesByTag(currItem);
        FreeSpritePaletteByTag(currItem);
    }
    if (sEvenCraftingUiState->numItemsAdded == 0)
        ResetSpriteData();
}

static void EvenCraftingUi_RemoveOutput(void)
{
    u8 id = sEvenCraftingUiState->outputSprite;
    sEvenCraftingUiState->outputSprite = 0;
    DestroySprite(&gSprites[id]);
    sEvenCraftingUiState->hasCraftResult = FALSE;
    FreeSpritePaletteByTag(sEvenCraftingUiState->outputItem);
    FreeSpriteTilesByTag(sEvenCraftingUiState->outputItem);
}

static void EvenCraftingUi_InitScrollList(void)
{
    u16 scrollPos = 0;
    if (sEvenCraftingUiState->listIsInitialized)
    {
        if (sEvenCraftingUiState->switchedMode)
            DestroyListMenuTask(sEvenCraftingUiState->listTaskid, NULL, NULL);
        else
            DestroyListMenuTask(sEvenCraftingUiState->listTaskid, NULL, &scrollPos);
    }
    switch (sEvenCraftingUiState->mode)
    {
    case MODE_ITEMS:
        EvenCraftingUi_BuildListIngredients();
        break;
    case MODE_RECIPES:
        EvenCraftingUi_BuildListRecipes();
        break;
    }
    sEvenCraftingUiState->listTaskid = ListMenuInit(&sEvenCraftingUiState->list, 0, scrollPos);
    sEvenCraftingUiState->listIsInitialized = TRUE;
    CopyWindowToVram(WIN_LIST, COPYWIN_FULL);
    sEvenCraftingUiState->switchedMode = FALSE;
}

static void EvenCraftingUi_AddCurrentItem(void)
{
    u16 currItem = sEvenCraftingUiState->currentIngredient;
    if (currItem == ITEM_NONE)
        return;
    EvenCraftingUi_AddItem(currItem);
}

static void EvenCraftingUi_AddItem(u16 item)
{
    u32 currIndex = sEvenCraftingUiState->numItemsAdded;
    EvenCraftingUi_AddIngredientSprite(item, currIndex);
    sEvenCraftingUiState->itemsAdded[currIndex] = item;
    sEvenCraftingUiState->numItemsAdded++;
}

static void EvenCraftingUi_CraftItem(enum Recipes recipe)
{
    CraftItem(recipe);
    while (sEvenCraftingUiState->itemsAdded[0] != 0)
        EvenCraftingUi_RemoveLastItem();
    EvenCraftingUi_AddResultSprite(GetOutputFromRecipe(recipe));
    sEvenCraftingUiState->hasCraftResult = TRUE;
    if (!IsCraftingRecipeUnlocked(recipe))
        UnlockRecipe(recipe);
}

static void EvenCraftingUi_AddRecipe(void)
{
    if (TryCraftRecipe(sEvenCraftingUiState->currentRecipe) == sEvenCraftingUiState->currentRecipe)
    {
        PlaySE(ECU_ADD_RECIPE_SOUND);
        while (sEvenCraftingUiState->itemsAdded[0] != 0)
            EvenCraftingUi_RemoveLastItem();
        u16 items[12];
        u32 numItems = GetNumIngredientsFromRecipe(sEvenCraftingUiState->currentRecipe);
        FillItemFromRecipe(sEvenCraftingUiState->currentRecipe, items);
        for (u32 i = 0; i < numItems; i++)
        {
            EvenCraftingUi_AddItem(items[i]);
        }
    }
    else
    {
        PlaySE(ECU_ADD_ITEM_FAIL_SOUND);
    }
}

static u32 EvenCraftingUi_GetTotalBagSlots(void)
{
    return BAG_ITEMS_COUNT + BAG_KEYITEMS_COUNT + BAG_POKEBALLS_COUNT + BAG_TMHM_COUNT + BAG_BERRIES_COUNT;
}

static void EvenCraftingUi_BuildListIngredients(void)
{
    u32 itemCount = 0;
    struct ListIngredients ingredients[40];
    u32 totalBagSlots = EvenCraftingUi_GetTotalBagSlots();

    struct ItemSlot *pCurrSlot = &gSaveBlock1Ptr->bagPocket_Items[0];
    enum IngredientCategories category = sEvenCraftingUiState->currIngredientCategory;
    for (u32 i = 0; i < totalBagSlots; i++)
    {
        u16 currItem = pCurrSlot->itemId;
        if (currItem == ITEM_NONE)
        {
            pCurrSlot++;
            continue;
        }
        if(IsItemInCurrentCategory(category, currItem))
        {
            struct ListIngredients currIngredient;
            currIngredient.item = currItem;
            currIngredient.count = pCurrSlot->quantity;
            ingredients[itemCount] = currIngredient;
            itemCount++;
        }
        pCurrSlot++;
    }
    for (u32 i = 0; i < itemCount; i++)
    {
        sEvenCraftingUiState->listBuffer[i].name = gItemsInfo[ingredients[i].item].name;
        sEvenCraftingUiState->listBuffer[i].id = ingredients[i].item;
    }
    sEvenCraftingUiState->list = sItemListMenu;
    sEvenCraftingUiState->list.items = sEvenCraftingUiState->listBuffer;
    sEvenCraftingUiState->list.totalItems = itemCount;
    if (itemCount > 0)
        sEvenCraftingUiState->currentIngredient = ingredients[0].item;
    else
        sEvenCraftingUiState->currentIngredient = ITEM_NONE;
}

static void EvenCraftingUi_BuildListRecipes(void)
{
    u32 recipeCount = 0;
    for (enum Recipes currRecipe = 0; currRecipe < RECIPE_NONE; currRecipe++)
    {
        if (IsCraftingRecipeUnlocked(currRecipe) && IsCraftingRecipeInCategory(currRecipe, sEvenCraftingUiState->currRecipeCategory))
        {
            sEvenCraftingUiState->listBuffer[recipeCount].name = GetRecipeName(currRecipe);
            sEvenCraftingUiState->listBuffer[recipeCount].id = currRecipe;
            recipeCount++;
        }
    }
    sEvenCraftingUiState->list = sItemListMenu;
    sEvenCraftingUiState->list.items = sEvenCraftingUiState->listBuffer;
    sEvenCraftingUiState->list.totalItems = recipeCount;
}

static bool32 EvenCraftingUi_SpriteIsUsedMultipleTimes(u16 item)
{
    u32 count = 0;
    for (u32 i = 0; i < sEvenCraftingUiState->numItemsAdded; i++)
        if (sEvenCraftingUiState->itemsAdded[i] == item)
            count++;
    return count != 0;
}
