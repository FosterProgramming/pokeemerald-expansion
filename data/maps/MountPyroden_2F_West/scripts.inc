MountPyroden_2F_West_MapScripts::
# 4 "data/maps/MountPyroden_2F_West/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD:
# 6 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_1, MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_4
MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 9 "data/maps/MountPyroden_2F_West/scripts.pory"
	call MountPyroden_2F_West_EventScript_RemoveRocks
	goto MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 7 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_3, MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_7
	goto MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 6 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_2, MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_3
	goto MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 7 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_4, MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_2
	goto MountPyroden_2F_West_MapScripts_MAP_SCRIPT_ON_LOAD_1


MountPyroden_2F_West_EventScript_FirePit::
# 18 "data/maps/MountPyroden_2F_West/scripts.pory"
	lock
# 19 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_2F_West_EventScript_FirePit_2
# 43 "data/maps/MountPyroden_2F_West/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 44 "data/maps/MountPyroden_2F_West/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_2F_West_EventScript_FirePit_15
MountPyroden_2F_West_EventScript_FirePit_1:
# 49 "data/maps/MountPyroden_2F_West/scripts.pory"
	release
	end

MountPyroden_2F_West_EventScript_FirePit_2:
# 21 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_1, MountPyroden_2F_West_EventScript_FirePit_9
MountPyroden_2F_West_EventScript_FirePit_7:
# 30 "data/maps/MountPyroden_2F_West/scripts.pory"
	delay 20
# 31 "data/maps/MountPyroden_2F_West/scripts.pory"
	setvar VAR_0x8000, 1
# 32 "data/maps/MountPyroden_2F_West/scripts.pory"
	callnative SetFirePitOff
# 33 "data/maps/MountPyroden_2F_West/scripts.pory"
	setvar VAR_0x8000, 3
# 34 "data/maps/MountPyroden_2F_West/scripts.pory"
	callnative SetFirePitOff
# 35 "data/maps/MountPyroden_2F_West/scripts.pory"
	setvar VAR_0x8000, 4
# 36 "data/maps/MountPyroden_2F_West/scripts.pory"
	callnative SetFirePitOff
# 37 "data/maps/MountPyroden_2F_West/scripts.pory"
	setvar VAR_0x8000, 5
# 38 "data/maps/MountPyroden_2F_West/scripts.pory"
	callnative SetFirePitOff
MountPyroden_2F_West_EventScript_FirePit_5:
# 40 "data/maps/MountPyroden_2F_West/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto MountPyroden_2F_West_EventScript_FirePit_1

MountPyroden_2F_West_EventScript_FirePit_6:
# 24 "data/maps/MountPyroden_2F_West/scripts.pory"
	playse SE_UNLOCK
# 25 "data/maps/MountPyroden_2F_West/scripts.pory"
	call MountPyroden_2F_West_EventScript_RemoveRocks
# 26 "data/maps/MountPyroden_2F_West/scripts.pory"
	waitse
	goto MountPyroden_2F_West_EventScript_FirePit_5

MountPyroden_2F_West_EventScript_FirePit_8:
# 22 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_3, MountPyroden_2F_West_EventScript_FirePit_12
	goto MountPyroden_2F_West_EventScript_FirePit_7

MountPyroden_2F_West_EventScript_FirePit_9:
# 21 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_2, MountPyroden_2F_West_EventScript_FirePit_8
	goto MountPyroden_2F_West_EventScript_FirePit_7

MountPyroden_2F_West_EventScript_FirePit_12:
# 22 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_2F_WEST_FIRE_PIT_4, MountPyroden_2F_West_EventScript_FirePit_6
	goto MountPyroden_2F_West_EventScript_FirePit_7

MountPyroden_2F_West_EventScript_FirePit_15:
# 46 "data/maps/MountPyroden_2F_West/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_2F_West_EventScript_FirePit_1


MountPyroden_2F_West_EventScript_RemoveRocks::
# 55 "data/maps/MountPyroden_2F_West/scripts.pory"
	setmetatile 20, 9, METATILE_MountPyroden_Floor, FALSE
# 56 "data/maps/MountPyroden_2F_West/scripts.pory"
	special DrawWholeMapView
	return

