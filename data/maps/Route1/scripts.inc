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
	lockall
# 18 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 19 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 23 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 27 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 28 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 29 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 30 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 31 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 32 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_3
# 37 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_4
# 42 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 43 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Left_Movement_5
# 46 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_GruntBlocking_MiddleLeft::
# 52 "data/maps/Route1/scripts.pory"
	lockall
# 53 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 54 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 58 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 62 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 64 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 66 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 67 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0
# 72 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_1
# 77 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 78 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 81 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 82 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_GruntBlocking_MiddleRight::
# 88 "data/maps/Route1/scripts.pory"
	lockall
# 89 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 90 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 94 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 98 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 100 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 102 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 103 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleRight_Movement_0
# 108 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleRight_Movement_1
# 113 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 114 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleRight_Movement_2
# 117 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 120 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 121 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_GruntBlocking_Right::
# 126 "data/maps/Route1/scripts.pory"
	lockall
# 127 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 128 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Right_Movement_0
# 133 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Right_Movement_1
# 137 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 138 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 139 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
# 141 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 142 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleRight_Movement_0
# 147 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleRight_Movement_1
# 152 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 153 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleRight_Movement_2
# 156 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 159 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 160 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return


Route1_EventScript_SpawnParty::
# 165 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_TALKED_TO_GRUNTS_ROUTE1, Route1_EventScript_SpawnParty_2
Route1_EventScript_SpawnParty_1:
# 170 "data/maps/Route1/scripts.pory"
	clearflag FLAG_SYS_HIDE_FRO_PARTY_MEMBER
# 171 "data/maps/Route1/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 172 "data/maps/Route1/scripts.pory"
	addobject LOCALID_VEE
# 173 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 174 "data/maps/Route1/scripts.pory"
	addobject LOCALID_FRO
# 175 "data/maps/Route1/scripts.pory"
	setobjectxy LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
	return

Route1_EventScript_SpawnParty_2:
# 167 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_NoCake
	goto Route1_EventScript_SpawnParty_1


Route1_EventScript_RoadIsBlocked::
# 181 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 182 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_1
# 189 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_RoadIsBlocked_Movement_0
# 190 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_RoadIsBlocked_Movement_0
# 191 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 192 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_3
# 196 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 197 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_4
# 201 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 202 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_5
# 210 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 211 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_RoadIsBlocked_Movement_1
# 212 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 213 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 214 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_6
	return


Route1_EventScript_GruntBlocking_Continues::
# 224 "data/maps/Route1/scripts.pory"
	closemessage
# 225 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 228 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 231 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 232 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 233 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_0
# 236 "data/maps/Route1/scripts.pory"
	playse SE_PIN
# 237 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Continues_Movement_1
# 242 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Continues_Movement_1
# 247 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 249 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_2
# 253 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_RoadIsBlocked_Movement_0
# 254 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 255 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 256 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_4
# 259 "data/maps/Route1/scripts.pory"
	closemessage
# 260 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Continues_Movement_2
# 264 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 265 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 266 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_5
# 272 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Left_Movement_2
# 273 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Left_Movement_2
# 274 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_6
# 275 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 276 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_7
# 281 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 282 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_8
# 285 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 286 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_9
# 291 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 292 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_10
# 295 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 296 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_11
# 308 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 309 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_12
# 312 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 313 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_13
# 316 "data/maps/Route1/scripts.pory"
	closemessage
# 317 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Continues_Movement_3
# 323 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 325 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_14
# 332 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 333 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_15
# 338 "data/maps/Route1/scripts.pory"
	closemessage
# 339 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_RoadIsBlocked_Movement_0
# 340 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Continues_Movement_4
# 341 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Continues_Movement_5
# 346 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Continues_Movement_6
# 349 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 350 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Continues_Movement_7
# 355 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Continues_Movement_8
# 360 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 361 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 362 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_16
# 367 "data/maps/Route1/scripts.pory"
	closemessage
# 368 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 371 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_5
# 374 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 375 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_VEE
# 376 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_FRO
# 377 "data/maps/Route1/scripts.pory"
	special RemoveCameraObject
# 378 "data/maps/Route1/scripts.pory"
	setflag FLAG_TALKED_TO_GRUNTS_ROUTE1
# 379 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_NoCake::
# 384 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 385 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_NoCake_Text_0
# 390 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_NoCake_Movement_0
# 391 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 392 "data/maps/Route1/scripts.pory"
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

# 28 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_2:
# 28 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 32 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_3:
# 33 "data/maps/Route1/scripts.pory"
	walk_up
# 34 "data/maps/Route1/scripts.pory"
	walk_left
# 34 "data/maps/Route1/scripts.pory"
	walk_left
# 35 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 37 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_4:
# 38 "data/maps/Route1/scripts.pory"
	walk_up
