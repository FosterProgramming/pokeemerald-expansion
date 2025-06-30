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
# 31 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_Left_2
# 36 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
Route1_EventScript_GruntBlocking_Left_1:
# 38 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 39 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_3
# 44 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_4
# 49 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 50 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Left_Movement_5
# 53 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 54 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_Left_5
# 60 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return

Route1_EventScript_GruntBlocking_Left_2:
# 33 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_StartGivingMeal
	goto Route1_EventScript_GruntBlocking_Left_1

Route1_EventScript_GruntBlocking_Left_5:
# 56 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FroDeliversMeal
	return


Route1_EventScript_GruntBlocking_MiddleLeft::
# 67 "data/maps/Route1/scripts.pory"
	lockall
# 68 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 69 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 73 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 77 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 78 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 79 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 80 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_MiddleLeft_2
# 85 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
Route1_EventScript_GruntBlocking_MiddleLeft_1:
# 87 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 88 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0
# 93 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_1
# 98 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 99 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 102 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 103 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_MiddleLeft_5
# 109 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return

Route1_EventScript_GruntBlocking_MiddleLeft_2:
# 82 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_StartGivingMeal
	goto Route1_EventScript_GruntBlocking_MiddleLeft_1

Route1_EventScript_GruntBlocking_MiddleLeft_5:
# 105 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FroDeliversMeal
	return


Route1_EventScript_GruntBlocking_MiddleRight::
# 116 "data/maps/Route1/scripts.pory"
	lockall
# 117 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 118 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_0
# 122 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Left_Movement_1
# 126 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 127 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 130 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 131 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_MiddleRight_2
# 136 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
Route1_EventScript_GruntBlocking_MiddleRight_1:
# 138 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 139 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleRight_Movement_0
# 144 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleRight_Movement_1
# 149 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 150 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleRight_Movement_2
# 153 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 156 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 157 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_MiddleRight_5
# 163 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return

Route1_EventScript_GruntBlocking_MiddleRight_2:
# 133 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_StartGivingMeal
	goto Route1_EventScript_GruntBlocking_MiddleRight_1

Route1_EventScript_GruntBlocking_MiddleRight_5:
# 159 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FroDeliversMeal
	return


Route1_EventScript_GruntBlocking_Right::
# 169 "data/maps/Route1/scripts.pory"
	lockall
# 170 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_SpawnParty
# 171 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Right_Movement_0
# 176 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Right_Movement_1
# 180 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Right_Movement_2
# 181 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 182 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Right_Movement_3
# 183 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 184 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_Right_2
# 189 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_RoadIsBlocked
Route1_EventScript_GruntBlocking_Right_1:
# 191 "data/maps/Route1/scripts.pory"
	special SpawnCameraObject
# 192 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_MiddleRight_Movement_0
# 197 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleRight_Movement_1
# 202 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_VEE
# 203 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleRight_Movement_2
# 206 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 209 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 210 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_GruntBlocking_Right_5
# 216 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_GruntBlocking_Continues
	return

Route1_EventScript_GruntBlocking_Right_2:
# 186 "data/maps/Route1/scripts.pory"
	call Route1_EventScript_StartGivingMeal
	goto Route1_EventScript_GruntBlocking_Right_1

Route1_EventScript_GruntBlocking_Right_5:
# 212 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_FroDeliversMeal
	return


Route1_EventScript_SpawnParty::
# 222 "data/maps/Route1/scripts.pory"
	checkitem ITEM_POTION
# 223 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_TALKED_TO_GRUNTS_ROUTE1, Route1_EventScript_SpawnParty_3
Route1_EventScript_SpawnParty_1:
# 227 "data/maps/Route1/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 228 "data/maps/Route1/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 229 "data/maps/Route1/scripts.pory"
	clearflag FLAG_SYS_HIDE_FRO_PARTY_MEMBER
# 230 "data/maps/Route1/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 231 "data/maps/Route1/scripts.pory"
	addobject LOCALID_VEE
# 232 "data/maps/Route1/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 233 "data/maps/Route1/scripts.pory"
	addobject LOCALID_FRO
	return

Route1_EventScript_SpawnParty_2:
# 225 "data/maps/Route1/scripts.pory"
	goto Route1_EventScript_NoCake
	goto Route1_EventScript_SpawnParty_1

