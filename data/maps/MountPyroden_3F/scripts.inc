MountPyroden_3F_MapScripts::
# 4 "data/maps/MountPyroden_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/MountPyroden_3F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_FIRE_PIT_1, MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_3
MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/MountPyroden_3F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_5, MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_7
MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_6:
	end

MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 8 "data/maps/MountPyroden_3F/scripts.pory"
	call MountPyroden_3F_EventScript_RemoveRocks
	goto MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 6 "data/maps/MountPyroden_3F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_3F_FIRE_PIT_2, MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 12 "data/maps/MountPyroden_3F/scripts.pory"
	call MountPyroden_3F_EventScript_SpawnStairs
	goto MountPyroden_3F_MapScripts_MAP_SCRIPT_ON_LOAD_6


MountPyroden_3F_EventScript_FirePit::
# 20 "data/maps/MountPyroden_3F/scripts.pory"
	lock
# 21 "data/maps/MountPyroden_3F/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_3F_EventScript_FirePit_2
# 40 "data/maps/MountPyroden_3F/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 41 "data/maps/MountPyroden_3F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_3F_EventScript_FirePit_11
MountPyroden_3F_EventScript_FirePit_1:
# 46 "data/maps/MountPyroden_3F/scripts.pory"
	release
	end

MountPyroden_3F_EventScript_FirePit_2:
# 23 "data/maps/MountPyroden_3F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_1, MountPyroden_3F_EventScript_FirePit_8
MountPyroden_3F_EventScript_FirePit_7:
# 31 "data/maps/MountPyroden_3F/scripts.pory"
	delay 20
# 32 "data/maps/MountPyroden_3F/scripts.pory"
	setvar VAR_0x8000, 1
# 33 "data/maps/MountPyroden_3F/scripts.pory"
	callnative SetFirePitOff
# 34 "data/maps/MountPyroden_3F/scripts.pory"
	setvar VAR_0x8000, 2
# 35 "data/maps/MountPyroden_3F/scripts.pory"
	callnative SetFirePitOff
MountPyroden_3F_EventScript_FirePit_5:
# 37 "data/maps/MountPyroden_3F/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_3F_EventScript_FirePit_1

MountPyroden_3F_EventScript_FirePit_6:
# 25 "data/maps/MountPyroden_3F/scripts.pory"
	playse SE_UNLOCK
# 26 "data/maps/MountPyroden_3F/scripts.pory"
	call MountPyroden_3F_EventScript_RemoveRocks
# 27 "data/maps/MountPyroden_3F/scripts.pory"
	waitse
	goto MountPyroden_3F_EventScript_FirePit_5

MountPyroden_3F_EventScript_FirePit_8:
# 23 "data/maps/MountPyroden_3F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_WEST_FIRE_PIT_2, MountPyroden_3F_EventScript_FirePit_6
	goto MountPyroden_3F_EventScript_FirePit_7

MountPyroden_3F_EventScript_FirePit_11:
# 43 "data/maps/MountPyroden_3F/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_3F_EventScript_FirePit_1


MountPyroden_3F_EventScript_RemoveRocks::
# 51 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 11, 13, METATILE_MountPyroden_Floor, FALSE
# 52 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 12, 13, METATILE_MountPyroden_Floor, FALSE
# 53 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 13, 13, METATILE_MountPyroden_Floor, FALSE
# 54 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 10, 11, METATILE_MountPyroden_Floor, FALSE
# 55 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 10, 12, METATILE_MountPyroden_Floor, FALSE
# 56 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 11, 10, METATILE_MountPyroden_Floor, FALSE
# 57 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 12, 10, METATILE_MountPyroden_Floor, FALSE
# 58 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 13, 10, METATILE_MountPyroden_Floor, FALSE
# 59 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 14, 11, METATILE_MountPyroden_Floor, FALSE
# 60 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 14, 12, METATILE_MountPyroden_Floor, FALSE
# 61 "data/maps/MountPyroden_3F/scripts.pory"
	special DrawWholeMapView
	return


MountPyroden_3F_EventScript_SpawnStairs::
# 67 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 37, 15, METATILE_MountPyroden_Stairs_Left_Top, FALSE
# 68 "data/maps/MountPyroden_3F/scripts.pory"
	setmetatile 37, 16, METATILE_MountPyroden_Stairs_Left_Bottom, FALSE
# 69 "data/maps/MountPyroden_3F/scripts.pory"
	special DrawWholeMapView
	return

