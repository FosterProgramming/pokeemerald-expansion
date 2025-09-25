#include "global.h"
#include "main.h"
#include "battle.h"

#include "constants/moves.h"

const u16 sTerrainMoves[] =
{
    MOVE_ELECTRIC_TERRAIN,
    MOVE_PSYCHIC_TERRAIN
};

#define TERRAIN_MOVES_COUNT 2

bool32 IsTerrainMove(u32 move)
{
    for (u32 i = 0; i < TERRAIN_MOVES_COUNT; i++)
    {
        if (move == sTerrainMoves[i])
            return TRUE;
    }
    return FALSE;
}

bool32 IsTerrainEffectActive(u32 move)
{
    switch(move)
    {
        case MOVE_ELECTRIC_TERRAIN:
            return (gFieldStatuses & STATUS_FIELD_ELECTRIC_TERRAIN);
        case MOVE_PSYCHIC_TERRAIN:
            return (gFieldStatuses & STATUS_FIELD_PSYCHIC_TERRAIN);
    }
    return FALSE;
}


u32 GetMonTerrainMove(struct Pokemon *mon)
{
    return GetMonData(mon, MON_DATA_MOVE4);
}

