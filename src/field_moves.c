#include "global.h"
#include "decompress.h"
#include "item_icon.h"
#include "item.h"
#include "event_object_movement.h"
#include "constants/event_objects.h"
#include "field_camera.h"
#include "field_control_avatar.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "field_screen_effect.h"
#include "field_specials.h"
#include "field_weather.h"
#include "fieldmap.h"
#include "fldeff.h"
#include "gpu_regs.h"
#include "main.h"
#include "mirage_tower.h"
#include "menu.h"
#include "metatile_behavior.h"
#include "overworld.h"
#include "palette.h"
#include "party_menu.h"
#include "start_menu.h"
#include "pokemon.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "task.h"
#include "trainer_pokemon_sprites.h"
#include "trainer_see.h"
#include "trig.h"
#include "util.h"
#include "constants/field_effects.h"
#include "constants/event_object_movement.h"
#include "constants/items.h"
#include "constants/metatile_behaviors.h"
#include "constants/metatile_labels.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "event_data.h"
#include "mirage_tower.h"
#include "tilesets.h"
#include "qol_field_moves.h"
#include "scanline_effect.h"

//////////////////////////////////////////////
//      Crumble Setup Functions
//////////////////////////////////////////////

#define LEFTCHECK     gSpecialVar_0x8000
#define RIGHTCHECK    gSpecialVar_0x8001
#define FRONTCHECK    gSpecialVar_0x8002
#define BREAKABLEROCK gSpecialVar_0x8003

enum CRUMBLE_TILES {
	CRUMBLE_DOOR_TOP,
	CRUMBLE_DOOR_BOTTOM,
	CRUMBLE_FLOOR,
};

u16 GetCrumbleMetatileIdByTileset(u8 crumbleId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(crumbleId)
		{
			case CRUMBLE_DOOR_TOP:
				return METATILE_GeneralSeelVersion_CrumbleDoorway_Top;
			case CRUMBLE_DOOR_BOTTOM:
				return METATILE_GeneralSeelVersion_CrumbleDoorway_Bottom;
			case CRUMBLE_FLOOR:
				return METATILE_GeneralSeelVersion_CrumbleFloor;
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}

	return 0;
}

u8 IsCrumbleable(u8 check_x, u8 check_y)
{
	struct MapPosition position;
    u8 playerDirection;
    u8 objEventId;

	GetInFrontOfPlayerPosition(&position);
    if (MapGridGetMetatileBehaviorAt(position.x, position.y) == MB_CRUMBLEABLE)
        return 1;
	
	if (MapGridGetMetatileBehaviorAt(position.x, position.y) == MB_CRUMBLEABLE_FLOOR)
        return 2;

    GetXYCoordsOneStepInFrontOfPlayer(&gPlayerFacingPosition.x, &gPlayerFacingPosition.y);
    gPlayerFacingPosition.elevation = PlayerGetElevation();
    objEventId = GetObjectEventIdByPosition(check_x, check_y, gPlayerFacingPosition.elevation);
    if (objEventId == OBJECT_EVENTS_COUNT)
        return 0;

    if (gObjectEvents[objEventId].graphicsId == OBJ_EVENT_GFX_BREAKABLE_ROCK)
    {   
        BREAKABLEROCK = 1;
        return 6;
    }
    return 0;
}

s8 TryFindCrumbleableObjects(void)
{   
    u8 LeftCheck;
    u8 RightCheck;
    u8 FrontCheck;
    u8 playerx = (gSaveBlock1Ptr->pos.x + 7);
    u8 playery = (gSaveBlock1Ptr->pos.y + 7);
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;
    u8 collision;

    switch (GetPlayerFacingDirection())
    {
        case DIR_NORTH:
            FrontCheck = IsCrumbleable((playerx), (playery - 1));
            if (FrontCheck)
            {
                FRONTCHECK = FrontCheck;
                return 1;
            }
            break;

        case DIR_SOUTH:
            FrontCheck = IsCrumbleable((playerx), (playery + 1));
            if (FrontCheck)
            {
                FRONTCHECK = FrontCheck;
                return 1;
            }
            break;
        case DIR_WEST:
            FrontCheck = IsCrumbleable((playerx - 1), (playery));
            if (FrontCheck)
            {
                FRONTCHECK = FrontCheck;
                return 1;
            }
            break;
        case DIR_EAST:
            FrontCheck = IsCrumbleable((playerx + 1), (playery));
            if (FrontCheck)
            {
                FRONTCHECK = FrontCheck;
                return 1;
            }
            break;
    }
    FRONTCHECK = 0;
    gSpecialVar_0x8003 = 0;
    return 0;
}


//////////////////////////////////////
///     BOMBS TASK FUNCTIONS       ///
//////////////////////////////////////

//Crumble Task Data Macros
#define bState             data[0]
#define bCrumbleSpriteID      data[1]
#define bDir               data[2]

#define bLeftCheck         data[3]
#define bRightCheck        data[4]
#define bFrontCheck        data[5]

#define bLeftCrumble           data[6]
#define bRightCrumble          data[7]
#define bFrontCrumble          data[8]

#define bRockSmashStart     data[9]
#define bRockSmashEnd       data[10]

#define bCrumbleAnimation      data[11]
#define bCrumbleAnimStarted    data[12]

// Crumble Func State Constants
#define BOMB_ROCKSMASH     6
#define BOMB_END           7

// Crumble Check Constants
#define NOTHING            0
#define BOMBABLE_TILE      1
#define TILE_NORTH         2
#define TILE_SOUTH         3
#define TILE_EAST          4
#define TILE_WEST          5
#define ROCKSMASH          6

#define BOMB_ANIM_LENGTH             72
#define BOMB_ANIM_EXPLOSION_START    44

#define OBJ_EVENT_GFX_BREAKABLE_ROCK              86