Route1_EventScript_SpawnParty_3:
# 223 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Route1_EventScript_SpawnParty_2
	goto Route1_EventScript_SpawnParty_1


Route1_EventScript_RoadIsBlocked::
# 238 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 239 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_1
# 246 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_RoadIsBlocked_Movement_0
# 247 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_RoadIsBlocked_Movement_1
# 248 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 249 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_3
# 253 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 254 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_4
# 258 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 259 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_5
# 267 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Left_Movement_2
# 268 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_RoadIsBlocked_Movement_2
# 269 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 270 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 271 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RoadIsBlocked_Text_6
	return


Route1_EventScript_GruntBlocking_Continues::
# 281 "data/maps/Route1/scripts.pory"
	closemessage
# 282 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 285 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 288 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 289 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 290 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_0
# 293 "data/maps/Route1/scripts.pory"
	playse SE_PIN
# 294 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Continues_Movement_1
# 299 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Continues_Movement_1
# 304 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 305 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 306 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_2
# 310 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_RoadIsBlocked_Movement_0
# 311 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 312 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 313 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_4
# 316 "data/maps/Route1/scripts.pory"
	closemessage
# 317 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Continues_Movement_2
# 323 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 324 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 325 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_5
# 330 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Right_Movement_3
# 331 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Right_Movement_3
# 332 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_6
# 333 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 334 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_7
# 339 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 340 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_8
# 343 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 344 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_9
# 349 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 350 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_10
# 353 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 354 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_11
# 366 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 367 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_12
# 370 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 371 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_13
# 374 "data/maps/Route1/scripts.pory"
	closemessage
# 375 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_GruntBlocking_Continues_Movement_3
# 382 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 383 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 384 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_14
# 391 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 392 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_15
# 397 "data/maps/Route1/scripts.pory"
	closemessage
# 398 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_RoadIsBlocked_Movement_0
# 399 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_GruntBlocking_Right_Movement_2
# 400 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Continues_Movement_4
# 405 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Continues_Movement_5
# 408 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 409 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_GruntBlocking_Continues_Movement_6
# 414 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Continues_Movement_7
# 419 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 420 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 421 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_GruntBlocking_Continues_Text_16
# 426 "data/maps/Route1/scripts.pory"
	closemessage
# 427 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 430 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_Left_Movement_5
# 433 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 434 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_VEE
# 435 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_FRO
# 436 "data/maps/Route1/scripts.pory"
	special RemoveCameraObject
# 437 "data/maps/Route1/scripts.pory"
	setflag FLAG_TALKED_TO_GRUNTS_ROUTE1
# 438 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_NoCake::
# 443 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 444 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_NoCake_Text_0
# 449 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_NoCake_Movement_0
# 450 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 451 "data/maps/Route1/scripts.pory"
	releaseall
	end


Route1_EventScript_StartGivingMeal::
# 457 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 458 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_StartGivingMeal_Text_0
# 463 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_RoadIsBlocked_Movement_0
# 464 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_StartGivingMeal_Movement_0
# 465 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 466 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 467 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_StartGivingMeal_Text_1
	return


Route1_EventScript_FroDeliversMeal::
# 476 "data/maps/Route1/scripts.pory"
	closemessage
# 477 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 480 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_Continues_Movement_0
# 483 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 484 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 485 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_0
# 489 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_FroDeliversMeal_Movement_0
# 493 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_FroDeliversMeal_Movement_0
# 497 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 498 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 499 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_1
# 503 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 504 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_2
# 508 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 509 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_3
# 513 "data/maps/Route1/scripts.pory"
	closemessage
# 514 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_FroDeliversMeal_Movement_1
# 531 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 532 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 533 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_4
# 537 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 538 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_5
# 543 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 544 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_6
# 548 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_3
# 549 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_7
# 554 "data/maps/Route1/scripts.pory"
	closemessage
# 555 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_FroDeliversMeal_Movement_2
# 559 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_F, Route1_EventScript_FroDeliversMeal_Movement_3
# 565 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_GRUNT_F
# 566 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_GRUNT_F
# 567 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_FroDeliversMeal_Movement_4
# 573 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_FroDeliversMeal_Movement_5
# 576 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_GRUNT_M
# 577 "data/maps/Route1/scripts.pory"
	playse SE_PIN
