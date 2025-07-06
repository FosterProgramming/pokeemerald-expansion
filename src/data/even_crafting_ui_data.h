#include "even_crafting_ui.h"
#include "even_crafting.h"

const u32 sECU_defaultTiles[] = INCBIN_U32("graphics/even_crafting/default_tiles.4bpp.lz");
const u32 sECU_defaultTilemap[] = INCBIN_U32("graphics/even_crafting/default_tiles.bin.lz");
const u16 sECU_defaultPalette[] = INCBIN_U16("graphics/even_crafting/default_tiles.gbapal");

const struct EvenCraftingUiTemplate sECU_Templates[ECU_TEMPLATE_NUMBER] =
{
    [ECU_DEFAULT] =
    {
        .tiles = sECU_defaultTiles,
        .tilemap = sECU_defaultTilemap,
        .palette = sECU_defaultPalette,
        .maxIngredients = 12,
        .outputX = 80 + 16 + (240 - 80 - 16)/2,
        .outputY = (160 - 16)/2,
        .positions =
        {
            {80 + 16 + 1 * (240 - 80 - 16) / 5,  1 * (160 - 16) / 4},
            {80 + 16 + 2 * (240 - 80 - 16) / 5,  1 * (160 - 16) / 4},
            {80 + 16 + 3 * (240 - 80 - 16) / 5,  1 * (160 - 16) / 4},
            {80 + 16 + 4 * (240 - 80 - 16) / 5,  1 * (160 - 16) / 4},

            {80 + 16 + 1 * (240 - 80 - 16) / 6,  2 * (160 - 16) / 4},
            {80 + 16 + 2 * (240 - 80 - 16) / 6,  2 * (160 - 16) / 4},
            {80 + 16 + 4 * (240 - 80 - 16) / 6,  2 * (160 - 16) / 4},
            {80 + 16 + 5 * (240 - 80 - 16) / 6,  2 * (160 - 16) / 4},

            {80 + 16 + 1 * (240 - 80 - 16) / 5,  3 * (160 - 16) / 4},
            {80 + 16 + 2 * (240 - 80 - 16) / 5,  3 * (160 - 16) / 4},
            {80 + 16 + 3 * (240 - 80 - 16) / 5,  3 * (160 - 16) / 4},
            {80 + 16 + 4 * (240 - 80 - 16) / 5,  3 * (160 - 16) / 4},
        },
    },
};

static const u8 sIngredientCategoryTexts[NUM_INGREDIENT_CATEGORIES][CATEGORY_NAME_MAX_LENGTH] =
{
    [INGREDIENT_CATEGORY_PLANT] = _("Plants"),
    [INGREDIENT_CATEGORY_FLUID] = _("Fluids"),
};

static const u8 sRecipeCategoryTexts[NUM_RECIPE_CATEGORIES][CATEGORY_NAME_MAX_LENGTH] =
{
    [RECIPE_CATEGORY_MEDICINE] = _("Medicine"),
    [RECIPE_CATEGORY_TM] = _("TMs"),
};