static void Task_Crumble(u8 taskId);
static u8 Crumble_Init(struct Task *task);
static u8 Crumble_AnimStart(struct Task *task);
static u8 Crumble_North(struct Task *task);
static u8 Crumble_South(struct Task *task);
static u8 Crumble_East(struct Task *task);
static u8 Crumble_West(struct Task *task);
static u8 Crumble_Rocksmash(struct Task *task);
static u8 Crumble_End(struct Task *task);

static bool8 (*const sCrumbleStateFuncs[])(struct Task *) =
{
    Crumble_Init,
    Crumble_AnimStart,
    Crumble_North,
    Crumble_South,
    Crumble_East,
    Crumble_West,
    Crumble_Rocksmash,
    Crumble_End                // BOMB_END        
};

void FldEff_Crumble(void)
{
	if(!TryFindCrumbleableObjects())
	{
		FieldEffectActiveListRemove(FLDEFF_CRUMBLE);
		return;
	}
	u8 taskId = CreateTask(Task_Crumble, 0xFF);
    gTasks[taskId].bFrontCheck = FRONTCHECK;
    gTasks[taskId].bRockSmashStart = BREAKABLEROCK;
    gTasks[taskId].bCrumbleAnimation = 0;
    gTasks[taskId].bCrumbleAnimStarted = 0;
    gTasks[taskId].bDir = GetPlayerFacingDirection();
    Task_Crumble(taskId);
}

static void Task_Crumble(u8 taskId)
{
    while (sCrumbleStateFuncs[gTasks[taskId].bState](&gTasks[taskId]))
        ;
}

static bool8 Crumble_Init(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x2;
    s16 y2;    

    u8 spriteId;
    struct Sprite *sprite;
    spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_CRUMBLE], 0, 0, 0xFF);
    task->bCrumbleSpriteID = spriteId;
    if (spriteId != MAX_SPRITES)
    {
        sprite = &gSprites[spriteId];
        sprite->oam.priority = 1;
        if(PlayerGetElevation() == 3)
        {
            sprite->oam.priority = 2;
        }
        sprite->coordOffsetEnabled = TRUE;
    }
    sprite = &gSprites[spriteId];
    SetSpritePosToMapCoords(playerObjEvent->currentCoords.x, playerObjEvent->currentCoords.y, &x2, &y2);
    sprite->x = x2 + 8;
    sprite->y = y2 + 8;
    sprite->data[0] = playerObjEvent->currentCoords.x;
    sprite->data[1] = playerObjEvent->currentCoords.y;
    sprite->invisible = TRUE;

    task->bFrontCrumble = 0;
	StartScreenShake(2, 1, 16, 3);

    task->bState++;
    return FALSE;
}

static bool8 Crumble_AnimStart(struct Task *task)
{
    if(task->bCrumbleAnimStarted == 0)
    {
        struct Sprite *sprite;

        if(task->bDir == DIR_NORTH)
        {
            sprite = &gSprites[task->bCrumbleSpriteID];
            sprite->x -= 0;
            sprite->y -= 16;
            sprite->invisible = FALSE;
        }
        if(task->bDir == DIR_SOUTH)
        {
            sprite = &gSprites[task->bCrumbleSpriteID];
            sprite->x -= 0;
            sprite->y += 16;
            sprite->invisible = FALSE;
        }
        if(task->bDir == DIR_WEST)
        {
            sprite = &gSprites[task->bCrumbleSpriteID];
            sprite->x -= 16;
            sprite->y -= 0;
            sprite->invisible = FALSE;
        }
        if(task->bDir == DIR_EAST)
        {
            sprite = &gSprites[task->bCrumbleSpriteID];
            sprite->x += 16;
            sprite->y -= 0;
            sprite->invisible = FALSE;
        }

        StartSpriteAnim(&gSprites[task->bCrumbleSpriteID], GetFaceDirectionAnimNum(task->bDir));
        task->bCrumbleAnimStarted = 1;
    }

    if(task->bCrumbleAnimation >= BOMB_ANIM_EXPLOSION_START)
    {
        if(task->bDir == DIR_EAST)
            task->bState = 4;
        if(task->bDir == DIR_WEST)
            task->bState = 5;
        if(task->bDir == DIR_NORTH)
            task->bState = 2;
        if(task->bDir == DIR_SOUTH)
            task->bState = 3;
    }

    task->bCrumbleAnimation++;
    return FALSE;
}

#define CRUMBLE_DOOR	1
#define CRUMBLE_FLOOR	2
static bool8 Crumble_North(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;


    /// Add New North Doors for Crumble_North, South Doors for Crumble_South, West Doors for Crumble_West, East Doors for Crumble_East
    if(task->bFrontCheck == CRUMBLE_DOOR)
    {
		MapGridSetMetatileIdAt(x, y - 1, GetCrumbleMetatileIdByTileset(CRUMBLE_DOOR_BOTTOM));
		MapGridSetMetatileIdAt(x, y - 2, GetCrumbleMetatileIdByTileset(CRUMBLE_DOOR_TOP));
		DrawWholeMapView();
    }

	if(task->bFrontCheck == CRUMBLE_FLOOR)
    {
		MapGridSetMetatileIdAt(x, y - 1, GetCrumbleMetatileIdByTileset(CRUMBLE_FLOOR));
		DrawWholeMapView();
    }

    PlaySE(SE_BANG);
    task->bState = BOMB_ROCKSMASH;
    task->bCrumbleAnimation++;
    return FALSE;
}

static bool8 Crumble_South(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;

	if(task->bFrontCheck == CRUMBLE_FLOOR)
    {
		MapGridSetMetatileIdAt(x, y + 1, GetCrumbleMetatileIdByTileset(CRUMBLE_FLOOR));
		DrawWholeMapView();
    }

    PlaySE(SE_BANG);
    task->bState = BOMB_ROCKSMASH;
    task->bCrumbleAnimation++;
    return FALSE;
}

