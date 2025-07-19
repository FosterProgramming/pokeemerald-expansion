DeleteThis_MapScripts::
	.byte 0


TestFirePit_Script::
# 6 "data/maps/DeleteThis/scripts.pory"
	lock
# 7 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, TestFirePit_Script_2
# 26 "data/maps/DeleteThis/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 27 "data/maps/DeleteThis/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq TestFirePit_Script_13
TestFirePit_Script_1:
# 32 "data/maps/DeleteThis/scripts.pory"
	release
	end

TestFirePit_Script_2:
# 9 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_4, TestFirePit_Script_9
TestFirePit_Script_7:
# 15 "data/maps/DeleteThis/scripts.pory"
	delay 20
# 16 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 2
# 17 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 18 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 3
# 19 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 20 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 4
# 21 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
TestFirePit_Script_5:
# 23 "data/maps/DeleteThis/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto TestFirePit_Script_1

TestFirePit_Script_6:
# 11 "data/maps/DeleteThis/scripts.pory"
	call OpenDoorTestScript
	goto TestFirePit_Script_5

TestFirePit_Script_8:
# 9 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_6, TestFirePit_Script_6
	goto TestFirePit_Script_7

TestFirePit_Script_9:
# 9 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_5, TestFirePit_Script_8
	goto TestFirePit_Script_7

TestFirePit_Script_13:
# 29 "data/maps/DeleteThis/scripts.pory"
	goto EventScript_StrengthBoulder
	goto TestFirePit_Script_1


TestFirePit_Script2::
# 37 "data/maps/DeleteThis/scripts.pory"
	lock
# 38 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, TestFirePit_Script2_2
# 57 "data/maps/DeleteThis/scripts.pory"
	goto EventScript_StrengthBoulder
TestFirePit_Script2_1:
# 59 "data/maps/DeleteThis/scripts.pory"
	release
	end

TestFirePit_Script2_2:
# 40 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_4, TestFirePit_Script2_9
TestFirePit_Script2_7:
# 46 "data/maps/DeleteThis/scripts.pory"
	delay 20
# 47 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 2
# 48 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 49 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 3
# 50 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 51 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 4
# 52 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
TestFirePit_Script2_5:
# 54 "data/maps/DeleteThis/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto TestFirePit_Script2_1

TestFirePit_Script2_6:
# 42 "data/maps/DeleteThis/scripts.pory"
	call OpenDoorTestScript
	goto TestFirePit_Script2_5

TestFirePit_Script2_8:
# 40 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_6, TestFirePit_Script2_6
	goto TestFirePit_Script2_7

TestFirePit_Script2_9:
# 40 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_5, TestFirePit_Script2_8
	goto TestFirePit_Script2_7


TestFirePit_Script3::
# 64 "data/maps/DeleteThis/scripts.pory"
	lock
# 65 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, TestFirePit_Script3_2
# 84 "data/maps/DeleteThis/scripts.pory"
	goto EventScript_StrengthBoulder
TestFirePit_Script3_1:
# 86 "data/maps/DeleteThis/scripts.pory"
	release
	end

TestFirePit_Script3_2:
# 67 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_4, TestFirePit_Script3_9
TestFirePit_Script3_7:
# 73 "data/maps/DeleteThis/scripts.pory"
	delay 20
# 74 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 2
# 75 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 76 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 3
# 77 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 78 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 4
# 79 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
TestFirePit_Script3_5:
# 81 "data/maps/DeleteThis/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto TestFirePit_Script3_1

TestFirePit_Script3_6:
# 69 "data/maps/DeleteThis/scripts.pory"
	call OpenDoorTestScript
	goto TestFirePit_Script3_5

TestFirePit_Script3_8:
# 67 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_6, TestFirePit_Script3_6
	goto TestFirePit_Script3_7

TestFirePit_Script3_9:
# 67 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_5, TestFirePit_Script3_8
	goto TestFirePit_Script3_7


OpenDoorTestScript::
# 91 "data/maps/DeleteThis/scripts.pory"
	call CommonEventScript_ScreenShake
# 92 "data/maps/DeleteThis/scripts.pory"
	setmetatile 15, 11, 0x044, TRUE
# 93 "data/maps/DeleteThis/scripts.pory"
	setmetatile 15, 10, 0x03C, TRUE
# 94 "data/maps/DeleteThis/scripts.pory"
	special DrawWholeMapView
	return

