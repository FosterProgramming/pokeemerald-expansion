#ifndef GUARD_EVEN_CRAFTING_H
#define GUARD_EVEN_CRAFTING_H
#include "global.h"
#include "constants/even_crafting_constants.h"

#define ITEM_IS_CONSUMED_ON_ATTEMPT 128

#define MAX_CATEGORY_INGREDIENTS    40
#define MAX_CATEGORY_RECIPES        40

#define CATEGORY_NAME_MAX_LENGTH    20

struct IngredientCount {
    u16 item;
    s16 count;
};

struct CraftingIngredient {
    u16 item;
    u16 count:15;
    u16 isConsumed:1;
};

struct CraftingRecipe {
    u16 outputItem;
    u8 outputQuantity;
    u8 ingredientCount:4;
    u8 numDifferentIngredients:4;
    u8 recipeName[20];
    bool8 isDiscoverable;
    enum RecipeCategories category;
    const struct CraftingIngredient *ingredients;
};

void InitCraftProcess();
enum Recipes TryCraftItem(u32 numIngredients, u16 *items);
void CraftItem(enum Recipes recipe);
void UnlockRecipe(enum Recipes recipe);
bool32 IsItemInCurrentCategory(enum IngredientCategories currCategory, u16 item);

u16 GetOutputFromRecipe(enum Recipes recipe);
u32 GetNumIngredientsFromRecipe(enum Recipes recipe);
const u8 *GetRecipeName(enum Recipes recipe);
enum Recipes TryCraftRecipe(enum Recipes recipe);
void FillItemFromRecipe(enum Recipes recipe, u16 *items);

bool32 IsCraftingRecipeUnlocked(enum Recipes recipe);
bool32 IsCraftingRecipeInCategory(enum Recipes recipe, enum RecipeCategories category);

#endif