static bool8 Crumble_East(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;

	if(task->bFrontCheck == CRUMBLE_FLOOR)
    {
		MapGridSetMetatileIdAt(x + 1, y, GetCrumbleMetatileIdByTileset(CRUMBLE_FLOOR));
		DrawWholeMapView();
    }

    PlaySE(SE_BANG);
    task->bState = BOMB_ROCKSMASH;
    task->bCrumbleAnimation++;
    return FALSE;
}

static bool8 Crumble_West(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;

	if(task->bFrontCheck == CRUMBLE_FLOOR)
    {
		MapGridSetMetatileIdAt(x - 1, y, GetCrumbleMetatileIdByTileset(CRUMBLE_FLOOR));
		DrawWholeMapView();
    }

    PlaySE(SE_BANG);
    task->bState = BOMB_ROCKSMASH;
    task->bCrumbleAnimation++;
    return FALSE;
}

static bool8 Crumble_Rocksmash(struct Task *task)
{   
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent *objectEvent_Front;
    struct ObjectEvent *objectEvent_Left;
    struct ObjectEvent *objectEvent_Right;
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;
    s16 front_x = 0; s16 left_x = 0; s16 right_x = 0; s16 front_y = 0; s16 left_y = 0; s16 right_y = 0;
    
    if(task->bRockSmashStart)
    {
        if(task->bFrontCheck == ROCKSMASH)
        {
            switch(task->bDir)
            {
                case DIR_NORTH:
                    front_x = x;
                    front_y = y - 1;
                    break;
                case DIR_SOUTH:
                    front_x = x;
                    front_y = y + 1;
                    break;
                case DIR_EAST:
                    front_y = y;
                    front_x = x + 1;
                    break;
                case DIR_WEST:
                    front_y = y;
                    front_x = x - 1;
                    break;
            }
            task->bFrontCrumble = GetObjectEventIdByPosition(front_x, front_y, gPlayerFacingPosition.elevation);
            objectEvent_Front = &gObjectEvents[task->bFrontCrumble];
            ObjectEventSetHeldMovement(objectEvent_Front, MOVEMENT_ACTION_ROCK_SMASH_BREAK);
            task->bRockSmashStart = 0;
        }

        if(task->bRockSmashStart == 0)
            task->bCrumbleAnimation++;
            return FALSE;
        task->bState = BOMB_END;
        task->bCrumbleAnimation++;
        return FALSE;

    }

    if(task->bFrontCrumble != 0){
        objectEvent_Front = &gObjectEvents[task->bFrontCrumble];
        if(ObjectEventClearHeldMovementIfFinished(objectEvent_Front))
        {
            FlagSet(GetObjectEventFlagIdByObjectEventId(task->bFrontCrumble));
            RemoveObjectEvent(&gObjectEvents[task->bFrontCrumble]);
            task->bFrontCrumble = 0;
        }
    }

    if(!(task->bFrontCrumble || task->bRightCrumble || task->bLeftCrumble))
        task->bState = BOMB_END;
    task->bCrumbleAnimation++;
    return FALSE;
    
}

static bool8 Crumble_End(struct Task *task)
{   
    if(task->bCrumbleAnimation >= BOMB_ANIM_LENGTH)
    {
        FieldEffectActiveListRemove(FLDEFF_CRUMBLE);
        FieldEffectFreeGraphicsResources(&gSprites[task->bCrumbleSpriteID]);
        DestroyTask(FindTaskIdByFunc(Task_Crumble));
    }

    task->bCrumbleAnimation++;
    return FALSE;
}



//////////////////////////////////////////////
//      Bow Setup Functions
//////////////////////////////////////////////

bool8 IsFirePitTarget(u16 graphicsId)
{
    switch(graphicsId)
    {
        case OBJ_EVENT_GFX_FIRE_PIT:
            return TRUE;
        default:
            return FALSE;
    }
}

#define BowCollision 0
#define BowKeepGoing 1
#define BowLitFirePit 2
#define BowUnlitFirePit 3

s8 TryFindBowTargetAt(u16 x, u16 y)
{   
    u8 objEventId;
    u8 elevation;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    u8 collision;

    elevation = PlayerGetElevation();
    objEventId = GetObjectEventIdByPosition(x, y, elevation);


    if(IsFirePitTarget(gObjectEvents[objEventId].graphicsId))
    {   
        if(!FlagGet(GetObjectEventTemplateByLocalIdAndMap(gObjectEvents[objEventId].localId, gObjectEvents[objEventId].mapNum, gObjectEvents[objEventId].mapGroup)->flagId))
            return BowUnlitFirePit;
        else
            return BowLitFirePit;
    }

    collision = GetCollisionAtCoords2(playerObjEvent, x, y, GetPlayerFacingDirection());
    if(collision && !(MapGridGetMetatileBehaviorAt((x), y) == MB_OCEAN_WATER))
    {
        return BowCollision;
    }

    return BowKeepGoing;
}


////////////////////////////////////////////
///      BOW & ARROW TASK FUNCTIONS      ///
////////////////////////////////////////////

#define bState             data[0]
#define bArrowSpriteID     data[1]
#define bDir               data[2]
#define bTargetEventID     data[3]
#define bArrowShootAnim    data[4]
#define bBowAnim           data[5]
#define bTargetDistance    data[6]
#define bIsFireArrow       data[7]
#define bRunOnHitScript    data[8]

#define BOWEND             2

static void Task_Bow(u8 taskId);
static u8 Arrow_Init(struct Task *task);
static u8 Bow_ArrowFly(struct Task *task);
static u8 Bow_End(struct Task *task);
bool8 FindArrowBehaviorAt(struct Task *task, u16 arrow_position);

static bool8 (*const sBowStateFuncs[])(struct Task *) =
{
    Arrow_Init,
    Bow_ArrowFly,
    Bow_End,
};

