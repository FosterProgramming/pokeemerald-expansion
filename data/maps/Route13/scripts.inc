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

Route13_EventScripts_StayAwayFromGruntEast_Text_0:
# 17 "data/maps/Route13/scripts.pory"
	.string "Vee$"

Route13_EventScripts_StayAwayFromGruntEast_Text_1:
# 18 "data/maps/Route13/scripts.pory"
	.string "Look out! A Team MAGA Grunt.$"
