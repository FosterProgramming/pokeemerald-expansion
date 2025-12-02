#include "brave_battle.h"
#include "battle.h"
#include "battle_ai_util.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_gimmick.h"
#include "event_data.h"
#include "even_sprite.h"
#include "item.h"
#include "item_use.h"
#include "line_break.h"
#include "main.h"
#include "malloc.h"
#include "pokemon_icon.h"
#include "sound.h"
#include "string_util.h"
#include "text.h"
#include "constants/songs.h"
#include "constants/characters.h"

#define BATTLER_INDICATOR_TAG 0xDEDE

static void BraveInitItemMenu(u32 battler);
static void BraveLoadMonSelection(u32 battler, u32 moveSelect);

const u32 sBraveItemMenuGfx[] = INCBIN_U32("graphics/brave_item_menu/item_menu.4bpp");
const u32 sBraveItemMenuGfx2[] = INCBIN_U32("graphics/brave_item_menu/item_menu2.4bpp");
const u16 sBraveItemMenuPal[] = INCBIN_U16("graphics/brave_item_menu/item_menu.gbapal");
const u32 sBraveItemMenuOther[] = INCBIN_U32("graphics/brave_item_menu/item_menu_other_sprites.4bpp");
const u32 sBraveItemMenuSelector[] = INCBIN_U32("graphics/brave_item_menu/item_menu_selector.4bpp");
const u32 sBraveItemMenuHPBars[] = INCBIN_U32("graphics/brave_item_menu/item_menu_hp_bars.4bpp");
const u32 sBraveItemMenuStatus[] = INCBIN_U32("graphics/brave_item_menu/item_menu_status.4bpp");
const u32 sBraveItemMenuMove[] = INCBIN_U32("graphics/brave_item_menu/item_menu_move.4bpp");
const u32 sBraveItemMenuMoveSelector[] = INCBIN_U32("graphics/brave_item_menu/item_menu_move_selector.4bpp");

struct BraveListItem
{
    u16 item;
    u16 count;
};

struct BraveItemMenuState
{
    u8 state;
    u8 itemCategory;
    u8 scrollPos;
    u8 spriteIds[2];
    u8 extraSpriteIds[2];
    u8 itemSelectX;
    u8 itemSelectY;
    u8 selectorSpriteId;
    u8 monIconIds[6];
    u8 monSelection;
    u8 moveIndex;
    u16 moves[4];
    struct BraveListItem itemList[50];
};

EWRAM_DATA struct BraveItemMenuState *sBraveItemMenuState;

static void PrintBraveItemList(void)
{
    for (u32 i = 0; i < 3; i++)
    {
        //  Skip the top row if first item
        if (sBraveItemMenuState->scrollPos == 0 && i == 0)
            continue;
        if (i == 2 && sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos + 1].item == ITEM_NONE)
            continue;
        if (sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos - 1 + i].item == ITEM_NONE)
            continue;
        const u8 *str = gItemsInfo[sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos - 1 + i].item].name;
        PrintOnBraveItemMenu(str,
                             (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[0]].oam.tileNum * 32) + 512 + i * 512 + 64,
                             (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[1]].oam.tileNum * 32) + 512 + i * 512,
                             0, 0,
                             0,
                             2, 14, 15);
    }
}

static void BuildItemList(u32 category)
{
    u32 listIndex = 0;
    u32 itemIndex = 0;
    for (u32 i = 0; i < 50; i++)
        sBraveItemMenuState->itemList[i].item = ITEM_NONE;

    while (TRUE)
    {
        u32 item = BagGetItemIdByPocketPosition(POCKET_ITEMS, itemIndex);
        if (item == ITEM_NONE)
            break;
        u32 count = BagGetQuantityByPocketPosition(POCKET_ITEMS , itemIndex);

        if (gItemsInfo[item].braveType == category)
        {
            sBraveItemMenuState->itemList[listIndex].item = item;
            sBraveItemMenuState->itemList[listIndex].count = count;
            listIndex++;
        }
        itemIndex++;
    }

    while (TRUE)
    {
        u32 item = BagGetItemIdByPocketPosition(POCKET_BERRIES, itemIndex);
        if (item == ITEM_NONE)
            break;
        u32 count = BagGetQuantityByPocketPosition(POCKET_BERRIES , itemIndex);

        if (gItemsInfo[item].braveType == category)
        {
            sBraveItemMenuState->itemList[listIndex].item = item;
            sBraveItemMenuState->itemList[listIndex].count = count;
            listIndex++;
        }
        itemIndex++;
    }
}

