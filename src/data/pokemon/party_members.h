static u16 sPartyMembersToSpecies[NUM_PARTY_MEMBERS] = 
{
    [PARTY_MEMBER_DEWGONG]   = SPECIES_DEWGONG,
    [PARTY_MEMBER_PERSIAN]   = SPECIES_PERSIAN,
    [PARTY_MEMBER_EEVEE]     = SPECIES_EEVEE,
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
};

struct SkillTree
{
    u8 skill_type;
    u8 skill;
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
            .neededPoints = 5,
            .unlockLevel  = 35,
            .skillNeeded  = PARTY_MEMBER_SKILLS_1,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BLIZZARD,
            .neededPoints = 10,
            .unlockLevel  = 35,
            .skillNeeded  = PARTY_MEMBER_SKILLS_2,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BUBBLE_BEAM,
            .neededPoints = 5,
            .unlockLevel  = 35,
        },
        [PARTY_MEMBER_SKILLS_5] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_HYDRO_PUMP,
            .neededPoints = 10,
            .unlockLevel  = 35,
            .skillNeeded  = PARTY_MEMBER_SKILLS_4,
        },
        [PARTY_MEMBER_SKILLS_7] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 5, //+10 EVs
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
        [PARTY_MEMBER_SKILLS_8] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPDEF,
            .argument     = 4,
            .neededPoints = 3,
            .unlockLevel  = 35,
        },
        [PARTY_MEMBER_SKILLS_9] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_SHEER_FORCE,
            .neededPoints = 4,
            .unlockLevel  = 35,
        },
        [PARTY_MEMBER_SKILLS_10] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPEED,
            .argument     = 4,
            .neededPoints = 3,
            .unlockLevel  = 0,
        },
        [PARTY_MEMBER_SKILLS_11] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 20, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 35,
        },
        [PARTY_MEMBER_SKILLS_12] =
        {
            .skill_type   = SKILL_TYPE_NONE,
            .skillNeeded  = SKILL_NONE,
        },
    },
    [PARTY_MEMBER_PERSIAN] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SCRATCH,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_HIGH_JUMP_KICK,
            .neededPoints = 5,
            .unlockLevel  = 0,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPEED,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_5] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_TECHNICIAN,
            .neededPoints = 5,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_6] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_UNNERVE,
            .neededPoints = 5,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_7] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_PROTEAN,
            .neededPoints = 5,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_8] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_BLAZE,
            .neededPoints = 5,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
    },
    [PARTY_MEMBER_EEVEE] = 
    {
        [PARTY_MEMBER_SKILLS_1] =
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BATON_PASS,
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
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_ADAPTABILITY,
            .neededPoints = 5,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
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
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_2] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_HP,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
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
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_PRANKSTER,
            .neededPoints = 5,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
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
            .unlockLevel  = 10,
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
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPATK,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
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
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_3] =
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_RUN_AWAY,
            .neededPoints = 5,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
        [PARTY_MEMBER_SKILLS_4] =
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
            .skillNeeded  = SKILL_NONE,
        },
    },
};