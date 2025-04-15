# 1 "data/maps/Route13/scripts.pory"

# 2 "data/maps/Route13/scripts.pory"
.set LOCALID_VEE, 3
# 3 "data/maps/Route13/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/Route13/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4
# 5 "data/maps/Route13/scripts.pory"
Route13_MapScripts::
# 6 "data/maps/Route13/scripts.pory"
	.byte 0

Route13_EventScripts_StayAwayFromGruntEast::
# 10 "data/maps/Route13/scripts.pory"
	lock
# 11 "data/maps/Route13/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 12 "data/maps/Route13/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 13 "data/maps/Route13/scripts.pory"
	addobject LOCALID_VEE
# 14 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 15 "data/maps/Route13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route13_EventScripts_StayAwayFromGruntEast_Movement_0
# 16 "data/maps/Route13/scripts.pory"
	waitmovement LOCALID_VEE
# 17 "data/maps/Route13/scripts.pory"
	speakername Route13_EventScripts_StayAwayFromGruntEast_Text_0
# 18 "data/maps/Route13/scripts.pory"
	msgbox Route13_EventScripts_StayAwayFromGruntEast_Text_1
# 19 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 20 "data/maps/Route13/scripts.pory"
	waitmovement LOCALID_VEE
# 21 "data/maps/Route13/scripts.pory"
	removeobject LOCALID_VEE
# 22 "data/maps/Route13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route13_EventScripts_StayAwayFromGruntEast_Movement_1
# 23 "data/maps/Route13/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 24 "data/maps/Route13/scripts.pory"
	release
	end


Route13_EventScripts_StayAwayFromGruntSouth::
# 30 "data/maps/Route13/scripts.pory"
	lock
# 31 "data/maps/Route13/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 32 "data/maps/Route13/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 33 "data/maps/Route13/scripts.pory"
	addobject LOCALID_VEE
# 34 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 35 "data/maps/Route13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route13_EventScripts_StayAwayFromGruntSouth_Movement_0
# 36 "data/maps/Route13/scripts.pory"
	waitmovement LOCALID_VEE
# 37 "data/maps/Route13/scripts.pory"
	speakername Route13_EventScripts_StayAwayFromGruntEast_Text_0
# 38 "data/maps/Route13/scripts.pory"
	msgbox Route13_EventScripts_StayAwayFromGruntEast_Text_1
# 39 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 40 "data/maps/Route13/scripts.pory"
	waitmovement LOCALID_VEE
# 41 "data/maps/Route13/scripts.pory"
	removeobject LOCALID_VEE
# 42 "data/maps/Route13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route13_EventScripts_StayAwayFromGruntSouth_Movement_1
# 43 "data/maps/Route13/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 44 "data/maps/Route13/scripts.pory"
	release
	end


Route7_EventScripts_SatchelRetrieval::
# 51 "data/maps/Route13/scripts.pory"
	lock
# 52 "data/maps/Route13/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/Route13/scripts.pory"
	waitfanfare
# 54 "data/maps/Route13/scripts.pory"
	removeobject 1
# 55 "data/maps/Route13/scripts.pory"
	removeobject 2
# 56 "data/maps/Route13/scripts.pory"
	setobjectxyperm 2, 42, 9
# 57 "data/maps/Route13/scripts.pory"
	msgbox Route7_EventScripts_SatchelRetrieval_Text_0, MSGBOX_DEFAULT
# 58 "data/maps/Route13/scripts.pory"
	setflag FLAG_HIDE_ROUTE_13_SATCHEL
# 59 "data/maps/Route13/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 60 "data/maps/Route13/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 61 "data/maps/Route13/scripts.pory"
	addobject LOCALID_VEE
# 62 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 63 "data/maps/Route13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_EventScripts_SatchelRetrieval_Movement_0
# 64 "data/maps/Route13/scripts.pory"
	addobject 2
# 65 "data/maps/Route13/scripts.pory"
	waitmovement LOCALID_VEE
# 66 "data/maps/Route13/scripts.pory"
	speakername Route13_EventScripts_StayAwayFromGruntEast_Text_0
