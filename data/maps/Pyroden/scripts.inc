# 1 "data/maps/Pyroden/scripts.pory"

# 2 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE, 2
# 3 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO, 3
# 4 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE_TOWN, 10
# 5 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO_TOWN, 13
# 6 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SUDOWOODO, 10
# 7 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SUNKERN, 8
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


Generic_EventScript_SpawnVeeFro::
# 36 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 37 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 38 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 39 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE
# 40 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO
	return


Pyroden_EventScript_IntroVeeDown::
# 47 "data/maps/Pyroden/scripts.pory"
	lock
# 48 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 49 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 53 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_1
# 57 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 60 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 61 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 62 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 63 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 64 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 65 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 66 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 67 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 68 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 73 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 74 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 75 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 76 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 77 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 78 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 79 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 80 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 81 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 82 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 83 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 84 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 85 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 86 "data/maps/Pyroden/scripts.pory"
	closemessage
# 87 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 88 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 89 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 90 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 91 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_6
# 92 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 93 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 94 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 95 "data/maps/Pyroden/scripts.pory"
	closemessage
# 96 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 97 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 98 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 99 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 100 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_IntroVeeUp::
# 106 "data/maps/Pyroden/scripts.pory"
	lock
# 107 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 108 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 112 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_0
# 116 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 119 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 120 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 121 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 122 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 123 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 124 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 125 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 126 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 127 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 132 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 133 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 134 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 135 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 136 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 137 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 138 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 139 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 140 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 141 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 142 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 143 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 144 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 145 "data/maps/Pyroden/scripts.pory"
	closemessage
# 146 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 147 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 148 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 149 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 150 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_2
# 151 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 152 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 153 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 154 "data/maps/Pyroden/scripts.pory"
	closemessage
# 155 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 156 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 157 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 158 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 159 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_InvestigationNotOver::
# 251 "data/maps/Pyroden/scripts.pory"
	lock
# 252 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_InvestigationNotOver_Text_0
# 256 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 257 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 258 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Slugma::
# 264 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Slugma_Text_0
# 265 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Slugma_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sandshrew::
# 277 "data/maps/Pyroden/scripts.pory"
	lock
# 278 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sandshrew_Text_0
# 279 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sandshrew_Text_1, MSGBOX_NPC
# 285 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_Sandshrew_2
Pyroden_EventScript_Sandshrew_1:
# 290 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Sandshrew_2:
# 287 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_TORCHES
# 288 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Sandshrew_1


Pyroden_EventScript_CheckHints::
# 296 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 297 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 300 "data/maps/Pyroden/scripts.pory"
	closemessage
# 301 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHints_4
Pyroden_EventScript_CheckHints_1:
	return

Pyroden_EventScript_CheckHints_2:
# 306 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 307 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_1
# 311 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 312 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 313 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
# 314 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_VEE_TOWN, MOVEMENT_TYPE_FACE_RIGHT
# 315 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_FRO_TOWN, MOVEMENT_TYPE_FACE_LEFT
# 316 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_3:
# 303 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHints_7
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_4:
# 302 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHints_3
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_7:
# 304 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHints_2
	goto Pyroden_EventScript_CheckHints_1


Pyroden_EventScript_Growlithe::
# 323 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Growlithe_Text_0
# 324 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Growlithe_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sudowoodo::
# 332 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sudowoodo_Text_0
# 333 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sudowoodo_2
# 341 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sudowoodo_2:
# 335 "data/maps/Pyroden/scripts.pory"
	lock
# 336 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_1
# 337 "data/maps/Pyroden/scripts.pory"
	closemessage
# 338 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Fro::
# 349 "data/maps/Pyroden/scripts.pory"
	lock
# 350 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 351 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_0
# 356 "data/maps/Pyroden/scripts.pory"
	closemessage
# 357 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Vee::
# 363 "data/maps/Pyroden/scripts.pory"
	lock
# 364 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 365 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_0
# 371 "data/maps/Pyroden/scripts.pory"
	closemessage
# 372 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Sunkern::
# 378 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sunkern_Text_0
# 379 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sunkern_2
# 390 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sunkern_2:
# 381 "data/maps/Pyroden/scripts.pory"
	lock
# 382 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_1
# 386 "data/maps/Pyroden/scripts.pory"
	closemessage
