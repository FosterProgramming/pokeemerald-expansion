
#define MAX_SKILLS_PER_TREE 20

enum{
    SKILL_TYPE_NONE,
    SKILL_TREE_TYPE_MOVE,     //Gives the Player the ability to give the Pokémon this move at any time
    SKILL_TREE_TYPE_ABILITY,  //Gives the Player the ability to give the Pokémon this ability at any time
    SKILL_TREE_TYPE_STAT,     //Gives the Pokémon extra IVs
    SKILL_TREE_TYPE_CAP,      //Gives the Player more EVs to freely invest on the Stat Screen.
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

struct SkillTree
{
    u8 skill_type;
    u8 skill;
    u8 argument;
    u8 neededPoints;
    u8 unlockLevel;
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
            .skill        = ABILITY_LIMBER,
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