static void SelectBraveItemMenuCategory(u32 category)
{
    u32 *dst;
    const u32 *src = &sBraveItemMenuOther[32 * 9 + category * 32];
    if (category < 3)
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC1) + 2 + 2 * category) * TILE_SIZE_4BPP);
    }
    else
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC2) + 2 * (category - 3)) * TILE_SIZE_4BPP);
    }

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void UnselectBraveItemMenuCategory(u32 category)
{
    u32 *dst;
    const u32 *src = &sBraveItemMenuOther[32 + category * 32];
    if (category < 3)
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC1) + 2 + 2 * category) * TILE_SIZE_4BPP);
    }
    else
    {
        dst = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC2) + 2 * (category - 3)) * TILE_SIZE_4BPP);
    }

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void ClearItemList(void)
{
    u32 *dst1 = (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[0]].oam.tileNum * 32);
    u32 *dst2 = (void*)(OBJ_VRAM0) + (gSprites[sBraveItemMenuState->spriteIds[1]].oam.tileNum * 32);
    for (u32 i = 0; i < 48; i++)
    {
        dst1[128 + 16 + i] = 0x22222222;
        dst1[128 + 16+ 64 + i] = 0x22222222;
        dst1[256 + 16+ i] = 0x22222222;
        dst1[256 + 16+ 64 + i] = 0x22222222;
        dst1[384 + 16+ i] = 0x22222222;
        dst1[384 + 16+ 64 + i] = 0x22222222;
    }

    for (u32 i = 0; i < 32; i++)
    {
        dst2[128 + i] = 0x22222222;
        dst2[128 + 64 + i] = 0x22222222;
        dst2[256 + i] = 0x22222222;
        dst2[256 + 64 + i] = 0x22222222;
        dst2[384 + i] = 0x22222222;
        dst2[384 + 64 + i] = 0x22222222;
    }
}

static void SetLeftToActive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[0];

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void SetRightToActive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[32 * 7];

    for (u32 i = 0; i < 16; i++)
    {
        dst[48 + i] = src[i];
        dst[48 + 64 + i] = src[16 + i];
    }
}

static void SetLeftToInactive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[32 * 8];

    for (u32 i = 0; i < 16; i++)
    {
        dst[i] = src[i];
        dst[64 + i] = src[16 + i];
    }
}

static void SetRightToInactive(void)
{
    u32 *dst = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP);
    const u32 *src = &sBraveItemMenuOther[32 * 15];

    for (u32 i = 0; i < 16; i++)
    {
        dst[48 + i] = src[i];
        dst[48 + 64 + i] = src[16 + i];
    }
}

static void FreeAndExitBraveItemMenu(u32 battler)
{
    SetControllerFuncToInputFromBraveItemMenu(battler);
    DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[0]]);
    DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[1]]);
    FreeSpritePaletteByTag(0xCEC1);
    FreeSpriteTilesByTag(0xCEC1);
    FreeSpriteTilesByTag(0xCEC2);
    Free(sBraveItemMenuState);
    sBraveItemMenuState = NULL;
    ShowPlayerHealthboxes();
}

static void FreeBraveItemMenuMonSelection(u32 battler)
{
    DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[0]]);
    DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[1]]);
    DestroySprite(&gSprites[sBraveItemMenuState->extraSpriteIds[0]]);
    DestroySprite(&gSprites[sBraveItemMenuState->extraSpriteIds[1]]);
    DestroySprite(&gSprites[sBraveItemMenuState->selectorSpriteId]);
    FreeSpritePaletteByTag(0xCEC1);
    FreeSpriteTilesByTag(0xCEC1);
    FreeSpriteTilesByTag(0xCEC2);
    FreeSpriteTilesByTag(0xCEC3);
    FreeSpriteTilesByTag(0xCEC4);
    FreeSpriteTilesByTag(0xCEC5);
    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        FreeAndDestroyMonIconSprite(&gSprites[sBraveItemMenuState->monIconIds[i]]);
    }
    FreeMonIconPalettes();
    ShowPlayerHealthboxes();
    sBraveItemMenuState->state = 0;
}

