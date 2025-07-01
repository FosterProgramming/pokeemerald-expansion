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
# 24 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_ne Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 29 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 0
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 29 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 1
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 29 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 2
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 19 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 20 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
# 21 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_VEE_TOWN, MOVEMENT_TYPE_FACE_RIGHT
# 22 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_FRO_TOWN, MOVEMENT_TYPE_FACE_LEFT
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 26 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUDOWOODO, MOVEMENT_TYPE_FACE_DOWN
# 27 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUNKERN, MOVEMENT_TYPE_WANDER_AROUND
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 31 "data/maps/Pyroden/scripts.pory"
	setvar VAR_SLOWPOKE_QUEST_STATE, 0
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7


Generic_EventScript_SpawnVeeFro::
# 40 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 41 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 42 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 43 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE
# 44 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO
	return


Pyroden_EventScript_IntroVeeDown::
# 51 "data/maps/Pyroden/scripts.pory"
	lock
# 52 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 53 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 57 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_1
# 61 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 64 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 65 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 66 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 67 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 68 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 69 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 70 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 71 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 72 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 77 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 78 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 79 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 80 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 81 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 82 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 83 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 84 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 85 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 86 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 87 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 88 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 89 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 90 "data/maps/Pyroden/scripts.pory"
	closemessage
# 91 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 92 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 93 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 94 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 95 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_6
# 96 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 97 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 98 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 99 "data/maps/Pyroden/scripts.pory"
	closemessage
# 100 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 101 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 102 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 103 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 104 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_IntroVeeUp::
# 110 "data/maps/Pyroden/scripts.pory"
	lock
# 111 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 112 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 116 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_0
# 120 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 123 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 124 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 125 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 126 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 127 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 128 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 129 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 130 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 131 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 136 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 137 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 138 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 139 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 140 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 141 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 142 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 143 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 144 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 145 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 146 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 147 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 148 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 149 "data/maps/Pyroden/scripts.pory"
	closemessage
# 150 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 151 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 152 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 153 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 154 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_2
# 155 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 156 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 157 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 158 "data/maps/Pyroden/scripts.pory"
	closemessage
# 159 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 160 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 161 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 162 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 163 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_InvestigationNotOver::
# 255 "data/maps/Pyroden/scripts.pory"
	lock
# 256 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_InvestigationNotOver_Text_0
# 260 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 261 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 262 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Slugma::
# 268 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Slugma_Text_0
# 269 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Slugma_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sandshrew::
# 281 "data/maps/Pyroden/scripts.pory"
	lock
# 282 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sandshrew_Text_0
# 283 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sandshrew_Text_1, MSGBOX_NPC
# 289 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_Sandshrew_2
Pyroden_EventScript_Sandshrew_1:
# 294 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Sandshrew_2:
# 291 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_TORCHES
# 292 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Sandshrew_1


Pyroden_EventScript_CheckHints::
# 300 "data/maps/Pyroden/scripts.pory"
	lock
# 301 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 302 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 305 "data/maps/Pyroden/scripts.pory"
	closemessage
# 306 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHints_4
Pyroden_EventScript_CheckHints_1:
	return

Pyroden_EventScript_CheckHints_2:
# 311 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 312 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_1
# 316 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 317 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_VEE_TOWN, 13, 37
# 318 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 319 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_FRO_TOWN, 14, 37
# 320 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
# 321 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_3:
# 308 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHints_7
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_4:
# 307 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHints_3
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_7:
# 309 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHints_2
	goto Pyroden_EventScript_CheckHints_1


Pyroden_EventScript_CheckHintsInside::
# 329 "data/maps/Pyroden/scripts.pory"
	lock
# 330 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 331 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 334 "data/maps/Pyroden/scripts.pory"
	closemessage
# 335 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHintsInside_4
Pyroden_EventScript_CheckHintsInside_1:
	return

Pyroden_EventScript_CheckHintsInside_2:
# 340 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 341 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_1
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_3:
# 337 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHintsInside_7
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_4:
# 336 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHintsInside_3
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_7:
# 338 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHintsInside_2
	goto Pyroden_EventScript_CheckHintsInside_1


Pyroden_EventScript_Growlithe::
# 351 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Growlithe_Text_0
# 352 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Growlithe_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sudowoodo::
# 360 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sudowoodo_Text_0
# 361 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sudowoodo_2
# 369 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sudowoodo_2:
# 363 "data/maps/Pyroden/scripts.pory"
	lock
# 364 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_1
# 365 "data/maps/Pyroden/scripts.pory"
	closemessage
# 366 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Fro::
# 377 "data/maps/Pyroden/scripts.pory"
	lock