# 578 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_FroDeliversMeal_Movement_6
# 582 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_GRUNT_M
# 583 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 584 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_8
# 587 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 588 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_9
# 591 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 592 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_10
# 595 "data/maps/Route1/scripts.pory"
	closemessage
# 596 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_FroDeliversMeal_Movement_7
# 600 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 601 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 602 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_11
# 609 "data/maps/Route1/scripts.pory"
	playse SE_PIN
# 610 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_FroDeliversMeal_Movement_8
# 614 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 615 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 616 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_12
# 621 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 622 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_13
# 628 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_GruntBlocking_Continues_Text_1
# 629 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_14
# 637 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 638 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_15
# 644 "data/maps/Route1/scripts.pory"
	playse SE_PIN
# 645 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_GRUNT_M, Route1_EventScript_FroDeliversMeal_Movement_9
# 650 "data/maps/Route1/scripts.pory"
	waitmovement 0
# 651 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_GRUNT_M
# 652 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_FroDeliversMeal_Movement_10
# 656 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_FroDeliversMeal_Movement_11
# 659 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route1_EventScript_FroDeliversMeal_Movement_11
# 662 "data/maps/Route1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 665 "data/maps/Route1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 666 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 667 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_16
# 671 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_0
# 672 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_17
# 675 "data/maps/Route1/scripts.pory"
	speakername Route1_EventScript_RoadIsBlocked_Text_2
# 676 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_FroDeliversMeal_Text_18
# 682 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VEE, Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2
# 685 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_FRO, Route1_EventScript_GruntBlocking_MiddleRight_Movement_2
# 688 "data/maps/Route1/scripts.pory"
	waitmovement LOCALID_FRO
# 689 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_VEE
# 690 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_FRO
# 691 "data/maps/Route1/scripts.pory"
	special RemoveCameraObject
# 692 "data/maps/Route1/scripts.pory"
	setvar VAR_ROUTE_1_STATE, 1
# 693 "data/maps/Route1/scripts.pory"
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

# 39 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_3:
# 40 "data/maps/Route1/scripts.pory"
	walk_up
# 41 "data/maps/Route1/scripts.pory"
	walk_left
# 41 "data/maps/Route1/scripts.pory"
	walk_left
# 42 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 44 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_4:
# 45 "data/maps/Route1/scripts.pory"
	walk_up
# 45 "data/maps/Route1/scripts.pory"
	walk_up
# 46 "data/maps/Route1/scripts.pory"
	walk_left
# 47 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 50 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Left_Movement_5:
# 51 "data/maps/Route1/scripts.pory"
	walk_right
	step_end

# 88 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_0:
# 89 "data/maps/Route1/scripts.pory"
	walk_up
# 90 "data/maps/Route1/scripts.pory"
	walk_left
# 90 "data/maps/Route1/scripts.pory"
	walk_left
# 90 "data/maps/Route1/scripts.pory"
	walk_left
# 91 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 93 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_1:
# 94 "data/maps/Route1/scripts.pory"
	walk_up
# 94 "data/maps/Route1/scripts.pory"
	walk_up
# 95 "data/maps/Route1/scripts.pory"
	walk_left
# 95 "data/maps/Route1/scripts.pory"
	walk_left
# 96 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 99 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleLeft_Movement_2:
# 100 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 139 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_0:
# 140 "data/maps/Route1/scripts.pory"
	walk_up
# 141 "data/maps/Route1/scripts.pory"
	walk_left
# 141 "data/maps/Route1/scripts.pory"
	walk_left
# 141 "data/maps/Route1/scripts.pory"
	walk_left
# 141 "data/maps/Route1/scripts.pory"
	walk_left
# 142 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 144 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_1:
# 145 "data/maps/Route1/scripts.pory"
	walk_up
# 145 "data/maps/Route1/scripts.pory"
	walk_up
# 146 "data/maps/Route1/scripts.pory"
	walk_left
# 146 "data/maps/Route1/scripts.pory"
	walk_left
# 146 "data/maps/Route1/scripts.pory"
	walk_left
# 147 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 150 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_MiddleRight_Movement_2:
# 151 "data/maps/Route1/scripts.pory"
	walk_left
# 151 "data/maps/Route1/scripts.pory"
	walk_left
	step_end

# 171 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_0:
# 172 "data/maps/Route1/scripts.pory"
	walk_down
