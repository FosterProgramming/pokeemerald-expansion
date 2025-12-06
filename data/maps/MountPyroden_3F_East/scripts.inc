MountPyroden_3F_East_MapScripts::
# 3 "data/maps/MountPyroden_3F_East/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_EAST_FIRE_PIT_1, MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_2
MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_EAST_FIRE_PIT_2, MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_7
MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/MountPyroden_3F_East/scripts.pory"
	call MountPyroden_3F_East_SpawnStairs1
	goto MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 11 "data/maps/MountPyroden_3F_East/scripts.pory"
	call MountPyroden_3F_East_EventScript_RemoveRocks
	goto MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_4

MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 9 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_EAST_FIRE_PIT_4, MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_4

MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 9 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_EAST_FIRE_PIT_3, MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto MountPyroden_3F_East_MapScripts_MAP_SCRIPT_ON_LOAD_4


MountPyroden_3F_East_EventScript_FirePit1::
# 19 "data/maps/MountPyroden_3F_East/scripts.pory"
	lock
# 20 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_3F_East_EventScript_FirePit1_2
# 32 "data/maps/MountPyroden_3F_East/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 33 "data/maps/MountPyroden_3F_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_3F_East_EventScript_FirePit1_5
MountPyroden_3F_East_EventScript_FirePit1_1:
# 38 "data/maps/MountPyroden_3F_East/scripts.pory"
	release
	end

MountPyroden_3F_East_EventScript_FirePit1_2:
# 22 "data/maps/MountPyroden_3F_East/scripts.pory"
	lock
# 23 "data/maps/MountPyroden_3F_East/scripts.pory"
	playse SE_UNLOCK
# 24 "data/maps/MountPyroden_3F_East/scripts.pory"
	call MountPyroden_3F_East_SpawnStairs1
# 25 "data/maps/MountPyroden_3F_East/scripts.pory"
	waitse
# 26 "data/maps/MountPyroden_3F_East/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
# 27 "data/maps/MountPyroden_3F_East/scripts.pory"
	release
	end

MountPyroden_3F_East_EventScript_FirePit1_5:
# 35 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_3F_East_EventScript_FirePit1_1


MountPyroden_3F_East_SpawnStairs1::
# 44 "data/maps/MountPyroden_3F_East/scripts.pory"
	setmetatile 23, 24, METATILE_MountPyroden_Stairs_Left, FALSE
# 45 "data/maps/MountPyroden_3F_East/scripts.pory"
	setmetatile 24, 24, METATILE_MountPyroden_Stairs_Right, FALSE
# 46 "data/maps/MountPyroden_3F_East/scripts.pory"
	special DrawWholeMapView
	return


MountPyroden_3F_East_EventScript_FirePit2::
# 53 "data/maps/MountPyroden_3F_East/scripts.pory"
	lock
# 54 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_3F_East_EventScript_FirePit2_2
# 75 "data/maps/MountPyroden_3F_East/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 76 "data/maps/MountPyroden_3F_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_3F_East_EventScript_FirePit2_13
MountPyroden_3F_East_EventScript_FirePit2_1:
# 81 "data/maps/MountPyroden_3F_East/scripts.pory"
	release
	end

MountPyroden_3F_East_EventScript_FirePit2_2:
# 56 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_EAST_FIRE_PIT_2, MountPyroden_3F_East_EventScript_FirePit2_9
MountPyroden_3F_East_EventScript_FirePit2_7:
# 64 "data/maps/MountPyroden_3F_East/scripts.pory"
	delay 20
# 65 "data/maps/MountPyroden_3F_East/scripts.pory"
	setvar VAR_0x8000, 2
# 66 "data/maps/MountPyroden_3F_East/scripts.pory"
	callnative SetFirePitOff
# 67 "data/maps/MountPyroden_3F_East/scripts.pory"
	setvar VAR_0x8000, 3
# 68 "data/maps/MountPyroden_3F_East/scripts.pory"
	callnative SetFirePitOff
# 69 "data/maps/MountPyroden_3F_East/scripts.pory"
	setvar VAR_0x8000, 4
# 70 "data/maps/MountPyroden_3F_East/scripts.pory"
	callnative SetFirePitOff
MountPyroden_3F_East_EventScript_FirePit2_5:
# 72 "data/maps/MountPyroden_3F_East/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_3F_East_EventScript_FirePit2_1

MountPyroden_3F_East_EventScript_FirePit2_6:
# 58 "data/maps/MountPyroden_3F_East/scripts.pory"
	playse SE_UNLOCK
# 59 "data/maps/MountPyroden_3F_East/scripts.pory"
	call MountPyroden_3F_East_EventScript_RemoveRocks
# 60 "data/maps/MountPyroden_3F_East/scripts.pory"
	waitse
	goto MountPyroden_3F_East_EventScript_FirePit2_5

MountPyroden_3F_East_EventScript_FirePit2_8:
# 56 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_EAST_FIRE_PIT_4, MountPyroden_3F_East_EventScript_FirePit2_6
	goto MountPyroden_3F_East_EventScript_FirePit2_7

MountPyroden_3F_East_EventScript_FirePit2_9:
# 56 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_EAST_FIRE_PIT_3, MountPyroden_3F_East_EventScript_FirePit2_8
	goto MountPyroden_3F_East_EventScript_FirePit2_7

MountPyroden_3F_East_EventScript_FirePit2_13:
# 78 "data/maps/MountPyroden_3F_East/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_3F_East_EventScript_FirePit2_1


MountPyroden_3F_East_EventScript_RemoveRocks::
# 87 "data/maps/MountPyroden_3F_East/scripts.pory"
	setmetatile 31, 40, METATILE_MountPyroden_Floor, FALSE
# 88 "data/maps/MountPyroden_3F_East/scripts.pory"
	setmetatile 32, 40, METATILE_MountPyroden_Floor, FALSE
# 89 "data/maps/MountPyroden_3F_East/scripts.pory"
	special DrawWholeMapView
	return

