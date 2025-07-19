# 1 "data/maps/Pyroden/scripts.pory"

# 2 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE, 1
# 3 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO, 2
# 4 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SPINDA, 4
# 5 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE_TOWN, 8
# 6 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO_TOWN, 10
# 7 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SUDOWOODO, 9
# 8 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SUNKERN, 7
# 9 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SNUBBUL, 15
# 10 "data/maps/Pyroden/scripts.pory"
.set LOCALID_SEEL_HOT_SPRINGS, 17
# 11 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO_HOT_SPRINGS, 18
# 12 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE_HOT_SPRINGS, 19
# 13 "data/maps/Pyroden/scripts.pory"
.set LOCALID_NIDORINA, 11
# 14 "data/maps/Pyroden/scripts.pory"
.set LOCALID_GIRATINA, 20
# 15 "data/maps/Pyroden/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 16 "data/maps/Pyroden/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

Pyroden_MapScripts::
# 23 "data/maps/Pyroden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 40 "data/maps/Pyroden/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Pyroden_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 24 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 29 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_ne Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 34 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 0
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 34 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 1
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 34 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 2
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 26 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 27 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 31 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUDOWOODO, MOVEMENT_TYPE_FACE_DOWN
# 32 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUNKERN, MOVEMENT_TYPE_WANDER_AROUND
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 36 "data/maps/Pyroden/scripts.pory"
	setvar VAR_SLOWPOKE_QUEST_STATE, 0
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7

Pyroden_MapScripts_MAP_SCRIPT_ON_LOAD:
# 41 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_PYRODEN_DOOR_OPENED, Pyroden_MapScripts_MAP_SCRIPT_ON_LOAD_2
Pyroden_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

Pyroden_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 42 "data/maps/Pyroden/scripts.pory"
	call SetPyrodenDoorMetatiles
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_LOAD_1


Generic_EventScript_SpawnVeeFro::
# 51 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 52 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 53 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 54 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE
# 55 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO
	return


Pyroden_EventScript_IntroVeeDown::
# 62 "data/maps/Pyroden/scripts.pory"
	lock
# 63 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 64 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 68 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_1
# 72 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 75 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 76 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 77 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 78 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 79 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 80 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 81 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 82 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 83 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 88 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 89 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 90 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 91 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 92 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 93 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 94 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 95 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 96 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 97 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 98 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 99 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 100 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 101 "data/maps/Pyroden/scripts.pory"
	closemessage
# 102 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 103 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 104 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 105 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 106 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_6
# 107 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 108 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 109 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 110 "data/maps/Pyroden/scripts.pory"
	closemessage
# 111 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 112 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 113 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 114 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 115 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_IntroVeeUp::
# 121 "data/maps/Pyroden/scripts.pory"
	lock
# 122 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 123 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 127 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_0
# 131 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 134 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 135 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 136 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 137 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 138 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 139 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 140 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 141 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 142 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 147 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 148 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 149 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 150 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 151 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 152 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 153 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 154 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 155 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 156 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 157 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 158 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 159 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 160 "data/maps/Pyroden/scripts.pory"
	closemessage
# 161 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 162 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 163 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 164 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 165 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_2
# 166 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 167 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 168 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 169 "data/maps/Pyroden/scripts.pory"
	closemessage
# 170 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 171 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 172 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 173 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 174 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_InvestigationNotOver::
# 266 "data/maps/Pyroden/scripts.pory"
	lock
# 267 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_InvestigationNotOver_Text_0
# 271 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 272 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 273 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Slugma::
# 279 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Slugma_Text_0
# 280 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Slugma_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sandshrew::
# 292 "data/maps/Pyroden/scripts.pory"
	lock
# 293 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sandshrew_Text_0
# 294 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sandshrew_Text_1, MSGBOX_NPC
# 300 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_Sandshrew_2
Pyroden_EventScript_Sandshrew_1:
# 305 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Sandshrew_2:
# 302 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_TORCHES
# 303 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Sandshrew_1


Pyroden_EventScript_CheckHints::
# 311 "data/maps/Pyroden/scripts.pory"
	lock
# 312 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 313 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 316 "data/maps/Pyroden/scripts.pory"
	closemessage
# 317 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHints_4
Pyroden_EventScript_CheckHints_1:
	return

Pyroden_EventScript_CheckHints_2:
# 322 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 323 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_1
# 327 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 328 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_VEE_TOWN, 13, 37
# 329 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 330 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_FRO_TOWN, 14, 37
# 331 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
# 332 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_3:
# 319 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHints_7
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_4:
# 318 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHints_3
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_7:
# 320 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHints_2
	goto Pyroden_EventScript_CheckHints_1


Pyroden_EventScript_CheckHintsInside::
# 340 "data/maps/Pyroden/scripts.pory"
	lock
# 341 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 342 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 346 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHintsInside_4
Pyroden_EventScript_CheckHintsInside_1:
# 357 "data/maps/Pyroden/scripts.pory"
	closemessage
	return

Pyroden_EventScript_CheckHintsInside_2:
# 351 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 352 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHintsInside_Text_0
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_3:
# 348 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHintsInside_7
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_4:
# 347 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHintsInside_3
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_7:
# 349 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHintsInside_2
	goto Pyroden_EventScript_CheckHintsInside_1


Pyroden_EventScript_Growlithe::
# 363 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Growlithe_Text_0
# 364 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Growlithe_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sudowoodo::
# 372 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sudowoodo_Text_0
# 373 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sudowoodo_2
# 381 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sudowoodo_2:
# 375 "data/maps/Pyroden/scripts.pory"
	lock
# 376 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_1
# 377 "data/maps/Pyroden/scripts.pory"
	closemessage
# 378 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Fro::
# 389 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 390 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_EventScript_Fro_2
# 438 "data/maps/Pyroden/scripts.pory"
	lock
# 439 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_3
# 444 "data/maps/Pyroden/scripts.pory"
	closemessage
# 445 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Fro_2:
# 392 "data/maps/Pyroden/scripts.pory"
	faceplayer
# 393 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_0, MSGBOX_YESNO
# 401 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 402 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Pyroden_EventScript_Fro_5
# 412 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 413 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_2
# 419 "data/maps/Pyroden/scripts.pory"
	closemessage
# 420 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Fro_Movement_0
# 425 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_Fro_Movement_1
# 428 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 429 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_2
# 434 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 435 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_FroJumpsInSprings
	end

Pyroden_EventScript_Fro_5:
# 404 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_1
# 409 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


Pyroden_EventScript_Vee::
# 451 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 452 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_EventScript_Vee_2
# 505 "data/maps/Pyroden/scripts.pory"
	lock
# 506 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_4
# 512 "data/maps/Pyroden/scripts.pory"
	closemessage
# 513 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Vee_2:
# 454 "data/maps/Pyroden/scripts.pory"
	faceplayer
# 455 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_0, MSGBOX_YESNO
# 463 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 464 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Pyroden_EventScript_Vee_5
# 474 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_2
# 478 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 479 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Vee_Movement_0
# 484 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 485 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 486 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_3
# 493 "data/maps/Pyroden/scripts.pory"
	closemessage
# 494 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_Fro_Movement_1
# 495 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Vee_Movement_1
# 496 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_2
# 501 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 502 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_FroJumpsInSprings
	end

Pyroden_EventScript_Vee_5:
# 466 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_1
# 471 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


Pyroden_EventScript_Sunkern::
# 519 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sunkern_Text_0
# 520 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sunkern_2
# 531 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sunkern_2:
# 522 "data/maps/Pyroden/scripts.pory"
	lock