# 387 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Nidorina::
# 400 "data/maps/Pyroden/scripts.pory"
	lock
# 401 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sandshrew_Text_0
# 402 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Nidorina_Text_0, MSGBOX_NPC
# 408 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_Nidorina_2
Pyroden_EventScript_Nidorina_1:
# 413 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Nidorina_2:
# 410 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_ENTRANCE
# 411 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Nidorina_1


Pyroden_EventScript_Snubbul::
# 419 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 420 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Spinda::
# 430 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 431 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_1
# 437 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


# 49 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_0:
# 50 "data/maps/Pyroden/scripts.pory"
	walk_left
# 51 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 53 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_1:
# 54 "data/maps/Pyroden/scripts.pory"
	walk_down
# 55 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 57 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_2:
# 58 "data/maps/Pyroden/scripts.pory"
	walk_in_place_down
	step_end

# 63 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_3:
# 63 "data/maps/Pyroden/scripts.pory"
	walk_in_place_left
	step_end

# 68 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_4:
# 69 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 70 "data/maps/Pyroden/scripts.pory"
	delay_16
# 71 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 87 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_5:
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
# 87 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 91 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_6:
# 91 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 112 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_0:
# 113 "data/maps/Pyroden/scripts.pory"
	walk_up
# 114 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 116 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_1:
# 117 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 150 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_2:
# 150 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 256 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_InvestigationNotOver_Movement_0:
# 256 "data/maps/Pyroden/scripts.pory"
	walk_left
	step_end

Pyroden_EventScript_IntroVeeDown_Text_0:
# 61 "data/maps/Pyroden/scripts.pory"
	.string "Vee$"

Pyroden_EventScript_IntroVeeDown_Text_1:
# 65 "data/maps/Pyroden/scripts.pory"
	.string "Fro$"

Pyroden_EventScript_InvestigationNotOver_Text_0:
# 253 "data/maps/Pyroden/scripts.pory"
	.string "The investigation is not over!\n"
	.string "Don't leave your friends like that!$"

Pyroden_EventScript_Slugma_Text_0:
# 264 "data/maps/Pyroden/scripts.pory"
	.string "Slugma$"

Pyroden_EventScript_Slugma_Text_1:
# 266 "data/maps/Pyroden/scripts.pory"
	.string "Welcome to Pyroden!\n"
	.string "Have you come for our world-famous hot\l"
	.string "springs?\p"
	.string "Lately they haven't been as hot,\n"
	.string "though.\p"
	.string "Maybe I should take a dip in lava.$"

Pyroden_EventScript_Sandshrew_Text_0:
# 278 "data/maps/Pyroden/scripts.pory"
	.string "Sandshrew$"

Pyroden_EventScript_Sandshrew_Text_1:
# 280 "data/maps/Pyroden/scripts.pory"
	.string "See those torches around town?\p"
	.string "They used to be burning bright all day\n"
	.string "and night.\p"
	.string "Dunno who turned them off.\n"
	.string "But it's definitely unusual.$"

Pyroden_EventScript_CheckHints_Text_0:
# 298 "data/maps/Pyroden/scripts.pory"
	.string "This felt like {COLOR RED}important information{COLOR DARK_GRAY}.$"

Pyroden_EventScript_CheckHints_Text_1:
# 308 "data/maps/Pyroden/scripts.pory"
	.string "You feel like you've gathered as many\n"
	.string "hints as you could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_Growlithe_Text_0:
# 323 "data/maps/Pyroden/scripts.pory"
	.string "Growlithe$"

Pyroden_EventScript_Growlithe_Text_1:
# 325 "data/maps/Pyroden/scripts.pory"
	.string "Been some trouble lately, but the chief\n"
	.string "ain't doin' nothin' 'bout it.\p"
	.string "Reckon it'd be time to replace 'im.$"

Pyroden_EventScript_Sudowoodo_Text_0:
# 332 "data/maps/Pyroden/scripts.pory"
	.string "Sudowoodo$"

Pyroden_EventScript_Sudowoodo_Text_1:
# 336 "data/maps/Pyroden/scripts.pory"
	.string "I'm telling you, I'm not a tree!\p"
	.string "Are you racist or something?$"

