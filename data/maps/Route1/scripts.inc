# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
.set LOCALID_GRUNT_F, 1
# 3 "data/maps/Route1/scripts.pory"
.set LOCALID_GRUNT_M, 2
# 4 "data/maps/Route1/scripts.pory"
.set LOCALID_VEE, 3
# 5 "data/maps/Route1/scripts.pory"
.set LOCALID_FRO, 4
# 6 "data/maps/Route1/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 7 "data/maps/Route1/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

# 10 "data/maps/Route1/scripts.pory"

# 11 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 12 "data/maps/Route1/scripts.pory"
	.byte 0

Route1_EventScript_GruntBlocking_Left::
# 17 "data/maps/Route1/scripts.pory"
	lock
# 18 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 19 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 23 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 27 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 30 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 32 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 33 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 34 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_3
# 39 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_4
# 44 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 45 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Left_Movement_5
# 48 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 49 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_GruntBlocking_MiddleLeft::
# 54 "data/maps/Route1/scripts.pory"
	lockall
# 55 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 56 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 60 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 64 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 65 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0
# 66 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 67 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 68 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 69 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_1
# 74 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 79 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 80 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_3
# 83 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 84 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_GruntBlocking_MiddleRight::
# 90 "data/maps/Route1/scripts.pory"
	lockall
# 91 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 92 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 96 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 100 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 101 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 104 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 105 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 106 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 107 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleRight_Movement_0
# 112 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleRight_Movement_1
# 117 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 118 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleRight_Movement_2
# 121 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_3
# 124 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 125 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_GruntBlocking_Right::
# 130 "data/maps/Route1/scripts.pory"
	lockall
# 131 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 132 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Right_Movement_0
# 137 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Right_Movement_1
# 141 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Right_Movement_2
# 142 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 143 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0
# 144 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 145 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 146 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 147 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleRight_Movement_0
# 152 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleRight_Movement_1
# 157 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 158 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleRight_Movement_2
# 161 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_3
# 164 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 165 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_SpawnParty::
# 170 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_TALKED_TO_GRUNTS_ROUTE1, Route1_EventScript_SpawnParty_2
Route1_EventScript_SpawnParty_1:
# 174 "data/maps/Route1/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 175 "data/maps/Route1/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 176 "data/maps/Route1/scripts.pory"
	clearflag FLAG_SYS_HIDE_FRO_PARTY_MEMBER
# 177 "data/maps/Route1/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 178 "data/maps/Route1/scripts.pory"
	addobject LOCALID_VEE
# 179 "data/maps/Route1/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 180 "data/maps/Route1/scripts.pory"
	addobject LOCALID_FRO
	return

Route1_EventScript_SpawnParty_2:
# 172 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_NoCake
	goto Route1_EventScript_SpawnParty_1


Route1_EventScript_RoadIsBlocked::
# 185 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 186 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_1
# 193 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_RoadIsBlocked_Movement_0
# 194 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_RoadIsBlocked_Movement_1
# 195 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 196 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_3
# 200 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 201 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_4
# 205 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 206 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_5
# 214 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 215 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_RoadIsBlocked_Movement_2
# 216 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 217 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 218 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_6
	return


Route1_EventScript_GruntBlocking_Continues::
# 228 "data/maps/Route1/scripts.pory"
	closemessage
# 229 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 232 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 235 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 236 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 237 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_0
# 240 "data/maps/Route1/scripts.pory"
	playse SE_PIN
# 241 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Continues_Movement_1
# 246 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Continues_Movement_1
# 251 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 252 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 253 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_2
# 257 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_RoadIsBlocked_Movement_0
# 258 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 259 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 260 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_4
# 263 "data/maps/Route1/scripts.pory"
	closemessage
# 264 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Continues_Movement_2
# 270 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 271 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 272 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_5
# 277 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0
# 278 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0
# 279 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_6
# 280 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 281 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_7
# 286 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 287 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_8
# 290 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 291 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_9
# 296 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 297 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_10
# 300 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 301 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_11
# 313 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 314 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_12
# 317 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 318 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_13
# 321 "data/maps/Route1/scripts.pory"
	closemessage
