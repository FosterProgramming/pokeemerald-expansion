VoltbrookTown_PowerPlant_Front_2F_MapScripts::
# 2 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_7_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_2
VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_5
VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_UnlockAllLeft
	goto VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_1

VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 11 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_UnlockAllRight
	goto VoltbrookTown_PowerPlant_Front_2F_MapScripts_MAP_SCRIPT_ON_LOAD_4


VoltbrookTown_PowerPlant_Front_2F_Switch1::
# 21 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 22 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch1_2
# 30 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_ButtonUnpressed, 0
# 31 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight1Lock
# 32 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_1_TRIGGERED
# 33 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch1_1:
# 36 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch1_2:
# 23 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_ButtonPressed, 0
# 24 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight1Unlock
# 25 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_1_TRIGGERED
# 26 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch1_1


VoltbrookTown_PowerPlant_Front_2F_DoorRight1Unlock::
# 43 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 2, METATILE_PowerPlant_TopWall, 1
# 44 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 3, METATILE_PowerPlant_BottomWall, 1
# 45 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 46 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 47 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 6, METATILE_PowerPlant_BackWall, 0
# 48 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorRight1Lock::
# 54 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorRight1Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorRight1Lock_1:
# 63 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorRight1Lock_2:
# 56 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 2, METATILE_PowerPlant_BarrierTopWall, 1
# 57 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 3, METATILE_PowerPlant_BarrierBottomWall, 1
# 58 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 59 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 5, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 60 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 6, METATILE_PowerPlant_BarrierBackWall, 0
	goto VoltbrookTown_PowerPlant_Front_2F_DoorRight1Lock_1


VoltbrookTown_PowerPlant_Front_2F_Switch2::
# 70 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 71 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_2, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch2_2
# 80 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 12, 6, METATILE_PowerPlant_ButtonUnpressed, 0
# 81 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
# 82 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Lock
# 83 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_2_TRIGGERED
# 84 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch2_1:
# 87 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch2_2:
# 72 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 12, 6, METATILE_PowerPlant_ButtonPressed, 0
# 73 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
# 74 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Unlock
# 75 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_2_TRIGGERED
# 76 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch2_1


VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Unlock::
# 94 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 2, METATILE_PowerPlant_TopWall, 1
# 95 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 3, METATILE_PowerPlant_BottomWall, 1
# 96 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 97 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 98 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 6, METATILE_PowerPlant_BackWall, 0
# 99 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Lock::
# 105 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_7_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Lock_1:
# 113 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Lock_2:
# 107 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 2, METATILE_PowerPlant_BarrierTopWall, 1
# 108 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 3, METATILE_PowerPlant_BarrierBottomWall, 1
# 109 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 110 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 5, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 111 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 6, METATILE_PowerPlant_BarrierBackWall, 0
	goto VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Lock_1


VoltbrookTown_PowerPlant_Front_2F_Switch3::
# 119 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 120 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_3, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch3_2
# 128 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 5, METATILE_PowerPlant_ButtonUnpressed, 0
# 129 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Lock
# 130 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_3_TRIGGERED
# 131 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch3_1:
# 134 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch3_2:
# 121 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 5, METATILE_PowerPlant_ButtonPressed, 0
# 122 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Unlock
# 123 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_3_TRIGGERED
# 124 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch3_1


VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Unlock::
# 141 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 17, 7, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 142 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 7, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 143 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 17, 8, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 144 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 8, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 145 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Lock::
# 151 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Lock_1:
# 158 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Lock_2:
# 153 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 17, 7, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 154 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 7, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 155 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 17, 8, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 156 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 8, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
	goto VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Lock_1


VoltbrookTown_PowerPlant_Front_2F_Switch4::
# 165 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 166 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_4, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch4_2
# 174 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 5, METATILE_PowerPlant_ButtonUnpressed, 0
# 175 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Lock
# 176 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_4_TRIGGERED
# 177 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch4_1:
# 180 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch4_2:
# 167 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 5, METATILE_PowerPlant_ButtonPressed, 0
# 168 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Unlock
# 169 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_4_TRIGGERED
# 170 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch4_1


VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Unlock::
# 187 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 7, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 188 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 8, 7, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 189 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 8, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 190 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 8, 8, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 191 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Lock::
# 197 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_7_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Lock_1:
# 204 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Lock_2:
# 199 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 7, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 200 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 8, 7, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 201 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 8, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 202 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 8, 8, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
	goto VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Lock_1


VoltbrookTown_PowerPlant_Front_2F_Switch5::
# 212 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 213 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_5, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch5_2
# 222 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 10, METATILE_PowerPlant_ButtonUnpressed, 0
# 223 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight2Lock
# 224 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Lock
# 225 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_5_TRIGGERED
# 226 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch5_1:
# 229 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch5_2:
# 214 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 7, 10, METATILE_PowerPlant_ButtonPressed, 0
# 215 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight2Unlock
# 216 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Unlock
# 217 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_5_TRIGGERED
# 218 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch5_1


VoltbrookTown_PowerPlant_Front_2F_DoorRight2Unlock::
# 236 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 2, METATILE_PowerPlant_TopWall, 1
# 237 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 3, METATILE_PowerPlant_BottomWall, 1
# 238 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 239 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 240 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 6, METATILE_PowerPlant_BackWall, 0
# 241 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorRight2Lock::
# 247 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorRight2Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorRight2Lock_1:
# 255 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorRight2Lock_2:
# 249 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 2, METATILE_PowerPlant_BarrierTopWall, 1
# 250 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 3, METATILE_PowerPlant_BarrierBottomWall, 1
# 251 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 252 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 5, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 253 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 6, METATILE_PowerPlant_BarrierBackWall, 0
	goto VoltbrookTown_PowerPlant_Front_2F_DoorRight2Lock_1


VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Unlock::
# 261 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 22, 7, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 262 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 23, 7, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 263 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 22, 8, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 264 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 23, 8, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 265 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Lock::
# 271 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Lock_1:
# 278 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Lock_2:
# 273 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 22, 7, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 274 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 23, 7, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 275 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 22, 8, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 276 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 23, 8, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
	goto VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Lock_1


VoltbrookTown_PowerPlant_Front_2F_Switch6::
# 285 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 286 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_6, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch6_2
# 295 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 10, METATILE_PowerPlant_ButtonUnpressed, 0
# 296 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Lock
# 297 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Lock
# 298 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_6_TRIGGERED
# 299 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch6_1:
# 302 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch6_2:
# 287 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 18, 10, METATILE_PowerPlant_ButtonPressed, 0
# 288 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Unlock
# 289 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Unlock
# 290 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_6_TRIGGERED
# 291 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch6_1


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Unlock::
# 309 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 7, METATILE_PowerPlant_TopWall, 1
# 310 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 8, METATILE_PowerPlant_BottomWall, 1
# 311 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 312 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 10, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 313 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 11, METATILE_PowerPlant_BackWall, 0
# 314 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Lock::
# 320 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_7_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Lock_1:
# 328 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Lock_2:
# 322 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 7, METATILE_PowerPlant_BarrierTopWall, 1
# 323 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 8, METATILE_PowerPlant_BarrierBottomWall, 1
# 324 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 325 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 10, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 326 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 11, METATILE_PowerPlant_BarrierBackWall, 0
	goto VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Lock_1


VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Unlock::
# 334 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 2, 7, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 335 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 3, 7, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 336 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 2, 8, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 337 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 3, 8, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 338 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Lock::
# 344 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	goto_if_unset FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED, VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Lock_2
VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Lock_1:
# 351 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Lock_2:
# 346 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 2, 7, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 347 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 3, 7, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 348 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 2, 8, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 349 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 3, 8, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
	goto VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Lock_1


VoltbrookTown_PowerPlant_Front_2F_Switch8::
# 358 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 359 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_8, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch8_2
# 366 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_LockAllRight
# 367 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED
# 368 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch8_1:
# 371 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch8_2:
# 360 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_UnlockAllRight
# 361 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_8_TRIGGERED
# 362 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch8_1


VoltbrookTown_PowerPlant_Front_2F_UnlockAllRight::
# 378 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 23, 10, METATILE_PowerPlant_ButtonPressed, 0
# 379 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setobjectxyperm 5, 23, 10
# 380 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight1Unlock
# 381 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Unlock
# 382 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight2Unlock
# 383 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Unlock
# 384 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight1Unlock
# 385 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight2Unlock
	return