# 523 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_1
# 527 "data/maps/Pyroden/scripts.pory"
	closemessage
# 528 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Nidorina::
# 541 "data/maps/Pyroden/scripts.pory"
	lock
# 542 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Nidorina_Text_0
# 543 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Nidorina_Text_1, MSGBOX_NPC
# 550 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_Nidorina_2
Pyroden_EventScript_Nidorina_1:
# 555 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Nidorina_2:
# 552 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_ENTRANCE
# 553 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Nidorina_1


Pyroden_EventScript_Snubbul::
# 561 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 562 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 1
	goto_if_gt Pyroden_EventScript_Snubbul_2
# 569 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Snubbul_2:
# 564 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Spinda::
# 579 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 580 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 2
	goto_if_gt Pyroden_EventScript_Spinda_2
# 589 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 2
	goto_if_eq Pyroden_EventScript_Spinda_5
# 605 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_3
# 611 "data/maps/Pyroden/scripts.pory"
	closemessage
	end

Pyroden_EventScript_Spinda_2:
# 582 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_1
	end

Pyroden_EventScript_Spinda_5:
# 591 "data/maps/Pyroden/scripts.pory"
	checkitem ITEM_FIRE_STONE
# 592 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Pyroden_EventScript_Spinda_8
# 597 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_2
# 602 "data/maps/Pyroden/scripts.pory"
	closemessage
	end

Pyroden_EventScript_Spinda_8:
# 594 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_TeachWillOWisp
	end


Pyroden_EventScript_FroJumpsInSprings::
# 617 "data/maps/Pyroden/scripts.pory"
	special SpawnCameraObject
# 618 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 619 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_0
# 622 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 623 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_0
# 628 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 629 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_1
# 632 "data/maps/Pyroden/scripts.pory"
	closemessage
# 633 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_IntroVeeUp_Movement_2
# 634 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 635 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_1
# 638 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 639 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_WHITE
# 640 "data/maps/Pyroden/scripts.pory"
	playse SE_LEDGE
# 641 "data/maps/Pyroden/scripts.pory"
	waitse
# 642 "data/maps/Pyroden/scripts.pory"
	playse SE_FALL
# 643 "data/maps/Pyroden/scripts.pory"
	waitse
# 644 "data/maps/Pyroden/scripts.pory"
	playse SE_M_EXPLOSION
# 645 "data/maps/Pyroden/scripts.pory"
	waitse
# 646 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 41, METATILE_Pyroden_EmptyPool_TopLeft, TRUE
# 647 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 41, METATILE_Pyroden_EmptyPool_TopMiddle, TRUE
# 648 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 41, METATILE_Pyroden_EmptyPool_TopRight, TRUE
# 649 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 42, METATILE_Pyroden_EmptyPool_TopLeft, TRUE
# 650 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 42, METATILE_Pyroden_EmptyPool_BottomRightCorner, TRUE
# 651 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 42, METATILE_Pyroden_EmptyPool_MiddleMiddle, TRUE
# 652 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 42, METATILE_Pyroden_EmptyPool_MiddleRight, TRUE
# 653 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 43, METATILE_Pyroden_EmptyPool_BottomLeft, TRUE
# 654 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 43 METATILE_Pyroden_EmptyPool_BottomMiddle, TRUE
# 655 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 43, METATILE_Pyroden_EmptyPool_BottomMiddle, TRUE
# 656 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 43, METATILE_Pyroden_EmptyPool_BottomRight, TRUE
# 658 "data/maps/Pyroden/scripts.pory"
	setmetatile 19, 39, METATILE_Pyroden_Puddle_TopLeft, FALSE
# 659 "data/maps/Pyroden/scripts.pory"
	setmetatile 20, 39, METATILE_Pyroden_Puddle_TopRight, FALSE
# 660 "data/maps/Pyroden/scripts.pory"
	setmetatile 19, 40, METATILE_Pyroden_Puddle_BottomLeft, FALSE
# 661 "data/maps/Pyroden/scripts.pory"
	setmetatile 20, 40, METATILE_Pyroden_Puddle_BottomRight, FALSE
# 663 "data/maps/Pyroden/scripts.pory"
	setmetatile 14, 40, METATILE_Pyroden_Puddle_TopLeft, FALSE
# 664 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 40, METATILE_Pyroden_Puddle_TopRight, FALSE
# 665 "data/maps/Pyroden/scripts.pory"
	setmetatile 14, 41, METATILE_Pyroden_Puddle_BottomLeft, FALSE
# 666 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 41, METATILE_Pyroden_Puddle_BottomRight, FALSE
# 667 "data/maps/Pyroden/scripts.pory"
	special DrawWholeMapView
# 668 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_1
# 669 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_2
# 670 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 671 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 672 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_3
# 681 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 682 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 683 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_2
# 687 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 688 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_3
# 693 "data/maps/Pyroden/scripts.pory"
	closemessage
# 694 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_4
# 697 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 698 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SNUBBUL
# 699 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_IntroVeeDown_Movement_6
# 702 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 703 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 704 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_4
# 708 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 709 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_5
# 712 "data/maps/Pyroden/scripts.pory"
	closemessage
# 713 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 714 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_TOWN
# 715 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_TOWN
# 716 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_5
# 720 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_6
# 723 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 724 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_HOT_SPRINGS_GANG
# 725 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SEEL_HOT_SPRINGS
# 726 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO_HOT_SPRINGS
# 727 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE_HOT_SPRINGS
# 728 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 729 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_7
# 732 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 733 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 734 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_6
# 739 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 740 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_7
# 745 "data/maps/Pyroden/scripts.pory"
	closemessage
# 746 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 747 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 748 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 749 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 750 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_8
# 751 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 752 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 753 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_8
# 757 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 758 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_9
# 762 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 763 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_10
# 764 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 765 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_IntroVeeUp_Movement_2
# 766 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 767 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 768 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 769 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_11
# 776 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 777 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_12
# 780 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 781 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 782 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 783 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_13
# 786 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 787 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_14
# 790 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 791 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 792 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_15
# 802 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 803 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_16
# 813 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 814 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_10
# 819 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 820 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 821 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_17
# 825 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 826 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_18
# 831 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 832 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_19
# 837 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 838 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_20
# 843 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 844 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_FroJumpsInSprings_Movement_11
# 851 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 852 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 853 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 854 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 855 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 856 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 857 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_21
# 863 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 864 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_22
# 868 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 869 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_23
# 884 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 885 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_24
# 889 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 890 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_25
# 893 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 894 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_26
# 900 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 901 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_27
# 904 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 905 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_28
# 911 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 912 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_29
# 916 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 917 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_30
# 924 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 925 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_31
# 929 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_IntroVeeUp_Movement_2
# 930 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 931 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 932 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_32
# 936 "data/maps/Pyroden/scripts.pory"
	closemessage
# 937 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 938 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_HOT_SPRINGS
# 939 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_HOT_SPRINGS
# 940 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SEEL_HOT_SPRINGS
# 941 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_SNUBBUL_PYRODEN
# 942 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SNUBBUL
# 943 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_NIDORINA_PYRODEN
# 944 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 2
# 945 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_12
# 948 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_13
# 953 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_FroJumpsInSprings_Movement_14
# 958 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 959 "data/maps/Pyroden/scripts.pory"
	special RemoveCameraObject
# 960 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end