# 322 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Continues_Movement_3
# 329 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 330 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 331 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_14
# 338 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 339 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_15
# 344 "data/maps/Route1/scripts.pory"
	closemessage
# 345 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_RoadIsBlocked_Movement_0
# 346 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Right_Movement_2
# 347 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Continues_Movement_4
# 352 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Continues_Movement_5
# 355 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 356 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Continues_Movement_6
# 361 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Continues_Movement_7
# 366 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 367 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 368 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_16
# 373 "data/maps/Route1/scripts.pory"
	closemessage
# 374 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_3
# 377 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_5
# 380 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 381 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_VEE
# 382 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_FRO
# 383 "data/maps/Route1/scripts.pory"
	special RemoveCameraObject
# 384 "data/maps/Route1/scripts.pory"
	setflag FLAG_TALKED_TO_GRUNTS_ROUTE1
# 385 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_NoCake::
# 390 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 391 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_NoCake_Text_0
# 396 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_NoCake_Movement_0
# 397 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 398 "data/maps/Route1/scripts.pory"
	releaseall
	end


# 19 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_0:
# 20 "data/maps/Route1/scripts.pory"
	walk_down
# 21 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 23 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_1:
# 24 "data/maps/Route1/scripts.pory"
	walk_right
# 25 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 27 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_2:
# 28 "data/maps/Route1/scripts.pory"
	walk_in_place_down
	step_end

# 34 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_3:
# 35 "data/maps/Route1/scripts.pory"
	walk_up
# 36 "data/maps/Route1/scripts.pory"
	walk_left
# 36 "data/maps/Route1/scripts.pory"
	walk_left
# 37 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 39 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_4:
# 40 "data/maps/Route1/scripts.pory"
	walk_up
# 40 "data/maps/Route1/scripts.pory"
	walk_up
# 41 "data/maps/Route1/scripts.pory"
	walk_left
# 42 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 45 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_5:
# 46 "data/maps/Route1/scripts.pory"
	walk_right
	step_end

# 65 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0:
# 65 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 69 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_1:
# 70 "data/maps/Route1/scripts.pory"
	walk_up
# 71 "data/maps/Route1/scripts.pory"
	walk_left
# 71 "data/maps/Route1/scripts.pory"
	walk_left
# 71 "data/maps/Route1/scripts.pory"
	walk_left
# 72 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 74 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2:
# 75 "data/maps/Route1/scripts.pory"
	walk_up
# 75 "data/maps/Route1/scripts.pory"
	walk_up
# 76 "data/maps/Route1/scripts.pory"
	walk_left
# 76 "data/maps/Route1/scripts.pory"
	walk_left
# 77 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 80 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_3:
# 81 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 107 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_0:
# 108 "data/maps/Route1/scripts.pory"
	walk_up
# 109 "data/maps/Route1/scripts.pory"
	walk_left
# 109 "data/maps/Route1/scripts.pory"
	walk_left
# 109 "data/maps/Route1/scripts.pory"
	walk_left
# 109 "data/maps/Route1/scripts.pory"
	walk_left
# 110 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 112 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_1:
# 113 "data/maps/Route1/scripts.pory"
	walk_up
# 113 "data/maps/Route1/scripts.pory"
	walk_up
# 114 "data/maps/Route1/scripts.pory"
	walk_left
# 114 "data/maps/Route1/scripts.pory"
	walk_left
# 114 "data/maps/Route1/scripts.pory"
	walk_left
# 115 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 118 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_2:
# 119 "data/maps/Route1/scripts.pory"
	walk_left
# 119 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 132 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_0:
# 133 "data/maps/Route1/scripts.pory"
	walk_down
# 134 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 137 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_1:
# 138 "data/maps/Route1/scripts.pory"
	walk_left
# 139 "data/maps/Route1/scripts.pory"
	walk_in_place_down
	step_end

# 141 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_2:
# 141 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 193 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_0:
# 193 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 194 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_1:
# 194 "data/maps/Route1/scripts.pory"
	walk_in_place_fast_right
	step_end