# 378 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 379 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_0
# 384 "data/maps/Pyroden/scripts.pory"
	closemessage
# 385 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Vee::
# 391 "data/maps/Pyroden/scripts.pory"
	lock
# 392 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 393 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_0
# 399 "data/maps/Pyroden/scripts.pory"
	closemessage
# 400 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Sunkern::
# 406 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sunkern_Text_0
# 407 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sunkern_2
# 418 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sunkern_2:
# 409 "data/maps/Pyroden/scripts.pory"
	lock
# 410 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_1
# 414 "data/maps/Pyroden/scripts.pory"
	closemessage
# 415 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Nidorina::
# 428 "data/maps/Pyroden/scripts.pory"
	lock
# 429 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Nidorina_Text_0
# 430 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Nidorina_Text_1, MSGBOX_NPC
# 437 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_Nidorina_2
Pyroden_EventScript_Nidorina_1:
# 442 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Nidorina_2:
# 439 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_ENTRANCE
# 440 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Nidorina_1


Pyroden_EventScript_Snubbul::
# 448 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 449 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Spinda::
# 459 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 460 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_1
# 466 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


# 53 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_0:
# 54 "data/maps/Pyroden/scripts.pory"
	walk_left
# 55 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 57 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_1:
# 58 "data/maps/Pyroden/scripts.pory"
	walk_down
# 59 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 61 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_2:
# 62 "data/maps/Pyroden/scripts.pory"
	walk_in_place_down
	step_end

# 67 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_3:
# 67 "data/maps/Pyroden/scripts.pory"
	walk_in_place_left
	step_end

# 72 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_4:
# 73 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 74 "data/maps/Pyroden/scripts.pory"
	delay_16
# 75 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 91 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_5:
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
# 91 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 95 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_6:
# 95 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 116 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_0:
# 117 "data/maps/Pyroden/scripts.pory"
	walk_up
# 118 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 120 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_1:
# 121 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 154 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_2:
# 154 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 260 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_InvestigationNotOver_Movement_0:
# 260 "data/maps/Pyroden/scripts.pory"
	walk_left
	step_end

Pyroden_EventScript_IntroVeeDown_Text_0:
# 65 "data/maps/Pyroden/scripts.pory"
	.string "Vee$"

Pyroden_EventScript_IntroVeeDown_Text_1:
# 69 "data/maps/Pyroden/scripts.pory"
	.string "Fro$"

Pyroden_EventScript_InvestigationNotOver_Text_0:
# 257 "data/maps/Pyroden/scripts.pory"
	.string "The investigation is not over!\n"
	.string "Don't leave your friends like that!$"

Pyroden_EventScript_Slugma_Text_0:
# 268 "data/maps/Pyroden/scripts.pory"
	.string "Slugma$"

Pyroden_EventScript_Slugma_Text_1:
# 270 "data/maps/Pyroden/scripts.pory"
	.string "Welcome to Pyroden!\n"
	.string "Have you come for our world-famous hot\l"
	.string "springs?\p"
	.string "Lately they haven't been as hot,\n"
	.string "though.\p"
	.string "Maybe I should take a dip in lava.$"

Pyroden_EventScript_Sandshrew_Text_0:
# 282 "data/maps/Pyroden/scripts.pory"
	.string "Sandshrew$"

Pyroden_EventScript_Sandshrew_Text_1:
# 284 "data/maps/Pyroden/scripts.pory"
	.string "See those torches around town?\p"
	.string "They used to be burning bright all day\n"
	.string "and night.\p"
	.string "Dunno who turned them off.\n"
	.string "But it's definitely unusual.$"

Pyroden_EventScript_CheckHints_Text_0:
# 303 "data/maps/Pyroden/scripts.pory"
	.string "This felt like {COLOR RED}important information{COLOR DARK_GRAY}.$"

Pyroden_EventScript_CheckHints_Text_1:
# 313 "data/maps/Pyroden/scripts.pory"
	.string "You feel like you've gathered as many\n"
	.string "hints as you could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_Growlithe_Text_0:
# 351 "data/maps/Pyroden/scripts.pory"
	.string "Growlithe$"

Pyroden_EventScript_Growlithe_Text_1:
# 353 "data/maps/Pyroden/scripts.pory"
	.string "Been some trouble lately, but the chief\n"
	.string "ain't doin' nothin' 'bout it.\p"
	.string "Reckon it'd be time to replace 'er.$"

Pyroden_EventScript_Sudowoodo_Text_0:
# 360 "data/maps/Pyroden/scripts.pory"
	.string "Sudowoodo$"

