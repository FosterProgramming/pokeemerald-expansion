MountPyroden_1F_NorthWest_MapScripts::
# 4 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_1, MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_2
MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_2, MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_6
MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 8 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	call MountPyroden_1F_NorthWest_EventScript_SpawnStairs
	goto MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 12 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	call MountPyroden_1F_NorthWest_EventScript_SpawnStairs_2
	goto MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_4

MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 10 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_3, MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto MountPyroden_1F_NorthWest_MapScripts_MAP_SCRIPT_ON_LOAD_4


MountPyroden_1F_NorthWest_EventScript_FirePit_1::
# 21 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	lock
# 22 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_1F_NorthWest_EventScript_FirePit_1_2
# 30 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 31 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_1F_NorthWest_EventScript_FirePit_1_5
MountPyroden_1F_NorthWest_EventScript_FirePit_1_1:
# 36 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	release
	end

MountPyroden_1F_NorthWest_EventScript_FirePit_1_2:
# 24 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	playse SE_UNLOCK
# 25 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	call MountPyroden_1F_NorthWest_EventScript_SpawnStairs
# 26 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	waitse
# 27 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_1_1

MountPyroden_1F_NorthWest_EventScript_FirePit_1_5:
# 33 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_1_1


MountPyroden_1F_NorthWest_EventScript_SpawnStairs::
# 43 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setmetatile 14, 19, METATILE_MountPyroden_Stairs_Left, FALSE
# 44 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setmetatile 15, 19, METATILE_MountPyroden_Stairs_Right, FALSE
# 45 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	special DrawWholeMapView
	return


MountPyroden_1F_NorthWest_EventScript_FirePit_2::
# 51 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	lock
# 52 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_1F_NorthWest_EventScript_FirePit_2_2
# 71 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 72 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_1F_NorthWest_EventScript_FirePit_2_11
MountPyroden_1F_NorthWest_EventScript_FirePit_2_1:
# 77 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	release
	end

MountPyroden_1F_NorthWest_EventScript_FirePit_2_2:
# 54 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_2, MountPyroden_1F_NorthWest_EventScript_FirePit_2_8
MountPyroden_1F_NorthWest_EventScript_FirePit_2_7:
# 62 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	delay 20
# 63 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8000, 2
# 64 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	callnative SetFirePitOff
# 65 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8000, 3
# 66 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	callnative SetFirePitOff
MountPyroden_1F_NorthWest_EventScript_FirePit_2_5:
# 68 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_2_1

MountPyroden_1F_NorthWest_EventScript_FirePit_2_6:
# 56 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	playse SE_UNLOCK
# 57 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	call MountPyroden_1F_NorthWest_EventScript_SpawnStairs_2
# 58 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	waitse
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_2_5

MountPyroden_1F_NorthWest_EventScript_FirePit_2_8:
# 54 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_3, MountPyroden_1F_NorthWest_EventScript_FirePit_2_6
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_2_7

MountPyroden_1F_NorthWest_EventScript_FirePit_2_11:
# 74 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_2_1


MountPyroden_1F_NorthWest_EventScript_SpawnStairs_2::
# 83 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setmetatile 7, 14, METATILE_MountPyroden_Stairs_Left, FALSE
# 84 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setmetatile 8, 14, METATILE_MountPyroden_Stairs_Right, FALSE
# 85 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setmetatile 12, 16, METATILE_MountPyroden_Stairs_Right_Top, FALSE
# 86 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setmetatile 12, 17, METATILE_MountPyroden_Stairs_Right_Bottom, FALSE
# 87 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	special DrawWholeMapView
	return


MountPyroden_1F_NorthWest_EventScript_FirePit_3::
# 93 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	lock
# 94 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_1F_NorthWest_EventScript_FirePit_3_2
# 123 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 124 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_1F_NorthWest_EventScript_FirePit_3_13
MountPyroden_1F_NorthWest_EventScript_FirePit_3_1:
# 129 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	release
	end

MountPyroden_1F_NorthWest_EventScript_FirePit_3_2:
# 96 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_4, MountPyroden_1F_NorthWest_EventScript_FirePit_3_9
MountPyroden_1F_NorthWest_EventScript_FirePit_3_7:
# 111 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	delay 20
# 112 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8000, 6
# 113 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	callnative SetFirePitOff
# 114 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8000, 7
# 115 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	callnative SetFirePitOff
# 116 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8000, 8
# 117 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	callnative SetFirePitOff
# 120 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_3_1

MountPyroden_1F_NorthWest_EventScript_FirePit_3_6:
# 98 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	lockall
# 99 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8004, 1
# 100 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8005, 1
# 101 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8006, 8
# 102 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	setvar VAR_0x8007, 5
# 103 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	special ShakeCamera
# 104 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	waitstate
# 105 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	msgbox MountPyroden_1F_NorthWest_EventScript_FirePit_3_Text_0
# 106 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	releaseall
	end

MountPyroden_1F_NorthWest_EventScript_FirePit_3_8:
# 96 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_6, MountPyroden_1F_NorthWest_EventScript_FirePit_3_6
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_3_7

MountPyroden_1F_NorthWest_EventScript_FirePit_3_9:
# 96 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_5, MountPyroden_1F_NorthWest_EventScript_FirePit_3_8
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_3_7

MountPyroden_1F_NorthWest_EventScript_FirePit_3_13:
# 126 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_1F_NorthWest_EventScript_FirePit_3_1


MountPyroden_1F_NorthWest_EventScript_FirePit_3_Text_0:
# 105 "data/maps/MountPyroden_1F_NorthWest/scripts.pory"
	.string "Something changed in the main room.$"
