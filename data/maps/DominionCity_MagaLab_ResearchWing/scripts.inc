# 1 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
.set LOCALID_VEE, 1
# 3 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4
# 5 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
DominionCity_MagaLab_ResearchWing_MapScripts::
# 6 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.byte 0

DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark::
# 10 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 2
	goto_if_lt DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_1
# 22 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_1
# 23 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_1:
# 12 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_0, MSGBOX_SIGN
# 16 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 2
# 17 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal::
# 30 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 31 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 2
	goto_if_lt DominionCity_MagaLab_ResearchWing_EventScript_Terminal_2
# 43 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 2
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_Terminal_3
# 144 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_8, MSGBOX_YESNO
# 145 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_Terminal_12
DominionCity_MagaLab_ResearchWing_EventScript_Terminal_11:
# 179 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_1:
# 182 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_2:
# 33 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_0, MSGBOX_SIGN
# 40 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_3:
# 45 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_1
# 46 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_2, MSGBOX_YESNO
DominionCity_MagaLab_ResearchWing_EventScript_Terminal_8:
# 48 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne DominionCity_MagaLab_ResearchWing_EventScript_Terminal_9
# 70 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	closemessage
# 71 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_6
# 103 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 104 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 105 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	addobject LOCALID_VEE
# 106 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 107 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_VEE
# 108 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_PIN
# 109 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 110 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 111 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 112 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 114 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_7
# 135 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 3
# 136 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 137 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_VEE
# 138 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	removeobject LOCALID_VEE
# 139 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_1
# 140 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto DominionCity_MagaLab_ResearchWing_EventScript_Terminal_1

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_9:
# 50 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 51 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 52 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	addobject LOCALID_VEE
# 53 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 54 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_VEE
# 55 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_PIN
# 56 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 57 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 58 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 59 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 60 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_4
# 62 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 63 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_VEE
# 64 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	removeobject LOCALID_VEE
# 65 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_1
# 66 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 67 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	closemessage
# 68 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_5, MSGBOX_YESNO
	goto DominionCity_MagaLab_ResearchWing_EventScript_Terminal_8

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_12:
# 147 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_9
	goto DominionCity_MagaLab_ResearchWing_EventScript_Terminal_11


DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth::
# 188 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 189 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 3
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_2
# 234 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_2
# 235 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 236 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 238 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_2:
# 191 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 192 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 193 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	addobject LOCALID_VEE
# 194 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 195 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_PIN
# 196 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_VEE
# 197 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 198 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 199 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 200 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 201 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_0
# 211 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Movement_0
# 212 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 213 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_DOOR
# 214 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 215 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 216 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 217 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 218 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_1
# 224 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 225 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_VEE
# 226 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	removeobject LOCALID_VEE
# 227 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Movement_0
# 228 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 229 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
# 230 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal1::
# 244 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 245 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal1_Text_0
# 255 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal2::
# 260 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 261 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal2_Text_0
# 271 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	release
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal3::
# 276 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 277 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal3_Text_0
# 293 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	release
	end


DominionCity_MagaLab_ResearchWing_EventScript_Book1::
# 298 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 299 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Book1_Text_0, MSGBOX_YESNO
# 302 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_Book1_2
DominionCity_MagaLab_ResearchWing_EventScript_Book1_1:
# 314 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Book1_2:
# 304 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Book1_Text_1
	goto DominionCity_MagaLab_ResearchWing_EventScript_Book1_1


DominionCity_MagaLab_ResearchWing_EventScript_Book2::
# 320 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 322 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Book1_Text_0, MSGBOX_YESNO
# 324 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_Book2_2
DominionCity_MagaLab_ResearchWing_EventScript_Book2_1:
# 335 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Book2_2:
# 326 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Book2_Text_0
	goto DominionCity_MagaLab_ResearchWing_EventScript_Book2_1


DominionCity_MagaLab_ResearchWing_EventScript_PilesOfBooks::
# 341 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 342 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_PilesOfBooks_Text_0
# 343 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


# 57 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0:
# 57 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	walk_in_place_up
	step_end

# 65 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_1:
# 65 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	walk_in_place_left
	step_end

# 211 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Movement_0:
# 211 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	walk_in_place_down
	step_end

DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_0:
# 12 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "A book with lots and lots of hard to\n"
	.string "read research notes.\p"
	.string "…Oh!\n"
	.string "The bookmark contains a password!\p"
	.string "Maybe it unlocks something important.$"

DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_1:
# 22 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "A book with lots and lots of hard to\n"
	.string "read research notes.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_0:
# 34 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "The terminal is locked.\n"
	.string "Someone put a sticky note on it.\p"
	.string "“From this week onwards, password\n"
	.string "reset requests will be denied.\p"
	.string "I'm looking at you, Bill!\n"
	.string "Write it on a bookmark or something!\p"
	.string "-- Sara”$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_1:
# 45 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "{PLAYER} tries the password written\n"
	.string "on the bookmark.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_2:
# 46 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "The computer terminal turns on.\p"
	.string "The screen is littered with research\n"
	.string "notes. Would you like to read them?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3:
# 59 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_4:
# 60 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Whaaat?\p"
	.string "You're just gonna ignore all this\n"
	.string "super-secret info?\p"
	.string "C'mon, aren't you curious?\n"
	.string "What if it says something important?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_5:
# 68 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Would you like to read the research\n"
	.string "notes?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_6:
# 72 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "You read the contents of the\n"
	.string "documents out loud for Vee.\p"
	.string "The first note reads as follows:\p"
	.string "“PROJECT METAMORPHOSIS: STATUS\n"
	.string "REPORT\p"
	.string "Subject Adaptation Success Rate: 87%\p"
	.string "Voluntary Conversion Rate: 43%\p"
	.string "Reversal Feasibility: REQUIRES\n"
	.string "ADDITIONAL RESOURCES”\p"
	.string "The second note reads as follows:\p"
	.string "“My esteemed colleagues,\p"
	.string "We have achieved consistent success in\n"
	.string "the Pokémon conversion process.\p"
	.string "Many of our own have volunteered to\n"
	.string "undergo the transformation, embracing\l"
	.string "a stronger, more adaptable existence.\p"
	.string "Preliminary data confirms that reversal\n"
	.string "is possible, although resource\l"
	.string "intensive.\p"
	.string "Furthermore, additional adjustments\n"
	.string "are needed to ensure stability upon\l"
	.string "reversion.\p"
	.string "Priority remains on the refinement of\n"
	.string "the transformation and continued\l"
	.string "testing on non-voluntary subjects.”\p"
	.string "The third note reads as follows:\p"
	.string "“PROJECT METAMORPHOSIS: REVERSION\n"
	.string "PROTOCOL\p"
	.string "Reversal of transformation requires\n"
	.string "activation of eight artifacts, each\l"
	.string "infused with anomalous energy.\p"
	.string "These artifacts have been secured\n"
	.string "across the region, entrusted to\l"
	.string "subjects known as 'Guardians' for\l"
	.string "safekeeping.\p"
	.string "CURRENT ARTIFACT LOCATIONS &\n"
	.string "ASSIGNED GUARDIANS:\p"
	.string "1: Murkwell Bog\n"
	.string "Guardian: Redacted\p"
	.string "2: Voltbrook Town\n"
	.string "Guardian: Redacted\p"
	.string "3: Pyroden\n"
	.string "Guardian: Redacted\p"
	.string "4: Dunemire\n"
	.string "Guardian: Redacted\p"
	.string "5: Glacierra\n"
	.string "Guardian: Redacted\p"
	.string "6: Stratoscape\n"
	.string "Guardian: Redacted\p"
	.string "7: Abyssal Reef\n"
	.string "Guardian: Redacted\p"
	.string "8: Verdant Hallow\n"
	.string "Guardian: Redacted\p"
	.string "Access to artifacts is restricted to\n"
	.string "authorized personnel only.\p"
	.string "Retrieval is impossible without proper\n"
	.string "clearance.\p"
	.string "UNAUTHORIZED ACCESS TO THIS\n"
	.string "INFORMATION IS PUNISHABLE WITH\l"
	.string "TERMINATION.”\p"
	.string "One final message appears on the\n"
	.string "screen.\p"
	.string "It is a four digit number labeled 'Door\n"
	.string "Code'.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_7:
# 114 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Wait a second…\p"
	.string "Is this saying that people actually\n"
	.string "volunteered for this?!\l"
	.string "That's…\p"
	.string "I mean, I guess being a Pokémon IS\n"
	.string "pretty awesome…\p"
	.string "But giving up being a human forever?\n"
	.string "That sounds scary!\p"
	.string "But, but!\n"
	.string "If what the note said is true, then you\l"
	.string "can go back to being a human!\p"
	.string "We just gotta, y'know…\n"
	.string "Find those artifacts.\p"
	.string "I bet those guardians are like…\n"
	.string "Super scary bloodthirsty Pokémon!\p"
	.string "Brr…\n"
	.string "Good thing you love to battle, right?\p"
	.string "… … …\p"
	.string "Uh, me?\n"
	.string "Yes, yes, of course!\l"
	.string "I'll help too!\p"
	.string "I'm not scared or anything!\n"
	.string "Not at all!\p"
	.string "…Well, but first…\n"
	.string "Let's get outta here!$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_8:
