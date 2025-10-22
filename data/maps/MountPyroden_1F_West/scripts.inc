MountPyroden_1F_West_MapScripts::
# 3 "data/maps/MountPyroden_1F_West/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_1, MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_3
MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_3, MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_8
MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_6:
	end

MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/MountPyroden_1F_West/scripts.pory"
	call MountPyroden_1F_West_EventScript_SpawnStairs
	goto MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 5 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_2, MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 11 "data/maps/MountPyroden_1F_West/scripts.pory"
	call MountPyroden_1F_West_EventScript_SpawnStairsAndLava
	goto MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_6

MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 9 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_4, MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto MountPyroden_1F_West_MapScripts_MAP_SCRIPT_ON_LOAD_6


MountPyroden_1F_West_EventScript_FirePit::
# 19 "data/maps/MountPyroden_1F_West/scripts.pory"
	lock
# 20 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_1F_West_EventScript_FirePit_2
# 39 "data/maps/MountPyroden_1F_West/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 40 "data/maps/MountPyroden_1F_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_1F_West_EventScript_FirePit_11
MountPyroden_1F_West_EventScript_FirePit_1:
# 45 "data/maps/MountPyroden_1F_West/scripts.pory"
	release
	end

MountPyroden_1F_West_EventScript_FirePit_2:
# 22 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_1, MountPyroden_1F_West_EventScript_FirePit_8
MountPyroden_1F_West_EventScript_FirePit_7:
# 30 "data/maps/MountPyroden_1F_West/scripts.pory"
	delay 20
# 31 "data/maps/MountPyroden_1F_West/scripts.pory"
	setvar VAR_0x8000, 3
# 32 "data/maps/MountPyroden_1F_West/scripts.pory"
	callnative SetFirePitOff
# 33 "data/maps/MountPyroden_1F_West/scripts.pory"
	setvar VAR_0x8000, 4
# 34 "data/maps/MountPyroden_1F_West/scripts.pory"
	callnative SetFirePitOff
MountPyroden_1F_West_EventScript_FirePit_5:
# 36 "data/maps/MountPyroden_1F_West/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_1F_West_EventScript_FirePit_1

MountPyroden_1F_West_EventScript_FirePit_6:
# 24 "data/maps/MountPyroden_1F_West/scripts.pory"
	playse SE_UNLOCK
# 25 "data/maps/MountPyroden_1F_West/scripts.pory"
	call MountPyroden_1F_West_EventScript_SpawnStairs
# 26 "data/maps/MountPyroden_1F_West/scripts.pory"
	waitse
	goto MountPyroden_1F_West_EventScript_FirePit_5

MountPyroden_1F_West_EventScript_FirePit_8:
# 22 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_2, MountPyroden_1F_West_EventScript_FirePit_6
	goto MountPyroden_1F_West_EventScript_FirePit_7

MountPyroden_1F_West_EventScript_FirePit_11:
# 42 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_1F_West_EventScript_FirePit_1


MountPyroden_1F_West_EventScript_SpawnStairs::
# 51 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 17, 6, METATILE_MountPyroden_Stairs_Left, FALSE
# 52 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 18, 6, METATILE_MountPyroden_Stairs_Right, FALSE
# 53 "data/maps/MountPyroden_1F_West/scripts.pory"
	special DrawWholeMapView
	return


MountPyroden_1F_West_EventScript_SpawnStairsAndLava::
# 62 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 32, 12, METATILE_MountPyroden_Stairs_Left, FALSE
# 63 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 33, 12, METATILE_MountPyroden_Stairs_Right, FALSE
# 64 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 23, 12, METATILE_MountPyroden_Lava_BottomLeft, TRUE
# 65 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 24, 12, METATILE_MountPyroden_Lava_BottomRight, TRUE
# 66 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 23, 13, METATILE_MountPyroden_Floor, FALSE
# 67 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 24, 13, METATILE_MountPyroden_Floor, FALSE
# 68 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 23, 14, METATILE_MountPyroden_Floor, FALSE
# 69 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 24, 14, METATILE_MountPyroden_Floor, FALSE
# 70 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 23, 15, METATILE_MountPyroden_Floor, FALSE
# 71 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 24, 15, METATILE_MountPyroden_Floor, FALSE
# 72 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 23, 16, METATILE_MountPyroden_Lava_TopLeft, TRUE
# 73 "data/maps/MountPyroden_1F_West/scripts.pory"
	setmetatile 24, 16, METATILE_MountPyroden_Lava_TopRight, TRUE
# 74 "data/maps/MountPyroden_1F_West/scripts.pory"
	special DrawWholeMapView
	return


MountPyroden_1F_West_EventScript_FirePit2::
# 80 "data/maps/MountPyroden_1F_West/scripts.pory"
	lock
# 81 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_1F_West_EventScript_FirePit2_2
# 100 "data/maps/MountPyroden_1F_West/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 101 "data/maps/MountPyroden_1F_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_1F_West_EventScript_FirePit2_11
MountPyroden_1F_West_EventScript_FirePit2_1:
# 106 "data/maps/MountPyroden_1F_West/scripts.pory"
	release
	end

MountPyroden_1F_West_EventScript_FirePit2_2:
# 83 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_3, MountPyroden_1F_West_EventScript_FirePit2_8
MountPyroden_1F_West_EventScript_FirePit2_7:
# 91 "data/maps/MountPyroden_1F_West/scripts.pory"
	delay 20
# 92 "data/maps/MountPyroden_1F_West/scripts.pory"
	setvar VAR_0x8000, 8
# 93 "data/maps/MountPyroden_1F_West/scripts.pory"
	callnative SetFirePitOff
# 94 "data/maps/MountPyroden_1F_West/scripts.pory"
	setvar VAR_0x8000, 7
# 95 "data/maps/MountPyroden_1F_West/scripts.pory"
	callnative SetFirePitOff
MountPyroden_1F_West_EventScript_FirePit2_5:
# 97 "data/maps/MountPyroden_1F_West/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_1F_West_EventScript_FirePit2_1

MountPyroden_1F_West_EventScript_FirePit2_6:
# 85 "data/maps/MountPyroden_1F_West/scripts.pory"
	playse SE_UNLOCK
# 86 "data/maps/MountPyroden_1F_West/scripts.pory"
	call MountPyroden_1F_West_EventScript_SpawnStairsAndLava
# 87 "data/maps/MountPyroden_1F_West/scripts.pory"
	waitse
	goto MountPyroden_1F_West_EventScript_FirePit2_5

MountPyroden_1F_West_EventScript_FirePit2_8:
# 83 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_4, MountPyroden_1F_West_EventScript_FirePit2_6
	goto MountPyroden_1F_West_EventScript_FirePit2_7

MountPyroden_1F_West_EventScript_FirePit2_11:
# 103 "data/maps/MountPyroden_1F_West/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_1F_West_EventScript_FirePit2_1

