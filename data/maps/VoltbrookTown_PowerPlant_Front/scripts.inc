VoltbrookTown_PowerPlant_Front_MapScripts::
# 2 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_FRONT_TRIGGERED, VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_UnlockDoor
	return


VoltbrookTown_PowerPlant_Front_Switch::
# 13 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	lockall
# 14 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_Switch_2
# 21 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_FRONT_TRIGGERED
# 22 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_LockDoor
# 23 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_Switch_1:
# 26 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_Switch_2:
# 15 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_FRONT_TRIGGERED
# 16 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_UnlockDoor
# 17 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_Switch_1


VoltbrookTown_PowerPlant_Front_UnlockDoor::
# 33 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 4, METATILE_PowerPlant_NormalFloorTopLeftShadow, 0
# 34 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 35 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 36 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 37 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 5, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 38 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 39 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 40 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 41 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 7, METATILE_PowerPlant_ButtonPressed, 0
# 42 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setobjectxyperm 1, 14, 7
# 43 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_LockDoor::
# 49 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 4, METATILE_PowerPlant_BarrierNormalFloorTopLeftShadow, 0
# 50 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 0
# 51 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 0
# 52 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 0
# 53 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 5, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 54 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 55 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 56 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 57 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 7, METATILE_PowerPlant_ButtonUnpressed, 0
# 58 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setobjectxyperm 1, 6, 12
# 59 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	special DrawWholeMapView
	return

