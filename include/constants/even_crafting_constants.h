#ifndef GUARD_CONSTANTS_EVEN_CRAFTING_CONSTANTS_H
#define GUARD_CONSTANTS_EVEN_CRAFTING_CONSTANTS_H

enum Recipes {
    RECIPE_POTION,
    RECIPE_SUPER_POTION,
    //  RECIPE_NONE must after all actual recipes
    RECIPE_NONE,
    ERROR_MISSING_INGREDIENTS,
    ERROR_RECIPE_REQUIRES_UNLOCK,
};

enum IngredientCategories {
    INGREDIENT_CATEGORY_PLANT,
    INGREDIENT_CATEGORY_FLUID,
    //  Must be last
    NUM_INGREDIENT_CATEGORIES
};

enum RecipeCategories {
    RECIPE_CATEGORY_MEDICINE,
    RECIPE_CATEGORY_TM,
    //  Must be last
    NUM_RECIPE_CATEGORIES
};

enum EvenCraftingUiTemplates
{
    ECU_DEFAULT,
    //  Must be last
    ECU_TEMPLATE_NUMBER
};

#endif