Pyroden_EventScript_TeachWillOWisp::
# 966 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_PARTY_PYRODEN
# 967 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 968 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, PlayerXCoordinates, PlayerYCoordinates
# 969 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, PlayerXCoordinates, PlayerYCoordinates
# 970 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE_TOWN
# 971 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO_TOWN
# 972 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_0
# 973 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_1
# 974 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 975 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 976 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_0
# 981 "data/maps/Pyroden/scripts.pory"
	speakername NULL
# 982 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_1
# 985 "data/maps/Pyroden/scripts.pory"
	removeitem ITEM_FIRE_STONE
# 986 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 987 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_2
# 991 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 992 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_3
# 997 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 998 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_4
# 1005 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1006 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1007 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1011 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1012 "data/maps/Pyroden/scripts.pory"
	waitse
# 1013 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_5
# 1016 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1017 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_6
# 1025 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1026 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_7
# 1032 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1033 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_8
# 1040 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1041 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_3
# 1046 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_TeachWillOWisp_Movement_4
# 1051 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_5
# 1057 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE_TOWN
# 1058 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1059 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_9
# 1062 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1063 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_10
# 1066 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1067 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_6
# 1068 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1069 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1070 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_11
# 1074 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1075 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_IntroVeeDown_Movement_4
# 1080 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 1081 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_12
# 1084 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1085 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_4
# 1088 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1089 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_7
# 1093 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1094 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1095 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_13
# 1099 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1100 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_8
# 1126 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1127 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_14
# 1130 "data/maps/Pyroden/scripts.pory"
	fadeoutbgm 1
# 1131 "data/maps/Pyroden/scripts.pory"
	setweather WEATHER_SHADE
# 1132 "data/maps/Pyroden/scripts.pory"
	doweather
# 1133 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1134 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1135 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1136 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1137 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1138 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_9
# 1176 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1177 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1178 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_15
# 1181 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1182 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_10
# 1198 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1199 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1200 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_16
# 1203 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1204 "data/maps/Pyroden/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 1205 "data/maps/Pyroden/scripts.pory"
	doweather
# 1206 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1207 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_17
# 1211 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1212 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_11
# 1228 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1229 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_18
# 1233 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1234 "data/maps/Pyroden/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_NORMAL
# 1235 "data/maps/Pyroden/scripts.pory"
	waitmoncry
# 1236 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA
# 1237 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_GIRATINA
# 1238 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_GIRATINA, Pyroden_EventScript_TeachWillOWisp_Movement_12
# 1241 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1242 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1243 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_19
# 1246 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1247 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_20
# 1252 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1253 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_21
# 1256 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1257 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1258 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_22
# 1261 "data/maps/Pyroden/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_NORMAL
# 1262 "data/maps/Pyroden/scripts.pory"
	waitmoncry
# 1263 "data/maps/Pyroden/scripts.pory"
	setweather WEATHER_NONE
# 1264 "data/maps/Pyroden/scripts.pory"
	doweather
# 1265 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_GIRATINA, Pyroden_EventScript_TeachWillOWisp_Movement_13
# 1268 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1269 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1270 "data/maps/Pyroden/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 1271 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_GIRATINA
# 1272 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SNUBBUL
# 1273 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_SNUBBUL_PYRODEN
# 1274 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SNUBBUL
# 1275 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SNUBBUL, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 1276 "data/maps/Pyroden/scripts.pory"
	delay 120
# 1277 "data/maps/Pyroden/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 1278 "data/maps/Pyroden/scripts.pory"
	special WaitWeather
# 1279 "data/maps/Pyroden/scripts.pory"
	waitstate
# 1280 "data/maps/Pyroden/scripts.pory"
	fadeinbgm 1
# 1281 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_14
# 1285 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1286 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1287 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_23
# 1292 "data/maps/Pyroden/scripts.pory"
	speakername NULL
# 1293 "data/maps/Pyroden/scripts.pory"
	giveitem ITEM_WILLOWISP_TOOL
# 1294 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1295 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_24
# 1298 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1299 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_15
# 1300 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1301 "data/maps/Pyroden/scripts.pory"
	waitse
# 1302 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1303 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_25
# 1306 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1307 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_26
# 1313 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1314 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_27
# 1321 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1322 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_16
# 1327 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SPINDA, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE
# 1328 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_1
# 1329 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 1330 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1331 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1332 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_28
# 1337 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1338 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_29
# 1341 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1342 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_17
# 1343 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 1344 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1345 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_TOWN
# 1346 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_TOWN
# 1347 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_WILL_O_WISP
# 1348 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 3
# 1349 "data/maps/Pyroden/scripts.pory"
	end
	end


FirePit_Pyroden_Script::
# 1356 "data/maps/Pyroden/scripts.pory"
	lock
# 1357 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, FirePit_Pyroden_Script_2
# 1367 "data/maps/Pyroden/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 1368 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq FirePit_Pyroden_Script_20
FirePit_Pyroden_Script_1:
# 1373 "data/maps/Pyroden/scripts.pory"
	release
	end

FirePit_Pyroden_Script_2:
# 1359 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_PYRODEN_FIRE_1, FirePit_Pyroden_Script_8
FirePit_Pyroden_Script_5:
# 1364 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
	goto FirePit_Pyroden_Script_1

FirePit_Pyroden_Script_6:
# 1362 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_OpenSecretDoor
	goto FirePit_Pyroden_Script_5

FirePit_Pyroden_Script_7:
# 1359 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_PYRODEN_FIRE_3, FirePit_Pyroden_Script_12
	goto FirePit_Pyroden_Script_5

FirePit_Pyroden_Script_8:
# 1359 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_PYRODEN_FIRE_2, FirePit_Pyroden_Script_7
	goto FirePit_Pyroden_Script_5

FirePit_Pyroden_Script_11:
# 1360 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_PYRODEN_FIRE_5, FirePit_Pyroden_Script_16
	goto FirePit_Pyroden_Script_5

FirePit_Pyroden_Script_12:
# 1360 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_PYRODEN_FIRE_4, FirePit_Pyroden_Script_11
	goto FirePit_Pyroden_Script_5

FirePit_Pyroden_Script_15:
# 1360 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_PYRODEN_DOOR_OPENED, FirePit_Pyroden_Script_6
	goto FirePit_Pyroden_Script_5

FirePit_Pyroden_Script_16:
# 1360 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_PYRODEN_FIRE_6, FirePit_Pyroden_Script_15
	goto FirePit_Pyroden_Script_5

FirePit_Pyroden_Script_20:
# 1370 "data/maps/Pyroden/scripts.pory"
	goto EventScript_StrengthBoulder
	goto FirePit_Pyroden_Script_1


Pyroden_EventScript_OpenSecretDoor::
# 1378 "data/maps/Pyroden/scripts.pory"
	lockall
# 1379 "data/maps/Pyroden/scripts.pory"
	setvar VAR_0x8004, 1
# 1380 "data/maps/Pyroden/scripts.pory"
	setvar VAR_0x8005, 1
# 1381 "data/maps/Pyroden/scripts.pory"
	setvar VAR_0x8006, 8
# 1382 "data/maps/Pyroden/scripts.pory"
	setvar VAR_0x8007, 5
# 1383 "data/maps/Pyroden/scripts.pory"
	special ShakeCamera
# 1384 "data/maps/Pyroden/scripts.pory"
	waitstate
# 1385 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1386 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_OpenSecretDoor_Movement_0
# 1391 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1392 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1393 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_PYRODEN_DOOR_OPENED
# 1394 "data/maps/Pyroden/scripts.pory"
	setvar VAR_0x8004, 33
