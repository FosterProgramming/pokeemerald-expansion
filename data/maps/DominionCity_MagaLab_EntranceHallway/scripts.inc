# 1 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
.set LOCALID_VEE, 1
# 3 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

DominionCity_MagaLab_EntranceHallway_MapScripts::
	.byte 0


DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor::
# 11 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_0
# 12 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 13 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_0
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10
# 15 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_2
# 23 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_3
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_1:
# 31 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_11
# 32 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10
# 33 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_7
# 41 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_8
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_6:
# 45 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_12
# 46 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10
# 47 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_15
# 55 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_16
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_14:
# 59 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_13
# 60 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10
# 61 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_20
# 69 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_21
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_19:
# 73 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_lt DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_24
# 97 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	playse SE_DOOR
# 98 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitse
# 99 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 100 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 101 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addobject LOCALID_VEE
# 102 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 103 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	playse SE_PIN
# 104 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_VEE
# 105 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitse
# 106 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_2
# 107 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 108 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	speakername DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_14
# 109 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_16
# 110 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 111 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_VEE
# 112 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	removeobject LOCALID_VEE
# 113 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_3
# 114 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 115 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 8
# 116 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_2:
# 17 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_1
# 18 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 19 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 20 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_3:
# 25 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_12
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_11:
# 29 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_1

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_7:
# 35 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_1
# 36 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 37 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 38 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_8:
# 43 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_6

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_12:
# 27 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_11

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_15:
# 49 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_1
# 50 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 51 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 52 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_16:
# 57 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_14

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_20:
# 63 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_1
# 64 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 65 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 66 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_21:
# 71 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_19

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_24:
# 75 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 76 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 77 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addobject LOCALID_VEE
# 78 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 79 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_VEE
# 80 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	playse SE_PIN
# 81 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitse
# 82 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_2
# 83 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 84 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	speakername DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_14
# 85 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_15
# 86 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 87 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_VEE
# 88 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	removeobject LOCALID_VEE
# 89 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	closemessage
# 90 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_3
# 91 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 92 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 93 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor
	return


# 11 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_0:
# 11 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	walk_in_place_down
	step_end

# 17 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_1:
# 17 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	walk_up
	step_end

# 82 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_2:
# 82 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	walk_in_place_up
# 82 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	walk_in_place_up
	step_end

# 90 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_3:
# 90 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	walk_in_place_down
# 90 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	walk_in_place_down
	step_end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_0:
# 13 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "This door requires a four digit code to\n"
	.string "exit. Enter the first digit now$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "0$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "1$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "2$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "3$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "4$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "5$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "6$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "7$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "8$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10:
# 14 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "9$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_11:
# 31 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Enter the second digit now$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_12:
# 45 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Enter the third digit now$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_13:
# 59 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Enter the fourth digit now$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_14:
# 84 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_15:
# 85 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Come on, you need to input the right\n"
	.string "code before we get caught! Hurry,\l"
	.string "hurry!$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_16:
# 109 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
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