# 67 "data/maps/Route13/scripts.pory"
	msgbox Route7_EventScripts_SatchelRetrieval_Text_1
# 68 "data/maps/Route13/scripts.pory"
	applymovement 2, Route7_EventScripts_SatchelRetrieval_Movement_1
# 69 "data/maps/Route13/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Route13/scripts.pory"
	waitmovement 2
# 71 "data/maps/Route13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_EventScripts_SatchelRetrieval_Movement_2
# 72 "data/maps/Route13/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 73 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Route7_EventScripts_SatchelRetrieval_Movement_3
# 74 "data/maps/Route13/scripts.pory"
	trainerbattle_double TRAINER_ROUTE_13_MAGA_GRUNT, Route7_EventScripts_SatchelRetrieval_Text_2, Route7_EventScripts_SatchelRetrieval_Text_3, Route7_EventScripts_SatchelRetrieval_Text_4, Route13_EventScripts_PostGruntBattle
	return


Route13_EventScripts_PostGruntBattle::
# 79 "data/maps/Route13/scripts.pory"
	speakername Route13_EventScripts_PostGruntBattle_Text_0
# 80 "data/maps/Route13/scripts.pory"
	msgbox Route13_EventScripts_PostGruntBattle_Text_1
# 81 "data/maps/Route13/scripts.pory"
	applymovement 2, Route13_EventScripts_PostGruntBattle_Movement_0
# 82 "data/maps/Route13/scripts.pory"
	waitmovement 2
# 83 "data/maps/Route13/scripts.pory"
	removeobject 2
# 84 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Route13_EventScripts_PostGruntBattle_Movement_1
# 85 "data/maps/Route13/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route7_EventScripts_SatchelRetrieval_Movement_0
# 86 "data/maps/Route13/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 87 "data/maps/Route13/scripts.pory"
	speakername Route13_EventScripts_StayAwayFromGruntEast_Text_0
# 88 "data/maps/Route13/scripts.pory"
	msgbox Route13_EventScripts_PostGruntBattle_Text_2, MSGBOX_NPC
# 89 "data/maps/Route13/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 90 "data/maps/Route13/scripts.pory"
	waitmovement LOCALID_VEE
# 91 "data/maps/Route13/scripts.pory"
	removeobject LOCALID_VEE
# 92 "data/maps/Route13/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 3
# 93 "data/maps/Route13/scripts.pory"
	setflag FLAG_MOONTHISTLE_SATCHEL_RECOVERED
# 94 "data/maps/Route13/scripts.pory"
	setflag FLAG_HIDE_VOLTBROOK_TOWN_GRUNT_3_4
# 95 "data/maps/Route13/scripts.pory"
	setflag FLAG_HIDE_VOLTBROOK_TOWN_GRUNT_1
# 96 "data/maps/Route13/scripts.pory"
	setflag FLAG_HIDE_VOLTBROOK_TOWN_GRUNT_2_3
# 97 "data/maps/Route13/scripts.pory"
	release
	end


# 15 "data/maps/Route13/scripts.pory"
Route13_EventScripts_StayAwayFromGruntEast_Movement_0:
# 15 "data/maps/Route13/scripts.pory"
	walk_in_place_right
	step_end

# 22 "data/maps/Route13/scripts.pory"
Route13_EventScripts_StayAwayFromGruntEast_Movement_1:
# 22 "data/maps/Route13/scripts.pory"
	walk_right
	step_end

# 35 "data/maps/Route13/scripts.pory"
Route13_EventScripts_StayAwayFromGruntSouth_Movement_0:
# 35 "data/maps/Route13/scripts.pory"
	walk_in_place_down
	step_end

# 42 "data/maps/Route13/scripts.pory"
Route13_EventScripts_StayAwayFromGruntSouth_Movement_1:
# 42 "data/maps/Route13/scripts.pory"
	walk_down
	step_end

# 63 "data/maps/Route13/scripts.pory"
Route7_EventScripts_SatchelRetrieval_Movement_0:
# 63 "data/maps/Route13/scripts.pory"
	walk_in_place_up
	step_end

