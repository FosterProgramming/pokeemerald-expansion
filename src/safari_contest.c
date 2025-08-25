#include "global.h"
#include "main.h"
#include "malloc.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_interface.h"
#include "battle_scripts.h"
#include "contest.h"
#include "item_menu.h"
#include "pokemon.h"
#include "random.h"
#include "safari_contest.h"
#include "sound.h"
#include "string_util.h"
#include "text.h"
#include "window.h"

#include "constants/items.h"
#include "constants/rgb.h"
#include "constants/songs.h"

EWRAM_DATA u8 gCatchChance = 0;
EWRAM_DATA u8 gFleeChance = 0;
EWRAM_DATA u8 gExcludedIdleActions = 0;
EWRAM_DATA u8 gBerryTimer = 0;

const u16 gContestMoveResultStringIds[] =
{
    [NEGATIVE_CONTEST_MOVE_RESULT]          = STRINGID_DISLIKECONTESTMOVE,
    [NEUTRAL_CONTEST_MOVE_RESULT]           = STRINGID_NEUTRALCONTESTMOVE,
    [POSITIVE_CONTEST_MOVE_RESULT]          = STRINGID_LIKECONTESTMOVE,
};

const u16 gIdleActionsStringIds[] =
{
    [CONTEST_CATEGORY_COOL]   = STRINGID_PKMNSTARING,
    [CONTEST_CATEGORY_BEAUTY] = STRINGID_PKMNHISSING,
    [CONTEST_CATEGORY_CUTE]   = STRINGID_PKMNPRETENDING,
    [CONTEST_CATEGORY_SMART]  = STRINGID_PKMNHOPPING,
    [CONTEST_CATEGORY_TOUGH]  = STRINGID_PKMNSHAKING,
};

static const s8 sEasyContestTable[EASY_CONTEST_COUNT][EASY_CONTEST_COUNT] =
{
    [EASY_CONTEST_CUTE] = {
        [EASY_CONTEST_CUTE]  = +1,
        [EASY_CONTEST_SMART] =  0,
        [EASY_CONTEST_TOUGH] = -1,
    },
    [EASY_CONTEST_SMART] = {
        [EASY_CONTEST_CUTE]  = -1,
        [EASY_CONTEST_SMART] = +1,
        [EASY_CONTEST_TOUGH] =  0,
    },
    [EASY_CONTEST_TOUGH] = {
        [EASY_CONTEST_CUTE]  =  0,
        [EASY_CONTEST_SMART] = -1,
        [EASY_CONTEST_TOUGH] = +1,
    }
};

static void ResetIdleActions(void)
{
    gExcludedIdleActions = (1 << gSpecialVar_ContestCategory);
}

static u32 CountPossibleIdleActions(void)
{
    u32 count = 0;
    for (u32 contestType = 0; contestType < CONTEST_CATEGORIES_COUNT; contestType++)
    {
        if (!TYPE_EXCLUDED(gExcludedIdleActions, contestType))
            count++;
    }
    return count;
}

static u32 ChooseIdleAction_Easy(void)
{
    return RandomUniform(RNG_NONE, 0, 4);
}

static u32 ChooseIdleAction_Hard(void)
{
    u32 actionsCount = CountPossibleIdleActions();
    if (actionsCount < 1)
    {
        actionsCount = 4;
        ResetIdleActions();
        gExcludedIdleActions |= NO_MORE_IDLE_ACTION_CLUES;
    }

    u32 idleIndex = RandomUniform(RNG_NONE, 0, actionsCount - 1);
    u32 idleAction = -1;
    for (u32 i = 0; i <= idleIndex; i++)
    {
        idleAction++;
        while (TYPE_EXCLUDED(gExcludedIdleActions, idleAction))
            idleAction++;
    }
    if (!(gExcludedIdleActions & NO_MORE_IDLE_ACTION_CLUES))
        EXCLUDE_TYPE(gExcludedIdleActions, idleAction);
    return idleAction;
}

void ChooseIdleAction(void)
{
    NATIVE_ARGS();

    u32 idleAction;
    if (gSaveBlock2Ptr->optionsDifficulty)
        idleAction = ChooseIdleAction_Hard();
    else
        idleAction = ChooseIdleAction_Easy();
    gBattlerAttacker = 1;
    gBattleCommunication[MULTISTRING_CHOOSER] = idleAction;
    gBattlescriptCurrInstr = cmd->nextInstr;
}