# 1395 "data/maps/Pyroden/scripts.pory"
	setvar VAR_0x8005, 5
# 1396 "data/maps/Pyroden/scripts.pory"
	special TeleportCamera
# 1397 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 1398 "data/maps/Pyroden/scripts.pory"
	delay 16
# 1399 "data/maps/Pyroden/scripts.pory"
	playse SE_UNLOCK
# 1400 "data/maps/Pyroden/scripts.pory"
	call SetPyrodenDoorMetatiles
# 1401 "data/maps/Pyroden/scripts.pory"
	waitse
# 1402 "data/maps/Pyroden/scripts.pory"
	delay 16
# 1403 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 1404 "data/maps/Pyroden/scripts.pory"
	special ReturnCameraToPlayer
# 1405 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


SetPyrodenDoorMetatiles::
# 1410 "data/maps/Pyroden/scripts.pory"
	setmetatile 32, 6, METATILE_Pyroden_Door_BottomLeft, FALSE
# 1411 "data/maps/Pyroden/scripts.pory"
	setmetatile 33, 6, METATILE_Pyroden_Door_BottomMiddle, FALSE
# 1412 "data/maps/Pyroden/scripts.pory"
	setmetatile 34, 6, METATILE_Pyroden_Door_BottomRight, FALSE
# 1413 "data/maps/Pyroden/scripts.pory"
	setmetatile 32, 5, METATILE_Pyroden_Door_MiddleLeft, TRUE
# 1414 "data/maps/Pyroden/scripts.pory"
	setmetatile 33, 5, METATILE_Pyroden_Door_MiddleMiddle, FALSE
# 1415 "data/maps/Pyroden/scripts.pory"
	setmetatile 34, 5, METATILE_Pyroden_Door_MiddleRight, TRUE
# 1416 "data/maps/Pyroden/scripts.pory"
	setmetatile 32, 4, METATILE_Pyroden_Door_TopLeft, TRUE
# 1417 "data/maps/Pyroden/scripts.pory"
	setmetatile 33, 4, METATILE_Pyroden_Door_TopMiddle, TRUE
# 1418 "data/maps/Pyroden/scripts.pory"
	setmetatile 34, 4, METATILE_Pyroden_Door_TopRight, TRUE
# 1419 "data/maps/Pyroden/scripts.pory"
	special DrawWholeMapView
	return


# 64 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_0:
# 65 "data/maps/Pyroden/scripts.pory"
	walk_left
# 66 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 68 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_1:
# 69 "data/maps/Pyroden/scripts.pory"
	walk_down
# 70 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 72 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_2:
# 73 "data/maps/Pyroden/scripts.pory"
	walk_in_place_down
	step_end

# 78 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_3:
# 78 "data/maps/Pyroden/scripts.pory"
	walk_in_place_left
	step_end

# 83 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_4:
# 84 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 85 "data/maps/Pyroden/scripts.pory"
	delay_16
# 86 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 102 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_5:
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
# 102 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 106 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_6:
# 106 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 127 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_0:
# 128 "data/maps/Pyroden/scripts.pory"
	walk_up
# 129 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 131 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_1:
# 132 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 165 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_2:
# 165 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 271 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_InvestigationNotOver_Movement_0:
# 271 "data/maps/Pyroden/scripts.pory"
	walk_left
	step_end

# 420 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_0:
# 421 "data/maps/Pyroden/scripts.pory"
	walk_left
# 422 "data/maps/Pyroden/scripts.pory"
	walk_in_place_right
	step_end

# 425 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_1:
# 426 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 429 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_2:
# 430 "data/maps/Pyroden/scripts.pory"
	walk_down
# 431 "data/maps/Pyroden/scripts.pory"
	walk_right
# 431 "data/maps/Pyroden/scripts.pory"
	walk_right
# 431 "data/maps/Pyroden/scripts.pory"
	walk_right
# 432 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 479 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Vee_Movement_0:
# 480 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 481 "data/maps/Pyroden/scripts.pory"
	delay_16
# 482 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 495 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Vee_Movement_1:
# 495 "data/maps/Pyroden/scripts.pory"
	walk_in_place_fast_right
	step_end

# 623 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_0:
# 624 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 625 "data/maps/Pyroden/scripts.pory"
	face_left
# 626 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 635 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_1:
# 636 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 636 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 669 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_2:
# 669 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 669 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 669 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 669 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 672 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_3:
# 673 "data/maps/Pyroden/scripts.pory"
	delay_16
# 673 "data/maps/Pyroden/scripts.pory"
	delay_16
# 673 "data/maps/Pyroden/scripts.pory"
	delay_16
# 674 "data/maps/Pyroden/scripts.pory"
	face_right
# 675 "data/maps/Pyroden/scripts.pory"
	delay_16
# 675 "data/maps/Pyroden/scripts.pory"
	delay_16
# 676 "data/maps/Pyroden/scripts.pory"
	face_left
# 677 "data/maps/Pyroden/scripts.pory"
	delay_16
# 677 "data/maps/Pyroden/scripts.pory"
	delay_16
# 678 "data/maps/Pyroden/scripts.pory"
	face_down
# 679 "data/maps/Pyroden/scripts.pory"
	delay_16
# 679 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 694 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_4:
# 695 "data/maps/Pyroden/scripts.pory"
	walk_right
# 695 "data/maps/Pyroden/scripts.pory"
	walk_right
# 695 "data/maps/Pyroden/scripts.pory"
	walk_right
# 695 "data/maps/Pyroden/scripts.pory"
	walk_right
# 695 "data/maps/Pyroden/scripts.pory"
	walk_right
# 695 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 716 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_5:
# 717 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 717 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 717 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 717 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 718 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
	step_end

# 720 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_6:
# 721 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 721 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 721 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 721 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 721 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 721 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
	step_end

# 729 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_7:
# 730 "data/maps/Pyroden/scripts.pory"
	delay_16
# 730 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 750 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_8:
# 750 "data/maps/Pyroden/scripts.pory"
	delay_16
# 750 "data/maps/Pyroden/scripts.pory"
	delay_16
# 750 "data/maps/Pyroden/scripts.pory"
	delay_16
# 750 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 766 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_9:
# 766 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 814 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_10:
# 815 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 816 "data/maps/Pyroden/scripts.pory"
	face_up
# 817 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 844 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_11:
# 845 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 846 "data/maps/Pyroden/scripts.pory"
	delay_16
# 846 "data/maps/Pyroden/scripts.pory"
	delay_16
# 847 "data/maps/Pyroden/scripts.pory"
	walk_right
# 848 "data/maps/Pyroden/scripts.pory"
	walk_down
# 849 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 945 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_12:
# 946 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 946 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 946 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 946 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
	step_end

# 948 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_13:
# 949 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 949 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 949 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 949 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 949 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 949 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 950 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 950 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 950 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 951 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 953 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_14:
# 954 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 955 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 956 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 972 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_0:
# 972 "data/maps/Pyroden/scripts.pory"
	walk_up
# 972 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 973 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_1:
# 973 "data/maps/Pyroden/scripts.pory"
	walk_down
# 973 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 1007 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_2:
# 1008 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 1009 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 1041 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_3:
# 1042 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1042 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1043 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1043 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1043 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1043 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1043 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1044 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 1046 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_4:
# 1047 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1048 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1048 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1048 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1048 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1049 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 1051 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_5:
# 1052 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1053 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1053 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1053 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1054 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1055 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 1067 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_6:
# 1067 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1067 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1067 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1067 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1067 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 1089 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_7:
# 1090 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1090 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1091 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1100 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_8:
# 1101 "data/maps/Pyroden/scripts.pory"
	face_right
