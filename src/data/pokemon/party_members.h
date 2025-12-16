static u16 sPartyMembersToSpecies[NUM_PARTY_MEMBERS] = 
{
    [PARTY_MEMBER_DEWGONG]   = SPECIES_DEWGONG,
    [PARTY_MEMBER_EEVEE]     = SPECIES_EEVEE,
    [PARTY_MEMBER_PERSIAN]   = SPECIES_PERSIAN,
    [PARTY_MEMBER_SNORLAX]   = SPECIES_SNORLAX,
    [PARTY_MEMBER_HONCHKROW] = SPECIES_HONCHKROW,
    [PARTY_MEMBER_GENGAR]    = SPECIES_GENGAR,
    [PARTY_MEMBER_HUMAN]     = SPECIES_BULBASAUR, //Placeholder
};

//Profile Description
static const u8 sText_Summary_Screen_Profile_Generic[]      = _("If attacked, it strikes back");
static const u8 sText_Summary_Screen_Profile_Persian[]      = _("If attacked, it strikes back");
static const u8 sText_Summary_Screen_Profile_Eevee[]        = _("If attacked, it strikes back");
static const u8 sText_Summary_Screen_Profile_Dewgong[]      = _("If attacked, it strikes back");
static const u8 sText_Summary_Screen_Profile_Snorlax[]      = _("If attacked, it strikes back");
static const u8 sText_Summary_Screen_Profile_Honchkrow[]    = _("If attacked, it strikes back");
static const u8 sText_Summary_Screen_Profile_Gengar[]       = _("If attacked, it strikes back");
static const u8 sText_Summary_Screen_Profile_Human[]        = _("If attacked, it strikes back");

//Skill Tree
enum{
    SKILL_TYPE_NONE,
    SKILL_TREE_TYPE_MOVE,     //Gives the Player the ability to give the Pokémon this move at any time
    SKILL_TREE_TYPE_ABILITY,  //Gives the Player the ability to give the Pokémon this ability at any time
    SKILL_TREE_TYPE_STAT,     //Gives the Pokémon extra IVs
    SKILL_TREE_TYPE_CAP,      //Gives the Player more EVs to freely invest on the Stat Screen.
};

enum{
    PARTY_MEMBER_SKILLS_1,
    PARTY_MEMBER_SKILLS_2,
    PARTY_MEMBER_SKILLS_3,
    PARTY_MEMBER_SKILLS_4,
    PARTY_MEMBER_SKILLS_5,
    PARTY_MEMBER_SKILLS_6,
    PARTY_MEMBER_SKILLS_7,
    PARTY_MEMBER_SKILLS_8,
    PARTY_MEMBER_SKILLS_9,
    PARTY_MEMBER_SKILLS_10,
    PARTY_MEMBER_SKILLS_11,
    PARTY_MEMBER_SKILLS_12,
    PARTY_MEMBER_SKILLS_13,
    PARTY_MEMBER_SKILLS_14,
    PARTY_MEMBER_SKILLS_15,
    PARTY_MEMBER_SKILLS_16,
    PARTY_MEMBER_SKILLS_17,
    PARTY_MEMBER_SKILLS_18,
    PARTY_MEMBER_SKILLS_19,
    PARTY_MEMBER_SKILLS_20,
    PARTY_MEMBER_SKILLS_21,
    PARTY_MEMBER_SKILLS_22,
    PARTY_MEMBER_SKILLS_23,
    PARTY_MEMBER_SKILLS_24,
    PARTY_MEMBER_SKILLS_25,
    PARTY_MEMBER_SKILLS_26,
    PARTY_MEMBER_SKILLS_27,
    PARTY_MEMBER_SKILLS_28,
    PARTY_MEMBER_SKILLS_29,
    PARTY_MEMBER_SKILLS_30,
    PARTY_MEMBER_SKILLS_31,
    PARTY_MEMBER_SKILLS_32,
    PARTY_MEMBER_SKILLS_33,
    PARTY_MEMBER_SKILLS_34,
    PARTY_MEMBER_SKILLS_35,
    PARTY_MEMBER_SKILLS_36,
};

struct SkillTree
{
    u8 skill_type;
    u16 skill;
    u8 argument;
    u8 neededPoints;
    u8 unlockLevel;
    u16 unlockFlag;
    u16 itemNeeded;
    u16 skillNeeded;
};

#define SKILL_NONE 0xFF

