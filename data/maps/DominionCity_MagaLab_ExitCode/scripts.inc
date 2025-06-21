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
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 18 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_2
# 24 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_3
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_1:
# 32 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_11
# 33 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 34 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_7
# 40 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_8
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_6:
# 44 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_12
# 45 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 46 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_15
# 52 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_16
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_14:
# 56 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_13
# 57 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10
# 58 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_20
# 64 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_21
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_19:
# 68 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_lt DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_24
# 80 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	playse SE_DOOR
# 81 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	waitse
# 82 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	speakername DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_14
# 83 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_16
# 93 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 7
# 94 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	releaseall
# 95 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
	return

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_2:
# 20 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 21 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_3:
# 26 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_12
DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_11:
# 30 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_1

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_7:
# 36 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 37 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_8:
# 42 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_6

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_12:
# 28 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	releaseall
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_11

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_15:
# 48 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 49 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_16:
# 54 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_14

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_20:
# 60 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 61 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_21:
# 66 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_19

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_24:
# 70 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	speakername DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_14
# 71 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_15
# 74 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	closemessage
# 75 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	setvar VAR_TEMP_0, 0
# 76 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor
	return


DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_0:
# 14 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "This door requires another four digit\n"
	.string "code to unlock.\p"
	.string "Enter the first digit.$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_1:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "0$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_2:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "1$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_3:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "2$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_4:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "3$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_5:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "4$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_6:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "5$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_7:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "6$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_8:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "7$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_9:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "8$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_10:
# 17 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "9$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_11:
# 32 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Enter the second digit.$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_12:
# 44 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Enter the third digit.$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_13:
# 56 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Enter the fourth digit.$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_14:
# 70 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_15:
# 72 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "We need to find the right code, or we'll\n"
	.string "get caught!\p"
	.string "Hurry, hurry!$"

DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_16:
# 83 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Oooh, that's a good sound!\n"
	.string "It looks like the door's unlocked!\p"
	.string "…Sooo, I guess we're really doing this,\n"
	.string "huh?\p"
	.string "Eight whole artifacts to find…\p"
	.string "And eight terrifying guardians to\n"
	.string "defeat…\p"
	.string "Hey, I bet you're soo relieved that I'm\n"
	.string "coming with you!\p"
	.string "You know, for emotional support!\p"
	.string "In case you get too scared, or\n"
	.string "something!\p"
	.string "… … …\p"
	.string "Okletsjustgonow!$"
