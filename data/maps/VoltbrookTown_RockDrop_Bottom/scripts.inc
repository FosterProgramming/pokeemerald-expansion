VoltbrookTown_RockDrop_Bottom_MapScripts::
# 2 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 10 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_DROP_BOULDER, VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_DROPPED_BOULDER_1F
# 6 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	addobject 1
	end

VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_ROCK_DROP_TRIGGERED, VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

VoltbrookTown_RockDrop_Bottom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	call VoltbrookTown_PowerPlant_RockDrop_Clear
	return


VoltbrookTown_RockDrop_Bottom_Switch1::
# 21 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	lockall
# 22 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_RockDrop_Bottom_Switch1_2
# 29 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	call VoltbrookTown_PowerPlant_RockDrop_Set
# 30 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_ROCK_DROP_TRIGGERED
# 31 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	playse SE_CLICK
VoltbrookTown_RockDrop_Bottom_Switch1_1:
# 34 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	releaseall
	end

VoltbrookTown_RockDrop_Bottom_Switch1_2:
# 23 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	call VoltbrookTown_PowerPlant_RockDrop_Clear
# 24 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_ROCK_DROP_TRIGGERED
# 25 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_RockDrop_Bottom_Switch1_1


VoltbrookTown_PowerPlant_RockDrop_Clear::
# 40 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setobjectxyperm 1, 6, 12
# 41 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 8, 4, METATILE_PowerPlant_NormalFloorTopLeftShadow, 0
# 42 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 9, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 43 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 10, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 44 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 8, 5, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 45 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 9, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 46 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 10, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 47 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_RockDrop_Set::
# 53 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setobjectxyperm 1, 6, 12
# 54 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 8, 4, METATILE_PowerPlant_BarrierNormalFloorTopLeftShadow, 0
# 55 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 9, 4, METATILE_PowerPlant_TopBarrierNormalFloorTopShadow, 0
# 56 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 10, 4, METATILE_PowerPlant_TopBarrierNormalFloorTopShadow, 0
# 57 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 8, 5, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 58 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 9, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 59 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	setmetatile 10, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 60 "data/maps/VoltbrookTown_RockDrop_Bottom/scripts.pory"
	special DrawWholeMapView
	return

