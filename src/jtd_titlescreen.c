#include "global.h"
#include "main.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "scanline_effect.h"
#include "sprite.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "task.h"
#include "text_window.h"
#include "window.h"
#include "constants/characters.h"
#include "constants/rgb.h"
#include "constants/songs.h"


#include "jtd_titlescreen.h"
#include "main_menu.h"
#include "event_object_movement.h"
#include "constants/event_objects.h"
#include "trainer_see.h"

struct SampleUiState
{
    u8 loadState;
    u8 mode;
    u8 spriteId;
};

enum WindowIds
{
    WINDOW_0
};

static EWRAM_DATA struct SampleUiState *sSampleUiState = NULL;
static EWRAM_DATA u8 *sBg1TilemapBuffer = NULL;

static const struct BgTemplate sSampleUiBgTemplates[] =
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
        .mapBaseIndex = 30,
        .priority = 2
    }
};

static const struct WindowTemplate sSampleUiWindowTemplates[] =
{
    [WINDOW_0] =
    {
        .bg = 0,
        .tilemapLeft = 7,
        .tilemapTop = 6,
        .width = 20,
        .height = 10,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE
};

enum FontColor
{
    FONT_WHITE,
    FONT_RED
};
static const u8 sSampleUiWindowFontColors[][3] =
{
    [FONT_WHITE]  = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_WHITE,      TEXT_COLOR_DARK_GRAY},
    [FONT_RED]    = {TEXT_COLOR_TRANSPARENT, TEXT_COLOR_RED,        TEXT_COLOR_LIGHT_GRAY},
};

const u16 gFieldEffectObjectPalette2[] = INCBIN_U16("graphics/field_effects/palettes/general_0.gbapal");

// Callbacks for the sample UI
static void SampleUi_SetupCB(void);
static void SampleUi_MainCB(void);
static void SampleUi_VBlankCB(void);

// Sample UI tasks
static void Task_SampleUiWaitFadeIn(u8 taskId);
static void Task_SampleUiMainInput(u8 taskId);
static void Task_SampleUiWaitAndExit(u8 taskId);

// Sample UI helper functions
static void SampleUi_ResetGpuRegsAndBgs(void);
static bool8 SampleUi_InitBgs(void);
static void SampleUi_FadeAndBail(void);
static bool8 SampleUi_LoadGraphics(void);
static void SampleUi_InitWindows(void);
static void SampleUi_PrintUiSampleWindowText(void);
static void SampleUi_FreeResources(void);

static void Task_SampleUiPrintTagline(u8 taskId);

// Declared in sample_ui.h
void Task_OpenSampleUi_BlankTemplate(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SampleUi_Init();
        DestroyTask(taskId);
    }
}

void SampleUi_Init(void)
{
    sSampleUiState = AllocZeroed(sizeof(struct SampleUiState));

    sSampleUiState->loadState = 0;

    SetMainCallback2(SampleUi_SetupCB);
}

static void SampleUi_ResetGpuRegsAndBgs(void)
{
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
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

static void SampleUi_SetupCB(void)
{
    switch (gMain.state)
    {
    case 0:
        SampleUi_ResetGpuRegsAndBgs();
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
        if (SampleUi_InitBgs())
        {
            sSampleUiState->loadState = 0;
            gMain.state++;
        }
        else
        {
            SampleUi_FadeAndBail();
            return;
        }
        break;
    case 3:
        if (SampleUi_LoadGraphics() == TRUE)
        {
            gMain.state++;
        }
        break;
    case 4:
        SampleUi_InitWindows();
        u32 spriteId = CreateObjectGraphicsSprite(OBJ_EVENT_GFX_SPECIES(MAWILE), SpriteCallbackDummy, 66, 54, 0);
        gSprites[spriteId].oam.priority = 1;
        StartSpriteAnim(&gSprites[spriteId], ANIM_STD_GO_SOUTH);
        sSampleUiState->spriteId = spriteId;
        gMain.state++;
        break;
    case 5:
        SampleUi_PrintUiSampleWindowText();
        CreateTask(Task_SampleUiWaitFadeIn, 0);
        gMain.state++;
        break;
    case 6:
        BeginNormalPaletteFade(PALETTES_ALL, 2, 16, 0, RGB_BLACK);
        gMain.state++;
        break;
    case 7:
        SetVBlankCallback(SampleUi_VBlankCB);
        SetMainCallback2(SampleUi_MainCB);
        break;
    }
}

static void SampleUi_MainCB(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    DoScheduledBgTilemapCopiesToVram();
    UpdatePaletteFade();
}

static void SampleUi_VBlankCB(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

static void Task_SampleUiWaitFadeIn(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        gTasks[taskId].func = Task_SampleUiPrintTagline;
    }
}

static const u8 sText_Text2[] = _("A Safari with some Catches");
static bool32 PrintTagline(u8 taskId)
{
    switch (gTasks[taskId].data[0])
    {
    case 0:
        AddTextPrinterParameterized4(WINDOW_0, FONT_SMALL, 0, 34, 2, 0,
            sSampleUiWindowFontColors[FONT_WHITE], 3, sText_Text2);
        gTasks[taskId].data[0] = 1;
        break;
    case 1:
        RunTextPrinters();
        if (!IsTextPrinterActive(WINDOW_0))
        {
            StartSpriteAnim(&gSprites[sSampleUiState->spriteId], ANIM_STD_FACE_SOUTH);
            return TRUE;
        }
        break;
    }
    return FALSE;
}

static const u8 sText_Text1[] = _("Jamie's Tech Demo");
static void SampleUi_PrintUiSampleWindowText(void)
{
    FillWindowPixelBuffer(WINDOW_0, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));

    AddTextPrinterParameterized4(WINDOW_0, FONT_NORMAL, 24, 3, 0, 0,
        sSampleUiWindowFontColors[FONT_WHITE], TEXT_SKIP_DRAW, sText_Text1);

    CopyWindowToVram(WINDOW_0, COPYWIN_GFX);
}