static void FreeBraveItemMenuMoveSelection(u32 battler)
{
    //DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[0]]);
    //DestroySprite(&gSprites[sBraveItemMenuState->spriteIds[1]]);
    DestroySprite(&gSprites[sBraveItemMenuState->extraSpriteIds[0]]);
    DestroySprite(&gSprites[sBraveItemMenuState->extraSpriteIds[1]]);
    DestroySprite(&gSprites[sBraveItemMenuState->selectorSpriteId]);
    //FreeSpritePaletteByTag(0xCEC1);
    //FreeSpriteTilesByTag(0xCEC1);
    //FreeSpriteTilesByTag(0xCEC2);
    FreeSpriteTilesByTag(0xCEC3);
    FreeSpriteTilesByTag(0xCEC4);
    FreeSpriteTilesByTag(0xCEC5);
}

static void BraveItemMenuMoveSelect_HandleInput(u32 battler)
{
    if (JOY_NEW(DPAD_UP))
    {
        if (sBraveItemMenuState->moveIndex == 0)
        {
            PlaySE(SE_PC_OFF);
        }
        else
        {
            sBraveItemMenuState->moveIndex--;
            gSprites[sBraveItemMenuState->selectorSpriteId].y = 40 + sBraveItemMenuState->moveIndex * 16;
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sBraveItemMenuState->moveIndex == 3 || sBraveItemMenuState->moves[sBraveItemMenuState->moveIndex + 1] == MOVE_NONE)
        {
            PlaySE(SE_PC_OFF);
        }
        else
        {
            sBraveItemMenuState->moveIndex++;
            gSprites[sBraveItemMenuState->selectorSpriteId].y = 40 + sBraveItemMenuState->moveIndex * 16;
        }
    }
    else if (JOY_NEW(A_BUTTON))
    {
        u32 move = sBraveItemMenuState->moves[sBraveItemMenuState->moveIndex];
        u32 ppBonus = GetMonData(&gPlayerParty[sBraveItemMenuState->monSelection], MON_DATA_PP_BONUSES);
        u32 currPP = GetMonData(&gPlayerParty[sBraveItemMenuState->monSelection], MON_DATA_PP1 + sBraveItemMenuState->moveIndex);
        u32 maxPP = CalculatePPWithBonus(move, ppBonus, sBraveItemMenuState->moveIndex);

        if (currPP == maxPP)
        {
            PlaySE(SE_PC_OFF);
        }
        else
        {
            u32 item = sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos].item;
            BraveAddItemToQueue(battler, item, sBraveItemMenuState->monSelection, sBraveItemMenuState->moveIndex);
            PlaySE(SE_SELECT);
            FreeBraveItemMenuMoveSelection(battler);
            FreeAndExitBraveItemMenu(battler);
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        FreeBraveItemMenuMoveSelection(battler);
        BraveLoadMonSelection(battler, TRUE);
    }
}