void FldEff_Bow(void)
{
    u8 taskId = CreateTask(Task_Bow, 0xFF);
    gTasks[taskId].bDir = GetPlayerFacingDirection();
    Task_Bow(taskId);
}

static void Task_Bow(u8 taskId)
{
    while (sBowStateFuncs[gTasks[taskId].bState](&gTasks[taskId]))
        ;
}

static bool8 Arrow_Init(struct Task *task)
{   
    u8 spriteId;
    struct Sprite *sprite;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x2;
    s16 y2;

    spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_BOW_ARROW], 0, 0, 0);
    task->bArrowSpriteID = spriteId;
    if (spriteId != MAX_SPRITES)
    {
        sprite = &gSprites[spriteId];
        sprite->coordOffsetEnabled = TRUE;
        sprite->invisible = FALSE;
        sprite->oam.priority = 1;
        if(PlayerGetElevation() == 3)
        {
            sprite->oam.priority = 2;
        }
    }

    sprite = &gSprites[spriteId];
    SetSpritePosToMapCoords(playerObjEvent->currentCoords.x, playerObjEvent->currentCoords.y, &x2, &y2);
    sprite->x = x2 + 8;
    sprite->y = y2 + 8;
    sprite->data[0] = playerObjEvent->currentCoords.x;
    sprite->data[1] = playerObjEvent->currentCoords.y;
    StartSpriteAnim(&gSprites[spriteId], GetFaceDirectionAnimNum(task->bDir));
    task->bArrowShootAnim = 0;

    switch(task->bDir)
    {
        case DIR_NORTH:
            sprite->y -= 8;
            break;
        case DIR_SOUTH:
            sprite->x += 1;
            sprite->y += 8;
            break;
        case DIR_EAST:
            sprite->y -= 2;
            sprite->x += 8;
            break;
        case DIR_WEST:
            sprite->y -= 3;
            sprite->x -= 8;
            break;
    }

    task->bState++;
    return FALSE;
}

static bool8 Bow_ArrowFly(struct Task *task)
{
    u16 arrow_position;
    struct Sprite *sprite;
    
    sprite = &gSprites[task->bArrowSpriteID];

    if((task->bArrowShootAnim % 4 == 1) && task->bArrowShootAnim != 0)
    {
        arrow_position = (task->bArrowShootAnim + 3) / 4;
        if(!FindArrowBehaviorAt(task, arrow_position))
            return FALSE;
    }

    if(task->bArrowShootAnim > (8 * 4) - 4) // Kill If OffScreen
    {
        task->bState = BOWEND;
        return FALSE;
    }

    switch(task->bDir) // Move Arrow
    {
        case DIR_NORTH:
            sprite->x += 0;
            sprite->y -= 4;
            break;
        case DIR_SOUTH:
            sprite->x += 0;
            sprite->y += 4;
            break;
        case DIR_EAST:
            sprite->x += 4;
            sprite->y += 0;
            break;
        case DIR_WEST:
            sprite->x -= 4;
            sprite->y += 0;
            break;
    }
    
    task->bArrowShootAnim++;
    return FALSE;
}

static bool8 Bow_End(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    const u8 *script;

    if((task->bRunOnHitScript == TRUE))
    {
        FlagSet(FLAG_WILLOWISP_ACTIVE);
        gSelectedObjectEvent = task->bTargetEventID;
        gSpecialVar_LastTalked = gObjectEvents[task->bTargetEventID].localId;
        script = GetObjectEventScriptPointerByObjectEventId(task->bTargetEventID);
        script = GetRamScript(gSpecialVar_LastTalked, script);
    }
    else{
        script = NULL;
    }

    FieldEffectFreeGraphicsResources(&gSprites[task->bArrowSpriteID]);
    FieldEffectActiveListRemove(FLDEFF_BOW);
    DestroyTask(FindTaskIdByFunc(Task_Bow));

    if((task->bRunOnHitScript == TRUE))
        ScriptContext_SetupScript(script);
    return FALSE;
}

bool8 FindArrowBehaviorAt(struct Task *task, u16 arrow_position)
{
    u8 elevation; 
    struct Sprite *sprite;
    struct Sprite *fire_pit_sprite;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent *objectEvent;
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;
    sprite = &gSprites[task->bArrowSpriteID];

    switch(task->bDir)
    {
        case DIR_NORTH:
            x += 0;
            y -= arrow_position;
            break;
        case DIR_SOUTH:
            x += 0;
            y += arrow_position;
            break;
        case DIR_EAST:
            x += arrow_position;
            y += 0;
            break;
        case DIR_WEST:
            x -= arrow_position;
            y += 0;
            break;
    }
    
    switch(TryFindBowTargetAt(x, y))
    {
        case BowCollision: // Collision
            task->bState = BOWEND;
            return FALSE;
        case BowKeepGoing: // No collision or object or Fire Pit (both object and tile based)
            break;
        case BowLitFirePit: // Over a Lit Fire Pit
            break;
        case BowUnlitFirePit: // Over an Unlit Fire Pit
            elevation = PlayerGetElevation();
            objectEvent = &gObjectEvents[GetObjectEventIdByPosition((u16) (x), (u16) y, elevation)];
            fire_pit_sprite = &gSprites[objectEvent->spriteId];
            StartSpriteAnim(fire_pit_sprite, 0);
            FlagSet(GetObjectEventTemplateByLocalIdAndMap(objectEvent->localId, objectEvent->mapNum, objectEvent->mapGroup)->flagId);
            task->bTargetEventID = GetObjectEventIdByPosition((u16) (x), (u16) y, elevation);
            task->bRunOnHitScript = TRUE;
            break;
    }
    return TRUE;
}