# 144 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Would you like to read the research\n"
	.string "notes again?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_9:
# 148 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "The first note reads as follows:\p"
	.string "“PROJECT METAMORPHOSIS: STATUS\n"
	.string "REPORT\p"
	.string "Subject Adaptation Success Rate: 87%\p"
	.string "Voluntary Conversion Rate: 43%\p"
	.string "Reversal Feasibility: REQUIRES\n"
	.string "ADDITIONAL RESOURCES”\p"
	.string "The second note reads as follows:\p"
	.string "“My esteemed colleagues,\p"
	.string "We have achieved consistent success in\n"
	.string "the Pokémon conversion process.\p"
	.string "Many of our own have volunteered to\n"
	.string "undergo the transformation, embracing\l"
	.string "a stronger, more adaptable existence.\p"
	.string "Preliminary data confirms that reversal\n"
	.string "is possible, although resource\l"
	.string "intensive.\p"
	.string "Furthermore, additional adjustments\n"
	.string "are needed to ensure stability upon\l"
	.string "reversion.\p"
	.string "Priority remains on the refinement of\n"
	.string "the transformation and continued\l"
	.string "testing on non-voluntary subjects.”\p"
	.string "The third note reads as follows:\p"
	.string "“PROJECT METAMORPHOSIS: REVERSION\n"
	.string "PROTOCOL\p"
	.string "Reversal of transformation requires\n"
	.string "activation of eight artifacts, each\l"
	.string "infused with anomalous energy.\p"
	.string "These artifacts have been secured\n"
	.string "across the region, entrusted to\l"
	.string "subjects known as 'Guardians' for\l"
	.string "safekeeping.\p"
	.string "CURRENT ARTIFACT LOCATIONS &\n"
	.string "ASSIGNED GUARDIANS:\p"
	.string "1: Murkwell Bog\n"
	.string "Guardian: Redacted\p"
	.string "2: Voltbrook Town\n"
	.string "Guardian: Redacted\p"
	.string "3: Pyroden\n"
	.string "Guardian: Redacted\p"
	.string "4: Dunemire\n"
	.string "Guardian: Redacted\p"
	.string "5: Glacierra\n"
	.string "Guardian: Redacted\p"
	.string "6: Stratoscape\n"
	.string "Guardian: Redacted\p"
	.string "7: Abyssal Reef\n"
	.string "Guardian: Redacted\p"
	.string "8: Verdant Hallow\n"
	.string "Guardian: Redacted\p"
	.string "Access to artifacts is restricted to\n"
	.string "authorized personnel only.\p"
	.string "Retrieval is impossible without proper\n"
	.string "clearance.\p"
	.string "UNAUTHORIZED ACCESS TO THIS\n"
	.string "INFORMATION IS PUNISHABLE WITH\l"
	.string "TERMINATION.”\p"
	.string "One final message appears on the\n"
	.string "screen.\p"
	.string "It is a four digit number labeled 'Door\n"
	.string "Code'.$"

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_0:
# 201 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Alright!\n"
	.string "You got the numbers, so let's try 'em\l"
	.string "out!\p"
	.string "I bet the code is something stupid like\n"
	.string "'1234' right?\l"
	.string "Right?\p"
	.string "Hey, hey! Is it working? Is it?\p"
	.string "Can you type faster?\n"
	.string "Are you done yet?\p"
	.string "Do you need help?\n"
	.string "Do you want a hug?\l"
	.string "I like hugs!$"

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_1:
# 218 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Oooh!\n"
	.string "It worked, it worked!\p"
	.string "We're so good at this, aren't we?\p"
	.string "Alright, now let's get out before they\n"
	.string "find us!\l"
	.string "We'll be in a world of trouble if we get\l"
	.string "caught!$"

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_2:
# 234 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "The door appears to require a 4 digit\n"
	.string "code to unlock$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal1_Text_0:
