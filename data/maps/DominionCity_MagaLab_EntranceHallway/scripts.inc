# 1 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
.set LOCALID_EEVEE, 1
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
# 21 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_3
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_1:
# 29 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_11
# 30 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10
# 31 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_7
# 37 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_8
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_6:
# 41 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_12
# 42 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10
# 43 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_15
# 49 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_16
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_14:
# 53 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_13
# 54 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_1, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_2, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_3, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_4, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_5, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_6, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_7, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_8, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_9, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_10
# 55 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_20
# 61 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_21
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_19:
# 65 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_TEMP_0, 4
	goto_if_lt DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_24
# 85 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	playse SE_DOOR
# 86 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitse
# 87 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 88 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 89 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addobject LOCALID_EEVEE
# 90 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMember1TalksToPlayer
# 91 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	playse SE_PIN
# 92 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_EEVEE
# 93 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitse
# 94 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_0
# 95 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 96 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	speakername DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_14
# 97 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_16
# 98 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMember1ReturnsToPlayer
# 99 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_EEVEE
# 100 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	removeobject LOCALID_EEVEE
# 101 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 7
# 102 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_2:
# 17 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 18 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_3:
# 23 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	compare VAR_RESULT, MULTI_B_PRESSED
	goto_if_eq DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_12
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_11:
# 27 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_1

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_7:
# 33 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 34 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_8:
# 39 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_6

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_12:
# 25 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_11

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_15:
# 45 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 46 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_16:
# 51 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_14

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_20:
# 57 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 58 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_21:
# 63 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addvar VAR_TEMP_0, 1
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_19

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_24:
# 67 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 68 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 69 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	addobject LOCALID_EEVEE
# 70 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMember1TalksToPlayer
# 71 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_EEVEE
# 72 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	playse SE_PIN
# 73 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitse
# 74 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	speakername DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_14
# 75 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	msgbox DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_15
# 76 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMember1ReturnsToPlayer
# 77 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	waitmovement LOCALID_EEVEE
# 78 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	removeobject LOCALID_EEVEE
# 79 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	closemessage
# 80 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	setvar VAR_TEMP_0, 0
# 81 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	goto DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor
	return


# 11 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Movement_0:
# 11 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	face_up
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
# 29 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Enter the second digit now$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_12:
# 41 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Enter the third digit now$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_13:
# 53 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Enter the fourth digit now$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_14:
# 74 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_15:
# 75 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
	.string "Come on, you need to input the right\n"
	.string "code before we get caught! Hurry,\l"
	.string "hurry!$"

DominionCity_MagaLab_EntranceHallway_EventScripts_CodeToUnlockDoor_Text_16:
# 97 "data/maps/DominionCity_MagaLab_EntranceHallway/scripts.pory"
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
