
//Configuration
#define MAX_SKILLS_PER_TREE 20

struct PartyMemberData
{
    u16 maxSkillPoints;                         //Total of Skll Points this Member has gained
    u16 remainingSkillPoints;                   //Number of points left after unlocking skills
    bool8 unlockedSkills[MAX_SKILLS_PER_TREE];  //Unlocked Skills
    u16 abilities[MAX_MON_INNATES + 1];         //Current Assigned Abilities
    u16 extraEVs;                               //Extra EVs available to assign at any point
    u8 extraStats[NUM_STATS];                   //Extra raw stats for this Pokémon
};

enum{
    PARTY_MEMBER_DEWGONG,
    PARTY_MEMBER_PERSIAN,
    PARTY_MEMBER_EEVEE,
    PARTY_MEMBER_SNORLAX,
    PARTY_MEMBER_HONCHKROW,
    PARTY_MEMBER_GENGAR,
    PARTY_MEMBER_HUMAN,
    NUM_PARTY_MEMBERS,
};

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

struct SkillTree
{
    u8 skill_type;
    u8 skill;
    u8 argument;
    u8 neededPoints;
    u8 unlockLevel;
    u16 unlockFlag;
    u16 unlockItem;
};

static const struct SkillTree sSkillTree[NUM_PARTY_MEMBERS][MAX_SKILLS_PER_TREE] = 
{
    [PARTY_MEMBER_DEWGONG] = 
    {
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_FURY_SWIPES,
            .neededPoints = 8,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_LIBERO,
            .neededPoints = 2,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_ATK,
            .argument     = 3,
            .neededPoints = 3,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 4, //+10 EVs
            .neededPoints = 3,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_FLAMETHROWER,
            .neededPoints = 8,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_PROTEAN,
            .neededPoints = 2,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 5, //+10 EVs
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_ICE_BEAM,
            .neededPoints = 2,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_MOODY,
            .neededPoints = 4,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPEED,
            .argument     = 4,
            .neededPoints = 3,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 20, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TYPE_NONE,
        },
    },
    [PARTY_MEMBER_PERSIAN] = 
    {
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SCRATCH,
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_HIGH_JUMP_KICK,
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPEED,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_TECHNICIAN,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_UNNERVE,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_PROTEAN,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_BLAZE,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
    },
    [PARTY_MEMBER_EEVEE] = 
    {
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BATON_PASS,
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_ATK,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_ADAPTABILITY,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
    },
    [PARTY_MEMBER_SNORLAX] = 
    {
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_IMMUNITY,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_HP,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_REST,
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
    },
    [PARTY_MEMBER_HONCHKROW] = 
    {
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_BEAT_UP,
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_ATK,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_PRANKSTER,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
    },
    [PARTY_MEMBER_GENGAR] = 
    {
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_SHADOW_BALL,
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_LEVITATE,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPATK,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
    },
    [PARTY_MEMBER_HUMAN] = 
    {
        {
            .skill_type   = SKILL_TREE_TYPE_MOVE,
            .skill        = MOVE_TACKLE,
            .neededPoints = 5,
            .unlockLevel  = 0,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_STAT,
            .skill        = STAT_SPEED,
            .argument     = 4,
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_ABILITY,
            .skill        = ABILITY_RUN_AWAY,
            .neededPoints = 5,
            .unlockLevel  = 10,
        },
        {
            .skill_type   = SKILL_TREE_TYPE_CAP,
            .skill        = 10, //+10 EVs
            .neededPoints = 10,
            .unlockLevel  = 10,
        },
    },
};