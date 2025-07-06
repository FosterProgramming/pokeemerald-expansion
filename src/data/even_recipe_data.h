#include "even_crafting.h"

const struct CraftingIngredient sPotionIngredients[] =
{
    [0] =
    {
        .item = ITEM_ORAN_BERRY,
        .count = 1,
        .isConsumed= TRUE,
    },
    [1] =
    {
        .item = ITEM_FRESH_WATER,
        .count = 1,
        .isConsumed= TRUE,
    },
};

const struct CraftingIngredient sSuperPotionIngredients[] =
{
    [0] =
    {
        .item = ITEM_ORAN_BERRY,
        .count = 1,
        .isConsumed= TRUE,
    },
    [1] =
    {
        .item = ITEM_FRESH_WATER,
        .count = 1,
        .isConsumed= TRUE,
    },
    [2] =
    {
        .item = ITEM_ABSORB_BULB,
        .count = 1,
        .isConsumed= TRUE,
    },
};

const struct CraftingRecipe sCraftingRecipes[] =
{
    [RECIPE_POTION] =
    {
        .outputItem = ITEM_POTION,
        .outputQuantity = 1,
        .ingredientCount = 2,
        .numDifferentIngredients = 2,
        .ingredients = sPotionIngredients,
        .recipeName = _("Potion"),
        .category = RECIPE_CATEGORY_MEDICINE,
        .isDiscoverable = TRUE,
    },
    [RECIPE_SUPER_POTION] =
    {
        .outputItem = ITEM_SUPER_POTION,
        .outputQuantity = 1,
        .ingredientCount = 3,
        .numDifferentIngredients = 3,
        .ingredients = sSuperPotionIngredients,
        .recipeName = _("Super Potion"),
        .category = RECIPE_CATEGORY_MEDICINE,
        .isDiscoverable = TRUE,
    }
};

const u8 sItemIngredientSettings[ITEMS_COUNT] =
{
    //  Add ingredients here with all the flags that they should have
    [ITEM_ORAN_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_SITRUS_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_POMEG_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_KEE_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_MARANGA_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_PECHA_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_RAWST_BERRY] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_FRESH_WATER] = 1u << INGREDIENT_CATEGORY_FLUID | ITEM_IS_CONSUMED_ON_ATTEMPT,
    [ITEM_ABSORB_BULB] = 1u << INGREDIENT_CATEGORY_PLANT | ITEM_IS_CONSUMED_ON_ATTEMPT,
};
