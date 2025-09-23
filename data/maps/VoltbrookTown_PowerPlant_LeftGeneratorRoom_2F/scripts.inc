# 1 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"

# 2 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_MapScripts::
# 3 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 4 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_OnTransition
# 5 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_SetHoleWarp
# 6 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_OnLoad
# 7 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	.byte 0
# 8 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"

# 9 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_OnTransition:
# 10 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
# 11 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	end
# 12 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"

# 13 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"

# 14 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_SetHoleWarp:
# 15 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 16 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setholewarp MAP_VOLTRBOOK_TOWN_POWER_PLANT_LEFT_GENERATOR_ROOM
# 17 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	end

VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_OnLoad::
# 24 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_GENERATOR_2F_TRIGGERED, VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_OnLoad_1
	return

VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_OnLoad_1:
# 26 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Generator_2F_UnlockDoor
	return


VoltbrookTown_PowerPlant_Generator_2F_Switch1::
# 33 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	lockall
# 34 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Generator_2F_Switch1_2
# 41 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_GENERATOR_2F_TRIGGERED
# 42 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Generator_2F_LockDoor
# 43 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Generator_2F_Switch1_1:
# 46 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Generator_2F_Switch1_2:
# 35 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_GENERATOR_2F_TRIGGERED
# 36 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Generator_2F_UnlockDoor
# 37 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Generator_2F_Switch1_1


VoltbrookTown_PowerPlant_Generator_2F_UnlockDoor::
# 52 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setobjectxyperm 1, 14, 17
# 53 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setmetatile 16, 11, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 54 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setmetatile 16, 12, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 55 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Generator_2F_LockDoor::
# 61 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setobjectxyperm 1, 14, 17
# 62 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setmetatile 16, 11, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 63 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setmetatile 16, 12, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 64 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	special DrawWholeMapView
	return

