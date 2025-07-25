MountPyroden_2F_South_MapScripts::
# 3 "data/maps/MountPyroden_2F_South/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_SOUTH_FIRE_PIT_1, MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_4
MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/MountPyroden_2F_South/scripts.pory"
	call MountPyroden_2F_South_EventScript_SpawnStairs
	goto MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 5 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_SOUTH_FIRE_PIT_3, MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 5 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_SOUTH_FIRE_PIT_2, MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_3
	goto MountPyroden_2F_South_MapScripts_MAP_SCRIPT_ON_LOAD_1


MountPyroden_2F_South_EventScript_FirePit::
# 15 "data/maps/MountPyroden_2F_South/scripts.pory"
	lock
# 16 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_2F_South_EventScript_FirePit_2
# 37 "data/maps/MountPyroden_2F_South/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 38 "data/maps/MountPyroden_2F_South/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_2F_South_EventScript_FirePit_13
MountPyroden_2F_South_EventScript_FirePit_1:
# 43 "data/maps/MountPyroden_2F_South/scripts.pory"
	release
	end

MountPyroden_2F_South_EventScript_FirePit_2:
# 18 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_SOUTH_FIRE_PIT_1, MountPyroden_2F_South_EventScript_FirePit_9
MountPyroden_2F_South_EventScript_FirePit_7:
# 26 "data/maps/MountPyroden_2F_South/scripts.pory"
	delay 20
# 27 "data/maps/MountPyroden_2F_South/scripts.pory"
	setvar VAR_0x8000, 1
# 28 "data/maps/MountPyroden_2F_South/scripts.pory"
	callnative SetFirePitOff
# 29 "data/maps/MountPyroden_2F_South/scripts.pory"
	setvar VAR_0x8000, 2
# 30 "data/maps/MountPyroden_2F_South/scripts.pory"
	callnative SetFirePitOff
# 31 "data/maps/MountPyroden_2F_South/scripts.pory"
	setvar VAR_0x8000, 3
# 32 "data/maps/MountPyroden_2F_South/scripts.pory"
	callnative SetFirePitOff
MountPyroden_2F_South_EventScript_FirePit_5:
# 34 "data/maps/MountPyroden_2F_South/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_2F_South_EventScript_FirePit_1

MountPyroden_2F_South_EventScript_FirePit_6:
# 20 "data/maps/MountPyroden_2F_South/scripts.pory"
	playse SE_UNLOCK
# 21 "data/maps/MountPyroden_2F_South/scripts.pory"
	call MountPyroden_2F_South_EventScript_SpawnStairs
# 22 "data/maps/MountPyroden_2F_South/scripts.pory"
	waitse
	goto MountPyroden_2F_South_EventScript_FirePit_5

MountPyroden_2F_South_EventScript_FirePit_8:
# 18 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_SOUTH_FIRE_PIT_3, MountPyroden_2F_South_EventScript_FirePit_6
	goto MountPyroden_2F_South_EventScript_FirePit_7

MountPyroden_2F_South_EventScript_FirePit_9:
# 18 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_SOUTH_FIRE_PIT_2, MountPyroden_2F_South_EventScript_FirePit_8
	goto MountPyroden_2F_South_EventScript_FirePit_7

MountPyroden_2F_South_EventScript_FirePit_13:
# 40 "data/maps/MountPyroden_2F_South/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_2F_South_EventScript_FirePit_1


MountPyroden_2F_South_EventScript_SpawnStairs::
# 48 "data/maps/MountPyroden_2F_South/scripts.pory"
	setmetatile 35, 30, METATILE_MountPyroden_Stairs_Left_Top, FALSE
# 49 "data/maps/MountPyroden_2F_South/scripts.pory"
	setmetatile 35, 31, METATILE_MountPyroden_Stairs_Left_Bottom, FALSE
# 50 "data/maps/MountPyroden_2F_South/scripts.pory"
	special DrawWholeMapView
	return

