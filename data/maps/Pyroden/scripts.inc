# 1 "data/maps/Pyroden/scripts.pory"

# 2 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE, 2
# 3 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO, 3
# 4 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE_TOWN, 8
# 5 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO_TOWN, 10
# 6 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SUDOWOODO, 9
# 7 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SUNKERN, 7
# 8 "data/maps/Pyroden/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 9 "data/maps/Pyroden/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

Pyroden_MapScripts::
# 16 "data/maps/Pyroden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 17 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 22 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_ne Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 27 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 0
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 27 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 1
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 27 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 2
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 20 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 24 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUDOWOODO, MOVEMENT_TYPE_FACE_DOWN
# 25 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUNKERN, MOVEMENT_TYPE_WANDER_AROUND
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 29 "data/maps/Pyroden/scripts.pory"
	setvar VAR_SLOWPOKE_QUEST_STATE, 0
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7


Generic_EventScript_SpawnVeeFro::
# 38 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 39 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 40 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 41 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE
# 42 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO
	return


Pyroden_EventScript_IntroVeeDown::
# 49 "data/maps/Pyroden/scripts.pory"
	lock
# 50 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 51 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 55 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_1
# 59 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 62 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 63 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 64 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 65 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 66 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 67 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 68 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 69 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 75 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 76 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 77 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 78 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 79 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 80 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 81 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 82 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 83 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 84 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 85 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 86 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 87 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 88 "data/maps/Pyroden/scripts.pory"
	closemessage
# 89 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 90 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 91 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 92 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 93 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_6
# 94 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 95 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 96 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 97 "data/maps/Pyroden/scripts.pory"
	closemessage
# 98 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 99 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 100 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 101 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 102 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_IntroVeeUp::
# 108 "data/maps/Pyroden/scripts.pory"
	lock
# 109 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 110 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 114 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_0
# 118 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 121 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 122 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 123 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 124 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 125 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 126 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 127 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 128 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 129 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 134 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 135 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 136 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 137 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 138 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 139 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 140 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 141 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 142 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 143 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 144 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 145 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 146 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 147 "data/maps/Pyroden/scripts.pory"
	closemessage
# 148 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 149 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 150 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 151 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 152 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_2
# 153 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 154 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 155 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 156 "data/maps/Pyroden/scripts.pory"
	closemessage
# 157 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 158 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 159 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 160 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 161 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_InvestigationNotOver::
# 253 "data/maps/Pyroden/scripts.pory"
	lock
# 254 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_InvestigationNotOver_Text_0
# 258 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 259 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 260 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Slugma::
# 266 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Slugma_Text_0
# 267 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Slugma_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sandshrew::
# 279 "data/maps/Pyroden/scripts.pory"
	lock
# 280 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sandshrew_Text_0
# 281 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sandshrew_Text_1, MSGBOX_NPC
# 287 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_Sandshrew_2
Pyroden_EventScript_Sandshrew_1:
# 292 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Sandshrew_2:
# 289 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_TORCHES
# 290 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Sandshrew_1


Pyroden_EventScript_CheckHints::
# 298 "data/maps/Pyroden/scripts.pory"
	lock
# 299 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 300 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 303 "data/maps/Pyroden/scripts.pory"
	closemessage
# 304 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHints_4
Pyroden_EventScript_CheckHints_1:
	return

Pyroden_EventScript_CheckHints_2:
# 309 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 310 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_1
# 314 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 315 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_VEE_TOWN, 13, 37
# 316 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 317 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_FRO_TOWN, 14, 37
# 318 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
# 319 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_3:
# 306 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHints_7
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_4:
# 305 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHints_3
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_7:
# 307 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHints_2
	goto Pyroden_EventScript_CheckHints_1


Pyroden_EventScript_CheckHintsInside::
# 327 "data/maps/Pyroden/scripts.pory"
	lock
# 328 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 329 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 333 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHintsInside_4
Pyroden_EventScript_CheckHintsInside_1:
# 344 "data/maps/Pyroden/scripts.pory"
	closemessage
	return

Pyroden_EventScript_CheckHintsInside_2:
# 338 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 339 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHintsInside_Text_0
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_3:
# 335 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHintsInside_7
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_4:
# 334 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHintsInside_3
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_7:
# 336 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHintsInside_2
	goto Pyroden_EventScript_CheckHintsInside_1


Pyroden_EventScript_Growlithe::
# 350 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Growlithe_Text_0
# 351 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Growlithe_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sudowoodo::
# 359 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sudowoodo_Text_0
# 360 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sudowoodo_2
# 368 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sudowoodo_2:
# 362 "data/maps/Pyroden/scripts.pory"
	lock
# 363 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_1
# 364 "data/maps/Pyroden/scripts.pory"
	closemessage
# 365 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Fro::
# 376 "data/maps/Pyroden/scripts.pory"
	lock
# 377 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 378 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_0
# 383 "data/maps/Pyroden/scripts.pory"
	closemessage
