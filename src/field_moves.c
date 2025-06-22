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
