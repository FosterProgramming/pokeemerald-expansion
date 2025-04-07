# 1 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
.set LOCALID_VEE, 1
# 3 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

DominionCity_MagaLab_EntranceHallway_MapScripts::
# 8 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 10 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 12 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 7
	goto_if_eq DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1
# 18 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 7
	goto_if_gt DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
	return

DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setmetatile 25, 9, 0x2BC, FALSE
# 15 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setmetatile 26, 9, 0x2BD, FALSE
# 16 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 1
	return

DominionCity_MagaLab_EntranceHallway_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 20 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 1
	return


DominionCity_MagaLab_EntranceHallway_EventScripts_WarpToMarioCode::
# 28 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	lockall
# 29 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_WarpToMarioCode_Movement_0
# 30 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 31 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_EXIT_CODE, 7, 4
# 32 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	delay 40
# 33 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	lockall
	return


# 29 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
DominionCity_MagaLab_EntranceHallway_EventScripts_WarpToMarioCode_Movement_0:
# 29 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	walk_in_place_down
	step_end