const u8 sUseItemMoveEndStr[] = _(" on which move?");
static void BraveOpenItemMoveSelect(u32 battler)
{
    u32 *sprite1 = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP);
    u32 *sprite2 = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP);
    u32 *sprite3 = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC3) * TILE_SIZE_4BPP);
    u32 *sprite4 = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC4) * TILE_SIZE_4BPP);

    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        FreeAndDestroyMonIconSprite(&gSprites[sBraveItemMenuState->monIconIds[i]]);
    }
    FreeMonIconPalettes();
    DestroySprite(&gSprites[sBraveItemMenuState->selectorSpriteId]);
    FreeSpriteTilesByTag(0xCEC5);

    for (u32 i = 0; i < 512; i++)
    {
        sprite1[i] = sBraveItemMenuMove[i];
        sprite2[i] = sBraveItemMenuMove[512 + i];
        sprite3[i] = sBraveItemMenuMove[1024 + i];
        sprite4[i] = sBraveItemMenuMove[1536 + i];
    }

    //  Build the string to be printed
    u32 item = sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos].item;
    u8 str[ITEM_NAME_LENGTH + 4 + 16];
    u32 currChar = 0;
    u32 itemChar = 0;
    u32 endStrChar = 0;
    str[currChar++] = CHAR_U;
    str[currChar++] = CHAR_s;
    str[currChar++] = CHAR_e;
    str[currChar++] = CHAR_SPACE;
    while (gItemsInfo[item].name[itemChar] != EOS)
        str[currChar++] = gItemsInfo[item].name[itemChar++];
    while (sUseItemMoveEndStr[endStrChar] != EOS)
        str[currChar++] = sUseItemMoveEndStr[endStrChar++];
    str[currChar] = EOS;

    BreakStringAutomatic(str, 112, 0, FONT_SHORT);
    PrintItemOnBraveItemMenu(str, (u8 *)sprite1, (u8 *)sprite2, 0, 0, 0, 2, 14, 15);

    u32 ppBonus = GetMonData(&gPlayerParty[sBraveItemMenuState->monSelection], MON_DATA_PP_BONUSES);

    //  Print the moves
    for (u32 i = 0; i < 4; i++)
    {
        u32 move = GetMonData(&gPlayerParty[sBraveItemMenuState->monSelection], MON_DATA_MOVE1 + i);
        sBraveItemMenuState->moves[i] = move;
        if (move == MOVE_NONE)
            continue;

        u32 *sprite1;
        u32 *sprite2;
        if (i < 2)
        {
            sprite1 = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC1) + i * 16 + 33) * TILE_SIZE_4BPP);
            sprite2 = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC2) + i * 16 + 32) * TILE_SIZE_4BPP);
        }
        else
        {
            sprite1 = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC3) + (i - 2) * 16 + 1) * TILE_SIZE_4BPP);
            sprite2 = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC4) + (i - 2) * 16) * TILE_SIZE_4BPP);
        }

        PrintMoveNameOnBraveItemMenu(gMovesInfo[move].name, (u8 *)sprite1, (u8 *)sprite2, 0, 0, 0, 2, 14, 15);

        u32 currPP = GetMonData(&gPlayerParty[sBraveItemMenuState->monSelection], MON_DATA_PP1 + i);
        u32 maxPP = CalculatePPWithBonus(move, ppBonus, i);

        u8 ppStr[8];
        u32 currChar = 2;
        ConvertIntToDecimalStringN(ppStr, currPP, STR_CONV_MODE_LEFT_ALIGN, 2);
        while (ppStr[currChar] != EOS)
            currChar++;
        ppStr[currChar++] = CHAR_SLASH;
        ConvertIntToDecimalStringN(&ppStr[currChar], maxPP, STR_CONV_MODE_LEFT_ALIGN, 2);
        if (i < 2)
            sprite2 = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC2) + i * 16 + 35) * TILE_SIZE_4BPP);
        else
            sprite2 = (u32 *)(OBJ_VRAM0 + (GetSpriteTileStartByTag(0xCEC4) + (i - 2) * 16 + 3) * TILE_SIZE_4BPP);
        PrintMovePPOnBraveItemMenu(ppStr, NULL, (u8 *)sprite2, 0, 0, 0, 2, 14, 15);
    }
    struct Even_CreateSpriteStruct cs = {0};
    cs.sprite = sBraveItemMenuMoveSelector;
    cs.tileTag = 0xCEC5;
    cs.palTag = 0xCEC1;
    cs.spriteSize = SPRITE_SIZE(8x16);
    cs.spriteShape = SPRITE_SHAPE(8x16);
    cs.posX = 240 - 124;
    cs.posY = 40;
    sBraveItemMenuState->selectorSpriteId = Even_CreateSprite(&cs);
    gSprites[sBraveItemMenuState->selectorSpriteId].oam.priority = 0;
    gBattlerControllerFuncs[battler] = BraveItemMenuMoveSelect_HandleInput;
}