Pyroden_EventScript_Sudowoodo_Text_2:
# 342 "data/maps/Pyroden/scripts.pory"
	.string "I'm glad I'm not a real tree, or I'd be\n"
	.string "burned to a crisp by now.$"

Pyroden_EventScript_Fro_Text_0:
# 352 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "What a funny looking tree.\p"
	.string "I wonder if it holds any secrets.$"

Pyroden_EventScript_Vee_Text_0:
# 366 "data/maps/Pyroden/scripts.pory"
	.string "Where were you last night!?\n"
	.string "Any alibi!?\p"
	.string "You did it, didn't you!?\p"
	.string "Confess!$"

Pyroden_EventScript_Sunkern_Text_0:
# 378 "data/maps/Pyroden/scripts.pory"
	.string "Sunkern$"

Pyroden_EventScript_Sunkern_Text_1:
# 383 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\l"
	.string "I don't know anything…$"

Pyroden_EventScript_Sunkern_Text_2:
# 391 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\p"
	.string "I don't really know much about the\n"
	.string "world…$"

Pyroden_EventScript_Nidorina_Text_0:
# 403 "data/maps/Pyroden/scripts.pory"
	.string "I could have sworn there was an\n"
	.string "entrance to the volcano north of here.\p"
	.string "But now it's not there anymore?\n"
	.string "I'm not really sure what happened.\p"
	.string "Maybe I just imagined it.$"

Pyroden_EventScript_Snubbul_Text_0:
# 419 "data/maps/Pyroden/scripts.pory"
	.string "Snubbul$"

Pyroden_EventScript_Snubbul_Text_1:
# 421 "data/maps/Pyroden/scripts.pory"
	.string "That spinning guy is SO annoying.\p"
	.string "I'm just trying to enjoy the hot\n"
	.string "springs, but he makes me dizzy just by\l"
	.string "looking at him.\p"
	.string "He NEVER leaves, either.\n"
	.string "Weirdo.$"

Pyroden_EventScript_Spinda_Text_0:
# 430 "data/maps/Pyroden/scripts.pory"
	.string "Spinda$"

Pyroden_EventScript_Spinda_Text_1:
# 432 "data/maps/Pyroden/scripts.pory"
	.string "Spinning round, and round, and round\n"
	.string "again!\l"
	.string "From dawn to dusk, from hot to cold!\p"
	.string "Up, and down, and all around!\n"
	.string "The spinning never stops!$"

Pyroden_Text_Intro_Vee_1::
# 164 "data/maps/Pyroden/scripts.pory"
	.string "Yahoo!\n"
	.string "We're finally in Pyroden!$"

Pyroden_Text_Intro_Fro_1::
# 171 "data/maps/Pyroden/scripts.pory"
	.string "Yes.\n"
	.string "I can already feel it.\p"
	.string "The heavenly warmth…\n"
	.string "Almost like being slow cooked…\p"
	.string "Hot springs, here I come.$"

Pyroden_Text_Intro_Vee_2::
# 182 "data/maps/Pyroden/scripts.pory"
	.string "Not so fast!\n"
	.string "We're not here just to relax!$"

Pyroden_Text_Intro_Fro_2::
# 190 "data/maps/Pyroden/scripts.pory"
	.string "I am.$"

Pyroden_Text_Intro_Vee_3::
# 197 "data/maps/Pyroden/scripts.pory"
	.string "No!\n"
	.string "We need to find the artifact, remember?\p"
	.string "You promised!$"

Pyroden_Text_Intro_Fro_3::
# 206 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Did I now…?\p"
	.string "… … …\p"
	.string "Alright, alright.\n"
	.string "We can do some info gathering.\p"
	.string "But after that, a visit to the hot\n"
	.string "springs is in order.$"

Pyroden_Text_Intro_Vee_4::
# 218 "data/maps/Pyroden/scripts.pory"
	.string "Yay!$"

Pyroden_Text_Intro_Fro_4::
# 223 "data/maps/Pyroden/scripts.pory"
	.string "How about this.\p"
	.string "Let's split up, and ask around if anyone\n"
	.string "has seen anything strange.\p"
	.string "Once we get enough info, let's meet up\n"
	.string "at the hot springs.\p"
	.string "Ready? Go.$"

Pyroden_Text_Intro_Vee_5::
# 233 "data/maps/Pyroden/scripts.pory"
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
