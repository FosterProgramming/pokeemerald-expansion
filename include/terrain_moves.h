#ifndef GUARD_TERRAIN_MOVES_H
#define GUARD_TERRAIN_MOVES_H

bool32 IsTerrainMove(u32 move);
u32 GetMonTerrainMove(struct Pokemon *mon);
bool32 IsTerrainEffectActive(u32 move);

#endif // GUARD_TERRAIN_MOVES_H