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
	.byte 0
# 7 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"

# 8 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_OnTransition:
# 9 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	copyvar VAR_ICE_STEP_COUNT, 1
# 10 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	end
# 11 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"

# 12 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"

# 13 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F_SetHoleWarp:
# 14 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 15 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	setholewarp MAP_VOLTRBOOK_TOWN_POWER_PLANT_LEFT_GENERATOR_ROOM
# 16 "data/maps/VoltbrookTown_PowerPlant_LeftGeneratorRoom_2F/scripts.pory"
	end
