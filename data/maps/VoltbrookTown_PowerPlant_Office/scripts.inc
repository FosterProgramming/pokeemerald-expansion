VoltbrookTown_PowerPlant_Office_MapScripts::
# 2 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_OFFICE_TRIGGERED_1, VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD_2
VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_OFFICE_TRIGGERED_2, VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD_4
	return

VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	call VoltbrookTown_PowerPlant_Office_DoorsClear
	goto VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD_1

VoltbrookTown_PowerPlant_Office_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 10 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	call VoltbrookTown_PowerPlant_Office_GateClear
	return


VoltbrookTown_PowerPlant_Office_Switch1::
# 17 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	lockall
# 18 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Office_Switch1_2
# 25 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	call VoltbrookTown_PowerPlant_Office_DoorsSet
# 26 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_OFFICE_TRIGGERED_1
# 27 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Office_Switch1_1:
# 30 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Office_Switch1_2:
# 19 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	call VoltbrookTown_PowerPlant_Office_DoorsClear
# 20 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_OFFICE_TRIGGERED_1
# 21 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Office_Switch1_1


VoltbrookTown_PowerPlant_Office_DoorsClear::
# 37 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setobjectxyperm 1, 11, 4
# 38 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 7, 5, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 39 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 8, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 40 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 7, 6, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 41 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 8, 6, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 42 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 43 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 14, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 44 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 13, 6, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 45 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 14, 6, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 46 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Office_DoorsSet::
# 52 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setobjectxyperm 1, 10, 9
# 53 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 7, 5, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 54 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 8, 5, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 55 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 7, 6, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 56 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 8, 6, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 57 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 58 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 14, 5, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 59 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 13, 6, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 60 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 14, 6, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 61 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Office_Switch2::
# 67 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	lockall
# 68 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_2, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Office_Switch2_2
# 75 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	call VoltbrookTown_PowerPlant_Office_GateSet
# 76 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_OFFICE_TRIGGERED_2
# 77 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Office_Switch2_1:
# 80 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Office_Switch2_2:
# 69 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	call VoltbrookTown_PowerPlant_Office_GateClear
# 70 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_OFFICE_TRIGGERED_2
# 71 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Office_Switch2_1


VoltbrookTown_PowerPlant_Office_GateClear::
# 87 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setobjectxyperm 2, 8, 4
# 88 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 16, 5, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 89 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 17, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 90 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 18, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 91 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 19, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 92 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 16, 6, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 93 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 17, 6, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 94 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 18, 6, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 95 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 19, 6, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 96 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Office_GateSet::
# 102 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setobjectxyperm 1, 14, 5
# 103 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 16, 5, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 104 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 17, 5, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 105 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 18, 5, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 106 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 19, 5, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 107 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 16, 6, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 108 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 17, 6, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 109 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 18, 6, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 110 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	setmetatile 19, 6, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 111 "data/maps/VoltbrookTown_PowerPlant_Office/scripts.pory"
	special DrawWholeMapView
	return