void SetFirePitOn(void)
{
    struct Sprite *sprite;
    struct ObjectEvent *objectEvent;
    const struct ObjectEventGraphicsInfo *graphicsInfo;
    objectEvent = &gObjectEvents[GetObjectEventIdByLocalId(gSpecialVar_0x8000)];
    FlagSet(gMapHeader.events->objectEvents[gSpecialVar_0x8000].flagId);
    sprite = &gSprites[objectEvent->spriteId];
    StartSpriteAnim(sprite, 0);
    return;
}

void SetFirePitOff(void)
{
    u16 objectEventId = 0;
    struct Sprite *sprite;
    struct ObjectEvent *objectEvent;
    const struct ObjectEventGraphicsInfo *graphicsInfo;
    objectEvent = &gObjectEvents[GetObjectEventIdByLocalId(gSpecialVar_0x8000)];

    for (objectEventId = 0; objectEventId < gMapHeader.events->objectEventCount; objectEventId++)
    {
        if (gMapHeader.events->objectEvents[objectEventId].localId == gSpecialVar_0x8000)
            break;
    }

    FlagClear(gMapHeader.events->objectEvents[objectEventId].flagId);
    sprite = &gSprites[objectEvent->spriteId];
    StartSpriteAnim(sprite, 1);
    return;
}


//////////////////////////////////////////////
//      Bow Setup Functions
//////////////////////////////////////////////

#define FireRodCollision 0
#define FireRodKeepGoing 1
#define FireRodKeepGoingChangeTile 2

u16 GetFireRodMetatileIdByTileset(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_FrozenWater:
				return METATILE_GeneralSeelVersion_PondMiddleWater;
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return 0xFFFF;
}

u16 GetFireRodElevationByTilesetAndId(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_FrozenWater:
				return 1; // Surf Elevation
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return 1; // Surf Elevation
}

u16 GetFireRodCollisionByTilesetAndId(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_FrozenWater:
				return 0;
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return 0;
}

s8 TryFindFireRodTargetAt(u16 x, u16 y)
{   
    u8 objEventId;
    u8 elevation;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    u8 collision;

    elevation = PlayerGetElevation();

    if (GetFireRodMetatileIdByTileset(MapGridGetMetatileIdAt(x, y)) != 0xFFFF)
        return FireRodKeepGoingChangeTile;

    collision = GetCollisionAtCoords2(playerObjEvent, x, y, GetPlayerFacingDirection());
    if(collision && !(MapGridGetMetatileBehaviorAt((x), y) == MB_OCEAN_WATER))
    {
        return FireRodCollision;
    }

    return FireRodKeepGoing;
}


////////////////////////////////////////////
///      FIREROD & FIREROD TASK FUNCTIONS      ///
////////////////////////////////////////////

#define bState             data[0]
#define bFireRodSpriteID     data[1]
#define bDir               data[2]
#define bTargetEventID     data[3]
#define bFireRodShootAnim    data[4]
#define bFireRodAnim           data[5]
#define bTargetDistance    data[6]
#define bIsFireFireRod       data[7]
#define bRunOnHitScript    data[8]

#define FIRERODEND             2

static void Task_FireRod(u8 taskId);
static u8 FireRod_Init(struct Task *task);
static u8 FireRod_FireRodFly(struct Task *task);
static u8 FireRod_End(struct Task *task);
bool8 FindFireRodBehaviorAt(struct Task *task, u16 arrow_position);

static bool8 (*const sFireRodStateFuncs[])(struct Task *) =
{
    FireRod_Init,
    FireRod_FireRodFly,
    FireRod_End,
};

void FldEff_FireRod(void)
{
    u8 taskId = CreateTask(Task_FireRod, 0xFF);
    gTasks[taskId].bDir = GetPlayerFacingDirection();
    Task_FireRod(taskId);
}

static void Task_FireRod(u8 taskId)
{
    while (sFireRodStateFuncs[gTasks[taskId].bState](&gTasks[taskId]))
        ;
}

static bool8 FireRod_Init(struct Task *task)
{   
    u8 spriteId;
    struct Sprite *sprite;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x2;
    s16 y2;

    spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_FIREROD], 0, 0, 0);
    task->bFireRodSpriteID = spriteId;
    if (spriteId != MAX_SPRITES)
    {
        sprite = &gSprites[spriteId];
        sprite->coordOffsetEnabled = TRUE;
        sprite->invisible = FALSE;
        sprite->oam.priority = 1;
        if(PlayerGetElevation() == 3)
        {
            sprite->oam.priority = 2;
        }
    }

    DebugPrintf("Fire Rod Start");

    sprite = &gSprites[spriteId];
    SetSpritePosToMapCoords(playerObjEvent->currentCoords.x, playerObjEvent->currentCoords.y, &x2, &y2);
    sprite->x = x2 + 8;
    sprite->y = y2 + 8;
    sprite->data[0] = playerObjEvent->currentCoords.x;
    sprite->data[1] = playerObjEvent->currentCoords.y;
    StartSpriteAnim(&gSprites[spriteId], GetFaceDirectionAnimNum(task->bDir));
    task->bFireRodShootAnim = 0;

    switch(task->bDir)
    {
        case DIR_NORTH:
            sprite->y -= 8;
            break;
        case DIR_SOUTH:
            sprite->x += 1;
            sprite->y += 8;
            break;
        case DIR_EAST:
            sprite->y -= 2;
            sprite->x += 8;
            break;
        case DIR_WEST:
            sprite->y -= 3;
            sprite->x -= 8;
            break;
    }

    task->bState++;
    return FALSE;
}