VoltbrookTown_PowerPlant_Front_2F_LockAllRight::
# 391 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 23, 10, METATILE_PowerPlant_ButtonPressed, 0
# 392 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setobjectxyperm 5, 22, 10
# 393 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight1Lock
# 394 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight1Lock
# 395 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorRight2Lock
# 396 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomRight2Lock
# 397 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight1Lock
# 398 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight2Lock
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight1Unlock::
# 404 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 7, METATILE_PowerPlant_TopWall, 1
# 405 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 8, METATILE_PowerPlant_BottomWall, 1
# 406 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 9, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 407 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 10, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 408 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 11, METATILE_PowerPlant_BackWall, 0
# 409 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight1Lock::
# 415 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 7, METATILE_PowerPlant_BarrierTopWall, 1
# 416 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 8, METATILE_PowerPlant_BarrierBottomWall, 1
# 417 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 9, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 418 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 10, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 419 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 15, 11, METATILE_PowerPlant_BarrierBackWall, 0
# 420 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight2Unlock::
# 427 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 7, METATILE_PowerPlant_TopWall, 1
# 428 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 8, METATILE_PowerPlant_BottomWall, 1
# 429 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 9, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 430 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 10, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 431 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 11, METATILE_PowerPlant_BackWall, 0
# 432 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomRight2Lock::
# 438 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 7, METATILE_PowerPlant_BarrierTopWall, 1
# 439 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 8, METATILE_PowerPlant_BarrierBottomWall, 1
# 440 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 9, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 441 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 10, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 442 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 20, 11, METATILE_PowerPlant_BarrierBackWall, 0
# 443 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_Switch7::
# 450 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	lockall
# 451 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_7, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_2F_Switch7_2
# 458 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_LockAllLeft
# 459 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_7_TRIGGERED
# 460 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_2F_Switch7_1:
# 463 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_2F_Switch7_2:
# 452 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_UnlockAllLeft
# 453 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_ENTRANCE_2F_7_TRIGGERED
# 454 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_2F_Switch7_1


VoltbrookTown_PowerPlant_Front_2F_UnlockAllLeft::
# 470 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 2, 10, METATILE_PowerPlant_ButtonPressed, 0
# 471 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setobjectxyperm 6, 2, 10
# 472 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Unlock
# 473 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Unlock
# 474 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorLeft2Unlock
# 475 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Unlock
# 476 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft1Unlock
# 477 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Unlock
	return


VoltbrookTown_PowerPlant_Front_2F_LockAllLeft::
# 483 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 2, 10, METATILE_PowerPlant_ButtonUnpressed, 0
# 484 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setobjectxyperm 6, 3, 10
# 485 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorLeft1Lock
# 486 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft1Lock
# 487 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorLeft2Lock
# 488 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomLeft2Lock
# 489 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft1Lock
# 490 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft2Lock
	return


VoltbrookTown_PowerPlant_Front_2F_DoorLeft2Unlock::
# 497 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 2, METATILE_PowerPlant_TopWall, 1
# 498 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 3, METATILE_PowerPlant_BottomWall, 1
# 499 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 500 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 501 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 6, METATILE_PowerPlant_BackWall, 0
# 502 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorLeft2Lock::
# 508 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 2, METATILE_PowerPlant_BarrierTopWall, 1
# 509 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 3, METATILE_PowerPlant_BarrierBottomWall, 1
# 510 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 511 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 5, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 512 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 5, 6, METATILE_PowerPlant_BarrierBackWall, 0
# 513 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft1Unlock::
# 519 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 7, METATILE_PowerPlant_TopWall, 1
# 520 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 8, METATILE_PowerPlant_BottomWall, 1
# 521 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 9, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 522 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 10, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 523 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 11, METATILE_PowerPlant_BackWall, 0
# 524 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_2F_DoorBottomBottomLeft1Lock::
# 530 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 7, METATILE_PowerPlant_BarrierTopWall, 1
# 531 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 8, METATILE_PowerPlant_BarrierBottomWall, 1
# 532 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 9, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 533 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 10, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 534 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	setmetatile 10, 11, METATILE_PowerPlant_BarrierBackWall, 0
# 535 "data/maps/VoltbrookTown_PowerPlant_Front_2F/scripts.pory"
	special DrawWholeMapView
	return