# 384 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Vee::
# 390 "data/maps/Pyroden/scripts.pory"
	lock
# 391 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 392 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_0
# 398 "data/maps/Pyroden/scripts.pory"
	closemessage
# 399 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Sunkern::
# 405 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sunkern_Text_0
# 406 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sunkern_2
# 417 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sunkern_2:
# 408 "data/maps/Pyroden/scripts.pory"
	lock
# 409 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_1
# 413 "data/maps/Pyroden/scripts.pory"
	closemessage
# 414 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Nidorina::
# 427 "data/maps/Pyroden/scripts.pory"
	lock
# 428 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Nidorina_Text_0
# 429 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Nidorina_Text_1, MSGBOX_NPC
# 436 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_Nidorina_2
Pyroden_EventScript_Nidorina_1:
# 441 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Nidorina_2:
# 438 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_ENTRANCE
# 439 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Nidorina_1


Pyroden_EventScript_Snubbul::
# 447 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 448 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Spinda::
# 458 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 459 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_1
# 465 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


# 51 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_0:
# 52 "data/maps/Pyroden/scripts.pory"
	walk_left
# 53 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 55 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_1:
# 56 "data/maps/Pyroden/scripts.pory"
	walk_down
# 57 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 59 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_2:
# 60 "data/maps/Pyroden/scripts.pory"
	walk_in_place_down
	step_end

# 65 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_3:
# 65 "data/maps/Pyroden/scripts.pory"
	walk_in_place_left
	step_end

# 70 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_4:
# 71 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 72 "data/maps/Pyroden/scripts.pory"
	delay_16
# 73 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 89 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_5:
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
# 89 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 93 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_6:
# 93 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 114 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_0:
# 115 "data/maps/Pyroden/scripts.pory"
	walk_up
# 116 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 118 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_1:
# 119 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 152 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_2:
# 152 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 258 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_InvestigationNotOver_Movement_0:
# 258 "data/maps/Pyroden/scripts.pory"
	walk_left
	step_end

Pyroden_EventScript_IntroVeeDown_Text_0:
# 63 "data/maps/Pyroden/scripts.pory"
	.string "Vee$"

Pyroden_EventScript_IntroVeeDown_Text_1:
# 67 "data/maps/Pyroden/scripts.pory"
	.string "Fro$"

Pyroden_EventScript_InvestigationNotOver_Text_0:
# 255 "data/maps/Pyroden/scripts.pory"
	.string "The investigation is not over!\n"
	.string "Don't leave your friends like that!$"

Pyroden_EventScript_Slugma_Text_0:
# 266 "data/maps/Pyroden/scripts.pory"
	.string "Slugma$"

Pyroden_EventScript_Slugma_Text_1:
# 268 "data/maps/Pyroden/scripts.pory"
	.string "Welcome to Pyroden!\n"
	.string "Have you come for our world-famous hot\l"
	.string "springs?\p"
	.string "Lately they haven't been as hot,\n"
	.string "though.\p"
	.string "Maybe I should take a dip in lava.$"

Pyroden_EventScript_Sandshrew_Text_0:
# 280 "data/maps/Pyroden/scripts.pory"
	.string "Sandshrew$"

Pyroden_EventScript_Sandshrew_Text_1:
# 282 "data/maps/Pyroden/scripts.pory"
	.string "See those torches around town?\p"
	.string "They used to be burning bright all day\n"
	.string "and night.\p"
	.string "Dunno who turned them off.\n"
	.string "But it's definitely unusual.$"

Pyroden_EventScript_CheckHints_Text_0:
# 301 "data/maps/Pyroden/scripts.pory"
	.string "This felt like {COLOR RED}important information{COLOR DARK_GRAY}.$"

Pyroden_EventScript_CheckHints_Text_1:
# 311 "data/maps/Pyroden/scripts.pory"
	.string "You've gathered as many hints as you\n"
	.string "could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_CheckHintsInside_Text_0:
# 340 "data/maps/Pyroden/scripts.pory"
	.string "You feel like you've gathered as many\n"
	.string "hints as you could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_Growlithe_Text_0:
# 350 "data/maps/Pyroden/scripts.pory"
	.string "Growlithe$"

Pyroden_EventScript_Growlithe_Text_1:
# 352 "data/maps/Pyroden/scripts.pory"
	.string "Been some trouble lately, but the chief\n"
	.string "ain't doin' nothin' 'bout it.\p"
	.string "Reckon it'd be time to replace 'er.$"

Pyroden_EventScript_Sudowoodo_Text_0:
# 359 "data/maps/Pyroden/scripts.pory"
	.string "Sudowoodo$"

Pyroden_EventScript_Sudowoodo_Text_1:
# 363 "data/maps/Pyroden/scripts.pory"
	.string "I'm telling you, I'm not a tree!\p"
	.string "Are you racist or something?$"

Pyroden_EventScript_Sudowoodo_Text_2:
# 369 "data/maps/Pyroden/scripts.pory"
	.string "I'm glad I'm not a real tree, or I'd be\n"
	.string "burned to a crisp by now.$"