static bool8 FireRod_FireRodFly(struct Task *task)
{
    u16 arrow_position;
    struct Sprite *sprite;
    
    sprite = &gSprites[task->bFireRodSpriteID];

    if((task->bFireRodShootAnim % 4 == 1) && task->bFireRodShootAnim != 0)
    {
        arrow_position = (task->bFireRodShootAnim + 3) / 4;
        if(!FindFireRodBehaviorAt(task, arrow_position))
            return FALSE;
    }

    if(task->bFireRodShootAnim > (8 * 4) - 4) // Kill If OffScreen
    {
        task->bState = FIRERODEND;
        return FALSE;
    }

    switch(task->bDir) // Move FireRod
    {
        case DIR_NORTH:
            sprite->x += 0;
            sprite->y -= 4;
            break;
        case DIR_SOUTH:
            sprite->x += 0;
            sprite->y += 4;
            break;
        case DIR_EAST:
            sprite->x += 4;
            sprite->y += 0;
            break;
        case DIR_WEST:
            sprite->x -= 4;
            sprite->y += 0;
            break;
    }
    
    task->bFireRodShootAnim++;
    return FALSE;
}

static bool8 FireRod_End(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    const u8 *script;

    FieldEffectFreeGraphicsResources(&gSprites[task->bFireRodSpriteID]);
    FieldEffectActiveListRemove(FLDEFF_FIREROD);
    DestroyTask(FindTaskIdByFunc(Task_FireRod));
    DebugPrintf("FireRod_End");
    return FALSE;
}

bool8 FindFireRodBehaviorAt(struct Task *task, u16 arrow_position)
{
    u8 elevation; 
    struct Sprite *sprite;
    struct Sprite *fire_pit_sprite;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent *objectEvent;
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;
    sprite = &gSprites[task->bFireRodSpriteID];

    switch(task->bDir)
    {
        case DIR_NORTH:
            x += 0;
            y -= arrow_position;
            break;
        case DIR_SOUTH:
            x += 0;
            y += arrow_position;
            break;
        case DIR_EAST:
            x += arrow_position;
            y += 0;
            break;
        case DIR_WEST:
            x -= arrow_position;
            y += 0;
            break;
    }
    
    switch(TryFindFireRodTargetAt(x, y))
    {
        case FireRodCollision: // Collision
            task->bState = FIRERODEND;
            return FALSE;
        case FireRodKeepGoing: // No collision or tile to swap
            break;
        case FireRodKeepGoingChangeTile: // Over a swappable tile
            u16 metatile = (MAPGRID_METATILE_ID_MASK & GetFireRodMetatileIdByTileset(MapGridGetMetatileIdAt(x, y))) \
                           + (GetFireRodCollisionByTilesetAndId(MapGridGetMetatileIdAt(x, y)) << MAPGRID_COLLISION_SHIFT) \
                           + (GetFireRodElevationByTilesetAndId(MapGridGetMetatileIdAt(x, y)) << MAPGRID_ELEVATION_SHIFT); // Surf is elevation 1
            MapGridSetMetatileEntryAt(x, y, metatile);
            DrawWholeMapView();
            break;
    }
    return TRUE;
}

//////////////////////////////////////////////
//      IceRod Functions
//////////////////////////////////////////////

#define IceRodCollision 0
#define IceRodKeepGoing 1
#define IceRodKeepGoingChangeTile 2

u16 GetIceRodMetatileIdByTileset(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_PondMiddleWater:
				return METATILE_GeneralSeelVersion_FrozenWater;
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return 0xFFFF;
}

u16 GetIceRodElevationByTilesetAndId(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_PondMiddleWater:
				return PlayerGetElevation();
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return PlayerGetElevation();
}

u16 GetIceRodCollisionByTilesetAndId(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_PondMiddleWater:
				return 0;
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return 0;
}

s8 TryFindIceRodTargetAt(u16 x, u16 y)
{   
    u8 objEventId;
    u8 elevation;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    u8 collision;

    elevation = PlayerGetElevation();

    if (GetIceRodMetatileIdByTileset(MapGridGetMetatileIdAt(x, y)) != 0xFFFF)
        return IceRodKeepGoingChangeTile;

    collision = GetCollisionAtCoords2(playerObjEvent, x, y, GetPlayerFacingDirection());
    if(collision && !(MapGridGetMetatileBehaviorAt((x), y) == MB_OCEAN_WATER))
    {
        return IceRodCollision;
    }

    return IceRodKeepGoing;
}


////////////////////////////////////////////
///      IceRod & IceRod TASK FUNCTIONS      ///
////////////////////////////////////////////

#define bState             data[0]
#define bIceRodSpriteID     data[1]
#define bDir               data[2]
#define bTargetEventID     data[3]
#define bIceRodShootAnim    data[4]
#define bIceRodAnim           data[5]
#define bTargetDistance    data[6]
#define bIsFireIceRod       data[7]
#define bRunOnHitScript    data[8]

#define ICERODEND             2

static void Task_IceRod(u8 taskId);
static u8 IceRod_Init(struct Task *task);
static u8 IceRod_IceRodFly(struct Task *task);
static u8 IceRod_End(struct Task *task);
bool8 FindIceRodBehaviorAt(struct Task *task, u16 arrow_position);

static bool8 (*const sIceRodStateFuncs[])(struct Task *) =
{
    IceRod_Init,
    IceRod_IceRodFly,
    IceRod_End,
};

void FldEff_IceRod(void)
{
    u8 taskId = CreateTask(Task_IceRod, 0xFF);
    gTasks[taskId].bDir = GetPlayerFacingDirection();
    Task_IceRod(taskId);
}

static void Task_IceRod(u8 taskId)
{
    while (sIceRodStateFuncs[gTasks[taskId].bState](&gTasks[taskId]))
        ;
}