# 215 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_2:
# 215 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 229 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_0:
# 230 "data/maps/Route1/scripts.pory"
	walk_up
# 230 "data/maps/Route1/scripts.pory"
	walk_up
# 230 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 241 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_1:
# 242 "data/maps/Route1/scripts.pory"
	face_down
# 243 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 244 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 264 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_2:
# 265 "data/maps/Route1/scripts.pory"
	face_left
# 266 "data/maps/Route1/scripts.pory"
	delay_16
# 267 "data/maps/Route1/scripts.pory"
	delay_16
# 268 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 322 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_3:
# 323 "data/maps/Route1/scripts.pory"
	face_right
# 324 "data/maps/Route1/scripts.pory"
	delay_16
# 325 "data/maps/Route1/scripts.pory"
	delay_16
# 326 "data/maps/Route1/scripts.pory"
	delay_16
# 327 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 347 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_4:
# 348 "data/maps/Route1/scripts.pory"
	walk_down
# 348 "data/maps/Route1/scripts.pory"
	walk_down
# 348 "data/maps/Route1/scripts.pory"
	walk_down
# 348 "data/maps/Route1/scripts.pory"
	walk_down
# 349 "data/maps/Route1/scripts.pory"
	walk_right
# 350 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 352 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_5:
# 353 "data/maps/Route1/scripts.pory"
	walk_down
# 353 "data/maps/Route1/scripts.pory"
	walk_down
# 353 "data/maps/Route1/scripts.pory"
	walk_down
# 353 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 356 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_6:
# 357 "data/maps/Route1/scripts.pory"
	walk_right
# 357 "data/maps/Route1/scripts.pory"
	walk_right
# 357 "data/maps/Route1/scripts.pory"
	walk_right
# 358 "data/maps/Route1/scripts.pory"
	walk_down
# 358 "data/maps/Route1/scripts.pory"
	walk_down
# 359 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 361 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_7:
# 362 "data/maps/Route1/scripts.pory"
	walk_right
# 363 "data/maps/Route1/scripts.pory"
	walk_down
# 363 "data/maps/Route1/scripts.pory"
	walk_down
# 364 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 396 "data/maps/Route1/scripts.pory"
Route1_EventScript_NoCake_Movement_0:
# 396 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_EventScript_RoadIsBlocked_Text_0:
# 185 "data/maps/Route1/scripts.pory"
	.string "Vee$"

Route1_EventScript_RoadIsBlocked_Text_1:
# 187 "data/maps/Route1/scripts.pory"
	.string "Oh, no!\n"
	.string "More grunts!\p"
	.string "But, but…!\n"
	.string "How will we get to Pyroden, then?\p"
	.string "Do we need to fight them?$"

Route1_EventScript_RoadIsBlocked_Text_2:
# 195 "data/maps/Route1/scripts.pory"
	.string "Fro$"

Route1_EventScript_RoadIsBlocked_Text_3:
# 197 "data/maps/Route1/scripts.pory"
	.string "Hey, chill out, girl.\n"
	.string "I know those guys.$"

Route1_EventScript_RoadIsBlocked_Text_4:
# 202 "data/maps/Route1/scripts.pory"
	.string "You…\n"
	.string "Do?$"

Route1_EventScript_RoadIsBlocked_Text_5:
# 207 "data/maps/Route1/scripts.pory"
	.string "Eeyup.\n"
	.string "From work.\p"
	.string "Some real bad apples, those ones.\p"
	.string "But I can talk with 'em.\n"
	.string "Figure something out.\p"
	.string "You guys go hide, and I'll handle this.$"

Route1_EventScript_RoadIsBlocked_Text_6:
# 219 "data/maps/Route1/scripts.pory"
	.string "Hmm…\n"
	.string "If he's sure…\p"
	.string "We should hide behind those trees,\n"
	.string "{PLAYER}!$"

Route1_EventScript_GruntBlocking_Continues_Text_0:
# 238 "data/maps/Route1/scripts.pory"
	.string "Hello, friends.$"

