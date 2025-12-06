# 1 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"

# 2 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
VoltbrookTown_RockDrop_Top_MapScripts::
# 3 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_RockDrop_Top_OnLoad
# 5 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VoltbrookTown_RockDrop_Top_OnTransition
# 6 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, VoltbrookTown_RockDrop_Top_SetHoleWarp
# 7 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	.byte 0
# 8 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"

# 9 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
VoltbrookTown_RockDrop_Top_OnTransition:
# 10 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	end
# 12 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"

# 13 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
VoltbrookTown_RockDrop_Top_OnLoad:
# 14 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
    call_if_set FLAG_VOLTBROOK_DROP_BOULDER, VoltbrookTown_RockDrop_Top_ReplaceFloor
# 15 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
    end
# 16 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"

# 17 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
VoltbrookTown_RockDrop_Top_ReplaceFloor:
# 18 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
    setmetatile 9, 6, METATILE_PowerPlant_CrackedFloor, 0
# 19 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"

# 20 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
VoltbrookTown_RockDrop_Top_SetHoleWarp:
# 21 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 22 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	setholewarp MAP_VOLTBROOK_TOWN_ROCK_DROP_BOTTOM
# 23 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	end

VoltbrookTown_RockDrop_Top_FakeFloor::
# 29 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_RockDrop_Top_FakeFloor_1
	return

VoltbrookTown_RockDrop_Top_FakeFloor_1:
# 30 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	lockall
# 31 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	delay 64
# 32 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	setmetatile 9, 6, METATILE_PowerPlant_CrackedFloorHole, 0
# 33 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	special DrawWholeMapView
# 34 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	delay 16
# 35 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	removeobject 1
# 36 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	setflag FLAG_VOLTBROOK_DROP_BOULDER
# 37 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	playse SE_FALL
# 38 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	delay 32
# 39 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	playse SE_M_STRENGTH
# 40 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	delay 16
# 41 "data/maps/VoltbrookTown_RockDrop_Top/scripts.pory"
	releaseall
	end