# 173 "data/maps/Route1/scripts.pory"
	walk_left
# 174 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 176 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_1:
# 177 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_in_place_down
	step_end

# 180 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_2:
# 180 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 182 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Right_Movement_3:
# 182 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 246 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_0:
# 246 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 247 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_1:
# 247 "data/maps/Route1/scripts.pory"
	walk_in_place_fast_right
	step_end

# 268 "data/maps/Route1/scripts.pory"
Route1_EventScript_RoadIsBlocked_Movement_2:
# 268 "data/maps/Route1/scripts.pory"
	face_up
	step_end

# 282 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_0:
# 283 "data/maps/Route1/scripts.pory"
	walk_up
# 283 "data/maps/Route1/scripts.pory"
	walk_up
# 283 "data/maps/Route1/scripts.pory"
	walk_up
	step_end

# 294 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_1:
# 295 "data/maps/Route1/scripts.pory"
	face_down
# 296 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 297 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 317 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_2:
# 318 "data/maps/Route1/scripts.pory"
	face_left
# 319 "data/maps/Route1/scripts.pory"
	delay_16
# 320 "data/maps/Route1/scripts.pory"
	delay_16
# 321 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 375 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_3:
# 376 "data/maps/Route1/scripts.pory"
	face_right
# 377 "data/maps/Route1/scripts.pory"
	delay_16
# 378 "data/maps/Route1/scripts.pory"
	delay_16
# 379 "data/maps/Route1/scripts.pory"
	delay_16
# 380 "data/maps/Route1/scripts.pory"
	face_down
	step_end

# 400 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_4:
# 401 "data/maps/Route1/scripts.pory"
	walk_down
# 401 "data/maps/Route1/scripts.pory"
	walk_down
# 401 "data/maps/Route1/scripts.pory"
	walk_down
# 401 "data/maps/Route1/scripts.pory"
	walk_down
# 402 "data/maps/Route1/scripts.pory"
	walk_right
# 403 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 405 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_5:
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
# 406 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 409 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_6:
# 410 "data/maps/Route1/scripts.pory"
	walk_right
# 410 "data/maps/Route1/scripts.pory"
	walk_right
# 410 "data/maps/Route1/scripts.pory"
	walk_right
# 411 "data/maps/Route1/scripts.pory"
	walk_down
# 411 "data/maps/Route1/scripts.pory"
	walk_down
# 412 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 414 "data/maps/Route1/scripts.pory"
Route1_EventScript_GruntBlocking_Continues_Movement_7:
# 415 "data/maps/Route1/scripts.pory"
	walk_right
# 416 "data/maps/Route1/scripts.pory"
	walk_down
# 416 "data/maps/Route1/scripts.pory"
	walk_down
# 417 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 449 "data/maps/Route1/scripts.pory"
Route1_EventScript_NoCake_Movement_0:
# 449 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 464 "data/maps/Route1/scripts.pory"
Route1_EventScript_StartGivingMeal_Movement_0:
# 464 "data/maps/Route1/scripts.pory"
	walk_in_place_right
	step_end

# 489 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_0:
# 490 "data/maps/Route1/scripts.pory"
	face_down
# 491 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 514 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_1:
# 515 "data/maps/Route1/scripts.pory"
	walk_left
# 516 "data/maps/Route1/scripts.pory"
	face_up
# 517 "data/maps/Route1/scripts.pory"
	delay_16
# 518 "data/maps/Route1/scripts.pory"
	walk_in_place_up
# 519 "data/maps/Route1/scripts.pory"
	delay_16
# 520 "data/maps/Route1/scripts.pory"
	delay_16
# 521 "data/maps/Route1/scripts.pory"
	walk_right
# 521 "data/maps/Route1/scripts.pory"
	walk_right
# 522 "data/maps/Route1/scripts.pory"
	face_up
# 523 "data/maps/Route1/scripts.pory"
	delay_16
# 524 "data/maps/Route1/scripts.pory"
	walk_in_place_up
# 525 "data/maps/Route1/scripts.pory"
	delay_16
# 526 "data/maps/Route1/scripts.pory"
	delay_16
# 527 "data/maps/Route1/scripts.pory"
	walk_left
# 528 "data/maps/Route1/scripts.pory"
	face_up
# 529 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 555 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_2:
# 556 "data/maps/Route1/scripts.pory"
	walk_left