static const struct SkillTree sSkillTree[NUM_PARTY_MEMBERS][MAX_SKILLS_PER_TREE] = 
{
    [PARTY_MEMBER_DEWGONG] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_POWDER_SNOW,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_ICY_WIND,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_1,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BLIZZARD,
            .neededPoints = 6,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_2,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_ICE_SHARD,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_3,
        },
        [PARTY_MEMBER_SKILLS_5] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_AVALANCHE,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_4,
        },
        [PARTY_MEMBER_SKILLS_6] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_AURORA_BEAM,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_1,
        },
        [PARTY_MEMBER_SKILLS_7] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_ICE_BEAM,
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_6,
        },
        [PARTY_MEMBER_SKILLS_8] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_FLAME_BODY, //Placeholder for Rigid Body
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_6,
        },
        [PARTY_MEMBER_SKILLS_9] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_ICE_SCALES,
            .neededPoints = 8,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_4,
        },
        [PARTY_MEMBER_SKILLS_10] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_HAIL,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_1,
        },
        [PARTY_MEMBER_SKILLS_11] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_ICE_BODY,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_10,
        },
        [PARTY_MEMBER_SKILLS_12] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_HEADBUTT,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_13] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BODY_SLAM,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_12,
        },
        [PARTY_MEMBER_SKILLS_14] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_GROWL,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_15] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_ALLURING_VOICE,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_14,
        },
        [PARTY_MEMBER_SKILLS_16] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_WATER_GUN,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_17] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_RAIN_DANCE,
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_18] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_SWIFT_SWIM,
            .neededPoints = 8,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_17,
        },
        [PARTY_MEMBER_SKILLS_19] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_RAIN_DISH,
            .neededPoints = 6,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_17,
        },
        [PARTY_MEMBER_SKILLS_20] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_AQUA_JET,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_21] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_AQUA_TAIL,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_20,
        },
        [PARTY_MEMBER_SKILLS_22] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_AQUA_RING,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_20,
        },
        [PARTY_MEMBER_SKILLS_23] =
        {
            
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_LIQUIDATION,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_21,
        },
        [PARTY_MEMBER_SKILLS_24] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_CHILLING_WATER,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_25] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SURF,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_24,
        },
        [PARTY_MEMBER_SKILLS_26] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_HAZE,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_27] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_CLEAR_BODY,
            .neededPoints = 6,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_26,
        },
        [PARTY_MEMBER_SKILLS_28] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_WATER_VEIL,
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_29] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_REST,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_30] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SLEEP_TALK,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_29,
        },
        [PARTY_MEMBER_SKILLS_31] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 40,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_32] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 80,
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_31,
        },
        [PARTY_MEMBER_SKILLS_33] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 120,
            .neededPoints = 6,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_32,
        },
        [PARTY_MEMBER_SKILLS_34] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 160,
            .neededPoints = 8,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_33,
        },
        [PARTY_MEMBER_SKILLS_35] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 200,
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_34,
        },
        [PARTY_MEMBER_SKILLS_36] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_THICK_FAT,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
    },
    [PARTY_MEMBER_EEVEE] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_TACKLE,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_RUN_AWAY,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BUBBLE,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BUBBLEBEAM,
            .neededPoints = 6,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_3,
        },
        [PARTY_MEMBER_SKILLS_5] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_CALM_MIND,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_6] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_NASTY_PLOT,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_5,
        },
        [PARTY_MEMBER_SKILLS_7] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_STORM_DRAIN,
            .neededPoints = 8,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_6,
        },
        [PARTY_MEMBER_SKILLS_8] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_AMNESIA,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_5,
        },
        [PARTY_MEMBER_SKILLS_9] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_WATER_ABSORB, //Placeholder for Rigid Body
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_8,
        },
        [PARTY_MEMBER_SKILLS_10] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_THUNDERSHOCK,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_11] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_CHARGE_BEAM,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_10,
        },
        [PARTY_MEMBER_SKILLS_12] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SHIFT_GEAR, //Placeholder for overclock
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_13] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_AGILITY,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_12,
        },
        [PARTY_MEMBER_SKILLS_14] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_SPEED_BOOST,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_13,
        },
        [PARTY_MEMBER_SKILLS_15] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_LOCK_ON,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_12,
        },
        [PARTY_MEMBER_SKILLS_16] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_LIGHTNING_ROD,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_15,
        },
        [PARTY_MEMBER_SKILLS_17] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_EMBER,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_18] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_FLAME_CHARGE,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_17,
        },
        [PARTY_MEMBER_SKILLS_19] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_CURSE,
            .neededPoints = 0,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_20] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SWORDS_DANCE,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_19,
        },
        [PARTY_MEMBER_SKILLS_21] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_GUTS,
            .neededPoints = 7,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_20,
        },
        [PARTY_MEMBER_SKILLS_22] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_ADAPTABILITY,
            .neededPoints = 12,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_20,
        },
        [PARTY_MEMBER_SKILLS_23] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_ACID_ARMOR,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_19,
        },
        [PARTY_MEMBER_SKILLS_24] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_FLASH_FIRE,
            .neededPoints = 6,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_23,
        },
        [PARTY_MEMBER_SKILLS_25] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SUBSTITUTE,
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_26] =
        {
            
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BATON_PASS,
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_25,
        },
        [PARTY_MEMBER_SKILLS_27] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_WISH,
            .neededPoints = 3,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_25,
        },
        [PARTY_MEMBER_SKILLS_28] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_HEAL_BELL,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_29] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 40,
            .neededPoints = 2,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_30] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 80,
            .neededPoints = 4,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_29,
        },
        [PARTY_MEMBER_SKILLS_31] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 120,
            .neededPoints = 6,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_30,
        },
        [PARTY_MEMBER_SKILLS_32] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 160,
            .neededPoints = 8,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_31,
        },
        [PARTY_MEMBER_SKILLS_33] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 200,
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = PARTY_MEMBER_SKILLS_32,
        },
    },
     [PARTY_MEMBER_PERSIAN] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_IMMUNITY,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_HP,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_REST,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
    },
    [PARTY_MEMBER_SNORLAX] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_IMMUNITY,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_HP,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_REST,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
    },
    [PARTY_MEMBER_HONCHKROW] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BEAT_UP,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_ATK,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_PRANKSTER,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
    },
    [PARTY_MEMBER_GENGAR] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SHADOW_BALL,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_LEVITATE,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPATK,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
    },
    [PARTY_MEMBER_HUMAN] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_TACKLE,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPEED,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_RUN_AWAY,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
    },
};