static void BraveItemMenuMonAndMoveSelect_HandleInput(u32 battler)
{
    if (JOY_NEW(DPAD_UP))
    {
        if (sBraveItemMenuState->itemSelectY != 0)
        {
            sBraveItemMenuState->itemSelectY--;
            gSprites[sBraveItemMenuState->selectorSpriteId].y = 38 + sBraveItemMenuState->itemSelectY * 30;
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sBraveItemMenuState->itemSelectY != 2 && GetMonData(&gPlayerParty[sBraveItemMenuState->itemSelectX + (sBraveItemMenuState->itemSelectY + 1) * 2], MON_DATA_SPECIES) != SPECIES_NONE)
        {
            sBraveItemMenuState->itemSelectY++;
            gSprites[sBraveItemMenuState->selectorSpriteId].y = 38 + sBraveItemMenuState->itemSelectY * 30;
        }
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        if (sBraveItemMenuState->itemSelectX != 0)
        {
            sBraveItemMenuState->itemSelectX--;
            gSprites[sBraveItemMenuState->selectorSpriteId].x = 240 - 112 + sBraveItemMenuState->itemSelectX * 64;
        }
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        if (sBraveItemMenuState->itemSelectX != 1 && GetMonData(&gPlayerParty[(sBraveItemMenuState->itemSelectX + 1) + sBraveItemMenuState->itemSelectY * 2], MON_DATA_SPECIES) != SPECIES_NONE)
        {
            sBraveItemMenuState->itemSelectX++;
            gSprites[sBraveItemMenuState->selectorSpriteId].x = 240 - 112 + sBraveItemMenuState->itemSelectX * 64;
        }
    }
    else if (JOY_NEW(A_BUTTON))
    {
        //  Open a move selection menu
        sBraveItemMenuState->monSelection = sBraveItemMenuState->itemSelectX + sBraveItemMenuState->itemSelectY * 2;
        sBraveItemMenuState->moveIndex = 0;
        BraveOpenItemMoveSelect(battler);
    }
    else if (JOY_NEW(B_BUTTON))
    {
        FreeBraveItemMenuMonSelection(battler);
        gBattlerControllerFuncs[battler] = BraveInitItemMenu;
    }
}

static void BraveItemMenuMonSelect_HandleInput(u32 battler)
{
    if (JOY_NEW(DPAD_UP))
    {
        if (sBraveItemMenuState->itemSelectY != 0)
        {
            sBraveItemMenuState->itemSelectY--;
            gSprites[sBraveItemMenuState->selectorSpriteId].y = 38 + sBraveItemMenuState->itemSelectY * 30;
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sBraveItemMenuState->itemSelectY != 2 && GetMonData(&gPlayerParty[sBraveItemMenuState->itemSelectX + (sBraveItemMenuState->itemSelectY + 1) * 2], MON_DATA_SPECIES) != SPECIES_NONE)
        {
            sBraveItemMenuState->itemSelectY++;
            gSprites[sBraveItemMenuState->selectorSpriteId].y = 38 + sBraveItemMenuState->itemSelectY * 30;
        }
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        if (sBraveItemMenuState->itemSelectX != 0)
        {
            sBraveItemMenuState->itemSelectX--;
            gSprites[sBraveItemMenuState->selectorSpriteId].x = 240 - 112 + sBraveItemMenuState->itemSelectX * 64;
        }
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        if (sBraveItemMenuState->itemSelectX != 1 && GetMonData(&gPlayerParty[(sBraveItemMenuState->itemSelectX + 1) + sBraveItemMenuState->itemSelectY * 2], MON_DATA_SPECIES) != SPECIES_NONE)
        {
            sBraveItemMenuState->itemSelectX++;
            gSprites[sBraveItemMenuState->selectorSpriteId].x = 240 - 112 + sBraveItemMenuState->itemSelectX * 64;
        }
    }
    else if (JOY_NEW(A_BUTTON))
    {
        u32 item = sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos].item;
        u32 partyIndex = sBraveItemMenuState->itemSelectX + sBraveItemMenuState->itemSelectY * 2;
        bool32 cannotUse = CannotUseItemsInBattle(item, &gPlayerParty[partyIndex]);

        if (cannotUse)
        {
            PlaySE(SE_PC_OFF);
        }
        else
        {
            BraveAddItemToQueue(battler, item, partyIndex, 0);
            PlaySE(SE_SELECT);
            FreeBraveItemMenuMonSelection(battler);
            FreeAndExitBraveItemMenu(battler);
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        FreeBraveItemMenuMonSelection(battler);
        gBattlerControllerFuncs[battler] = BraveInitItemMenu;
    }
}

