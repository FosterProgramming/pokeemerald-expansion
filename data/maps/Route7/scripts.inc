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
# 66 "data/maps/Route7/scripts.pory"
	compare PlayerXCoordinates, 3
	goto_if_eq Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3
# 115 "data/maps/Route7/scripts.pory"
	compare PlayerXCoordinates, 4
	goto_if_eq Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1:
# 164 "data/maps/Route7/scripts.pory"
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
	closemessage
# 27 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 28 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 29 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 30 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 31 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 32 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 33 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 34 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 38 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 39 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 40 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 41 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 43 "data/maps/Route7/scripts.pory"
	closemessage
# 44 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 45 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 46 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 47 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 48 "data/maps/Route7/scripts.pory"
	closemessage
# 49 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 50 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 51 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 52 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 53 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 60 "data/maps/Route7/scripts.pory"
	closemessage
# 61 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 62 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 63 "data/maps/Route7/scripts.pory"
	removeobject LOCALID_VEE
# 64 "data/maps/Route7/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 1
	goto Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_3:
# 68 "data/maps/Route7/scripts.pory"
	addobject LOCALID_VEE
# 69 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 70 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 71 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 72 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 73 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 74 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 75 "data/maps/Route7/scripts.pory"
	closemessage
# 76 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9
# 77 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10
# 78 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 79 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 80 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 81 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 82 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 83 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 87 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 88 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 89 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 92 "data/maps/Route7/scripts.pory"
	closemessage
# 93 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 94 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 95 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 96 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 97 "data/maps/Route7/scripts.pory"
	closemessage
# 98 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 99 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 100 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 101 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 102 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 109 "data/maps/Route7/scripts.pory"
	closemessage
# 110 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 111 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 112 "data/maps/Route7/scripts.pory"
	removeobject LOCALID_VEE
# 113 "data/maps/Route7/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 1
	goto Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_4:
# 117 "data/maps/Route7/scripts.pory"
	addobject LOCALID_VEE
# 118 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 119 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 120 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 121 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 122 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 123 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 124 "data/maps/Route7/scripts.pory"
	closemessage
# 125 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11
# 126 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12
# 127 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 128 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 129 "data/maps/Route7/scripts.pory"
	playse SE_PIN
# 130 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 131 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 132 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 136 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 137 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 138 "data/maps/Route7/scripts.pory"
	waitmovement 0
# 139 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 141 "data/maps/Route7/scripts.pory"
	closemessage
# 142 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 143 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 144 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 145 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 146 "data/maps/Route7/scripts.pory"
	closemessage
# 147 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 148 "data/maps/Route7/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 149 "data/maps/Route7/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 150 "data/maps/Route7/scripts.pory"
	speakername Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 151 "data/maps/Route7/scripts.pory"
	msgbox Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 158 "data/maps/Route7/scripts.pory"
	closemessage
# 159 "data/maps/Route7/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 160 "data/maps/Route7/scripts.pory"
	waitmovement LOCALID_VEE
# 161 "data/maps/Route7/scripts.pory"
	removeobject LOCALID_VEE
# 162 "data/maps/Route7/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 1
	goto Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_1


# 21 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 21 "data/maps/Route7/scripts.pory"
	walk_in_place_down
	step_end

# 27 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
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
	walk_right
# 27 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 28 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_right
# 28 "data/maps/Route7/scripts.pory"
	walk_right
# 28 "data/maps/Route7/scripts.pory"
	walk_right
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_down
# 28 "data/maps/Route7/scripts.pory"
	walk_right
# 28 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

# 29 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 29 "data/maps/Route7/scripts.pory"
	emote_exclamation_mark
	step_end

# 30 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 30 "data/maps/Route7/scripts.pory"
	walk_in_place_right
	step_end

# 38 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 38 "data/maps/Route7/scripts.pory"
	face_left
	step_end

# 44 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
# 44 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 45 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7:
# 45 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

# 49 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8:
# 49 "data/maps/Route7/scripts.pory"
	emote_question_mark
# 49 "data/maps/Route7/scripts.pory"
	face_left
	step_end

# 76 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9:
# 76 "data/maps/Route7/scripts.pory"
	walk_down
# 76 "data/maps/Route7/scripts.pory"
	walk_down
# 76 "data/maps/Route7/scripts.pory"
	walk_down
# 76 "data/maps/Route7/scripts.pory"
	walk_down
# 76 "data/maps/Route7/scripts.pory"
	walk_right
# 76 "data/maps/Route7/scripts.pory"
	walk_right
# 76 "data/maps/Route7/scripts.pory"
	walk_down
# 76 "data/maps/Route7/scripts.pory"
	walk_down
# 76 "data/maps/Route7/scripts.pory"
	walk_down
# 76 "data/maps/Route7/scripts.pory"
	walk_right
# 76 "data/maps/Route7/scripts.pory"
	walk_right
# 76 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 77 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10:
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_right
# 77 "data/maps/Route7/scripts.pory"
	walk_right
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_down
# 77 "data/maps/Route7/scripts.pory"
	walk_right
# 77 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

# 125 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11:
# 125 "data/maps/Route7/scripts.pory"
	walk_down
# 125 "data/maps/Route7/scripts.pory"
	walk_down
# 125 "data/maps/Route7/scripts.pory"
	walk_down
# 125 "data/maps/Route7/scripts.pory"
	walk_down
# 125 "data/maps/Route7/scripts.pory"
	walk_right
# 125 "data/maps/Route7/scripts.pory"
	walk_down
# 125 "data/maps/Route7/scripts.pory"
	walk_down
# 125 "data/maps/Route7/scripts.pory"
	walk_down
# 125 "data/maps/Route7/scripts.pory"
	walk_right
# 125 "data/maps/Route7/scripts.pory"
	walk_right
# 125 "data/maps/Route7/scripts.pory"
	face_up
	step_end

# 126 "data/maps/Route7/scripts.pory"
Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12:
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_right
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_down
# 126 "data/maps/Route7/scripts.pory"
	walk_right
# 126 "data/maps/Route7/scripts.pory"
	walk_in_place_up
	step_end

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 24 "data/maps/Route7/scripts.pory"
	.string "Vee$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 25 "data/maps/Route7/scripts.pory"
	.string "Wait! Over there!\n"
	.string "I think I saw something!\p"
	.string "C’mon, let’s check it out!$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 34 "data/maps/Route7/scripts.pory"
	.string "Oh!\n"
	.string "Hmm…\p"
	.string "Yes, yes…\n"
	.string "I see.$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 41 "data/maps/Route7/scripts.pory"
	.string "…I can't read it.\n"
	.string "What's it say?$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 47 "data/maps/Route7/scripts.pory"
	.string "{UP_ARROW} Dominion City\n"
	.string "{DOWN_ARROW}Voltbrook Town$"

Route7_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 53 "data/maps/Route7/scripts.pory"
	.string "Wait…\n"
	.string "The computer at the lab talked about\l"
	.string "Voltbrook Town, right?\p"
	.string "Like, one of the places that have an\n"
	.string "artifact?\p"
	.string "We need to find it!\p"
	.string "But, a Guardian might be there too.\p"
	.string "Brr…\n"
	.string "Let's try and steer clear from Team\l"
	.string "MAGA and from any Guardians, ok?$"