Route1_EventScript_GruntBlocking_Continues_Text_1:
# 252 "data/maps/Route1/scripts.pory"
	.string "Grunt 1$"

Route1_EventScript_GruntBlocking_Continues_Text_2:
# 254 "data/maps/Route1/scripts.pory"
	.string "GYAAAH!\n"
	.string "A talking Snorlax!!!$"

Route1_EventScript_GruntBlocking_Continues_Text_3:
# 259 "data/maps/Route1/scripts.pory"
	.string "Grunt 2$"

Route1_EventScript_GruntBlocking_Continues_Text_4:
# 261 "data/maps/Route1/scripts.pory"
	.string "That's just Fro, you idiot.$"

Route1_EventScript_GruntBlocking_Continues_Text_5:
# 273 "data/maps/Route1/scripts.pory"
	.string "Oh yeah!\n"
	.string "It is, isn't it!\p"
	.string "Fro from the cafe!$"

Route1_EventScript_GruntBlocking_Continues_Text_6:
# 279 "data/maps/Route1/scripts.pory"
	.string "How's it going, man?$"

Route1_EventScript_GruntBlocking_Continues_Text_7:
# 282 "data/maps/Route1/scripts.pory"
	.string "Like a feast.\p"
	.string "Listen, you two.\n"
	.string "I need to pass.$"

Route1_EventScript_GruntBlocking_Continues_Text_8:
# 288 "data/maps/Route1/scripts.pory"
	.string "Aren't you supposed to be working right\n"
	.string "now?$"

Route1_EventScript_GruntBlocking_Continues_Text_9:
# 292 "data/maps/Route1/scripts.pory"
	.string "Well.\p"
	.string "I am…\n"
	.string "Gathering ingredients.$"

Route1_EventScript_GruntBlocking_Continues_Text_10:
# 298 "data/maps/Route1/scripts.pory"
	.string "The Boss didn't say you were gonna pass\n"
	.string "through here.$"

Route1_EventScript_GruntBlocking_Continues_Text_11:
# 302 "data/maps/Route1/scripts.pory"
	.string "Oh, yes, you see.\n"
	.string "He doesn't know this, because…\p"
	.string "It's a surprise.\p"
	.string "I am baking…\n"
	.string "A new recipe.\l"
	.string "Just for him.\p"
	.string "But I need a new ingredient.\n"
	.string "Only found in Pyroden.\p"
	.string "It is called…\n"
	.string "The hot berry.$"

Route1_EventScript_GruntBlocking_Continues_Text_12:
# 315 "data/maps/Route1/scripts.pory"
	.string "Never heard of that.$"

Route1_EventScript_GruntBlocking_Continues_Text_13:
# 319 "data/maps/Route1/scripts.pory"
	.string "I have!$"

Route1_EventScript_GruntBlocking_Continues_Text_14:
# 332 "data/maps/Route1/scripts.pory"
	.string "Ok, look, how about this.\p"
	.string "We've been standing guard all day here.\p"
	.string "Catch my drift?\n"
	.string "We're mighty hungry.\p"
	.string "Bring us your {COLOR RED}famous meal{COLOR DARK_GRAY}, and we'll let\n"
	.string "you through.$"

Route1_EventScript_GruntBlocking_Continues_Text_15:
# 340 "data/maps/Route1/scripts.pory"
	.string "An acceptable deal.\n"
	.string "Yes, I can make that happen.\p"
	.string "Just wait here for a while, and I will\n"
	.string "bring it to you.$"

Route1_EventScript_GruntBlocking_Continues_Text_16:
# 369 "data/maps/Route1/scripts.pory"
	.string "I told you.\n"
	.string "Easy as pie.\p"
	.string "Now, we only need to {COLOR RED}craft {COLOR DARK_GRAY}my special\n"
	.string "meal, and they will let us pass.$"

Route1_EventScript_NoCake_Text_0:
# 392 "data/maps/Route1/scripts.pory"
	.string "Psst!\n"
	.string "{PLAYER}!\p"
	.string "We need to make them a meal first,\n"
	.string "remember?$"
