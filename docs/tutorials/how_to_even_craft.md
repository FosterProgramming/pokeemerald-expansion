# Even Crafting

Even Crafting is a fully fledged crafting cystem designed to be extremely configurable by the user.
It features:

- Customizable full-screen UI.
- Craft by selecting ingredients manually or select recipes.
- Customizable max ingredients per UI.
- Open different UIs at run-time.
- Support for discovering recipes.
- Support for ingredients being consumed or not on failed/successful crafts.
- Ingredient/Recipe categories independant of bag pockets.

## How to get started
The crafting UI can be opened from a script by calling:

```
fadescreen FADE_TO_BLACK
openevencrafting ECU_DEFAULT
```

This opens the default very basic crafting UI. Different UIs can be opened by changing `ECU_DEFAULT` to the `enum` corresponding to the desired UI.

### Configuring UIs
UIs are configured in `src/data/even_crafting_ui_data.h` after an `enum` for the UI has been added in `include/constants/even_crafting_constants.h` to `enum EvenCraftingUiTemplates`.
The graphics need to be added as a fullscreen tilemap in the same way as the `sECU_Default*` files are added.
Then the maximum number of input ingredients can be defined with `.maxIngredients`, where the crafting result is positioned with `.outputX` and `.outputY`, the ingredient positions are defined in the `.positions` array in the order they're inputted.

### Configuring Ingredients
Ingredients are configured in `src/data/even_recipe_data.h` in the `sItemIngredientSettings` array where ingredients are assigned labels with `1u << INGREDIENT_CATEGORY_X` where `INGREDIENT_CATEGORY_X` is an `enum` defined in `IngredientCategories` in `include/constants/even_crafting_constants.h`. Here can the flag for if the item is consumed on failed crafting attempts also be set.
By default, there can only be 7 ingredient categories, but it can be increased by changing the type of `sItemIngredientSettings`.
By default, there can only be 40 items in a single category, but this can be increased with the setting `MAX_CATEGORY_INGREDIENTS`.

### Configuring Recipes
Recipes are configured in `src/data/even_recipe_data.h` in the `sCraftingRecipes` array after an `enum` for the recipe has been added to `enum Recipes` in `include/constants/even_crafting_constants.h`.

```C
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
```

`outputItem` is what the recipe crafts.
`outputQuantity` is how many items is output per craft.
`ingredientCount` is the total amount of input items required to make the recipe.
`numDifferentIngredients` is the number of **DIFFERENT** ingredients required to make the recipe.
`ingredients` is a pointer to an `const struct CraftingIngredient` array that contains all the ingredients required to make the recipe.
`recipeName` is the displayed name of the recipe, max 19 characters.
`category` is which recipe category the recipe is sorted under. Has to be an `enum` defined in `enum RecipeCategories` in `include/constants/even_crafting_constants.h`.
`isDiscoverable` is a boolean that defines if the recipe can crafted without explicitly knowing the recipe, if set to `TRUE` it can be crafted by simply inputting the correct ingredients and crafting. If set to `FALSE` the craft will fail if the recipe is now known.

The ingredient array is a flex array containing a number of unique ingredients with a setting for how many of said ingredient, and a boolean that controls if the ingredient is consumed on successful crafts (catalysts).

## Extra features
### Discoverable recipes
Discoverable recipes requires saveblock integration, so the functions that handles unlocking recipes aren't defined by default, but the functions are `IsCraftingRecipeUnlocked` and `UnlockRecipe`.
Here is an example implementation of both.

```C
bool32 IsCraftingRecipeUnlocked(enum Recipes recipe)
{
    //  Here is where unlocked recipes are checked
    u32 index = recipe >> 5;
    u32 subIndex = 1u << (recipe & 0x1f);
    if (gSaveBlock1Ptr->unlockedRecipes[index] & subIndex)
        return TRUE;
    return FALSE;
}

void UnlockRecipe(enum Recipes recipe)
{
    //  Here is where recipe unlocking happens
    u32 index = recipe >> 5;
    u32 subIndex = 1u << (recipe & 0x1f);
    gSaveBlock1Ptr->unlockedRecipes[index] |= subIndex;
}
```

And this requires an addition to the saveblock

```C

struct SaveBlock1
{
    ...
    u32 unlockedRecipes[16];
};
```

That has space for 512 crafting recipes.
With this any undiscovered recipes will be automatically added to the list of known recipes.