# 68 "data/maps/Route13/scripts.pory"
Route7_EventScripts_SatchelRetrieval_Movement_1:
# 68 "data/maps/Route13/scripts.pory"
	walk_up
# 68 "data/maps/Route13/scripts.pory"
	emote_exclamation_mark
# 68 "data/maps/Route13/scripts.pory"
	walk_up
# 68 "data/maps/Route13/scripts.pory"
	walk_up
# 68 "data/maps/Route13/scripts.pory"
	walk_up
# 68 "data/maps/Route13/scripts.pory"
	walk_up
# 68 "data/maps/Route13/scripts.pory"
	walk_up
# 68 "data/maps/Route13/scripts.pory"
	face_right
	step_end

# 71 "data/maps/Route13/scripts.pory"
Route7_EventScripts_SatchelRetrieval_Movement_2:
# 71 "data/maps/Route13/scripts.pory"
	walk_in_place_left
	step_end

# 73 "data/maps/Route13/scripts.pory"
Route7_EventScripts_SatchelRetrieval_Movement_3:
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
# 73 "data/maps/Route13/scripts.pory"
	face_left
	step_end

# 81 "data/maps/Route13/scripts.pory"
Route13_EventScripts_PostGruntBattle_Movement_0:
# 81 "data/maps/Route13/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route13/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route13/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route13/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route13/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route13/scripts.pory"
	walk_faster_down
# 81 "data/maps/Route13/scripts.pory"
	walk_faster_down
	step_end

# 84 "data/maps/Route13/scripts.pory"
Route13_EventScripts_PostGruntBattle_Movement_1:
# 84 "data/maps/Route13/scripts.pory"
	face_down
	step_end

Route13_EventScripts_StayAwayFromGruntEast_Text_0:
# 17 "data/maps/Route13/scripts.pory"
	.string "Vee$"

Route13_EventScripts_StayAwayFromGruntEast_Text_1:
# 18 "data/maps/Route13/scripts.pory"
	.string "Look out! A Team MAGA Grunt.$"

Route7_EventScripts_SatchelRetrieval_Text_0:
# 57 "data/maps/Route13/scripts.pory"
	.string "Seel picked up the Satchel!$"

Route7_EventScripts_SatchelRetrieval_Text_1:
# 67 "data/maps/Route13/scripts.pory"
	.string "That’s it! That’s the satchel Linoone was\n"
	.string "talking about!\p"
	.string "It’s still sealed shut. Good thing we got\n"
	.string "here before anyone stole it.$"

Route7_EventScripts_SatchelRetrieval_Text_2:
# 74 "data/maps/Route13/scripts.pory"
	.string "Well, well. Look what we have here.\p"
	.string "Two little lab rats. And what might be in\n"
	.string "that bag?\p"
	.string "Oh well, it doesn't matter. I'm taking\n"
	.string "you in.\p"
	.string "Didn’t think I’d get promoted today-but\n"
	.string "hey, catching you two’ll make me a hero.$"

Route7_EventScripts_SatchelRetrieval_Text_3:
# 74 "data/maps/Route13/scripts.pory"
	.string "Ugh, no! This was my chance!$"

Route7_EventScripts_SatchelRetrieval_Text_4:
# 74 "data/maps/Route13/scripts.pory"
	.string "NULL$"

Route13_EventScripts_PostGruntBattle_Text_0:
# 79 "data/maps/Route13/scripts.pory"
	.string "Grunt$"

Route13_EventScripts_PostGruntBattle_Text_1:
# 80 "data/maps/Route13/scripts.pory"
	.string "Forget this… I'm calling it in. You won’t\n"
	.string "stay hidden for long!$"

Route13_EventScripts_PostGruntBattle_Text_2:
# 88 "data/maps/Route13/scripts.pory"
	.string "That’s… not good. We should return the\n"
	.string "satchel to Linoone. Hopefully he let's\l"
	.string "us stay hidden there after this.$"
