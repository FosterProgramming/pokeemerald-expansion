MountPyroden_4F_ClockRoom_MapScripts::
# 2 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_4F_ClockRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_4F_ClockRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 3 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	goto_if_set FLAG_CLOCK_ROOM_1, MountPyroden_4F_ClockRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

MountPyroden_4F_ClockRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 5 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	call MountPyroden_4F_ClockRoom_OpenDoor
# 6 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	release
	end

MountPyroden_4F_ClockRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 3 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	goto_if_set FLAG_CLOCK_ROOM_2, MountPyroden_4F_ClockRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return


ClockRoom_EventScript_Statue::
# 15 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	lock
# 16 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	msgbox ClockRoom_EventScript_Statue_Text_0
# 21 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	closemessage
# 22 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 23 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	initclock 16, 0
# 24 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 25 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	special Special_ViewWallClock
# 26 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	waitstate
# 27 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	clearflag FLAG_PAUSE_TIME
# 28 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	releaseall
	end


MountPyroden_ClockRoom_FirePit::
# 35 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	lock
# 36 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_ClockRoom_FirePit_2
# 85 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	release
	end

MountPyroden_ClockRoom_FirePit_2:
# 38 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	lock
# 39 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	compare VAR_CLOCK_ROOM_STATE, 0
	goto_if_eq MountPyroden_ClockRoom_FirePit_5
# 45 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	compare VAR_CLOCK_ROOM_STATE, 1
	goto_if_eq MountPyroden_ClockRoom_FirePit_8
MountPyroden_ClockRoom_FirePit_7:
# 81 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
# 82 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	release
	end

MountPyroden_ClockRoom_FirePit_5:
# 41 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	addvar VAR_CLOCK_ROOM_STATE, 1
# 42 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	release
	end

MountPyroden_ClockRoom_FirePit_8:
# 47 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	goto_if_set FLAG_CLOCK_ROOM_1, MountPyroden_ClockRoom_FirePit_12
MountPyroden_ClockRoom_FirePit_10:
# 54 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	delay 20
# 55 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 2
# 56 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 57 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 3
# 58 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 59 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 4
# 60 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 61 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 5
# 62 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 63 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 6
# 64 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 65 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 7
# 66 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 67 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 8
# 68 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 69 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 9
# 70 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 71 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 10
# 72 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 73 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 11
# 74 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 75 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 12
# 76 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 77 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_0x8000, 13
# 78 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	callnative SetFirePitOff
# 79 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setvar VAR_CLOCK_ROOM_STATE, 0
	goto MountPyroden_ClockRoom_FirePit_7

MountPyroden_ClockRoom_FirePit_11:
# 49 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	addvar VAR_CLOCK_ROOM_STATE, 1
# 50 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	playse SE_UNLOCK
# 51 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	call MountPyroden_4F_ClockRoom_OpenDoor
# 52 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	waitse
	goto MountPyroden_ClockRoom_FirePit_10

MountPyroden_ClockRoom_FirePit_12:
# 47 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	goto_if_set FLAG_CLOCK_ROOM_2, MountPyroden_ClockRoom_FirePit_11
	goto MountPyroden_ClockRoom_FirePit_10


MountPyroden_4F_ClockRoom_OpenDoor::
# 91 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 11, 3, METATILE_MountPyroden_Door_TopLeft, TRUE
# 92 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 12, 3, METATILE_MountPyroden_Door_TopMid, TRUE
# 93 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 13, 3, METATILE_MountPyroden_Door_TopRight, TRUE
# 94 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 11, 4, METATILE_MountPyroden_Door_MidLeft, TRUE
# 95 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 12, 4, METATILE_MountPyroden_Door_MidMid, FALSE
# 96 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 13, 4, METATILE_MountPyroden_Door_MidRight, TRUE
# 97 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 11, 5, METATILE_MountPyroden_Door_BottomLeft, FALSE
# 98 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 12, 5, METATILE_MountPyroden_Door_BottomMid, FALSE
# 99 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	setmetatile 13, 5, METATILE_MountPyroden_Door_BottomRight, FALSE
# 100 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	special DrawWholeMapView
	return


ClockRoom_EventScript_Statue_Text_0:
# 17 "data/maps/MountPyroden_4F_ClockRoom/scripts.pory"
	.string "There's carvings on the statue.\p"
	.string "“The braziers in this room are fixed in\n"
	.string "place.\p"
	.string "Follow the hands of the clock.”$"