# 557 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 559 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_3:
# 560 "data/maps/Route1/scripts.pory"
	walk_right
# 561 "data/maps/Route1/scripts.pory"
	walk_down
# 561 "data/maps/Route1/scripts.pory"
	walk_down
# 561 "data/maps/Route1/scripts.pory"
	walk_down
# 561 "data/maps/Route1/scripts.pory"
	walk_down
# 562 "data/maps/Route1/scripts.pory"
	walk_right
# 563 "data/maps/Route1/scripts.pory"
	walk_down
# 563 "data/maps/Route1/scripts.pory"
	walk_down
# 563 "data/maps/Route1/scripts.pory"
	walk_down
# 563 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 567 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_4:
# 568 "data/maps/Route1/scripts.pory"
	walk_down
# 568 "data/maps/Route1/scripts.pory"
	walk_down
# 568 "data/maps/Route1/scripts.pory"
	walk_down
# 569 "data/maps/Route1/scripts.pory"
	delay_16
# 569 "data/maps/Route1/scripts.pory"
	delay_16
# 570 "data/maps/Route1/scripts.pory"
	face_left
# 571 "data/maps/Route1/scripts.pory"
	delay_16
# 571 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 573 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_5:
# 574 "data/maps/Route1/scripts.pory"
	walk_down
# 574 "data/maps/Route1/scripts.pory"
	walk_down
	step_end

# 578 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_6:
# 579 "data/maps/Route1/scripts.pory"
	emote_question_mark
# 580 "data/maps/Route1/scripts.pory"
	delay_16
# 580 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 596 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_7:
# 597 "data/maps/Route1/scripts.pory"
	walk_down
# 597 "data/maps/Route1/scripts.pory"
	walk_down
# 598 "data/maps/Route1/scripts.pory"
	face_right
	step_end

# 610 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_8:
# 611 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 612 "data/maps/Route1/scripts.pory"
	delay_16
	step_end

# 645 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_9:
# 646 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 647 "data/maps/Route1/scripts.pory"
	delay_16
# 647 "data/maps/Route1/scripts.pory"
	delay_16
# 648 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route1/scripts.pory"
	walk_fast_down
# 648 "data/maps/Route1/scripts.pory"
	walk_fast_down
	step_end

# 652 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_10:
# 653 "data/maps/Route1/scripts.pory"
	walk_right
# 653 "data/maps/Route1/scripts.pory"
	walk_right
# 654 "data/maps/Route1/scripts.pory"
	face_left
	step_end

# 656 "data/maps/Route1/scripts.pory"
Route1_EventScript_FroDeliversMeal_Movement_11:
# 657 "data/maps/Route1/scripts.pory"
	walk_right
# 657 "data/maps/Route1/scripts.pory"
	walk_right
	step_end

Route1_EventScript_RoadIsBlocked_Text_0:
# 238 "data/maps/Route1/scripts.pory"
	.string "Vee$"

Route1_EventScript_RoadIsBlocked_Text_1:
# 240 "data/maps/Route1/scripts.pory"
	.string "Oh, no!\n"
	.string "More grunts!\p"
	.string "But, but…!\n"
	.string "How will we get to Pyroden, then?\p"
	.string "Do we need to fight them?$"

Route1_EventScript_RoadIsBlocked_Text_2:
# 248 "data/maps/Route1/scripts.pory"
	.string "Fro$"

Route1_EventScript_RoadIsBlocked_Text_3:
# 250 "data/maps/Route1/scripts.pory"
	.string "Hey, chill out, girl.\n"
	.string "I know those guys.$"

Route1_EventScript_RoadIsBlocked_Text_4:
# 255 "data/maps/Route1/scripts.pory"
	.string "You…\n"
	.string "Do?$"

Route1_EventScript_RoadIsBlocked_Text_5:
# 260 "data/maps/Route1/scripts.pory"
	.string "Eeyup.\n"
	.string "From work.\p"
	.string "Some real bad apples, those ones.\p"
	.string "But I can talk with 'em.\n"
	.string "Figure something out.\p"
	.string "You guys go hide, and I'll handle this.$"

Route1_EventScript_RoadIsBlocked_Text_6:
# 272 "data/maps/Route1/scripts.pory"
	.string "Hmm…\n"
	.string "If he's sure…\p"
	.string "We should hide behind those trees,\n"
	.string "{PLAYER}!$"