static bool8 IceRod_Init(struct Task *task)
{   
    u8 spriteId;
    struct Sprite *sprite;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x2;
    s16 y2;

    spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_ICEROD], 0, 0, 0);
    task->bIceRodSpriteID = spriteId;
    if (spriteId != MAX_SPRITES)
    {
        sprite = &gSprites[spriteId];
        sprite->coordOffsetEnabled = TRUE;
        sprite->invisible = FALSE;
        sprite->oam.priority = 1;
        if(PlayerGetElevation() == 3)
        {
            sprite->oam.priority = 2;
        }
    }

    DebugPrintf("Ice Rod Start");

    sprite = &gSprites[spriteId];
    SetSpritePosToMapCoords(playerObjEvent->currentCoords.x, playerObjEvent->currentCoords.y, &x2, &y2);
    sprite->x = x2 + 8;
    sprite->y = y2 + 8;
    sprite->data[0] = playerObjEvent->currentCoords.x;
    sprite->data[1] = playerObjEvent->currentCoords.y;
    StartSpriteAnim(&gSprites[spriteId], GetFaceDirectionAnimNum(task->bDir));
    task->bIceRodShootAnim = 0;

    switch(task->bDir)
    {
        case DIR_NORTH:
            sprite->y -= 8;
            break;
        case DIR_SOUTH:
            sprite->x += 1;
            sprite->y += 8;
            break;
        case DIR_EAST:
            sprite->y -= 2;
            sprite->x += 8;
            break;
        case DIR_WEST:
            sprite->y -= 3;
            sprite->x -= 8;
            break;
    }

    task->bState++;
    return FALSE;
}

static bool8 IceRod_IceRodFly(struct Task *task)
{
    u16 arrow_position;
    struct Sprite *sprite;
    
    sprite = &gSprites[task->bIceRodSpriteID];

    if((task->bIceRodShootAnim % 4 == 1) && task->bIceRodShootAnim != 0)
    {
        arrow_position = (task->bIceRodShootAnim + 3) / 4;
        if(!FindIceRodBehaviorAt(task, arrow_position))
            return FALSE;
    }

    if(task->bIceRodShootAnim > (8 * 4) - 4) // Kill If OffScreen
    {
        task->bState = ICERODEND;
        return FALSE;
    }

    switch(task->bDir) // Move IceRod
    {
        case DIR_NORTH:
            sprite->x += 0;
            sprite->y -= 4;
            break;
        case DIR_SOUTH:
            sprite->x += 0;
            sprite->y += 4;
            break;
        case DIR_EAST:
            sprite->x += 4;
            sprite->y += 0;
            break;
        case DIR_WEST:
            sprite->x -= 4;
            sprite->y += 0;
            break;
    }
    
    task->bIceRodShootAnim++;
    return FALSE;
}

static bool8 IceRod_End(struct Task *task)
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    const u8 *script;

    FieldEffectFreeGraphicsResources(&gSprites[task->bIceRodSpriteID]);
    FieldEffectActiveListRemove(FLDEFF_ICEROD);
    DestroyTask(FindTaskIdByFunc(Task_IceRod));
    DebugPrintf("IceRod_End");
    return FALSE;
}

bool8 FindIceRodBehaviorAt(struct Task *task, u16 arrow_position)
{
    u8 elevation; 
    struct Sprite *sprite;
    struct Sprite *fire_pit_sprite;
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    struct ObjectEvent *objectEvent;
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;
    sprite = &gSprites[task->bIceRodSpriteID];

    switch(task->bDir)
    {
        case DIR_NORTH:
            x += 0;
            y -= arrow_position;
            break;
        case DIR_SOUTH:
            x += 0;
            y += arrow_position;
            break;
        case DIR_EAST:
            x += arrow_position;
            y += 0;
            break;
        case DIR_WEST:
            x -= arrow_position;
            y += 0;
            break;
    }
    
    switch(TryFindIceRodTargetAt(x, y))
    {
        case IceRodCollision: // Collision
            task->bState = ICERODEND;
            return FALSE;
        case IceRodKeepGoing: // No collision or tile to swap
            break;
        case IceRodKeepGoingChangeTile: // Over a swappable tile
            u16 metatile = (MAPGRID_METATILE_ID_MASK & GetIceRodMetatileIdByTileset(MapGridGetMetatileIdAt(x, y)))              \
                           + (GetIceRodCollisionByTilesetAndId(MapGridGetMetatileIdAt(x, y)) << MAPGRID_COLLISION_SHIFT)        \
                           + (GetIceRodElevationByTilesetAndId(MapGridGetMetatileIdAt(x, y)) << MAPGRID_ELEVATION_SHIFT);
            MapGridSetMetatileEntryAt(x, y, metatile);
            DrawWholeMapView();
            break;
    }
    return TRUE;
}


////////////////////////////////////////////
///    Lens of Truth TASK FUNCTIONS      ///
////////////////////////////////////////////

#define tState data[1]
#define tPrevX data[2]
#define tPrevY data[3]
#define tDelay data[4]

#define tDispCnt     data[6]
#define tBldCnt      data[7]
#define tBldAlpha    data[8]
#define tWinIn       data[9]
#define tWinOut      data[10]
#define tBldY      data[11]

EWRAM_DATA u16 lensActive;

void LensOfTruth_HandleStep(u8 taskId, s16 x, s16 y);
void Task_LensOfTruth_MainLoop(u8 taskId);

void Task_StartLensOfTruth(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    tDispCnt = REG_DISPCNT;
    tBldCnt = REG_BLDCNT;
    tBldAlpha = REG_BLDALPHA;
    tWinIn = REG_WININ;
    tWinOut = REG_WINOUT;
    tBldY = REG_OFFSET_BLDY;

    InitFlashEffectForLensOfTruth();
    SetGpuReg(REG_OFFSET_WININ, (WININ_WIN1_BG_ALL) | (WININ_WIN0_BG_ALL | WININ_WIN0_OBJ));
    SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_ALL); 
    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_ALL);   // Set Darken Effect on things not in the window on bg 0, 1, and sprite layer
    SetGpuReg(REG_OFFSET_BLDY, 7);  // Set Level of Darken effect, can be changed 0-16
    //SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(12, 7));

    UnlockPlayerFieldControls();
    lensActive = TRUE;
    gTasks[taskId].func = Task_LensOfTruth_MainLoop;
}