# 1102 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1102 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1103 "data/maps/Pyroden/scripts.pory"
	face_up
# 1104 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1104 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1105 "data/maps/Pyroden/scripts.pory"
	face_left
# 1106 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1106 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1107 "data/maps/Pyroden/scripts.pory"
	face_down
# 1108 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1108 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1109 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1110 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1111 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1112 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1113 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1114 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1115 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1116 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1117 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1118 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1119 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1120 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1121 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1122 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1123 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1124 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 1138 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_9:
# 1139 "data/maps/Pyroden/scripts.pory"
	face_right
# 1140 "data/maps/Pyroden/scripts.pory"
	face_up
# 1141 "data/maps/Pyroden/scripts.pory"
	face_left
# 1142 "data/maps/Pyroden/scripts.pory"
	face_down
# 1143 "data/maps/Pyroden/scripts.pory"
	face_right
# 1144 "data/maps/Pyroden/scripts.pory"
	face_up
# 1145 "data/maps/Pyroden/scripts.pory"
	face_left
# 1146 "data/maps/Pyroden/scripts.pory"
	face_down
# 1147 "data/maps/Pyroden/scripts.pory"
	face_right
# 1148 "data/maps/Pyroden/scripts.pory"
	face_up
# 1149 "data/maps/Pyroden/scripts.pory"
	face_left
# 1150 "data/maps/Pyroden/scripts.pory"
	face_down
# 1151 "data/maps/Pyroden/scripts.pory"
	face_right
# 1152 "data/maps/Pyroden/scripts.pory"
	face_up
# 1153 "data/maps/Pyroden/scripts.pory"
	face_left
# 1154 "data/maps/Pyroden/scripts.pory"
	face_down
# 1155 "data/maps/Pyroden/scripts.pory"
	face_right
# 1156 "data/maps/Pyroden/scripts.pory"
	face_up
# 1157 "data/maps/Pyroden/scripts.pory"
	face_left
# 1158 "data/maps/Pyroden/scripts.pory"
	face_down
# 1159 "data/maps/Pyroden/scripts.pory"
	face_right
# 1160 "data/maps/Pyroden/scripts.pory"
	face_up
# 1161 "data/maps/Pyroden/scripts.pory"
	face_left
# 1162 "data/maps/Pyroden/scripts.pory"
	face_down
# 1163 "data/maps/Pyroden/scripts.pory"
	face_right
# 1164 "data/maps/Pyroden/scripts.pory"
	face_up
# 1165 "data/maps/Pyroden/scripts.pory"
	face_left
# 1166 "data/maps/Pyroden/scripts.pory"
	face_down
# 1167 "data/maps/Pyroden/scripts.pory"
	face_right
# 1168 "data/maps/Pyroden/scripts.pory"
	face_up
# 1169 "data/maps/Pyroden/scripts.pory"
	face_left
# 1170 "data/maps/Pyroden/scripts.pory"
	face_down
# 1171 "data/maps/Pyroden/scripts.pory"
	face_right
# 1172 "data/maps/Pyroden/scripts.pory"
	face_up
# 1173 "data/maps/Pyroden/scripts.pory"
	face_left
# 1174 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1182 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_10:
# 1183 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1184 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1185 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1185 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1186 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1187 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1187 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1188 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1189 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1189 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1190 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1191 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1191 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1192 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1193 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1193 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1194 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1195 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1196 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1212 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_11:
# 1213 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1214 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1215 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1215 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1216 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1217 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1217 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1218 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1219 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1219 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1220 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1221 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1221 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1222 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1223 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1223 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1224 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1225 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1226 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1238 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_12:
# 1239 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1239 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1239 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1239 "data/maps/Pyroden/scripts.pory"
	walk_down
	step_end

# 1265 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_13:
# 1266 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1266 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1266 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 1281 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_14:
# 1282 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1283 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1283 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1283 "data/maps/Pyroden/scripts.pory"
	walk_down
	step_end

# 1299 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_15:
# 1299 "data/maps/Pyroden/scripts.pory"
	emote_question_mark
# 1299 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 1322 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_16:
# 1323 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1323 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1323 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1324 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1324 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1325 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 1342 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_17:
# 1342 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 1386 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_OpenSecretDoor_Movement_0:
# 1387 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 1388 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1389 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

Pyroden_EventScript_IntroVeeDown_Text_0:
# 76 "data/maps/Pyroden/scripts.pory"
	.string "Vee$"

Pyroden_EventScript_IntroVeeDown_Text_1:
# 80 "data/maps/Pyroden/scripts.pory"
	.string "Fro$"

Pyroden_EventScript_InvestigationNotOver_Text_0:
# 268 "data/maps/Pyroden/scripts.pory"
	.string "The investigation is not over!\n"
	.string "Don't leave your friends like that!$"

Pyroden_EventScript_Slugma_Text_0:
# 279 "data/maps/Pyroden/scripts.pory"
	.string "Slugma$"

Pyroden_EventScript_Slugma_Text_1:
# 281 "data/maps/Pyroden/scripts.pory"
	.string "Welcome to Pyroden!\n"
	.string "Have you come for our world-famous hot\l"
	.string "springs?\p"
	.string "Lately they haven't been as hot,\n"
	.string "though.\p"
	.string "Maybe I should take a dip in lava.$"

Pyroden_EventScript_Sandshrew_Text_0:
# 293 "data/maps/Pyroden/scripts.pory"
	.string "Sandshrew$"

Pyroden_EventScript_Sandshrew_Text_1:
# 295 "data/maps/Pyroden/scripts.pory"
	.string "See those torches around town?\p"
	.string "They used to be burning bright all day\n"
	.string "and night.\p"
	.string "Dunno who turned them off.\n"
	.string "But it's definitely unusual.$"

Pyroden_EventScript_CheckHints_Text_0:
# 314 "data/maps/Pyroden/scripts.pory"
	.string "This felt like {COLOR RED}important information{COLOR DARK_GRAY}.$"

Pyroden_EventScript_CheckHints_Text_1:
# 324 "data/maps/Pyroden/scripts.pory"
	.string "You've gathered as many hints as you\n"
	.string "could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_CheckHintsInside_Text_0:
# 353 "data/maps/Pyroden/scripts.pory"
	.string "You feel like you've gathered as many\n"
	.string "hints as you could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_Growlithe_Text_0:
# 363 "data/maps/Pyroden/scripts.pory"
	.string "Growlithe$"

Pyroden_EventScript_Growlithe_Text_1:
# 365 "data/maps/Pyroden/scripts.pory"
	.string "Been some trouble lately, but the chief\n"
	.string "ain't doin' nothin' 'bout it.\p"
	.string "Reckon it'd be time to replace 'er.$"

Pyroden_EventScript_Sudowoodo_Text_0:
# 372 "data/maps/Pyroden/scripts.pory"
	.string "Sudowoodo$"

Pyroden_EventScript_Sudowoodo_Text_1:
# 376 "data/maps/Pyroden/scripts.pory"
	.string "I'm telling you, I'm not a tree!\p"
	.string "Are you racist or something?$"

Pyroden_EventScript_Sudowoodo_Text_2:
# 382 "data/maps/Pyroden/scripts.pory"
	.string "I'm glad I'm not a real tree, or I'd be\n"
	.string "burned to a crisp by now.$"

