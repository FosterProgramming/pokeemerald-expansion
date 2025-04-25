DominionCity_MagaLab_ExitCode_MapScripts::
# 3 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 6, DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor
	return


DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor::
# 13 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DOMINION_CITY_MAGA_LAB_EXIT_CODE
# 14 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_0
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 16 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_2
# 22 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_3
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_1:
# 30 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_11
# 31 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 32 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_7
# 38 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_8
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_6:
# 42 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_12
# 43 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 44 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_15
# 50 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_16
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_14:
# 54 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_13
# 55 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 56 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_20
# 62 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_21
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_19:
# 66 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_lt DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_24
# 76 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	playse SE_DOOR
# 77 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	waitse
# 78 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	speakername DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_14
# 79 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_16
# 80 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 7
# 81 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	releaseall
# 82 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
	return

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_2:
# 18 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 19 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_3:
# 24 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_12
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_11:
# 28 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_1

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_7:
# 34 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 35 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_8:
# 40 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_6

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_12:
# 26 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	releaseall
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_11

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_15:
# 46 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 47 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_16:
# 52 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_14

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_20:
# 58 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 59 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_21:
# 64 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_19

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_24:
# 68 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	speakername DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_14
# 69 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_15
# 70 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	closemessage
# 71 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	setvar VAR_TEMP_0, 0
# 72 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor
	return


DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_0:
# 14 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "This door requires a four digit code to\n"
	.string "exit. Enter the first digit now$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "0$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "1$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "2$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "3$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "4$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "5$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "6$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "7$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "8$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10:
# 15 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "9$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_11:
# 30 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Enter the second digit now$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_12:
# 42 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Enter the third digit now$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_13:
# 54 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Enter the fourth digit now$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_14:
# 68 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_15:
# 69 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Come on, you need to input the right\n"
	.string "code before we get caught! Hurry,\l"
	.string "hurry!$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_16:
# 79 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Oh, oh that's a good sound! The door's\n"
	.string "unlocked.\p"
	.string "Welp! No point standing around. We got,\n"
	.string "like, eight whole artifacts to find!\p"
	.string "And hey, you're lucky I'm coming with\n"
	.string "you! You're gonna need someone to keep\l"
	.string "things fun!\p"
	.string "And, like, general survival stuff.\n"
	.string "Y'know, in case you get scared or\l"
	.string "whatever.\p"
	.string "Aaaaanyway, let's get outta here\n"
	.string "before I start rethinking this!$"