void Task_LensOfTruth_MainLoop(u8 taskId)
{
    s16 x, y;
    u16 tileBehavior;
    u16 *iceStepCount;
    s16 *data = gTasks[taskId].data;
    switch (tState)
    {
        case 0:
            PlayerGetDestCoords(&x, &y);
            LensOfTruth_HandleStep(taskId, x, y);
            tState = 1;
            break;
        case 1:
            PlayerGetDestCoords(&x, &y);
            tPrevX = x;
            tPrevY = y;
            tState = 2;
            break;
        case 2:
            PlayerGetDestCoords(&x, &y);
            // End if player hasn't moved
            if (x == tPrevX && y == tPrevY)
                return;
            tPrevX = x;
            tPrevY = y;
            tDelay = 0;
            tState = 3;
            break;     
        case 3:
            tDelay++;
            if (TestPlayerAvatarFlags(PLAYER_AVATAR_FLAG_DASH))
            {           
                if(tDelay < 5)
                    break;
            }
            else
            {
                if(tDelay < 9)
                    break;
            }
            LensOfTruth_HandleStep(taskId, tPrevX, tPrevY);  
            tState = 1;
            break;     
    }
}

u16 GetLensOfTruth_InView_MetatileIdByTilesetAndId(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_HiddenGroundTile:
				return METATILE_GeneralSeelVersion_RevealedGroundTile;
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return 0xFFFF;
}

u16 GetLensOfTruth_OutOfView_MetatileIdByTilesetAndId(u16 metatileId)
{
	if(gMapHeader.mapLayout->primaryTileset == &gTileset_GeneralSeelVersion)
	{
		switch(metatileId)
		{
			case METATILE_GeneralSeelVersion_RevealedGroundTile:
				return METATILE_GeneralSeelVersion_HiddenGroundTile;
		}
	}

//	if(gMapHeader.mapLayout->secondaryTileset == &gTileset_GeneralSeelVersion)
//	{
//
//	}
	return 0xFFFF;
}

#define LENS_WIDTH 13
#define LENS_HEIGHT 9

const u8 lensTileMask[LENS_HEIGHT][LENS_WIDTH] = 
{
    {0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
    {0,  0,  0,  0,  1,  1,  1,  1,  1,  0,  0,  0,  0,},
    {0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,},
    {0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,},
    {0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,},
    {0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,},
    {0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,},
    {0,  0,  0,  0,  1,  1,  1,  1,  1,  0,  0,  0,  0,},
    {0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,},
};

void LensOfTruth_TileInView(s16 x, s16 y)
{
    u16 metatileId = MapGridGetMetatileIdAt(x, y);
    u16 lensMetatileId = GetLensOfTruth_InView_MetatileIdByTilesetAndId(metatileId);

    if(lensMetatileId == 0xFFFF)
        return;

    MapGridSetMetatileIdAt(x, y, lensMetatileId);
    CurrentMapDrawMetatileAt(x, y);
}

void LensOfTruth_TileOutOfView(s16 x, s16 y)
{
    u16 metatileId = MapGridGetMetatileIdAt(x, y);
    u16 lensMetatileId = GetLensOfTruth_OutOfView_MetatileIdByTilesetAndId(metatileId);

    if(lensMetatileId == 0xFFFF)
        return;

    MapGridSetMetatileIdAt(x, y, lensMetatileId);
    CurrentMapDrawMetatileAt(x, y);
}

void LensOfTruth_HandleStep(u8 taskId, s16 x, s16 y)
{
    for(u16 xTile = 0; xTile < LENS_WIDTH; xTile++)
    {
        for(u16 yTile = 0; yTile < LENS_HEIGHT; yTile++)
        {
            if(!lensTileMask[yTile][xTile])
                LensOfTruth_TileOutOfView(x + xTile - ((LENS_WIDTH - 1) / 2), y + yTile - ((LENS_HEIGHT - 1) / 2));
            else
                LensOfTruth_TileInView(x + xTile - ((LENS_WIDTH - 1) / 2), y + yTile - ((LENS_HEIGHT - 1) / 2));
        }
    }
    return;
}

void LensOfTruth_ClearLens()
{
    struct ObjectEvent *playerObjEvent = &gObjectEvents[gPlayerAvatar.objectEventId];
    s16 x = playerObjEvent->currentCoords.x;
    s16 y = playerObjEvent->currentCoords.y;

    if(!lensActive)
        return;
    
    lensActive = FALSE;
    u16 taskId = FindTaskIdByFunc(Task_LensOfTruth_MainLoop);
    
    for(u16 xTile = 0; xTile < LENS_WIDTH; xTile++)
    {
        for(u16 yTile = 0; yTile < LENS_HEIGHT; yTile++)
        {
            LensOfTruth_TileOutOfView(x + xTile - ((LENS_WIDTH - 1) / 2), y + yTile - ((LENS_HEIGHT - 1) / 2));
        }
    }

    //ClearFlashForLensOfTruth();

    if(taskId != TASK_NONE)
    {
        s16 *data = gTasks[taskId].data;
        SetGpuReg(REG_OFFSET_WIN0H, 255);
        SetGpuReg(REG_OFFSET_DISPCNT, tDispCnt);
        SetGpuReg(REG_OFFSET_BLDCNT, tBldCnt);
        SetGpuReg(REG_OFFSET_BLDALPHA, tBldAlpha);
        SetGpuReg(REG_OFFSET_WININ, tWinIn);
        SetGpuReg(REG_OFFSET_WINOUT, tWinOut);
        SetGpuReg(REG_OFFSET_BLDY, tBldY);
        DestroyTask(taskId);
    }

    ScanlineEffect_Stop();
    ScanlineEffect_Clear();
    return;
}