Pyroden_EventScript_Fro_Text_0:
# 394 "data/maps/Pyroden/scripts.pory"
	.string "Hmmmm…\p"
	.string "Investigating sure is a tough job…\p"
	.string "I haven't really learned much…\p"
	.string "Man, I could really use a dip in the\n"
	.string "springs…\p"
	.string "What do you say, {PLAYER}?\n"
	.string "Wanna go?$"

Pyroden_EventScript_Fro_Text_1:
# 405 "data/maps/Pyroden/scripts.pory"
	.string "Sigh…\p"
	.string "Oh, my sweet hot springs…\n"
	.string "When will I have you?$"

Pyroden_EventScript_Fro_Text_2:
# 414 "data/maps/Pyroden/scripts.pory"
	.string "Great!\p"
	.string "If you wanna discuss what you've\n"
	.string "discovered in the mean time, feel free\l"
	.string "to do it.\p"
	.string "I'll be all ears.\n"
	.string "But before that…$"

Pyroden_EventScript_Fro_Text_3:
# 440 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "What a funny looking tree.\p"
	.string "I wonder if it holds any secrets.$"

Pyroden_EventScript_Vee_Text_0:
# 456 "data/maps/Pyroden/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Hi, hi!\p"
	.string "I made sure to interrogate everyone in\n"
	.string "town!\p"
	.string "Unfortunately, I didn't discover much\n"
	.string "of anything…\p"
	.string "What about you, {PLAYER}?\n"
	.string "Do you wanna share it with us?$"

Pyroden_EventScript_Vee_Text_1:
# 467 "data/maps/Pyroden/scripts.pory"
	.string "Oh…\n"
	.string "Well, ok!\p"
	.string "Whenever you want, {PLAYER}!$"

Pyroden_EventScript_Vee_Text_2:
# 475 "data/maps/Pyroden/scripts.pory"
	.string "Yay!\n"
	.string "Let's do it!$"

Pyroden_EventScript_Vee_Text_3:
# 487 "data/maps/Pyroden/scripts.pory"
	.string "Now, hold up a second.\n"
	.string "I was promised hot springs.\p"
	.string "If you want to discuss things, that's\n"
	.string "fine with me.\l"
	.string "But I'd rather do it while relaxing.\p"
	.string "So, if you would please excuse me…$"

Pyroden_EventScript_Vee_Text_4:
# 507 "data/maps/Pyroden/scripts.pory"
	.string "Where were you last night!?\n"
	.string "Any alibi!?\p"
	.string "You did it, didn't you!?\p"
	.string "Confess!$"

Pyroden_EventScript_Sunkern_Text_0:
# 519 "data/maps/Pyroden/scripts.pory"
	.string "Sunkern$"

Pyroden_EventScript_Sunkern_Text_1:
# 524 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\l"
	.string "I don't know anything…$"

Pyroden_EventScript_Sunkern_Text_2:
# 532 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\p"
	.string "I don't really know much about the\n"
	.string "world…$"

Pyroden_EventScript_Nidorina_Text_0:
# 542 "data/maps/Pyroden/scripts.pory"
	.string "Nidorina$"

Pyroden_EventScript_Nidorina_Text_1:
# 544 "data/maps/Pyroden/scripts.pory"
	.string "There used to be an entrance to the\n"
	.string "volcano north of here.\p"
	.string "But now it's not there anymore?\n"
	.string "I'm not really sure what happened.\p"
	.string "One day it was there, and the next…\n"
	.string "Poof.$"

Pyroden_EventScript_Snubbul_Text_0:
# 561 "data/maps/Pyroden/scripts.pory"
	.string "Snubbul$"

Pyroden_EventScript_Snubbul_Text_1:
# 565 "data/maps/Pyroden/scripts.pory"
	.string "Please, no more dives!$"

Pyroden_EventScript_Snubbul_Text_2:
# 570 "data/maps/Pyroden/scripts.pory"
	.string "That spinning guy is SO annoying.\p"
	.string "I'm just trying to enjoy the hot\n"
	.string "springs, but he makes me dizzy just by\l"
	.string "looking at him.\p"
	.string "He NEVER leaves, either.\n"
	.string "Weirdo.$"

Pyroden_EventScript_Spinda_Text_0:
# 579 "data/maps/Pyroden/scripts.pory"
	.string "Spinda$"

Pyroden_EventScript_Spinda_Text_1:
# 583 "data/maps/Pyroden/scripts.pory"
	.string "Hello, friend!\n"
	.string "The springs are hot again, again!/p All\l"
	.string "thanks to the Fire Stone, Stone!$"

Pyroden_EventScript_Spinda_Text_2:
# 598 "data/maps/Pyroden/scripts.pory"
	.string "Find my Fire Stone, Fire Stone!\n"
	.string "It's on Route 2!\p"
	.string "Then I'll show you how to light up\n"
	.string "torches!$"

Pyroden_EventScript_Spinda_Text_3:
# 606 "data/maps/Pyroden/scripts.pory"
	.string "Spinning round, and round, and round\n"
	.string "again!\l"
	.string "From dawn to dusk, from hot to cold!\p"
	.string "Up, and down, and all around!\n"
	.string "The spinning never stops!$"

Pyroden_EventScript_FroJumpsInSprings_Text_0:
# 620 "data/maps/Pyroden/scripts.pory"
	.string "I'm jumping in!$"

Pyroden_EventScript_FroJumpsInSprings_Text_1:
# 630 "data/maps/Pyroden/scripts.pory"
	.string "No, sto-$"

Pyroden_EventScript_FroJumpsInSprings_Text_2:
# 684 "data/maps/Pyroden/scripts.pory"
	.string "Oh, bother.\n"
	.string "I seem to have miscalculated.$"

Pyroden_EventScript_FroJumpsInSprings_Text_3:
# 689 "data/maps/Pyroden/scripts.pory"
	.string "Forget it!\n"
	.string "Can't even have a day at the hot\l"
	.string "springs in peace!\p"
	.string "I'm outta here!$"

Pyroden_EventScript_FroJumpsInSprings_Text_4:
# 705 "data/maps/Pyroden/scripts.pory"
	.string "Uhm, well.\n"
	.string "Let's try the other pool, maybe.$"

Pyroden_EventScript_FroJumpsInSprings_Text_5:
# 710 "data/maps/Pyroden/scripts.pory"
	.string "And be careful this time!$"

Pyroden_EventScript_FroJumpsInSprings_Text_6:
# 735 "data/maps/Pyroden/scripts.pory"
	.string "Ahhh…\n"
	.string "Now that's the stuff.\p"
	.string "I feel like a soaking egg.$"

Pyroden_EventScript_FroJumpsInSprings_Text_7:
# 741 "data/maps/Pyroden/scripts.pory"
	.string "Yeah!\n"
	.string "It's really nice!\p"
	.string "Except, uhm…$"

Pyroden_EventScript_FroJumpsInSprings_Text_8:
# 754 "data/maps/Pyroden/scripts.pory"
	.string "That guy is…\n"
	.string "A bit distracting.$"

Pyroden_EventScript_FroJumpsInSprings_Text_9:
# 759 "data/maps/Pyroden/scripts.pory"
	.string "Ignore them.\n"
	.string "Maybe they will go away on their own.$"

Pyroden_EventScript_FroJumpsInSprings_Text_10:
# 763 "data/maps/Pyroden/scripts.pory"
	.string "If you think so…$"