const u8 sUseItemEndStr[] = _(" on which mon?");
static void BraveItemMenu_LoadMonSelectBg(void)
{
    //  Enlarge the bg and print which item is used at the top

    //  Build the string to be printed
    u32 item = sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos].item;
    u8 str[ITEM_NAME_LENGTH + 4 + 16];
    u32 currChar = 0;
    u32 itemChar = 0;
    u32 endStrChar = 0;
    str[currChar++] = CHAR_U;
    str[currChar++] = CHAR_s;
    str[currChar++] = CHAR_e;
    str[currChar++] = CHAR_SPACE;
    while (gItemsInfo[item].name[itemChar] != EOS)
        str[currChar++] = gItemsInfo[item].name[itemChar++];
    while (sUseItemEndStr[endStrChar] != EOS)
        str[currChar++] = sUseItemEndStr[endStrChar++];
    str[currChar] = EOS;

    BreakStringAutomatic(str, 112, 0, FONT_SHORT);

    u32 *sprite1 = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP);
    u32 *sprite2 = (u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP);
    for (u32 i = 0; i < 512; i++)
    {
        sprite1[i] = sBraveItemMenuGfx2[i];
        sprite2[i] = sBraveItemMenuGfx2[512 + i];
    }
    struct Even_CreateSpriteStruct cs = {0};
    cs.sprite = &sBraveItemMenuGfx2[1024];
    cs.tileTag = 0xCEC3;
    cs.palTag = 0xCEC1;
    cs.spriteSize = SPRITE_SIZE(64x64);
    cs.spriteShape = SPRITE_SHAPE(64x64);
    cs.posX = 240 - 64 - 32;
    cs.posY = 32 + 64;
    sBraveItemMenuState->extraSpriteIds[0] = Even_CreateSprite(&cs);
    cs.sprite = &sBraveItemMenuGfx2[1536];
    cs.tileTag = 0xCEC4;
    cs.posX = 240 - 32;
    sBraveItemMenuState->extraSpriteIds[1] = Even_CreateSprite(&cs);
    gSprites[sBraveItemMenuState->extraSpriteIds[0]].oam.priority = 1;
    gSprites[sBraveItemMenuState->extraSpriteIds[1]].oam.priority = 1;

    PrintItemOnBraveItemMenu(str, (u8 *)sprite1, (u8 *)sprite2, 0, 0, 0, 2, 14, 15);

    //  Hide player healthbars temporarily
    HidePlayerHealthboxes();
}

static void BraveItemMenu_DrawHPBar(u32 index, u32 currHP, u32 maxHP)
{
    u32 fraction = 24 * currHP / (maxHP + 1);
    const u32 *src = &sBraveItemMenuHPBars[4 * 8 * fraction];
    u32 *dst;
    switch (index)
    {
    case 0:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP))[8 * 44];
        for (u32 i = 0; i < 32; i++)
            dst[i] = src[i];
        break;
    case 1:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP))[8 * 44];
        for (u32 i = 0; i < 32; i++)
            dst[i] = src[i];
        break;
    case 2:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC3) * TILE_SIZE_4BPP))[8 * 4];
        for (u32 i = 0; i < 4; i++)
        {
            dst[4 + i] = src[i];
            dst[12 + i] = src[8 + i];
            dst[20 + i] = src[16 + i];
            dst[28 + i] = src[24 + i];
        }
        break;
    case 3:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC4) * TILE_SIZE_4BPP))[8 * 4];
        for (u32 i = 0; i < 4; i++)
        {
            dst[4 + i] = src[i];
            dst[12 + i] = src[8 + i];
            dst[20 + i] = src[16 + i];
            dst[28 + i] = src[24 + i];
        }
        break;
    case 4:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC3) * TILE_SIZE_4BPP))[8 * 36];
        for (u32 i = 0; i < 32; i++)
            dst[i] = src[i];
        break;
    case 5:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC4) * TILE_SIZE_4BPP))[8 * 36];
        for (u32 i = 0; i < 32; i++)
            dst[i] = src[i];
        break;
    }
}