Route1_EventScript_GruntBlocking_Continues_Text_0:
# 291 "data/maps/Route1/scripts.pory"
	.string "Hello, friends.$"

Route1_EventScript_GruntBlocking_Continues_Text_1:
# 305 "data/maps/Route1/scripts.pory"
	.string "Grunt 1$"

Route1_EventScript_GruntBlocking_Continues_Text_2:
# 307 "data/maps/Route1/scripts.pory"
	.string "GYAAAH!\n"
	.string "A talking Snorlax!!!$"

Route1_EventScript_GruntBlocking_Continues_Text_3:
# 312 "data/maps/Route1/scripts.pory"
	.string "Grunt 2$"

Route1_EventScript_GruntBlocking_Continues_Text_4:
# 314 "data/maps/Route1/scripts.pory"
	.string "That's just Fro, you idiot.$"

Route1_EventScript_GruntBlocking_Continues_Text_5:
# 326 "data/maps/Route1/scripts.pory"
	.string "Oh yeah!\n"
	.string "It is, isn't it!\p"
	.string "Fro from the cafe!$"

Route1_EventScript_GruntBlocking_Continues_Text_6:
# 332 "data/maps/Route1/scripts.pory"
	.string "How's it going, man?$"

Route1_EventScript_GruntBlocking_Continues_Text_7:
# 335 "data/maps/Route1/scripts.pory"
	.string "Like a feast.\p"
	.string "Listen, you two.\n"
	.string "I need to pass.$"

Route1_EventScript_GruntBlocking_Continues_Text_8:
# 341 "data/maps/Route1/scripts.pory"
	.string "Aren't you supposed to be working right\n"
	.string "now?$"

Route1_EventScript_GruntBlocking_Continues_Text_9:
# 345 "data/maps/Route1/scripts.pory"
	.string "Well.\p"
	.string "I am…\n"
	.string "Gathering ingredients.$"

Route1_EventScript_GruntBlocking_Continues_Text_10:
# 351 "data/maps/Route1/scripts.pory"
	.string "The Boss didn't say you were gonna pass\n"
	.string "through here.$"

Route1_EventScript_GruntBlocking_Continues_Text_11:
# 355 "data/maps/Route1/scripts.pory"
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
# 368 "data/maps/Route1/scripts.pory"
	.string "Never heard of that.$"

Route1_EventScript_GruntBlocking_Continues_Text_13:
# 372 "data/maps/Route1/scripts.pory"
	.string "I have!$"

Route1_EventScript_GruntBlocking_Continues_Text_14:
# 385 "data/maps/Route1/scripts.pory"
	.string "Ok, look, how about this.\p"
	.string "We've been standing guard all day here.\p"
	.string "Catch my drift?\n"
	.string "We're mighty hungry.\p"
	.string "Bring us your {COLOR RED}famous meal{COLOR DARK_GRAY}, and we'll let\n"
	.string "you through.$"

Route1_EventScript_GruntBlocking_Continues_Text_15:
# 393 "data/maps/Route1/scripts.pory"
	.string "An acceptable deal.\n"
	.string "Yes, I can make that happen.\p"
	.string "Just wait here for a while, and I will\n"
	.string "bring it to you.$"

Route1_EventScript_GruntBlocking_Continues_Text_16:
# 422 "data/maps/Route1/scripts.pory"
	.string "I told you.\n"
	.string "Easy as pie.\p"
	.string "Now, we only need to {COLOR RED}craft {COLOR DARK_GRAY}my special\n"
	.string "meal, and they will let us pass.$"

Route1_EventScript_NoCake_Text_0:
# 445 "data/maps/Route1/scripts.pory"
	.string "Psst!\n"
	.string "{PLAYER}!\p"
	.string "We need to make them a meal first,\n"
	.string "remember?$"

Route1_EventScript_StartGivingMeal_Text_0:
# 459 "data/maps/Route1/scripts.pory"
	.string "Ok!\n"
	.string "We got the special meal!\p"
	.string "Now we just gotta deliver it to those\n"
	.string "guys!$"

Route1_EventScript_StartGivingMeal_Text_1:
# 468 "data/maps/Route1/scripts.pory"
	.string "Yup, yup.\n"
	.string "I'm on it.$"