Pyroden_EventScript_FroJumpsInSprings_Text_11:
# 770 "data/maps/Pyroden/scripts.pory"
	.string "Anyway, {PLAYER}, have you found any\n"
	.string "hints for our mission?\p"
	.string "… … …\p"
	.string "Oh, that's…\n"
	.string "A lot of hints, actually.\p"
	.string "Maybe we should do a recap!$"

Pyroden_EventScript_FroJumpsInSprings_Text_12:
# 778 "data/maps/Pyroden/scripts.pory"
	.string "I understood it perfectly.$"

Pyroden_EventScript_FroJumpsInSprings_Text_13:
# 784 "data/maps/Pyroden/scripts.pory"
	.string "I SAID we should do a recap!$"

Pyroden_EventScript_FroJumpsInSprings_Text_14:
# 788 "data/maps/Pyroden/scripts.pory"
	.string "Ugh. Fine.$"

Pyroden_EventScript_FroJumpsInSprings_Text_15:
# 793 "data/maps/Pyroden/scripts.pory"
	.string "Eheh.\p"
	.string "So! Here's what we have discovered.\p"
	.string "Recently, a big mean Magmortar came\n"
	.string "into town asking about the volcano.\p"
	.string "Around the same time, a human was seen\n"
	.string "around the volcano, as well.\p"
	.string "And as if that wasn't strange enough…\p"
	.string "The entrance to the volcano\n"
	.string "disappeared, and all the torches in\l"
	.string "town turned off!\p"
	.string "Hmm…\n"
	.string "What could it mean?$"

Pyroden_EventScript_FroJumpsInSprings_Text_16:
# 804 "data/maps/Pyroden/scripts.pory"
	.string "Here's how I see it.\p"
	.string "The big bad Magmortar is probably the\n"
	.string "Guardian we're looking for.\p"
	.string "The human is either a Team MAGA member,\n"
	.string "or someone with a grudge against them.\p"
	.string "Either way, they went into the volcano,\n"
	.string "and did something to seal the entrance.\p"
	.string "It must be related to the torches in\n"
	.string "town turning off.\p"
	.string "So, in theory…\n"
	.string "If we light up the torches again, the\l"
	.string "cave entrance might reappear.\p"
	.string "Maybe.$"

Pyroden_EventScript_FroJumpsInSprings_Text_17:
# 822 "data/maps/Pyroden/scripts.pory"
	.string "Fro!\n"
	.string "You're so good at this!$"

Pyroden_EventScript_FroJumpsInSprings_Text_18:
# 827 "data/maps/Pyroden/scripts.pory"
	.string "I suppose.\p"
	.string "But we aren't really any closer to\n"
	.string "figuring it out.\p"
	.string "How are we meant to light the torches\n"
	.string "back up…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_19:
# 833 "data/maps/Pyroden/scripts.pory"
	.string "Speaking of lighting things up…\p"
	.string "Aren't these hot springs getting a bit…\n"
	.string "Lukewarm?$"

Pyroden_EventScript_FroJumpsInSprings_Text_20:
# 839 "data/maps/Pyroden/scripts.pory"
	.string "…\p"
	.string "Now that you mention it…\n"
	.string "These hot springs are not hot at all!$"

Pyroden_EventScript_FroJumpsInSprings_Text_21:
# 858 "data/maps/Pyroden/scripts.pory"
	.string "Friends, friends!\n"
	.string "I must introduce myself!\p"
	.string "I am Spinda!\p"
	.string "But you can call me… Spinda!$"

Pyroden_EventScript_FroJumpsInSprings_Text_22:
# 865 "data/maps/Pyroden/scripts.pory"
	.string "Uhm, hi.\n"
	.string "Can we help you?$"

Pyroden_EventScript_FroJumpsInSprings_Text_23:
# 870 "data/maps/Pyroden/scripts.pory"
	.string "Help!\n"
	.string "Yes! Yes!\p"
	.string "Hot springs gone cold?\n"
	.string "Yes, yes, it is true!\p"
	.string "And these old bones…\n"
	.string "Tired from spinning all day long…\p"
	.string "They need hot water!\n"
	.string "Not cold!\p"
	.string "But, I have a solution!\p"
	.string "On Route 2, there is a stone!\n"
	.string "The Fire Stone!\p"
	.string "If you bring it here…\n"
	.string "It can heat up the hot springs again!$"

Pyroden_EventScript_FroJumpsInSprings_Text_24:
# 886 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\p"
	.string "And you can't do it yourself, because…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_25:
# 891 "data/maps/Pyroden/scripts.pory"
	.string "Oh, Fro, don't be mean!$"

Pyroden_EventScript_FroJumpsInSprings_Text_26:
# 895 "data/maps/Pyroden/scripts.pory"
	.string "No, I understand, I understand!\n"
	.string "But, I have a proposition!\p"
	.string "If you bring the Fire Stone here…\p"
	.string "I'll teach you how to light up torches!$"

Pyroden_EventScript_FroJumpsInSprings_Text_27:
# 902 "data/maps/Pyroden/scripts.pory"
	.string "You will?$"

Pyroden_EventScript_FroJumpsInSprings_Text_28:
# 906 "data/maps/Pyroden/scripts.pory"
	.string "Yes, yes!\n"
	.string "I could not help but overhear!\p"
	.string "You need to light up the torches!\n"
	.string "And I have a special way to do it!$"

Pyroden_EventScript_FroJumpsInSprings_Text_29:
# 913 "data/maps/Pyroden/scripts.pory"
	.string "Hold on a second…\p"
	.string "Can we not just use the Fire Stone to\n"
	.string "light up the torches…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_30:
# 918 "data/maps/Pyroden/scripts.pory"
	.string "No, no!\n"
	.string "That's all out of order!\p"
	.string "Torches are special!\n"
	.string "You can't just light them up!\p"
	.string "Bring me the Stone, and I'll show you!$"

Pyroden_EventScript_FroJumpsInSprings_Text_31:
# 926 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Fine.$"

Pyroden_EventScript_FroJumpsInSprings_Text_32:
# 933 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\n"
	.string "Let's find this Fire Stone, and then\l"
	.string "come back here.$"

Pyroden_EventScript_TeachWillOWisp_Text_0:
# 977 "data/maps/Pyroden/scripts.pory"
	.string "Friends! Friends!\n"
	.string "You found the Fire Stone!\p"
	.string "Give it to me! To me!$"

Pyroden_EventScript_TeachWillOWisp_Text_1:
# 983 "data/maps/Pyroden/scripts.pory"
	.string "You gave the Fire Stone to Spinda.$"

Pyroden_EventScript_TeachWillOWisp_Text_2:
# 988 "data/maps/Pyroden/scripts.pory"
	.string "Great! Great!\n"
	.string "Now the springs will be hot once again!$"

Pyroden_EventScript_TeachWillOWisp_Text_3:
# 993 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\n"
	.string "Very happy to know that.\p"
	.string "Now, you promised to teach us how to\n"
	.string "light the torches back up, didn't you?$"

Pyroden_EventScript_TeachWillOWisp_Text_4:
# 999 "data/maps/Pyroden/scripts.pory"
	.string "Oh, me?\n"
	.string "Teach you how to light torches?\p"
	.string "Oh, I cannot do that!\n"
	.string "I cannot do that!\l"
	.string "Not me!$"

Pyroden_EventScript_TeachWillOWisp_Text_5:
# 1014 "data/maps/Pyroden/scripts.pory"
	.string "I swear I'm gonna…$"