Pyroden_EventScript_Fro_Text_0:
# 379 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "What a funny looking tree.\p"
	.string "I wonder if it holds any secrets.$"

Pyroden_EventScript_Vee_Text_0:
# 393 "data/maps/Pyroden/scripts.pory"
	.string "Where were you last night!?\n"
	.string "Any alibi!?\p"
	.string "You did it, didn't you!?\p"
	.string "Confess!$"

Pyroden_EventScript_Sunkern_Text_0:
# 405 "data/maps/Pyroden/scripts.pory"
	.string "Sunkern$"

Pyroden_EventScript_Sunkern_Text_1:
# 410 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\l"
	.string "I don't know anything…$"

Pyroden_EventScript_Sunkern_Text_2:
# 418 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\p"
	.string "I don't really know much about the\n"
	.string "world…$"

Pyroden_EventScript_Nidorina_Text_0:
# 428 "data/maps/Pyroden/scripts.pory"
	.string "Nidorina$"

Pyroden_EventScript_Nidorina_Text_1:
# 430 "data/maps/Pyroden/scripts.pory"
	.string "There used to be an entrance to the\n"
	.string "volcano north of here.\p"
	.string "But now it's not there anymore?\n"
	.string "I'm not really sure what happened.\p"
	.string "One day it was there, and the next…\n"
	.string "Poof.$"

Pyroden_EventScript_Snubbul_Text_0:
# 447 "data/maps/Pyroden/scripts.pory"
	.string "Snubbul$"

Pyroden_EventScript_Snubbul_Text_1:
# 449 "data/maps/Pyroden/scripts.pory"
	.string "That spinning guy is SO annoying.\p"
	.string "I'm just trying to enjoy the hot\n"
	.string "springs, but he makes me dizzy just by\l"
	.string "looking at him.\p"
	.string "He NEVER leaves, either.\n"
	.string "Weirdo.$"

Pyroden_EventScript_Spinda_Text_0:
# 458 "data/maps/Pyroden/scripts.pory"
	.string "Spinda$"

Pyroden_EventScript_Spinda_Text_1:
# 460 "data/maps/Pyroden/scripts.pory"
	.string "Spinning round, and round, and round\n"
	.string "again!\l"
	.string "From dawn to dusk, from hot to cold!\p"
	.string "Up, and down, and all around!\n"
	.string "The spinning never stops!$"

Pyroden_Text_Intro_Vee_1::
# 166 "data/maps/Pyroden/scripts.pory"
	.string "Yahoo!\n"
	.string "We're finally in Pyroden!$"

Pyroden_Text_Intro_Fro_1::
# 173 "data/maps/Pyroden/scripts.pory"
	.string "Yes.\n"
	.string "I can already feel it.\p"
	.string "The heavenly warmth…\n"
	.string "Almost like being slow cooked…\p"
	.string "Hot springs, here I come.$"

Pyroden_Text_Intro_Vee_2::
# 184 "data/maps/Pyroden/scripts.pory"
	.string "Not so fast!\n"
	.string "We're not here just to relax!$"

Pyroden_Text_Intro_Fro_2::
# 192 "data/maps/Pyroden/scripts.pory"
	.string "I am.$"

Pyroden_Text_Intro_Vee_3::
# 199 "data/maps/Pyroden/scripts.pory"
	.string "No!\n"
	.string "We need to find the artifact, remember?\p"
	.string "You promised!$"

Pyroden_Text_Intro_Fro_3::
# 208 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Did I now…?\p"
	.string "… … …\p"
	.string "Alright, alright.\n"
	.string "We can do some info gathering.\p"
	.string "But after that, a visit to the hot\n"
	.string "springs is in order.$"

Pyroden_Text_Intro_Vee_4::
# 220 "data/maps/Pyroden/scripts.pory"
	.string "Yay!$"

Pyroden_Text_Intro_Fro_4::
# 225 "data/maps/Pyroden/scripts.pory"
	.string "How about this.\p"
	.string "Let's split up, and ask around if anyone\n"
	.string "has seen anything strange.\p"
	.string "Once we get enough info, let's meet up\n"
	.string "at the hot springs.\p"
	.string "Ready? Go.$"

Pyroden_Text_Intro_Vee_5::
# 235 "data/maps/Pyroden/scripts.pory"
	.string "…And theeere he goes.\n"
	.string "But this is exciting, isn't it?\p"
	.string "Back when I was in the lab, sometimes\n"
	.string "the guards left these comics around…\p"
	.string "I couldn't really read the words, but I\n"
	.string "liked the pictures a lot!\p"
	.string "And you know what they were about?\n"
	.string "Investigators!\p"
	.string "So, what I'm saying, {PLAYER}, is…\n"
	.string "Don't feel to bad if you can't crack\l"
	.string "this case by yourself.\p"
	.string "Because Special Agent Vee will get to\n"
	.string "the bottom of this!\n"
	.string "Gyahaha!$"
