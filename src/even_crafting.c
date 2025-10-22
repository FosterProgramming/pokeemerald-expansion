#include "even_crafting.h"
#include "item.h"
#include "main.h"
#include "malloc.h"

#include "global.h"

#include "data/even_recipe_data.h"

enum Recipes TryCraftItem(u32 numIngredients, u16 *items)
{
    enum Recipes returnRecipe = RECIPE_NONE;
    struct IngredientCount *iCount = AllocZeroed(12*sizeof(struct IngredientCount));
    //  Count ingredients
    u32 numDifferentIngredients = 0;
    for (u32 i = 0; i < numIngredients; i++)
    {
        u32 currItem = items[i];
        bool32 isNewItem = TRUE;
        for (u32 j = 0; j < i; j++)
        {
            if (currItem == items[j])
            {
                isNewItem = FALSE;
                break;
            }
        }
        if (isNewItem)
        {
            iCount[numDifferentIngredients].item = currItem;
            iCount[numDifferentIngredients].count = 1;
            numDifferentIngredients++;
        }
        else
        {
            for (u32 j = 0; j < numDifferentIngredients; j++)
            {
                if (iCount[j].item == currItem)
                {
                    iCount[j].count++;
                    break;
                }
            }
        }
    }

    //  Check is player has all the items
    for (u32 i = 0; i < numDifferentIngredients; i++)
    {
        if (!CheckBagHasItem(iCount[i].item, iCount[i].count))
        {
            returnRecipe = ERROR_MISSING_INGREDIENTS;
            Free(iCount);
            return returnRecipe;
        }
    }

    //  Check if added items is a valid recipe
    for (u32 currRecipe = 0; currRecipe < RECIPE_NONE; currRecipe++)
    {
        if (numIngredients != sCraftingRecipes[currRecipe].ingredientCount
         || numDifferentIngredients != sCraftingRecipes[currRecipe].numDifferentIngredients)
            continue;

        struct IngredientCount *recipeIngredients = Alloc(numIngredients*sizeof(struct IngredientCount));
        for (u32 i = 0; i < sCraftingRecipes[currRecipe].numDifferentIngredients; i++)
        {
            recipeIngredients[i].item = sCraftingRecipes[currRecipe].ingredients[i].item;
            recipeIngredients[i].count = sCraftingRecipes[currRecipe].ingredients[i].count;
        }

        for (u32 i = 0; i < numIngredients; i++)
        {
            for (u32 j = 0; j < numDifferentIngredients; j++)
            {
                if (iCount[j].item != recipeIngredients[i].item)
                    continue;
                if (recipeIngredients[i].count == iCount[j].count)
                    recipeIngredients[i].count = 0;
            }
        }

        bool32 recipeMatches = TRUE;
        for (u32 i = 0; i < numDifferentIngredients; i++)
        {
            if (recipeIngredients[i].count != 0)
            {
                recipeMatches = FALSE;
                break;
            }
        }

        Free(recipeIngredients);
        if (recipeMatches)
        {
            returnRecipe = currRecipe;
            break;
        }
    }

    if (!(returnRecipe < RECIPE_NONE)
     && !IsCraftingRecipeUnlocked(returnRecipe)
     && sCraftingRecipes[returnRecipe].isDiscoverable)
        returnRecipe = ERROR_RECIPE_REQUIRES_UNLOCK;

    Free(iCount);
    return returnRecipe;
}

void CraftItem(enum Recipes recipeNum)
{
    const struct CraftingRecipe *recipe = &sCraftingRecipes[recipeNum];
    for (u32 i = 0; i < recipe->ingredientCount; i++)
    {
        if (recipe->ingredients[i].isConsumed)
            RemoveBagItem(recipe->ingredients[i].item, recipe->ingredients[i].count);
    }
    AddBagItem(recipe->outputItem, recipe->outputQuantity);
}

void InitCraftProcess()
{
    u32 numIngredients = 0;
    //  Get current ingredients in crafting grid
    u16 *items = Alloc(numIngredients*sizeof(u16));
    //  Try to craft stuff
    enum Recipes recipe = TryCraftItem(numIngredients, items);
    if (recipe < RECIPE_NONE)
    {
    }
    else
    {
        //  Error
    }

    Free(items);
}

bool32 IsItemInCurrentCategory(enum IngredientCategories currCategory, u16 item)
{
    return sItemIngredientSettings[item] & 1 << currCategory;
}

u16 GetOutputFromRecipe(enum Recipes recipe)
{
    return sCraftingRecipes[recipe].outputItem;
}

u32 GetNumIngredientsFromRecipe(enum Recipes recipe)
{
    return sCraftingRecipes[recipe].ingredientCount;
}

enum Recipes TryCraftRecipe(enum Recipes recipe)
{
    u16 items[12];
    u32 currIndex = 0;
    for (u32 i = 0; i < sCraftingRecipes[recipe].numDifferentIngredients; i++)
        for (u32 j = 0; j < sCraftingRecipes[recipe].ingredients[i].count; j++)
            items[currIndex++] = sCraftingRecipes[recipe].ingredients[i].item;
    enum Recipes returnRecipe = TryCraftItem(sCraftingRecipes[recipe].ingredientCount, items);
    return returnRecipe;
}

void FillItemFromRecipe(enum Recipes recipe, u16 *items)
{
    u32 currIndex = 0;
    for (u32 i = 0; i < sCraftingRecipes[recipe].numDifferentIngredients; i++)
        for (u32 j = 0; j < sCraftingRecipes[recipe].ingredients[i].count; j++)
            items[currIndex++] = sCraftingRecipes[recipe].ingredients[i].item;
}

bool32 IsCraftingRecipeUnlocked(enum Recipes recipe)
{
    //  Here is where unlocked recipes are checked
    return TRUE;
}

bool32 IsCraftingRecipeInCategory(enum Recipes recipe, enum RecipeCategories category)
{
    return sCraftingRecipes[recipe].category == category;
}

const u8 *GetRecipeName(enum Recipes recipe)
{
    return sCraftingRecipes[recipe].recipeName;
}

void UnlockRecipe(enum Recipes recipe)
{
    //  Here is where recipe unlocking happens
}
