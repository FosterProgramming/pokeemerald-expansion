VoltbrookTown_PowerPlant_Entrance_MapScripts::
# 2 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_ENTRANCE_TRIGGERED, VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2
VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopLeftClear
	goto VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1


VoltbrookTown_PowerPlant_Entrance_Switch1::
# 15 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	lockall
# 16 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Entrance_Switch1_2
# 23 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopLeftSet
# 24 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_ENTRANCE_TRIGGERED
# 25 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Entrance_Switch1_1:
# 28 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Entrance_Switch1_2:
# 17 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopLeftClear
# 18 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_ENTRANCE_TRIGGERED
# 19 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Entrance_Switch1_1


VoltbrookTown_PowerPlant_Entrance_TopLeftClear::
# 35 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setobjectxyperm 1, 5, 9
# 36 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 7, METATILE_PowerPlant_TopWall, 1
# 37 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 8, METATILE_PowerPlant_BottomWall, 1
# 38 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 9, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 39 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 10, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 40 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 11, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 41 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 12, METATILE_PowerPlant_BackWall, 0
# 42 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_ButtonPressed, 0
# 43 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Entrance_TopLeftSet::
# 49 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setobjectxyperm 1, 5, 11
# 50 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 7, METATILE_PowerPlant_BarrierTopWall, 1
# 51 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 8, METATILE_PowerPlant_BarrierBottomWall, 1
# 52 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 9, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 53 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 10, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 54 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 11, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 55 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 12, METATILE_PowerPlant_BarrierBackWall, 1
# 56 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_ButtonUnpressed, 0
# 57 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return