static void BraveItemMenu_DrawStatusIcon(u32 index)
{
    u32 status = GetMonData(&gPlayerParty[index], MON_DATA_STATUS);
    if (status == 0)
        return;
    switch (status)
    {
    case STATUS1_BURN:
        status = 0;
        break;
    case STATUS1_POISON:
    case STATUS1_TOXIC_POISON:
        status = 1;
        break;
    case STATUS1_FREEZE:
    case STATUS1_FROSTBITE:
        status = 2;
        break;
    case STATUS1_PARALYSIS:
        status = 3;
        break;
    case STATUS1_SLEEP:
        status = 4;
        break;
    }

    u32 *dst, *dst2;
    const u32 *src = &sBraveItemMenuStatus[16 * status];

    switch (index)
    {
    case 0:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP))[8 * 37];
        for (u32 i = 0; i < 16; i++)
            dst[i] = src[i];
        break;
    case 1:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP))[8 * 37];
        for (u32 i = 0; i < 16; i++)
            dst[i] = src[i];
        break;
    case 2:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC1) * TILE_SIZE_4BPP))[8 * 61];
        dst2 = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC3) * TILE_SIZE_4BPP))[8 * 5];
        for (u32 i = 0; i < 4; i++)
        {
            dst[4 + i] = src[i];
            dst2[i] = src[4 + i];
            dst[12 + i] = src[8 + i];
            dst2[8 + i] = src[12 + i];
        }
        break;
    case 3:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC2) * TILE_SIZE_4BPP))[8 * 61];
        dst2 = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC4) * TILE_SIZE_4BPP))[8 * 5];
        for (u32 i = 0; i < 4; i++)
        {
            dst[4 + i] = src[i];
            dst2[i] = src[4 + i];
            dst[12 + i] = src[8 + i];
            dst2[8 + i] = src[12 + i];
        }
        break;
    case 4:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC3) * TILE_SIZE_4BPP))[8 * 29];
        for (u32 i = 0; i < 16; i++)
            dst[i] = src[i];
        break;
    case 5:
        dst = &((u32 *)(OBJ_VRAM0 + GetSpriteTileStartByTag(0xCEC4) * TILE_SIZE_4BPP))[8 * 29];
        for (u32 i = 0; i < 16; i++)
            dst[i] = src[i];
        break;
    }
}

static void BraveLoadMonSelection(u32 battler, u32 moveSelect)
{
    LoadMonIconPalettes();
    BraveItemMenu_LoadMonSelectBg();
    for (u32 i = 0; i < PARTY_SIZE; i++)
    {
        u32 species = GetMonData(&gPlayerParty[i], MON_DATA_SPECIES);
        if (species == SPECIES_NONE)
        {
            sBraveItemMenuState->monIconIds[i] = SPRITE_NONE;
            continue;
        }
        //  Draw sprite
        u32 personality = GetMonData(&gPlayerParty[i], MON_DATA_PERSONALITY);
        u32 x = 240 - 112 + (i % 2) * 64;
        u32 y = 36 + i / 2 * 30;
        u32 spriteId = CreateMonIcon(species, SpriteCB_MonIcon, x, y, 0 , personality);
        sBraveItemMenuState->monIconIds[i] = spriteId;
        gSprites[spriteId].oam.priority = 0;
        //  Draw healthbar
        u32 currHP = GetMonData(&gPlayerParty[i], MON_DATA_HP);
        u32 maxHP = GetMonData(&gPlayerParty[i], MON_DATA_MAX_HP);
        if (currHP != maxHP)
            BraveItemMenu_DrawHPBar(i, currHP, maxHP);
        //  Draw status
        BraveItemMenu_DrawStatusIcon(i);
    }

    //  Selector sprite
    struct Even_CreateSpriteStruct cs = {0};
    cs.sprite = sBraveItemMenuSelector;
    cs.tileTag = 0xCEC5;
    cs.palTag = 0xCEC1;
    cs.spriteSize = SPRITE_SIZE(32x32);
    cs.spriteShape = SPRITE_SHAPE(32x32);
    cs.posX = 240 - 112;
    cs.posY = 38;
    sBraveItemMenuState->selectorSpriteId = Even_CreateSprite(&cs);
    gSprites[sBraveItemMenuState->selectorSpriteId].oam.priority = 0;
    if (moveSelect)
        gBattlerControllerFuncs[battler] = BraveItemMenuMonAndMoveSelect_HandleInput;
    else
        gBattlerControllerFuncs[battler] = BraveItemMenuMonSelect_HandleInput;
    sBraveItemMenuState->itemSelectX = 0;
    sBraveItemMenuState->itemSelectY = 0;
}

