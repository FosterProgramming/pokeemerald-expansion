VoltbrookTown_PowerPlant_Entrance_MapScripts::
# 2 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_ENTRANCE_TRIGGERED, VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2
VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_ENTRANCE_RIGHT_TRIGGERED, VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_5
VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopLeftClear
	goto VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_1

VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 11 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopRightClear
# 12 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_BottomRightClear
	goto VoltbrookTown_PowerPlant_Entrance_MapScripts_MAP_SCRIPT_ON_LOAD_4


VoltbrookTown_PowerPlant_Entrance_Switch1::
# 21 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	lockall
# 22 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Entrance_Switch1_2
# 29 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopLeftSet
# 30 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_ENTRANCE_TRIGGERED
# 31 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Entrance_Switch1_1:
# 34 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Entrance_Switch1_2:
# 23 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopLeftClear
# 24 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_ENTRANCE_TRIGGERED
# 25 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Entrance_Switch1_1


VoltbrookTown_PowerPlant_Entrance_TopLeftClear::
# 41 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setobjectxyperm 1, 5, 9
# 42 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 7, METATILE_PowerPlant_TopWall, 1
# 43 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 8, METATILE_PowerPlant_BottomWall, 1
# 44 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 9, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 45 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 10, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 46 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 11, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 47 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 12, METATILE_PowerPlant_BackWall, 0
# 48 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_ButtonPressed, 0
# 49 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Entrance_TopLeftSet::
# 55 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setobjectxyperm 1, 5, 11
# 56 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 7, METATILE_PowerPlant_BarrierTopWall, 1
# 57 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 8, METATILE_PowerPlant_BarrierBottomWall, 1
# 58 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 9, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 59 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 10, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 60 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 11, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 61 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 2, 12, METATILE_PowerPlant_BarrierBackWall, 1
# 62 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_ButtonUnpressed, 0
# 63 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Entrance_Switch2::
# 69 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	lockall
# 70 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_2, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Entrance_Switch2_2
# 78 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopRightSet
# 79 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_BottomRightSet
# 80 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_ENTRANCE_RIGHT_TRIGGERED
# 81 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Entrance_Switch2_1:
# 84 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Entrance_Switch2_2:
# 71 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_TopRightClear
# 72 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	call VoltbrookTown_PowerPlant_Entrance_BottomRightClear
# 73 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_ENTRANCE_RIGHT_TRIGGERED
# 74 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Entrance_Switch2_1


VoltbrookTown_PowerPlant_Entrance_TopRightClear::
# 91 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setobjectxyperm 2, 13, 10
# 92 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 6, METATILE_PowerPlant_TopWall, 1
# 93 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 7, METATILE_PowerPlant_BottomWall, 1
# 94 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 8, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 95 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 9, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 96 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 10, METATILE_PowerPlant_BackWallTopRight, 0
# 97 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 13, 10, METATILE_PowerPlant_ButtonPressed, 0
# 98 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Entrance_TopRightSet::
# 104 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setobjectxyperm 2, 13, 11
# 105 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 6, METATILE_PowerPlant_BarrierTopWall, 1
# 106 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 7, METATILE_PowerPlant_BarrierBottomWall, 1
# 107 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 8, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 1
# 108 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 9, METATILE_PowerPlant_BarrierNormalFloorNoShadow, 1
# 109 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 11, 10, METATILE_PowerPlant_BarrierBackWallTopRight, 10
# 110 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 13, 10, METATILE_PowerPlant_ButtonUnpressed, 0
# 111 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Entrance_BottomRightClear::
# 118 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 12, 13, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 119 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 12, 14, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 120 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Entrance_BottomRightSet::
# 126 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 12, 13, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 127 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setmetatile 12, 14, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 128 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Entrance_Vee::
# 134 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	lockall
# 135 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setvar VAR_VOLTBROOK_PLANT_STATE, 1
# 136 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 137 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	addobject 3
# 138 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	applymovement 3, VoltbrookTown_PowerPlant_Entrance_Vee_Movement_0
# 142 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Entrance_Vee_Movement_1
# 145 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	waitmovement 3
# 146 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Entrance_Vee_Text_0
# 147 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Entrance_Vee_Text_1
# 154 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	closemessage
# 155 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	applymovement 3, VoltbrookTown_PowerPlant_Entrance_Vee_Movement_2
# 162 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	waitmovement 0
# 163 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Entrance_Vee_Text_0
# 164 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Entrance_Vee_Text_2
# 172 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	closemessage
# 173 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	applymovement 3, VoltbrookTown_PowerPlant_Entrance_Vee_Movement_3
# 174 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	waitmovement 0
# 175 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	removeobject 3
# 176 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	setflag FLAG_HIDE_VOLTBROOK_MAGA
# 177 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	releaseall
	return


VoltbrookTown_PowerPlant_Entrance_PlantWorkerNPC::
# 182 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	lockall
# 183 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Entrance_PlantWorkerNPC_Text_0, MSGBOX_NPC
# 184 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	releaseall
	end


# 138 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
VoltbrookTown_PowerPlant_Entrance_Vee_Movement_0:
# 139 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	walk_right
# 140 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	face_left
	step_end

# 142 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
VoltbrookTown_PowerPlant_Entrance_Vee_Movement_1:
# 143 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	walk_in_place_right
	step_end

# 155 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
VoltbrookTown_PowerPlant_Entrance_Vee_Movement_2:
# 156 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	face_down
# 157 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	delay_16
# 157 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	delay_16
# 158 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	face_right
# 159 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	delay_16
# 159 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	delay_16
# 160 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	face_left
	step_end

# 173 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
VoltbrookTown_PowerPlant_Entrance_Vee_Movement_3:
# 173 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	walk_left
	step_end

VoltbrookTown_PowerPlant_Entrance_Vee_Text_0:
# 146 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	.string "Vee$"

VoltbrookTown_PowerPlant_Entrance_Vee_Text_1:
# 148 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	.string "We did it!\n"
	.string "We got in the power plant!\p"
	.string "Now, if what Shade said was true…\n"
	.string "The artifact should be near!\p"
	.string "…But a Guardian could be here, too.$"

VoltbrookTown_PowerPlant_Entrance_Vee_Text_2:
# 165 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	.string "…They're definitely not in this room.\p"
	.string "Hey, maybe the Guardian isn't here,\n"
	.string "after all!\p"
	.string "Lucky us, right?\n"
	.string "Haha…\p"
	.string "… … …\p"
	.string "C'mon, Seel, let's find the artifact\n"
	.string "before someone sees us.$"

VoltbrookTown_PowerPlant_Entrance_PlantWorkerNPC_Text_0:
# 183 "data/maps/VoltbrookTown_PowerPlant_Entrance/scripts.pory"
	.string "I used to be important, but the new\n"
	.string "management seems to think I'm only\l"
	.string "good for reorganizing stock.\p"
	.string "I've found so much junk that half the\n"
	.string "boxes are empty now.$"
