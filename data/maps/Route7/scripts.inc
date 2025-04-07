# 1 "data/maps/Route7/scripts.pory"

# 2 "data/maps/Route7/scripts.pory"
.set LOCALID_VEE, 1
# 3 "data/maps/Route7/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/Route7/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

Route7_MapScripts::
# 9 "data/maps/Route7/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/Route7/scripts.pory"
	map_script_2 VAR_VOLTBROOK_TOWN_STATE, 0, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 13 "data/maps/Route7/scripts.pory"
	lockall
# 14 "data/maps/Route7/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 15 "data/maps/Route7/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 16 "data/maps/Route7/scripts.pory"
	addobject LOCALID_VEE
# 17 "data/maps/Route7/scripts.pory"
	compare PlayerXCoordinates, 2
	goto_if_eq Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2
# 51 "data/maps/Route7/scripts.pory"
	compare PlayerXCoordinates, 3
	goto_if_eq Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 85 "data/maps/Route7/scripts.pory"
	compare PlayerXCoordinates, 4
	goto_if_eq Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 119 "data/maps/Route7/scripts.pory"
	releaseall
	end

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_2:
# 19 "data/maps/Route7/scripts.pory"
	addobject LOCALID_VEE
# 20 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 21 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 22 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 23 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 24 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 25 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 26 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 27 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 28 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 29 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 30 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 31 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 32 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 33 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 34 "data/maps/Route7/scripts.pory"
	closemessage
# 35 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 36 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 37 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 38 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 39 "data/maps/Route7/scripts.pory"
	closemessage
# 40 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 41 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 42 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 43 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 44 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 45 "data/maps/Route7/scripts.pory"
	closemessage
# 46 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 47 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 48 "data/maps/Route7/scripts.pory"
	removeobject LOCALID_VEE
# 49 "data/maps/Route7/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 1
	goto Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 53 "data/maps/Route7/scripts.pory"
	addobject LOCALID_VEE
# 54 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 55 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 56 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 57 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 58 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 59 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 60 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 61 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9
# 62 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 63 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 64 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 65 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 66 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 67 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 68 "data/maps/Route7/scripts.pory"
	closemessage
# 69 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 70 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 71 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 72 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 73 "data/maps/Route7/scripts.pory"
	closemessage
# 74 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 75 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 76 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 77 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 78 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 79 "data/maps/Route7/scripts.pory"
	closemessage
# 80 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 81 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 82 "data/maps/Route7/scripts.pory"
	removeobject LOCALID_VEE
# 83 "data/maps/Route7/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 1
	goto Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4:
# 87 "data/maps/Route7/scripts.pory"
	addobject LOCALID_VEE
# 88 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 89 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 90 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 91 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 92 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 93 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 94 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10
# 95 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11
# 96 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 97 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 98 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 99 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 100 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 101 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 102 "data/maps/Route7/scripts.pory"
	closemessage
# 103 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 104 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 105 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 106 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 107 "data/maps/Route7/scripts.pory"
	closemessage
# 108 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 109 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 110 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 111 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 112 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 113 "data/maps/Route7/scripts.pory"
	closemessage
# 114 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 115 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 116 "data/maps/Route7/scripts.pory"
	removeobject LOCALID_VEE
# 117 "data/maps/Route7/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 1
	goto Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


# 21 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 21 "data/maps/Route7/scripts.pory"
	walk_in_place_down
	step_end

# 26 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 26 "data/maps/Route7/scripts.pory"
	walk_down
# 26 "data/maps/Route7/scripts.pory"
	walk_down
# 26 "data/maps/Route7/scripts.pory"
	walk_down
# 26 "data/maps/Route7/scripts.pory"
	walk_down
# 26 "data/maps/Route7/scripts.pory"
	walk_right
# 26 "data/maps/Route7/scripts.pory"
	walk_right
# 26 "data/maps/Route7/scripts.pory"
	walk_right
# 26 "data/maps/Route7/scripts.pory"
	walk_down