static void Task_SampleUiPrintTagline(u8 taskId)
{
    if (PrintTagline(taskId))
        gTasks[taskId].func = Task_SampleUiMainInput;
}

static void Task_SampleUiMainInput(u8 taskId)
{
    if (JOY_NEW(B_BUTTON) || JOY_NEW(A_BUTTON) || JOY_NEW(START_BUTTON))
    {
        PlaySE(SE_PC_OFF);
        LoadSpritePalette((const struct SpritePalette *)gFieldEffectObjectPalette2);
        General_HeartIcon(66, 54);
        BeginNormalPaletteFade(PALETTES_ALL, 3, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_SampleUiWaitAndExit;
    }
}

static void Task_SampleUiWaitAndExit(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        DebugPrintf("Task_SampleUiWaitAndExit");
        SetMainCallback2(CB2_InitMainMenu);
        SampleUi_FreeResources();
        DestroyTask(taskId);
    }
}
#define TILEMAP_BUFFER_SIZE (1024 * 2)
static bool8 SampleUi_InitBgs(void)
{
    ResetAllBgsCoordinates();

    sBg1TilemapBuffer = AllocZeroed(TILEMAP_BUFFER_SIZE);
    if (sBg1TilemapBuffer == NULL)
    {
        return FALSE;
    }

    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sSampleUiBgTemplates, NELEMS(sSampleUiBgTemplates));

    SetBgTilemapBuffer(1, sBg1TilemapBuffer);
    ScheduleBgCopyTilemapToVram(1);

    ShowBg(0);
    ShowBg(1);

    return TRUE;
}
#undef TILEMAP_BUFFER_SIZE

static void SampleUi_FadeAndBail(void)
{
    BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
    CreateTask(Task_SampleUiWaitAndExit, 0);
    SetVBlankCallback(SampleUi_VBlankCB);
    SetMainCallback2(SampleUi_MainCB);
}

static bool8 SampleUi_LoadGraphics(void)
{
    switch (sSampleUiState->loadState)
    {
    case 0:
        ResetTempTileDataBuffers();
        sSampleUiState->loadState++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible() != TRUE)
        {
            sSampleUiState->loadState++;
        }

        break;
    case 2:
        LoadPalette(gMessageBox_Pal, BG_PLTT_ID(15), PLTT_SIZE_4BPP);
        sSampleUiState->loadState++;
    default:
        sSampleUiState->loadState = 0;
        return TRUE;
    }
    return FALSE;
}

static void SampleUi_InitWindows(void)
{
    InitWindows(sSampleUiWindowTemplates);
    DeactivateAllTextPrinters();
    ScheduleBgCopyTilemapToVram(0);
    FillWindowPixelBuffer(WINDOW_0, PIXEL_FILL(TEXT_COLOR_TRANSPARENT));
    PutWindowTilemap(WINDOW_0);
    CopyWindowToVram(WINDOW_0, 3);
}

static void SampleUi_FreeResources(void)
{
    if (sSampleUiState != NULL)
    {
        Free(sSampleUiState);
    }
    if (sBg1TilemapBuffer != NULL)
    {
        Free(sBg1TilemapBuffer);
    }
    FreeAllWindowBuffers();
    ResetSpriteData();
}