# 38 "data/maps/Route1/scripts.pory"
	walk_up
# 39 "data/maps/Route1/scripts.pory"
	walk_left
# 40 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 43 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_5:
# 44 "data/maps/Route1/scripts.pory"
	walk_right
	step_end

# 67 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0:
# 68 "data/maps/Route1/scripts.pory"
	walk_up
# 69 "data/maps/Route1/scripts.pory"
	walk_left
# 69 "data/maps/Route1/scripts.pory"
	walk_left
# 69 "data/maps/Route1/scripts.pory"
	walk_left
# 70 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 72 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_1:
# 73 "data/maps/Route1/scripts.pory"
	walk_up
# 73 "data/maps/Route1/scripts.pory"
	walk_up
# 74 "data/maps/Route1/scripts.pory"
	walk_left
# 74 "data/maps/Route1/scripts.pory"
	walk_left
# 75 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 78 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2:
# 79 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 103 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_0:
# 104 "data/maps/Route1/scripts.pory"
	walk_up
# 105 "data/maps/Route1/scripts.pory"
	walk_left
# 105 "data/maps/Route1/scripts.pory"
	walk_left
# 105 "data/maps/Route1/scripts.pory"
	walk_left
# 105 "data/maps/Route1/scripts.pory"
	walk_left
# 106 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 108 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_1:
# 109 "data/maps/Route1/scripts.pory"
	walk_up
# 109 "data/maps/Route1/scripts.pory"
	walk_up
# 110 "data/maps/Route1/scripts.pory"
	walk_left
# 110 "data/maps/Route1/scripts.pory"
	walk_left
# 110 "data/maps/Route1/scripts.pory"
	walk_left
# 111 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 114 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_2:
# 115 "data/maps/Route1/scripts.pory"
	walk_left
# 115 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 128 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_0:
# 129 "data/maps/Route1/scripts.pory"
	walk_down
# 130 "data/maps/Route1/scripts.pory"
	walk_left
# 131 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 133 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_1:
# 134 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 189 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_0:
# 189 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 211 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_1:
# 211 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 225 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_0:
# 226 "data/maps/Route1/scripts.pory"
	walk_up
# 226 "data/maps/Route1/scripts.pory"
	walk_up
# 226 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 237 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_1:
# 238 "data/maps/Route1/scripts.pory"
	face_down
# 239 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 240 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 260 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_2:
# 261 "data/maps/Route1/scripts.pory"
	face_left
# 262 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 317 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_3:
# 318 "data/maps/Route1/scripts.pory"
	face_right
# 319 "data/maps/Route1/scripts.pory"
	delay_16
# 320 "data/maps/Route1/scripts.pory"
	delay_16
# 321 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 340 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_4:
# 340 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 341 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_5:
# 342 "data/maps/Route1/scripts.pory"
	walk_down
# 342 "data/maps/Route1/scripts.pory"
	walk_down
# 342 "data/maps/Route1/scripts.pory"
	walk_down
# 342 "data/maps/Route1/scripts.pory"
	walk_down
# 343 "data/maps/Route1/scripts.pory"
	walk_right
# 344 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 346 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_6:
# 347 "data/maps/Route1/scripts.pory"
	walk_down
# 347 "data/maps/Route1/scripts.pory"
	walk_down
# 347 "data/maps/Route1/scripts.pory"
	walk_down
# 347 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 350 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_7:
# 351 "data/maps/Route1/scripts.pory"
	walk_right
# 351 "data/maps/Route1/scripts.pory"
	walk_right
# 351 "data/maps/Route1/scripts.pory"
	walk_right
# 352 "data/maps/Route1/scripts.pory"
	walk_down
# 352 "data/maps/Route1/scripts.pory"
	walk_down
# 353 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 355 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_8:
# 356 "data/maps/Route1/scripts.pory"
	walk_right
# 357 "data/maps/Route1/scripts.pory"
	walk_down
# 357 "data/maps/Route1/scripts.pory"
	walk_down
# 358 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 390 "data/maps/Route1/scripts.pory"
Route1_EventScript_NoCake_Movement_0:
# 390 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

Route1_EventScript_RoadIsBlocked_Text_0:
# 181 "data/maps/Route1/scripts.pory"
	.string "Vee$"

Route1_EventScript_RoadIsBlocked_Text_1:
# 183 "data/maps/Route1/scripts.pory"
	.string "Oh, no!\n"
	.string "More grunts!\p"
	.string "But, but…!\n"
	.string "How will we get to Pyroden, then?\p"
	.string "Do we need to fight them?$"

Route1_EventScript_RoadIsBlocked_Text_2:
# 191 "data/maps/Route1/scripts.pory"
	.string "Fro$"