void InitSafariContest(void)
{
    struct Pokemon *mon;
    mon = &gEnemyParty[0];

    u16 species = GetMonData(mon, MON_DATA_SPECIES_OR_EGG);
    gCatchChance = gSpeciesInfo[species].catchRate;
    gFleeChance = 0;
    if (gSaveBlock2Ptr->optionsDifficulty)
        gSpecialVar_ContestCategory = RandomUniform(RNG_NONE, 0, CONTEST_CATEGORIES_COUNT - 1);
    else
    {
        gSpecialVar_ContestCategory = RandomUniform(RNG_NONE, 0, 2);
    }
    ResetIdleActions();
}

static void ModifyCatchChance(s32 change)
{
    if (gCatchChance + change > 255)
        change = 255 - gCatchChance;
    else if (gCatchChance + change < 0)
        change = -1 * gCatchChance;
    gCatchChance += change;
    gBattleStruct->moveDamage[1] = -1 * change;
}

static s8 GetContestMoveResult_Hard(void)
{
    s8 move_result = Contest_GetMoveExcitement(gCurrentMove);
    if (move_result == 1)
    {
        ResetIdleActions();
        gExcludedIdleActions |= NO_MORE_IDLE_ACTION_CLUES;
    }
    if (!(gExcludedIdleActions & NO_MORE_IDLE_ACTION_CLUES))
    {
        u32 move_type = GetMoveContestCategory(gCurrentMove);
        for (u32 i = 0; i < CONTEST_CATEGORIES_COUNT; i++)
        {
            if (gContestExcitementTable[i][move_type] != move_result)
            {
                EXCLUDE_TYPE(gExcludedIdleActions, i);
            }
        }
    }
    return move_result;
}

static s8 GetContestMoveResult_Easy(void)
{
    u32 contestType = GetMoveContestCategory(gCurrentMove);
    if (contestType == CONTEST_CATEGORY_COOL || contestType == CONTEST_CATEGORY_BEAUTY)
        return -1;
    if (contestType == CONTEST_CATEGORY_CUTE)
        contestType = EASY_CONTEST_CUTE;
    else if (contestType == CONTEST_CATEGORY_SMART)
        contestType = EASY_CONTEST_SMART;
    else if (contestType == CONTEST_CATEGORY_TOUGH)
        contestType = EASY_CONTEST_TOUGH;
    return sEasyContestTable[gSpecialVar_ContestCategory][contestType];
}

void UpdateCaptureChance(void)
{
    NATIVE_ARGS();

    s8 move_result;
    if (gSaveBlock2Ptr->optionsDifficulty)
        move_result = GetContestMoveResult_Hard();
    else
        move_result = GetContestMoveResult_Easy();
    move_result += 1;
    u32 change = 0;
    switch (move_result) 
    {
        case NEGATIVE_CONTEST_MOVE_RESULT:
            change = -30;
            break;
        case NEUTRAL_CONTEST_MOVE_RESULT:
            change = 50;
            break;
        case POSITIVE_CONTEST_MOVE_RESULT:
            change = 200;
            break;
    }

    ModifyCatchChance(change);
    gBattleCommunication[MULTISTRING_CHOOSER] = move_result;
    gBattleScripting.animArg1 = B_ANIM_NEGATIVE_CONTEST_MOVE + move_result;
    gBattlerTarget = 1;
    gBattlescriptCurrInstr = cmd->nextInstr;
}

void UpdateBerryEffect(void)
{
    NATIVE_ARGS();

    u32 berryId = gBattleScripting.throwBerryState + FIRST_BERRY_INDEX - 1;
    if (berryId)
    {
        ModifyCatchChance(20);
        gBattlerTarget = 1;
        gBattlescriptCurrInstr = BattleScript_PokemonLovesBerry;
        gBerryTimer = 3;
    } else {
        gBerryTimer = 1;
    }
}

