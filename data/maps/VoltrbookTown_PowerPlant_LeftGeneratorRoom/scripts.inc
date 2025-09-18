VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts::
# 2 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_1_TRIGGERED, VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 10 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 1, 8, 10
VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_2_TRIGGERED, VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_6
VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 16 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_1_TRIGGERED, VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_10
VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 20 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_3_TRIGGERED, VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_14
VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_13:
	end

VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1Pressed
	goto VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1

VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 14 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2Pressed
	goto VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5

VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 18 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_UnlockLeftDoor
	goto VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_8

VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_10:
# 16 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_2_TRIGGERED, VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_9
	goto VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_8

VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_14:
# 22 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_UnlockRightDoor
	goto VoltrbookTown_PowerPlant_LeftGeneratorRoom_MapScripts_MAP_SCRIPT_ON_LOAD_13


VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1::
# 32 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	lockall
# 33 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_2
# 52 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_LockLeftDoor
# 53 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 8, 9, METATILE_PowerPlant_ButtonUnpressed, 0
# 54 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
# 55 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 1, 8, 8
# 56 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_1_TRIGGERED
# 57 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_1:
# 60 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_2:
# 34 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_1_TRIGGERED
# 35 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 1, 8, 9
# 36 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 8, 9, METATILE_PowerPlant_ButtonPressed, 0
# 37 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
# 38 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_1_TRIGGERED, VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_7
VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_6:
# 45 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1Pressed
# 46 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_CLICK
	goto VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_1

VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_5:
# 40 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_UnlockLeftDoor
# 41 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_1

VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_7:
# 38 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_2_TRIGGERED, VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_5
	goto VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1_6


VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch1Pressed::
# 66 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 1, 8, 9
# 67 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 8, 9, METATILE_PowerPlant_ButtonPressed, 0
# 68 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2::
# 75 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	lockall
# 76 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_2, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_2
# 94 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_LockLeftDoor
# 95 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 6, 11, METATILE_PowerPlant_ButtonUnpressed, 0
# 96 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
# 97 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_2_TRIGGERED
# 98 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_1:
# 101 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_2:
# 77 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_2_TRIGGERED
# 78 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 2, 6, 11
# 79 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 6, 11, METATILE_PowerPlant_ButtonPressed, 0
# 80 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
# 81 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_1_TRIGGERED, VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_7
VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_6:
# 88 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2Pressed
# 89 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_CLICK
	goto VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_1

VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_5:
# 83 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_UnlockLeftDoor
# 84 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_1

VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_7:
# 81 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_2_TRIGGERED, VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_5
	goto VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2_6


VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch2Pressed::
# 107 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 2, 6, 11
# 108 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 6, 11, METATILE_PowerPlant_ButtonPressed, 0
# 109 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_LeftGeneratorRoom_UnlockLeftDoor::
# 117 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 10, METATILE_PowerPlant_TopWall, 1
# 118 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 11, METATILE_PowerPlant_BottomWall, 1
# 119 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 12, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 120 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 13, METATILE_PowerPlant_BackWall, 0
# 121 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_LeftGeneratorRoom_LockLeftDoor::
# 127 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 10, METATILE_PowerPlant_BarrierTopWall, 1
# 128 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 11, METATILE_PowerPlant_BarrierBottomWall, 1
# 129 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 12, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 130 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 3, 13, METATILE_PowerPlant_BarrierBackWall, 1
# 131 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch3::
# 140 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	lockall
# 141 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_3, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch3_2
# 148 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_LockRightDoor
# 149 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_3_TRIGGERED
# 150 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch3_1:
# 153 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch3_2:
# 142 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_LEFT_GENERATOR_ROOM_LEFT_3_TRIGGERED
# 143 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_LeftGeneratorRoom_UnlockRightDoor
# 144 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_LeftGeneratorRoom_Switch3_1


VoltbrookTown_PowerPlant_LeftGeneratorRoom_UnlockRightDoor::
# 160 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 6, METATILE_PowerPlant_TopWall, 1
# 161 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 7, METATILE_PowerPlant_BottomWall, 1
# 162 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 8, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 163 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 9, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 164 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 10, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 165 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 11, METATILE_PowerPlant_BackWall, 0
# 166 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 19, 10, METATILE_PowerPlant_ButtonPressed, 0
# 167 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 3, 19, 10
# 168 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_LeftGeneratorRoom_LockRightDoor::
# 174 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 6, METATILE_PowerPlant_BarrierTopWall, 1
# 175 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 7, METATILE_PowerPlant_BarrierBottomWall, 1
# 176 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 8, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 177 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 9, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 178 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 10, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 179 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 17, 11, METATILE_PowerPlant_BarrierBackWall, 1
# 180 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setmetatile 19, 10, METATILE_PowerPlant_ButtonUnpressed, 0
# 181 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	setobjectxyperm 3, 19, 9
# 182 "data/maps/VoltrbookTown_PowerPlant_LeftGeneratorRoom/scripts.pory"
	special DrawWholeMapView
	return