# 245 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "EVOFLUX INITIATIVE\p"
	.string "OBJECTIVE:\p"
	.string "Induce elemental-based adaptive\n"
	.string "evolution without requiring external\l"
	.string "catalysts.\p"
	.string "OBSERVED BEHAVIOUR:\p"
	.string "Subject 0042 failed to display form\n"
	.string "alterations under battle conditions.\p"
	.string "CONCLUSION:\p"
	.string "Results deemed inconsistent and\n"
	.string "unstable.\p"
	.string "Subject scheduled for termination and\n"
	.string "research discontinued.\p"
	.string "NOTE: Research into adaptive evolution\n"
	.string "has been redirected (see: Porygon\l"
	.string "Initiative).$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal2_Text_0:
# 261 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "PORYGON ADAPTIVE EVOLUTION TRIALS\p"
	.string "OBJECTIVE:\p"
	.string "Develop an artificial Pokémon capable\n"
	.string "of rewriting its evolutionary structure\l"
	.string "dynamically.\p"
	.string "LATEST FINDINGS:\p"
	.string "- Version 1.8: Stable under controlled\n"
	.string "conditions.\p"
	.string "- Version 2.1: Unexpected self\n"
	.string "modification of combat protocols.\p"
	.string "Subject disregarded preset combat\n"
	.string "parameters.\p"
	.string "- Version 2.5: Subject exhibited signs\n"
	.string "of autonomous decision-making beyond\l"
	.string "intended programming.\p"
	.string "STATUS: Experiment under review.\p"
	.string "Further modifications pending to\n"
	.string "ensure compliance and prevent\l"
	.string "unsanctioned adaptability.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal3_Text_0:
# 277 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "PROJECT METAMORPHOSIS\p"
	.string "SUBJECT SELECTION:\p"
	.string "Volunteers sourced from internal Team\n"
	.string "MAGA operatives.\p"
	.string "PHASE 1 RESULTS:\p"
	.string "Initial transformations deemed\n"
	.string "successful.\p"
	.string "Subjects retained cognitive function\n"
	.string "and mobility.\p"
	.string "PHASE 2 ISSUES:\p"
	.string "Irreversibility of transformation\n"
	.string "process confirmed.\p"
	.string "Reversion not possible without\n"
	.string "external stimuli (see: Artifacts).\p"
	.string "STATUS:\p"
	.string "Additional testing required.\p"
	.string "Potential candidates flagged for\n"
	.string "further trials.\p"
	.string "NOTE:\p"
	.string "Continue sourcing from interal Team\n"
	.string "MAGA operatives.\p"
	.string "If no voluenteers step forward, utilize\n"
	.string "draft protocol.\p"
	.string "Pull from military branches, starting\n"
	.string "with the airforce.$"

DominionCity_MagaLab_ResearchWing_EventScript_Book1_Text_0:
# 299 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "A handwritten note is placed as a\n"
	.string "bookmark in this book.\p"
	.string "Read it?$"

DominionCity_MagaLab_ResearchWing_EventScript_Book1_Text_1:
# 305 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Project Evo Flux aimed to induce\n"
	.string "evolution at will, removing the need for\l"
	.string "elemental catalysts.\p"
	.string "However, test subjects lacked\n"
	.string "stability, resulting in inconsistent\l"
	.string "transformations.\p"
	.string "The project has been deemed a failure.\p"
	.string "The Synthetic Evolution program\n"
	.string "presents an alternative.\p"
	.string "Rather than forcing natural evolution,\n"
	.string "we will construct an entity capable of\l"
	.string "rewriting its own code.\p"
	.string "The prototype, designated Porygon, is\n"
	.string "proving promising.\p"
	.string "Unlike Subject 0042, which lacks\n"
	.string "control over its fluctuating forms…\p"
	.string "Porygon will be able to adapt\n"
	.string "dynamically.$"

DominionCity_MagaLab_ResearchWing_EventScript_Book2_Text_0:
# 327 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Ordered to terminate Subject 0042.\n"
	.string "“Unstable, not viable.”\p"
	.string "Ridiculous.\p"
	.string "I checked the logs.\p"
	.string "0042 was showing higher elemental\n"
	.string "synchronization than any other\l"
	.string "subject.\p"
	.string "I will try to delay the process for as\n"
	.string "long as I can.\p"
	.string "Maybe someone will see what I see\n"
	.string "before it's too late.$"

DominionCity_MagaLab_ResearchWing_EventScript_PilesOfBooks_Text_0:
# 342 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Piles of scientific books lay scattered\n"
	.string "about.$"
