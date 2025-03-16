# 1 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
.set LOCALID_EEVEE, 1
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
# 19 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_1
# 20 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_1:
# 12 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_0, MSGBOX_SIGN
# 13 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 2
# 14 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal::
# 27 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 28 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 2
	goto_if_lt DominionCity_MagaLab_ResearchWing_EventScript_Terminal_2
# 34 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 2
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_Terminal_3
# 88 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_14, MSGBOX_YESNO
# 89 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_Terminal_12
# 100 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_1:
# 103 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_2:
# 30 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_0, MSGBOX_SIGN
# 31 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_3:
# 36 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_1
# 37 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_2, MSGBOX_YESNO
DominionCity_MagaLab_ResearchWing_EventScript_Terminal_8:
# 38 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne DominionCity_MagaLab_ResearchWing_EventScript_Terminal_9
# 59 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	closemessage
# 60 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_6
# 61 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_7
# 62 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_8
# 63 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_9
# 64 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_10
# 65 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_11
# 66 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 67 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 68 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	addobject LOCALID_EEVEE
# 69 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 70 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_EEVEE
# 71 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_PIN
# 72 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 73 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 74 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 75 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 76 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_12
# 77 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 78 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_13
# 79 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 3
# 80 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 81 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_EEVEE
# 82 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	removeobject LOCALID_EEVEE
# 83 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_1
# 84 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto DominionCity_MagaLab_ResearchWing_EventScript_Terminal_1

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_9:
# 40 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 41 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 42 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	addobject LOCALID_EEVEE
# 43 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 44 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_EEVEE
# 45 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_PIN
# 46 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 47 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 48 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 49 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 50 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_4
# 51 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 52 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_EEVEE
# 53 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	removeobject LOCALID_EEVEE
# 54 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_1
# 55 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 56 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	closemessage
# 57 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_5, MSGBOX_YESNO
	goto DominionCity_MagaLab_ResearchWing_EventScript_Terminal_8

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_12:
# 91 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_6
# 92 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_7
# 93 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_8
# 94 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_9
# 95 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_15
# 96 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_11
# 97 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth::
# 109 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 110 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 3
	goto_if_lt DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_1
# 118 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 3
	goto_if_eq DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_2
	return

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_1:
# 112 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_0
# 113 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 114 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 115 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_2:
# 120 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 121 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 122 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	addobject LOCALID_EEVEE
# 123 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 124 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_PIN
# 125 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_EEVEE
# 126 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 127 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 128 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 129 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 130 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_1
# 131 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Movement_0
# 132 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 133 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	playse SE_DOOR
# 134 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitse
# 135 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0
# 136 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 137 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	speakername DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3
# 138 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_2
# 139 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 140 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement LOCALID_EEVEE
# 141 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	removeobject LOCALID_EEVEE
# 142 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Movement_0
# 143 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 144 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
# 145 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal1::
# 152 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 153 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal1_Text_0
# 158 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal2::
# 163 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 164 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal2_Text_0
# 171 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	release
	end


DominionCity_MagaLab_ResearchWing_EventScript_Terminal3::
# 176 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 177 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Terminal3_Text_0
# 183 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	release
	end


DominionCity_MagaLab_ResearchWing_EventScript_Book1::
# 188 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 189 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Book1_Text_0
# 192 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_Book2::
# 198 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 199 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_Book2_Text_0
# 202 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	release
# 203 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	end
# 204 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ResearchWing_EventScript_PilesOfBooks::
# 210 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	lockall
# 211 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	msgbox DominionCity_MagaLab_ResearchWing_EventScript_PilesOfBooks_Text_0
# 212 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	releaseall
	end


# 47 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_0:
# 47 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	walk_in_place_up
	step_end

# 54 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Movement_1:
# 54 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	walk_in_place_left
	step_end

# 131 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Movement_0:
# 131 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	walk_in_place_down
	step_end

DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_0:
# 12 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "A book with lots and lots of hard to\n"
	.string "read research notes. The bookmark\l"
	.string "contains a password. Maybe it unlocks\l"
	.string "something important.$"

DominionCity_MagaLab_ResearchWing_EventScript_PlayerFindsBookmark_Text_1:
# 19 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "A book with lots and lots of hard to\n"
	.string "read research notes.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_0:
# 30 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "The terminal appears locked. There is a\n"
	.string "stick note that says “Bill, stop\l"
	.string "forgetting your password! Write it on\l"
	.string "your bookmark or something -- Sara”$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_1:
# 36 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "{PLAYER} tries the password written\n"
	.string "on the bookmark$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_2:
# 37 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "The computer terminal turns on. The\n"
	.string "screen is littered with research notes.\l"
	.string "Would you like to read them?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_3:
# 49 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_4:
# 50 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Whaaat? You're just gonna ignore all\n"
	.string "this super-secret science-y stuff?\l"
	.string "C'mon, aren't you curious? What if it\l"
	.string "says something important?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_5:
# 57 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Would you like to read the research\n"
	.string "notes now?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_6:
# 60 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "PROJECT METAMORPHOSIS: STATUS REPORT\p"
	.string "Subject Adaptation Success Rate: 87%\p"
	.string "Voluntary Conversions: 43%\p"
	.string "Reversal Feasibility: REQUIRES\n"
	.string "ADDITIONAL RESOURCES\p"
	.string "$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_7:
# 61 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "We have achieved consistent success in\n"
	.string "the Pokémon conversion process. Many\l"
	.string "of our own have volunteered to undergo\l"
	.string "transformation, embracing a stronger,\l"
	.string "more adaptable existence.\p"
	.string "However, preliminary data confirms that\n"
	.string "reversal remains possible, though\l"
	.string "resource-intensive. Further testing is\l"
	.string "needed to ensure stability upon\l"
	.string "reversion.\p"
	.string "For now, priority remains on refinement\n"
	.string "of the transformation process and\l"
	.string "continued testing on non-voluntary\l"
	.string "subjects.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_8:
# 62 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "PROJECT METAMORPHOSIS: REVERSION\n"
	.string "PROTOCOL\p"
	.string "RESOURCE REQUIREMENTS: Reversal of\n"
	.string "transformation requires activation of\l"
	.string "eight core artifacts, each infused with\l"
	.string "high-level anomalous energy.\p"
	.string "These artifacts have been secured\n"
	.string "across the region, entrusted to\l"
	.string "designated guardian subjects for\l"
	.string "safekeeping.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_9:
# 63 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "CURRENT ARTIFACT LOCATIONS &\n"
	.string "ASSIGNED GUARDIANS:\p"
	.string "1:Murkwell Bog\n"
	.string "Guardian:Redacted\p"
	.string "2:Voltbrook Town\n"
	.string "Guardian:Redacted\p"
	.string "3:Pyroden\n"
	.string "Guardian:Redacted\p"
	.string "4:Dunemire\n"
	.string "Guardian:Redacted\p"
	.string "5:Glacierra\n"
	.string "Guardian:Redacted\p"
	.string "6:Stratoscape\n"
	.string "Guardian:Redacted\p"
	.string "7:Abyssal Reef\n"
	.string "Guardian:Redacted\p"
	.string "8:Verdant Hallow\n"
	.string "Guardian:Redacted$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_10:
# 64 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Access to artifacts is restricted to\n"
	.string "authorized personnel only.\p"
	.string "Unauthorized retrieval is impossible\n"
	.string "without proper clearance.\p"
	.string "DO NOT ALLOW SUBJECTS TO LEARN OF THIS\n"
	.string "INFORMATION.\p"
	.string "END LOG$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_11:
# 65 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "One final message appears on the\n"
	.string "screen. It is a four digit code labeled\l"
	.string "“Door Code”$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_12:
# 76 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Whoa, wait, people actually volunteered\n"
	.string "for this?! Seriously? That's… huh.\l"
	.string "That's kinda weird, right?\p"
	.string "I mean, I totally get why someone would\n"
	.string "wanna be a Pokémon, running fast, super\l"
	.string "cool moves, no taxes!\p"
	.string "Buuut, like, giving up being human\n"
	.string "forever? That's, uh… bold.\p"
	.string "But you said here they can reverse it.\n"
	.string "Boom, problem solved! Now we just\l"
	.string "gotta… y'know… find these guardians\l"
	.string "and get the artifacts…$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_13:
# 78 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Bet they're, like, huge scary Pokémon\n"
	.string "who love to battle. Good thing we love\l"
	.string "to battle too, huh? Haha. Ha…\p"
	.string "This is totally normal. Definitely not a\n"
	.string "huge, impossible task or anything.\p"
	.string "Sooo, you ready to get outta here, or\n"
	.string "what?$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_14:
# 88 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Would you like to read the research\n"
	.string "notes again$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal_Text_15:
# 95 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Access to artifacts is restricted to\n"
	.string "authorized personnel only.\l"
	.string "Unauthorized retrieval is impossible\l"
	.string "without proper clearance.\p"
	.string "DO NOT ALLOW SUBJECTS TO LEARN OF THIS\n"
	.string "INFORMATION.\p"
	.string "END LOG$"

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_0:
# 112 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "The door appears to require a 4 digit\n"
	.string "code to unlock$"

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_1:
# 130 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Alright! You got the numbers, so let's\n"
	.string "try 'em out, no way they used a super\l"
	.string "hard code or anything, bet it's\l"
	.string "something dumb like '1234', c'mon, c'mon,\l"
	.string "type it in before someone walks in,\l"
	.string "please work, please work, please work,\l"
	.string "uh, I mean, of course it's gonna work,\l"
	.string "why wouldn't it?$"

DominionCity_MagaLab_ResearchWing_EventScript_CantExitSouth_Text_2:
# 138 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Ha! See? Easy! Like it was made for us,\n"
	.string "alright, let's move before I start\l"
	.string "thinking about how much trouble we'll be\l"
	.string "in if we get caught!$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal1_Text_0:
# 153 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "EVOFLUX INITIATIVE:\p"
	.string "OBJECTIVE: Induce elemental-based\n"
	.string "adaptive evolution without requiring\l"
	.string "external catalysts (e.g., evolutionary\l"
	.string "stones).\p"
	.string "OBSERVED BEHAVIOUR: Subject 0042\n"
	.string "failed to display form alterations\l"
	.string "under battle conditions\p"
	.string "CONCLUSION: Results deemed\n"
	.string "inconsistent and unstable. Subject\l"
	.string "scheduled for termination and research\l"
	.string "discontinued.\p"
	.string "NOTE: Further research into adaptive\n"
	.string "evolution has been redirected to\l"
	.string "synthetic methods (see: Porygon\l"
	.string "Initiative).$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal2_Text_0:
# 164 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "PORYGON ADAPTIVE EVOLUTION TRIALS:\p"
	.string "OBJECTIVE: Develop an artificial\n"
	.string "Pokémon capable of rewriting its\l"
	.string "evolutionary structure dynamically\l"
	.string "without environmental dependency.\p"
	.string "LATEST FINDINGS:\p"
	.string "- Version 1.8: Stable under controlled\n"
	.string "conditions.\p"
	.string "- Version 2.1: Unexpected\n"
	.string "self-modification of combat protocols.\l"
	.string "Subject disregarded preset combat\l"
	.string "parameters.\p"
	.string "- Version 2.5: Subject exhibited signs\n"
	.string "of autonomous decision-making beyond\l"
	.string "intended programming.\p"
	.string "STATUS: Experiment under review.\n"
	.string "Further modifications pending to\l"
	.string "ensure subject compliance and prevent\l"
	.string "unsanctioned adaptability.$"

DominionCity_MagaLab_ResearchWing_EventScript_Terminal3_Text_0:
# 177 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "PROJECT METAMORPHOSIS:\p"
	.string "SUBJECT SELECTION: Volunteers sourced\n"
	.string "from internal Team MAGA operatives.\p"
	.string "PHASE 1 RESULTS: Initial\n"
	.string "transformations deemed successful;\l"
	.string "subjects retained cognitive function\l"
	.string "and mobility.\p"
	.string "PHASE 2 ISSUES: Irreversibility of\n"
	.string "transformation process confirmed.\l"
	.string "Reversion not possible without\l"
	.string "external stimuli (see: artifacts).\p"
	.string "STATUS: Additional testing required.\n"
	.string "Potential candidates flagged for\l"
	.string "further trials.\p"
	.string "NOTE: Continue sourcing from interal\n"
	.string "Team MAGA operatives. If no\l"
	.string "voluenteers step forward, utilize draft\l"
	.string "protocol and pull from military\l"
	.string "branches, starting with airforce$"

DominionCity_MagaLab_ResearchWing_EventScript_Book1_Text_0:
# 189 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "A handwritten note is placed as a\n"
	.string "bookmark in this book. It reads\l"
	.string "“Project Evo Flux aimed to induce\l"
	.string "evolution at will, removing the need for\l"
	.string "elemental catalysts. However, test\l"
	.string "subjects lacked stability, resulting in\l"
	.string "inconsistent transformations. The\l"
	.string "project has been deemed a failure.\p"
	.string "The Synthetic Evolution program,\n"
	.string "however, presents an alternative:\l"
	.string "rather than forcing natural evolution,\l"
	.string "we will construct an entity capable of\l"
	.string "rewriting its own code as needed. A true\l"
	.string "artificial organism, one that can modify\l"
	.string "itself without external stimuli.\p"
	.string "The prototype, designated Porygon, is\n"
	.string "proving promising. Unlike Subject 0042,\l"
	.string "which lacks control over its\l"
	.string "fluctuating forms, Porygon will be\l"
	.string "programmed to adapt dynamically.”$"

DominionCity_MagaLab_ResearchWing_EventScript_Book2_Text_0:
# 199 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "A handwritten note is placed as a\n"
	.string "bookmark in this book. It reads\l"
	.string "“Ordered to terminate Subject 0042\l"
	.string "soon. 'Unstable, not viable.' Ridiculous.\l"
	.string "I checked the logs, 0042 was showing\l"
	.string "higher elemental synchronization than\l"
	.string "any other test subject.\p"
	.string "But it's not what they wanted. They\n"
	.string "wanted control, not adaptation.\p"
	.string "I'm going to delay the process as long\n"
	.string "as I can. Maybe someone will see what I\l"
	.string "see before it's too late…$"

DominionCity_MagaLab_ResearchWing_EventScript_PilesOfBooks_Text_0:
# 211 "data/maps/DominionCity_MagaLab_ResearchWing/scripts.pory"
	.string "Piles of scientific books lay scattered\n"
	.string "about.$"