Route1_EventScript_RoadIsBlocked_Text_3:
# 193 "data/maps/Route1/scripts.pory"
	.string "Hey, chill out, girl.\n"
	.string "I know those guys.$"

Route1_EventScript_RoadIsBlocked_Text_4:
# 198 "data/maps/Route1/scripts.pory"
	.string "You…\n"
	.string "Do?$"

Route1_EventScript_RoadIsBlocked_Text_5:
# 203 "data/maps/Route1/scripts.pory"
	.string "Eeyup.\n"
	.string "From work.\p"
	.string "Some real bad apples, those ones.\p"
	.string "But I can talk with 'em.\n"
	.string "Figure something out.\p"
	.string "You guys go hide, and I'll handle this.$"

Route1_EventScript_RoadIsBlocked_Text_6:
# 215 "data/maps/Route1/scripts.pory"
	.string "Hmm…\n"
	.string "If he's sure…\p"
	.string "We should hide behind those\n"
	.string "trees,{PLAYER}!$"

Route1_EventScript_GruntBlocking_Continues_Text_0:
# 234 "data/maps/Route1/scripts.pory"
	.string "Hello, friends.$"

Route1_EventScript_GruntBlocking_Continues_Text_1:
# 248 "data/maps/Route1/scripts.pory"
	.string "Grunt 1$"

Route1_EventScript_GruntBlocking_Continues_Text_2:
# 250 "data/maps/Route1/scripts.pory"
	.string "GYAAAH!\n"
	.string "A talking Snorlax!!!$"

Route1_EventScript_GruntBlocking_Continues_Text_3:
# 255 "data/maps/Route1/scripts.pory"
	.string "Grunt 2$"

Route1_EventScript_GruntBlocking_Continues_Text_4:
# 257 "data/maps/Route1/scripts.pory"
	.string "That's just Fro, you idiot.$"

Route1_EventScript_GruntBlocking_Continues_Text_5:
# 267 "data/maps/Route1/scripts.pory"
	.string "… … …\p"
	.string "Oh yeah!\n"
	.string "It is, isn't it!\p"
	.string "Fro from the cafe!$"

Route1_EventScript_GruntBlocking_Continues_Text_6:
# 274 "data/maps/Route1/scripts.pory"
	.string "How's it going, man?$"

Route1_EventScript_GruntBlocking_Continues_Text_7:
# 277 "data/maps/Route1/scripts.pory"
	.string "Like a feast.\p"
	.string "Listen, you two.\n"
	.string "I need to pass.$"

Route1_EventScript_GruntBlocking_Continues_Text_8:
# 283 "data/maps/Route1/scripts.pory"
	.string "Aren't you supposed to be working right\n"
	.string "now?$"

Route1_EventScript_GruntBlocking_Continues_Text_9:
# 287 "data/maps/Route1/scripts.pory"
	.string "I am.\p"
	.string "I am…\n"
	.string "Gathering ingredients.$"

Route1_EventScript_GruntBlocking_Continues_Text_10:
# 293 "data/maps/Route1/scripts.pory"
	.string "The Boss didn't say you were gonna pass\n"
	.string "through here.$"

Route1_EventScript_GruntBlocking_Continues_Text_11:
# 297 "data/maps/Route1/scripts.pory"
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
# 310 "data/maps/Route1/scripts.pory"
	.string "Never heard of that.$"

Route1_EventScript_GruntBlocking_Continues_Text_13:
# 314 "data/maps/Route1/scripts.pory"
	.string "I have!$"

Route1_EventScript_GruntBlocking_Continues_Text_14:
# 326 "data/maps/Route1/scripts.pory"
	.string "Ok, look, how about this.\p"
	.string "We've been standing guard all day here.\p"
	.string "Catch my drift?\n"
	.string "We're mighty hungry.\p"
	.string "Bring us your {COLOR RED}famous meal{COLOR DARK_GRAY}, and we'll let\n"
	.string "you through.$"

Route1_EventScript_GruntBlocking_Continues_Text_15:
# 334 "data/maps/Route1/scripts.pory"
	.string "An acceptable condition.\n"
	.string "Yes, I can make that happen.\p"
	.string "Just wait here for a while, and I will\n"
	.string "bring it to you.$"

Route1_EventScript_GruntBlocking_Continues_Text_16:
# 363 "data/maps/Route1/scripts.pory"
	.string "I told you.\n"
	.string "Easy as pie.\p"
	.string "Now, we only need to {COLOR RED}craft {COLOR DARK_GRAY}my special\n"
	.string "meal, and they will let us pass.$"

Route1_EventScript_NoCake_Text_0:
# 386 "data/maps/Route1/scripts.pory"
	.string "Psst!\n"
	.string "{PLAYER}!\p"
	.string "We need to make them a meal first,\n"
	.string "remember?$"