Pyroden_EventScript_TeachWillOWisp_Text_6:
# 1018 "data/maps/Pyroden/scripts.pory"
	.string "Wait! Wait!\n"
	.string "Hear me out, first!\p"
	.string "What I'm saying is:\n"
	.string "I cannot teach that to you. But!\p"
	.string "I have a friend who can!\n"
	.string "Yes, a very special friend!$"

Pyroden_EventScript_TeachWillOWisp_Text_7:
# 1027 "data/maps/Pyroden/scripts.pory"
	.string "Ooh!\n"
	.string "I like friends!\p"
	.string "Where's your friend right now?\n"
	.string "Is he inside you?$"

Pyroden_EventScript_TeachWillOWisp_Text_8:
# 1034 "data/maps/Pyroden/scripts.pory"
	.string "No, no!\n"
	.string "Not inside!\p"
	.string "The friend is coming!\n"
	.string "But I need to call them, first!\p"
	.string "Look, why don't you all get over there!$"

Pyroden_EventScript_TeachWillOWisp_Text_9:
# 1060 "data/maps/Pyroden/scripts.pory"
	.string "This is stupid.$"

Pyroden_EventScript_TeachWillOWisp_Text_10:
# 1064 "data/maps/Pyroden/scripts.pory"
	.string "This is exciting!$"

Pyroden_EventScript_TeachWillOWisp_Text_11:
# 1071 "data/maps/Pyroden/scripts.pory"
	.string "Shoo, shoo!\p"
	.string "I need some room!$"

Pyroden_EventScript_TeachWillOWisp_Text_12:
# 1082 "data/maps/Pyroden/scripts.pory"
	.string "What rudeness!$"

Pyroden_EventScript_TeachWillOWisp_Text_13:
# 1096 "data/maps/Pyroden/scripts.pory"
	.string "Ok!\n"
	.string "Time to call my friend here!$"

Pyroden_EventScript_TeachWillOWisp_Text_14:
# 1128 "data/maps/Pyroden/scripts.pory"
	.string "What in the world are they…$"

Pyroden_EventScript_TeachWillOWisp_Text_15:
# 1179 "data/maps/Pyroden/scripts.pory"
	.string "Dlrowrednu eht morf eeht nommus I, em\n"
	.string "nopu detnarg srewop eht htiw!$"

Pyroden_EventScript_TeachWillOWisp_Text_16:
# 1201 "data/maps/Pyroden/scripts.pory"
	.string "Sluos tsol eseht ot WILL OF THE WISPS\n"
	.string "eht wohs dna, niagrab eht fo dne ruoy\l"
	.string "dlohpu!$"

Pyroden_EventScript_TeachWillOWisp_Text_17:
# 1208 "data/maps/Pyroden/scripts.pory"
	.string "{PLAYER}!\n"
	.string "What's happening, {PLAYER}!?$"

Pyroden_EventScript_TeachWillOWisp_Text_18:
# 1230 "data/maps/Pyroden/scripts.pory"
	.string "Pape, GIRATINA!\n"
	.string "Pape GIRATINA aleppe!$"

Pyroden_EventScript_TeachWillOWisp_Text_19:
# 1244 "data/maps/Pyroden/scripts.pory"
	.string "Oh, my.$"

Pyroden_EventScript_TeachWillOWisp_Text_20:
# 1248 "data/maps/Pyroden/scripts.pory"
	.string "SEEL!\n"
	.string "I CAN'T MOVE!\p"
	.string "PLEASE, SOMEBODY HELP!$"

Pyroden_EventScript_TeachWillOWisp_Text_21:
# 1254 "data/maps/Pyroden/scripts.pory"
	.string "Our father, who art in Heaven…$"

Pyroden_EventScript_TeachWillOWisp_Text_22:
# 1259 "data/maps/Pyroden/scripts.pory"
	.string "Egdelwonk terces eht meht hcaet,\n"
	.string "GIRATINA!$"

Pyroden_EventScript_TeachWillOWisp_Text_23:
# 1288 "data/maps/Pyroden/scripts.pory"
	.string "Done!\n"
	.string "You have learned {COLOR RED}Will-O-Wisp{COLOR DARK_GRAY}!\p"
	.string "You can now light the torches back up!$"

Pyroden_EventScript_TeachWillOWisp_Text_24:
# 1296 "data/maps/Pyroden/scripts.pory"
	.string "What. Was. That.$"

Pyroden_EventScript_TeachWillOWisp_Text_25:
# 1304 "data/maps/Pyroden/scripts.pory"
	.string "What was what?$"

Pyroden_EventScript_TeachWillOWisp_Text_26:
# 1308 "data/maps/Pyroden/scripts.pory"
	.string "What do you MEAN what was WHAT?\p"
	.string "The thing!\n"
	.string "That just happened!\p"
	.string "With youre extremely terrifying friend!$"

Pyroden_EventScript_TeachWillOWisp_Text_27:
# 1315 "data/maps/Pyroden/scripts.pory"
	.string "I don't really have any friends.\n"
	.string "Who are you guys, anyway?\p"
	.string "Oh, I'm sorry!\n"
	.string "I gotta go!\p"
	.string "I'm late for an appointment!$"

Pyroden_EventScript_TeachWillOWisp_Text_28:
# 1333 "data/maps/Pyroden/scripts.pory"
	.string "I guess we can light up the torches\n"
	.string "now…\l"
	.string "Haha…\p"
	.string "We should see if the entrance to the\n"
	.string "volcano opens up…$"

Pyroden_EventScript_TeachWillOWisp_Text_29:
# 1339 "data/maps/Pyroden/scripts.pory"
	.string "Let's never speak of this again.$"

Pyroden_Text_Intro_Vee_1::
# 179 "data/maps/Pyroden/scripts.pory"
	.string "Yahoo!\n"
	.string "We're finally in Pyroden!$"

Pyroden_Text_Intro_Fro_1::
# 186 "data/maps/Pyroden/scripts.pory"
	.string "Yes.\n"
	.string "I can already feel it.\p"
	.string "The heavenly warmth…\n"
	.string "Almost like being slow cooked…\p"
	.string "Hot springs, here I come.$"

Pyroden_Text_Intro_Vee_2::
# 197 "data/maps/Pyroden/scripts.pory"
	.string "Not so fast!\n"
	.string "We're not here just to relax!$"

Pyroden_Text_Intro_Fro_2::
# 205 "data/maps/Pyroden/scripts.pory"
	.string "I am.$"

Pyroden_Text_Intro_Vee_3::
# 212 "data/maps/Pyroden/scripts.pory"
	.string "No!\n"
	.string "We need to find the artifact, remember?\p"
	.string "You promised!$"

Pyroden_Text_Intro_Fro_3::
# 221 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Did I now…?\p"
	.string "… … …\p"
	.string "Alright, alright.\n"
	.string "We can do some info gathering.\p"
	.string "But after that, a visit to the hot\n"
	.string "springs is in order.$"

Pyroden_Text_Intro_Vee_4::
# 233 "data/maps/Pyroden/scripts.pory"
	.string "Yay!$"

Pyroden_Text_Intro_Fro_4::
# 238 "data/maps/Pyroden/scripts.pory"
	.string "How about this.\p"
	.string "Let's split up, and ask around if anyone\n"
	.string "has seen anything strange.\p"
	.string "Once we get enough info, let's meet up\n"
	.string "at the hot springs.\p"
	.string "Ready? Go.$"

Pyroden_Text_Intro_Vee_5::
# 248 "data/maps/Pyroden/scripts.pory"
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