# 26 "data/maps/Route7/scripts.pory"
	walk_down
# 26 "data/maps/Route7/scripts.pory"
	walk_down
# 26 "data/maps/Route7/scripts.pory"
	walk_right
# 26 "data/maps/Route7/scripts.pory"
	walk_right
# 26 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 27 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_right
# 27 "data/maps/Route7/scripts.pory"
	walk_right
# 27 "data/maps/Route7/scripts.pory"
	walk_right
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_down
# 27 "data/maps/Route7/scripts.pory"
	walk_right
# 27 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

# 28 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 28 "data/maps/Route7/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 29 "data/maps/Route7/scripts.pory"
	walk_in_place_right
	step_end

# 35 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 35 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 36 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
# 36 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

# 40 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7:
# 40 "data/maps/Route7/scripts.pory"
	emote_question_mark
# 40 "data/maps/Route7/scripts.pory"
	face_left
	step_end

# 60 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8:
# 60 "data/maps/Route7/scripts.pory"
	walk_down
# 60 "data/maps/Route7/scripts.pory"
	walk_down
# 60 "data/maps/Route7/scripts.pory"
	walk_down
# 60 "data/maps/Route7/scripts.pory"
	walk_down
# 60 "data/maps/Route7/scripts.pory"
	walk_right
# 60 "data/maps/Route7/scripts.pory"
	walk_right
# 60 "data/maps/Route7/scripts.pory"
	walk_down
# 60 "data/maps/Route7/scripts.pory"
	walk_down
# 60 "data/maps/Route7/scripts.pory"
	walk_down
# 60 "data/maps/Route7/scripts.pory"
	walk_right
# 60 "data/maps/Route7/scripts.pory"
	walk_right
# 60 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 61 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9:
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_right
# 61 "data/maps/Route7/scripts.pory"
	walk_right
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_down
# 61 "data/maps/Route7/scripts.pory"
	walk_right
# 61 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

# 94 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10:
# 94 "data/maps/Route7/scripts.pory"
	walk_down
# 94 "data/maps/Route7/scripts.pory"
	walk_down
# 94 "data/maps/Route7/scripts.pory"
	walk_down
# 94 "data/maps/Route7/scripts.pory"
	walk_down
# 94 "data/maps/Route7/scripts.pory"
	walk_right
# 94 "data/maps/Route7/scripts.pory"
	walk_down
# 94 "data/maps/Route7/scripts.pory"
	walk_down
# 94 "data/maps/Route7/scripts.pory"
	walk_down
# 94 "data/maps/Route7/scripts.pory"
	walk_right
# 94 "data/maps/Route7/scripts.pory"
	walk_right
# 94 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 95 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11:
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_right
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_down
# 95 "data/maps/Route7/scripts.pory"
	walk_right
# 95 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 24 "data/maps/Route7/scripts.pory"
	.string "Vee$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 25 "data/maps/Route7/scripts.pory"
	.string "Wait! Over there!\n"
	.string "I think I saw something! C’mon, let’s\l"
	.string "check it out.$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 33 "data/maps/Route7/scripts.pory"
	.string "Oh! It’s a sign…\p"
	.string "…I can’t read it.\n"
	.string "What’s it say?$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 38 "data/maps/Route7/scripts.pory"
	.string "{UP_ARROW} Dominion City\n"
	.string "{DOWN_ARROW}Voltbrook Town$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 44 "data/maps/Route7/scripts.pory"
	.string "Wait… you said Voltbrook Town was\n"
	.string "listed on the terminal back at the lab,\l"
	.string "right? Like a place where they are\l"
	.string "hiding an artifact?\p"
	.string "Then we should head there.\p"
	.string "If the artifact’s nearby, we need to\n"
	.string "find it.\p"
	.string "We might be able to hide from Team MAGA\n"
	.string "in Voltbrook, and maybe we can figure\l"
	.string "out who the guardian is…\p"
	.string "And how to get the artifact without\n"
	.string "getting caught.$"