void YesNoBoxThrowBerry(void)
{
    NATIVE_ARGS();

    switch (gBattleScripting.throwBerryState)
    {
    case 0:
        HandleBattleWindow(YESNOBOX_X_Y, 0);
        BattlePutTextOnWindow(gText_BattleYesNoChoice, B_WIN_YESNO);
        gBattleScripting.throwBerryState++;
        gBattleCommunication[CURSOR_POSITION] = 0;
        gSpecialVar_ItemId = 0;
        BattleCreateYesNoCursorAt(0);
        break;
    case 1:
        if (JOY_NEW(DPAD_UP) && gBattleCommunication[CURSOR_POSITION] != 0)
        {
            PlaySE(SE_SELECT);
            BattleDestroyYesNoCursorAt(gBattleCommunication[CURSOR_POSITION]);
            gBattleCommunication[CURSOR_POSITION] = 0;
            BattleCreateYesNoCursorAt(0);
        }
        if (JOY_NEW(DPAD_DOWN) && gBattleCommunication[CURSOR_POSITION] == 0)
        {
            PlaySE(SE_SELECT);
            BattleDestroyYesNoCursorAt(gBattleCommunication[CURSOR_POSITION]);
            gBattleCommunication[CURSOR_POSITION] = 1;
            BattleCreateYesNoCursorAt(1);
        }
        if (JOY_NEW(A_BUTTON))
        {
            PlaySE(SE_SELECT);
            if (gBattleCommunication[1] == 0)
            {
                HandleBattleWindow(YESNOBOX_X_Y, WINDOW_CLEAR);
                BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
                gBattleScripting.throwBerryState++;
            }
            else
            {
                gBattleScripting.throwBerryState = 4;
            }
        }
        else if (JOY_NEW(B_BUTTON))
        {
            PlaySE(SE_SELECT);
            gBattleScripting.throwBerryState = 4;
        }
        break;
    case 2:
        if (!gPaletteFade.active)
        {
            FreeAllWindowBuffers();
            CB2_ChooseBerryForBattle();
            gBattleScripting.throwBerryState++;
        }
        break;
    case 3:
        if (!gPaletteFade.active && gMain.callback2 == BattleMainCB2)
        {
            gBattleScripting.throwBerryState++;
        }
        break;
    case 4:
        if (gSpecialVar_ItemId) 
        {
            gLastUsedItem = gSpecialVar_ItemId;
            gBattleScripting.throwBerryState = gSpecialVar_ItemId - FIRST_BERRY_INDEX + 1;
        }
        else
            gBattleScripting.throwBerryState = 0;
        HandleBattleWindow(YESNOBOX_X_Y, WINDOW_CLEAR);
        gBattlerTarget = 1;
        gBattlerAttacker = 0;
        gBattlescriptCurrInstr = cmd->nextInstr;
        break;
    }
}

void PokemonEscapeAttempt(void)
{
    NATIVE_ARGS();

    gBattleScripting.throwBerryState--;
    gBattleOutcome = B_OUTCOME_MON_FLED;
    if (JOY_NEW(R_BUTTON))
    {
        gLastUsedItem = ITEM_POKE_BALL;
        gBattlescriptCurrInstr = BattleScript_BallThrow;
    }
    else if (JOY_NEW(B_BUTTON) || gBattleScripting.throwBerryState == 0)
    {

        gBattlescriptCurrInstr = cmd->nextInstr;
    }
}

/*
void PrintCaptureChanceOnHealthbox(u8 battler)
{
    u8 *windowTileData;
    u32 windowId;
    void *objVram = (void *)(OBJ_VRAM0) + gSprites[gHealthboxSpriteIds[battler]].oam.tileNum * TILE_SIZE_4BPP;

    u8 captureRate = gCatchChance;
    u32 capturePercent = captureRate * 100 / 255;

    u8 captureText[] = _("00%");
    u8 percentNum[2];
    if (capturePercent < 100) {
    
        ConvertIntToDecimalStringN(percentNum, capturePercent, STR_CONV_MODE_LEADING_ZEROS, 2);
        for (u32 i = 0; i < 2; i++) {
            captureText[i] = percentNum[i];
        }
    } else {
        captureText[0] = CHAR_1;
        captureText[2] = CHAR_0;
    }
    DebugPrintf("%d %S", capturePercent, captureText);
    windowTileData = AddTextPrinterAndCreateWindowOnHealthbox(captureText, 0, 4, 2, &windowId);
    HpTextIntoHealthboxObject(objVram + 17 * TILE_SIZE_4BPP, windowTileData, 3);
    RemoveWindow(windowId);
}
*/