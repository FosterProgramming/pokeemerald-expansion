DeleteThis_MapScripts::
	.byte 0


TestFirePit_Script::
# 6 "data/maps/DeleteThis/scripts.pory"
	lock
# 7 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, TestFirePit_Script_2
# 26 "data/maps/DeleteThis/scripts.pory"
	goto EventScript_StrengthBoulder
TestFirePit_Script_1:
# 28 "data/maps/DeleteThis/scripts.pory"
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


TestFirePit_Script2::
# 33 "data/maps/DeleteThis/scripts.pory"
	lock
# 34 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, TestFirePit_Script2_2
# 53 "data/maps/DeleteThis/scripts.pory"
	goto EventScript_StrengthBoulder
TestFirePit_Script2_1:
# 55 "data/maps/DeleteThis/scripts.pory"
	release
	end

TestFirePit_Script2_2:
# 36 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_4, TestFirePit_Script2_9
TestFirePit_Script2_7:
# 42 "data/maps/DeleteThis/scripts.pory"
	delay 20
# 43 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 2
# 44 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 45 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 3
# 46 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 47 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 4
# 48 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
TestFirePit_Script2_5:
# 50 "data/maps/DeleteThis/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto TestFirePit_Script2_1

TestFirePit_Script2_6:
# 38 "data/maps/DeleteThis/scripts.pory"
	call OpenDoorTestScript
	goto TestFirePit_Script2_5

TestFirePit_Script2_8:
# 36 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_6, TestFirePit_Script2_6
	goto TestFirePit_Script2_7

TestFirePit_Script2_9:
# 36 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_5, TestFirePit_Script2_8
	goto TestFirePit_Script2_7


TestFirePit_Script3::
# 60 "data/maps/DeleteThis/scripts.pory"
	lock
# 61 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, TestFirePit_Script3_2
# 80 "data/maps/DeleteThis/scripts.pory"
	goto EventScript_StrengthBoulder
TestFirePit_Script3_1:
# 82 "data/maps/DeleteThis/scripts.pory"
	release
	end

TestFirePit_Script3_2:
# 63 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_4, TestFirePit_Script3_9
TestFirePit_Script3_7:
# 69 "data/maps/DeleteThis/scripts.pory"
	delay 20
# 70 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 2
# 71 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 72 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 3
# 73 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
# 74 "data/maps/DeleteThis/scripts.pory"
	setvar VAR_0x8000, 4
# 75 "data/maps/DeleteThis/scripts.pory"
	callnative SetFirePitOff
TestFirePit_Script3_5:
# 77 "data/maps/DeleteThis/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto TestFirePit_Script3_1

TestFirePit_Script3_6:
# 65 "data/maps/DeleteThis/scripts.pory"
	call OpenDoorTestScript
	goto TestFirePit_Script3_5

TestFirePit_Script3_8:
# 63 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_6, TestFirePit_Script3_6
	goto TestFirePit_Script3_7

TestFirePit_Script3_9:
# 63 "data/maps/DeleteThis/scripts.pory"
	goto_if_set FLAG_TEMP_5, TestFirePit_Script3_8
	goto TestFirePit_Script3_7


OpenDoorTestScript::
# 87 "data/maps/DeleteThis/scripts.pory"
	call CommonEventScript_ScreenShake
# 88 "data/maps/DeleteThis/scripts.pory"
	setmetatile 15, 11, 0x044, TRUE
# 89 "data/maps/DeleteThis/scripts.pory"
	setmetatile 15, 10, 0x03C, TRUE
# 90 "data/maps/DeleteThis/scripts.pory"
	special DrawWholeMapView
	return