Pyroden_EventScript_Sudowoodo_Text_1:
# 364 "data/maps/Pyroden/scripts.pory"
	.string "I'm telling you, I'm not a tree!\p"
	.string "Are you racist or something?$"

Pyroden_EventScript_Sudowoodo_Text_2:
# 370 "data/maps/Pyroden/scripts.pory"
	.string "I'm glad I'm not a real tree, or I'd be\n"
	.string "burned to a crisp by now.$"

Pyroden_EventScript_Fro_Text_0:
# 380 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "What a funny looking tree.\p"
	.string "I wonder if it holds any secrets.$"

Pyroden_EventScript_Vee_Text_0:
# 394 "data/maps/Pyroden/scripts.pory"
	.string "Where were you last night!?\n"
	.string "Any alibi!?\p"
	.string "You did it, didn't you!?\p"
	.string "Confess!$"

Pyroden_EventScript_Sunkern_Text_0:
# 406 "data/maps/Pyroden/scripts.pory"
	.string "Sunkern$"

Pyroden_EventScript_Sunkern_Text_1:
# 411 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\l"
	.string "I don't know anything…$"

Pyroden_EventScript_Sunkern_Text_2:
# 419 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\p"
	.string "I don't really know much about the\n"
	.string "world…$"

Pyroden_EventScript_Nidorina_Text_0:
# 429 "data/maps/Pyroden/scripts.pory"
	.string "Nidorina$"

Pyroden_EventScript_Nidorina_Text_1:
# 431 "data/maps/Pyroden/scripts.pory"
	.string "There used to be an entrance to the\n"
	.string "volcano north of here.\p"
	.string "But now it's not there anymore?\n"
	.string "I'm not really sure what happened.\p"
	.string "One day it was there, and the next…\n"
	.string "Poof.$"

Pyroden_EventScript_Snubbul_Text_0:
# 448 "data/maps/Pyroden/scripts.pory"
	.string "Snubbul$"

Pyroden_EventScript_Snubbul_Text_1:
# 450 "data/maps/Pyroden/scripts.pory"
	.string "That spinning guy is SO annoying.\p"
	.string "I'm just trying to enjoy the hot\n"
	.string "springs, but he makes me dizzy just by\l"
	.string "looking at him.\p"
	.string "He NEVER leaves, either.\n"
	.string "Weirdo.$"

Pyroden_EventScript_Spinda_Text_0:
# 459 "data/maps/Pyroden/scripts.pory"
	.string "Spinda$"

Pyroden_EventScript_Spinda_Text_1:
# 461 "data/maps/Pyroden/scripts.pory"
	.string "Spinning round, and round, and round\n"
	.string "again!\l"
	.string "From dawn to dusk, from hot to cold!\p"
	.string "Up, and down, and all around!\n"
	.string "The spinning never stops!$"

Pyroden_Text_Intro_Vee_1::
# 168 "data/maps/Pyroden/scripts.pory"
	.string "Yahoo!\n"
	.string "We're finally in Pyroden!$"

Pyroden_Text_Intro_Fro_1::
# 175 "data/maps/Pyroden/scripts.pory"
	.string "Yes.\n"
	.string "I can already feel it.\p"
	.string "The heavenly warmth…\n"
	.string "Almost like being slow cooked…\p"
	.string "Hot springs, here I come.$"

Pyroden_Text_Intro_Vee_2::
# 186 "data/maps/Pyroden/scripts.pory"
	.string "Not so fast!\n"
	.string "We're not here just to relax!$"

Pyroden_Text_Intro_Fro_2::
# 194 "data/maps/Pyroden/scripts.pory"
	.string "I am.$"

Pyroden_Text_Intro_Vee_3::
# 201 "data/maps/Pyroden/scripts.pory"
	.string "No!\n"
	.string "We need to find the artifact, remember?\p"
	.string "You promised!$"

Pyroden_Text_Intro_Fro_3::
# 210 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Did I now…?\p"
	.string "… … …\p"
	.string "Alright, alright.\n"
	.string "We can do some info gathering.\p"
	.string "But after that, a visit to the hot\n"
	.string "springs is in order.$"

Pyroden_Text_Intro_Vee_4::
# 222 "data/maps/Pyroden/scripts.pory"
	.string "Yay!$"

Pyroden_Text_Intro_Fro_4::
# 227 "data/maps/Pyroden/scripts.pory"
	.string "How about this.\p"
	.string "Let's split up, and ask around if anyone\n"
	.string "has seen anything strange.\p"
	.string "Once we get enough info, let's meet up\n"
	.string "at the hot springs.\p"
	.string "Ready? Go.$"

Pyroden_Text_Intro_Vee_5::
# 237 "data/maps/Pyroden/scripts.pory"
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