Route1_EventScript_FroDeliversMeal_Text_0:
# 486 "data/maps/Route1/scripts.pory"
	.string "Hi.\n"
	.string "I'm back.$"

Route1_EventScript_FroDeliversMeal_Text_1:
# 500 "data/maps/Route1/scripts.pory"
	.string "So…\n"
	.string "You brought it?$"

Route1_EventScript_FroDeliversMeal_Text_2:
# 505 "data/maps/Route1/scripts.pory"
	.string "Yeah!\n"
	.string "Do you have the goods?$"

Route1_EventScript_FroDeliversMeal_Text_3:
# 510 "data/maps/Route1/scripts.pory"
	.string "Yup.\n"
	.string "My special meal, just for you.$"

Route1_EventScript_FroDeliversMeal_Text_4:
# 534 "data/maps/Route1/scripts.pory"
	.string "Aw yeah, baby!\n"
	.string "That's the stuff!$"

Route1_EventScript_FroDeliversMeal_Text_5:
# 539 "data/maps/Route1/scripts.pory"
	.string "Hmm…\n"
	.string "It's a bit burnt.\p"
	.string "But I suppose it will have to do.$"

Route1_EventScript_FroDeliversMeal_Text_6:
# 545 "data/maps/Route1/scripts.pory"
	.string "Ok.\n"
	.string "Can I pass, now?$"

Route1_EventScript_FroDeliversMeal_Text_7:
# 550 "data/maps/Route1/scripts.pory"
	.string "A deal's a deal.\n"
	.string "We'll be getting out of here.\p"
	.string "Good luck with the surprise for the\n"
	.string "Boss, eh?$"

Route1_EventScript_FroDeliversMeal_Text_8:
# 585 "data/maps/Route1/scripts.pory"
	.string "What the heck is going on back there,\n"
	.string "anyway?$"

Route1_EventScript_FroDeliversMeal_Text_9:
# 589 "data/maps/Route1/scripts.pory"
	.string "Uh, nothing.$"

Route1_EventScript_FroDeliversMeal_Text_10:
# 593 "data/maps/Route1/scripts.pory"
	.string "No cause it kinda looks like-$"

Route1_EventScript_FroDeliversMeal_Text_11:
# 603 "data/maps/Route1/scripts.pory"
	.string "I would, uh.\n"
	.string "Recommend not looking there.\p"
	.string "Because.\p"
	.string "There's wild Pokémon that are…\n"
	.string "Eating each other.$"

Route1_EventScript_FroDeliversMeal_Text_12:
# 617 "data/maps/Route1/scripts.pory"
	.string "EATING each other?\n"
	.string "What the hell, man!\p"
	.string "That's gross!$"

Route1_EventScript_FroDeliversMeal_Text_13:
# 623 "data/maps/Route1/scripts.pory"
	.string "Yes.\n"
	.string "Nature can be cruel.\p"
	.string "That's why I'm hiding the sight from\n"
	.string "you.\p"
	.string "Wouldn't want to ruin your appetite.$"

Route1_EventScript_FroDeliversMeal_Text_14:
# 630 "data/maps/Route1/scripts.pory"
	.string "Yeah, thanks, man!\n"
	.string "That's intense!\p"
	.string "So, like…\n"
	.string "Now that you're a Pokémon…\p"
	.string "Do you also, like…\n"
	.string "Eat other wild Pokémon?$"

Route1_EventScript_FroDeliversMeal_Text_15:
# 639 "data/maps/Route1/scripts.pory"
	.string "Eat wild Pokémon?\n"
	.string "No, not really.\p"
	.string "But I do get a bit of a craving,\n"
	.string "sometimes…\p"
	.string "A craving for humans.$"

Route1_EventScript_FroDeliversMeal_Text_16:
# 668 "data/maps/Route1/scripts.pory"
	.string "Hee hee.\n"
	.string "That was funny.$"

Route1_EventScript_FroDeliversMeal_Text_17:
# 673 "data/maps/Route1/scripts.pory"
	.string "That was mean!$"

Route1_EventScript_FroDeliversMeal_Text_18:
# 677 "data/maps/Route1/scripts.pory"
	.string "Sometimes mean is funny.\n"
	.string "Besides, they're gone, now.\p"
	.string "Let's not wait any longer.\n"
	.string "I'm looking forward to the hot springs.$"