static void BraveItemMenu_HandleInput(u32 battler)
{
    if (JOY_NEW(L_BUTTON))
    {
        if (sBraveItemMenuState->itemCategory != 1)
        {
            UnselectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            sBraveItemMenuState->itemCategory--;
            SelectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            BuildItemList(sBraveItemMenuState->itemCategory);
            sBraveItemMenuState->scrollPos = 0;
            ClearItemList();
            PrintBraveItemList();
            if (sBraveItemMenuState->itemCategory == 1)
                SetLeftToInactive();
            else if (sBraveItemMenuState->itemCategory == 5)
                SetRightToActive();
        }
    }
    else if (JOY_NEW(R_BUTTON))
    {
        if (sBraveItemMenuState->itemCategory != 6)
        {
            UnselectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            sBraveItemMenuState->itemCategory++;
            SelectBraveItemMenuCategory(sBraveItemMenuState->itemCategory - 1);
            BuildItemList(sBraveItemMenuState->itemCategory);
            sBraveItemMenuState->scrollPos = 0;
            ClearItemList();
            PrintBraveItemList();
            if (sBraveItemMenuState->itemCategory == 6)
                SetRightToInactive();
            else if (sBraveItemMenuState->itemCategory == 2)
                SetLeftToActive();
        }
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (sBraveItemMenuState->scrollPos != 0)
        {
            sBraveItemMenuState->scrollPos--;
            ClearItemList();
            PrintBraveItemList();
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos + 1].item != ITEM_NONE)
        {
            sBraveItemMenuState->scrollPos++;
            ClearItemList();
            PrintBraveItemList();
        }
    }
    else if (JOY_NEW(A_BUTTON))
    {
        u32 item = sBraveItemMenuState->itemList[sBraveItemMenuState->scrollPos].item;
        switch (gItemsInfo[item].battleUsage)
        {
        //  Direct use items that don't need targeting
        case EFFECT_ITEM_INCREASE_STAT:
        case EFFECT_ITEM_INCREASE_ALL_STATS:
        case EFFECT_ITEM_SET_MIST:
        case EFFECT_ITEM_SET_FOCUS_ENERGY:
            //  Add item to queue and return to action choice
            PlaySE(SE_SELECT);
            BraveAddItemToQueue(battler, item, battler, 0);
            FreeAndExitBraveItemMenu(battler);
            break;
        //  Items that requires targeting a party member
        case EFFECT_ITEM_RESTORE_HP:
        case EFFECT_ITEM_CURE_STATUS:
        case EFFECT_ITEM_REVIVE:
            //  Open mon selection menu and continue mon selection
            BraveLoadMonSelection(battler, FALSE);
            break;
        //  Items that requires targeting a move index
        case EFFECT_ITEM_RESTORE_PP:
            if (item == ITEM_ELIXIR || item == ITEM_MAX_ELIXIR)
                BraveLoadMonSelection(battler, FALSE);
            else
                BraveLoadMonSelection(battler, TRUE);
            //  Open mon selection menu and continue to move selection
            break;
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        FreeAndExitBraveItemMenu(battler);
    }
    else if (JOY_NEW(START_BUTTON))
    {
        gBattleStruct->isBraveSelector = FALSE;
        PlayerBufferExecCompleted(battler);
    }
}

static void BraveInitItemMenu(u32 battler)
{
    if (sBraveItemMenuState->state == 0)
    {
        struct Even_CreateSpriteStruct cs = {0};
        cs.sprite = sBraveItemMenuGfx;
        cs.tileTag = 0xCEC1;
        cs.palette = sBraveItemMenuPal;
        cs.palTag = 0xCEC1;
        cs.spriteSize = SPRITE_SIZE(64x64);
        cs.spriteShape = SPRITE_SHAPE(64x64);
        cs.posX = 240 - 96;
        cs.posY = 32;
        sBraveItemMenuState->spriteIds[0] = Even_CreateSprite(&cs);
        cs.sprite = &sBraveItemMenuGfx[512];
        cs.tileTag = 0xCEC2;
        cs.posX = 240 - 32;
        sBraveItemMenuState->spriteIds[1] = Even_CreateSprite(&cs);
    }
    else if (sBraveItemMenuState->state == 1)
    {
        BuildItemList(sBraveItemMenuState->itemCategory);
        PrintBraveItemList();
    }
    else
    {
        gBattlerControllerFuncs[battler] = BraveItemMenu_HandleInput;
    }
    sBraveItemMenuState->state++;
}

void BraveOpenItemMenu(u32 battler)
{
    gBattlerControllerFuncs[battler] = BraveInitItemMenu;
    sBraveItemMenuState = Alloc(sizeof(struct BraveItemMenuState));
    sBraveItemMenuState->state = 0;
    sBraveItemMenuState->itemCategory = 1;
    sBraveItemMenuState->scrollPos = 0;
}
