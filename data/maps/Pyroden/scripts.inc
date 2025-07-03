# 1 "data/maps/Pyroden/scripts.pory"

# 2 "data/maps/Pyroden/scripts.pory"
.set LOCALID_VEE, 2
# 3 "data/maps/Pyroden/scripts.pory"
.set LOCALID_FRO, 3
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
.set PlayerXCoordinates, VAR_TEMP_3
# 15 "data/maps/Pyroden/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

Pyroden_MapScripts::
# 22 "data/maps/Pyroden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 28 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_ne Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 33 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 0
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 33 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 1
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 33 "data/maps/Pyroden/scripts.pory"
	compare VAR_SLOWPOKE_QUEST_STATE, 2
	goto_if_eq Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
	end

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 25 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 26 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 30 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUDOWOODO, MOVEMENT_TYPE_FACE_DOWN
# 31 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SUNKERN, MOVEMENT_TYPE_WANDER_AROUND
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_4

Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 35 "data/maps/Pyroden/scripts.pory"
	setvar VAR_SLOWPOKE_QUEST_STATE, 0
	goto Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION_7


Generic_EventScript_SpawnVeeFro::
# 44 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 45 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 46 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 47 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE
# 48 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO
	return


Pyroden_EventScript_IntroVeeDown::
# 55 "data/maps/Pyroden/scripts.pory"
	lock
# 56 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 57 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 61 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_1
# 65 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 68 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 69 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 70 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 71 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 72 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 73 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 74 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 75 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 76 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 81 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 82 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 83 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 84 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 85 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 86 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 87 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 88 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 89 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 90 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 91 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 92 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 93 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 94 "data/maps/Pyroden/scripts.pory"
	closemessage
# 95 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 96 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 97 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 98 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 99 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_6
# 100 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 101 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 102 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 103 "data/maps/Pyroden/scripts.pory"
	closemessage
# 104 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 105 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 106 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 107 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 108 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_IntroVeeUp::
# 114 "data/maps/Pyroden/scripts.pory"
	lock
# 115 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 116 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 120 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_0
# 124 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 127 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 128 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 129 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 130 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 131 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 132 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 133 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 134 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 135 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 140 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 141 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 142 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 143 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 144 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 145 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 146 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 147 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 148 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 149 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 150 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 151 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 152 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 153 "data/maps/Pyroden/scripts.pory"
	closemessage
# 154 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 155 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 156 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 157 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 158 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_2
# 159 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 160 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 161 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 162 "data/maps/Pyroden/scripts.pory"
	closemessage
# 163 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 164 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 165 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 166 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 167 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_InvestigationNotOver::
# 259 "data/maps/Pyroden/scripts.pory"
	lock
# 260 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_InvestigationNotOver_Text_0
# 264 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 265 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 266 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Slugma::
# 272 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Slugma_Text_0
# 273 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Slugma_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sandshrew::
# 285 "data/maps/Pyroden/scripts.pory"
	lock
# 286 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sandshrew_Text_0
# 287 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sandshrew_Text_1, MSGBOX_NPC
# 293 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_Sandshrew_2
Pyroden_EventScript_Sandshrew_1:
# 298 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Sandshrew_2:
# 295 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_TORCHES
# 296 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Sandshrew_1


Pyroden_EventScript_CheckHints::
# 304 "data/maps/Pyroden/scripts.pory"
	lock
# 305 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 306 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 309 "data/maps/Pyroden/scripts.pory"
	closemessage
# 310 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHints_4
Pyroden_EventScript_CheckHints_1:
	return

Pyroden_EventScript_CheckHints_2:
# 315 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 316 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_1
# 320 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 321 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_VEE_TOWN, 13, 37
# 322 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 323 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_FRO_TOWN, 14, 37
# 324 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
# 325 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_3:
# 312 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHints_7
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_4:
# 311 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHints_3
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_7:
# 313 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHints_2
	goto Pyroden_EventScript_CheckHints_1


Pyroden_EventScript_CheckHintsInside::
# 333 "data/maps/Pyroden/scripts.pory"
	lock
# 334 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 335 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 339 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHintsInside_4
Pyroden_EventScript_CheckHintsInside_1:
# 350 "data/maps/Pyroden/scripts.pory"
	closemessage
	return

Pyroden_EventScript_CheckHintsInside_2:
# 344 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 345 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHintsInside_Text_0
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_3:
# 341 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHintsInside_7
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_4:
# 340 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHintsInside_3
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_7:
# 342 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHintsInside_2
	goto Pyroden_EventScript_CheckHintsInside_1


Pyroden_EventScript_Growlithe::
# 356 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Growlithe_Text_0
# 357 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Growlithe_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sudowoodo::
# 365 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sudowoodo_Text_0
# 366 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sudowoodo_2
# 374 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sudowoodo_2:
# 368 "data/maps/Pyroden/scripts.pory"
	lock
# 369 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_1
# 370 "data/maps/Pyroden/scripts.pory"
	closemessage
# 371 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Fro::
# 382 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 383 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_EventScript_Fro_2
# 431 "data/maps/Pyroden/scripts.pory"
	lock
# 432 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_3
# 437 "data/maps/Pyroden/scripts.pory"
	closemessage
# 438 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Fro_2:
# 385 "data/maps/Pyroden/scripts.pory"
	faceplayer
# 386 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_0, MSGBOX_YESNO
# 394 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 395 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Pyroden_EventScript_Fro_5
# 405 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 406 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_2
# 412 "data/maps/Pyroden/scripts.pory"
	closemessage
# 413 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Fro_Movement_0
# 418 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_Fro_Movement_1
# 421 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 422 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_2
# 427 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 428 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_FroJumpsInSprings
	end

Pyroden_EventScript_Fro_5:
# 397 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_1
# 402 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


Pyroden_EventScript_Vee::
# 444 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 445 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_EventScript_Vee_2
# 498 "data/maps/Pyroden/scripts.pory"
	lock
# 499 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_4
# 505 "data/maps/Pyroden/scripts.pory"
	closemessage
# 506 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Vee_2:
# 447 "data/maps/Pyroden/scripts.pory"
	faceplayer
# 448 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_0, MSGBOX_YESNO
# 456 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 457 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Pyroden_EventScript_Vee_5
# 467 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_2
# 471 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 472 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Vee_Movement_0
# 477 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 478 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 479 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_3
# 486 "data/maps/Pyroden/scripts.pory"
	closemessage
# 487 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_Fro_Movement_1
# 488 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Vee_Movement_1
# 489 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_2
# 494 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 495 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_FroJumpsInSprings
	end

Pyroden_EventScript_Vee_5:
# 459 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_1
# 464 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


Pyroden_EventScript_Sunkern::
# 512 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sunkern_Text_0
# 513 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sunkern_2
# 524 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sunkern_2:
# 515 "data/maps/Pyroden/scripts.pory"
	lock
# 516 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_1
# 520 "data/maps/Pyroden/scripts.pory"
	closemessage
# 521 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Nidorina::
# 534 "data/maps/Pyroden/scripts.pory"
	lock
# 535 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Nidorina_Text_0
# 536 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Nidorina_Text_1, MSGBOX_NPC
# 543 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_Nidorina_2
Pyroden_EventScript_Nidorina_1:
# 548 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Nidorina_2:
# 545 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_ENTRANCE
# 546 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Nidorina_1


Pyroden_EventScript_Snubbul::
# 554 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 555 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 1
	goto_if_gt Pyroden_EventScript_Snubbul_2
# 562 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Snubbul_2:
# 557 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Spinda::
# 572 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 573 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 2
	goto_if_eq Pyroden_EventScript_Spinda_2
# 583 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_2
# 589 "data/maps/Pyroden/scripts.pory"
	closemessage
	end

Pyroden_EventScript_Spinda_2:
# 575 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_1
# 580 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


Pyroden_EventScript_FroJumpsInSprings::
# 595 "data/maps/Pyroden/scripts.pory"
	special SpawnCameraObject
# 596 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 597 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_0
# 600 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 601 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_0
# 606 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 607 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_1
# 610 "data/maps/Pyroden/scripts.pory"
	closemessage
# 611 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_IntroVeeUp_Movement_2
# 612 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 613 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_1
# 616 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 617 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_WHITE
# 618 "data/maps/Pyroden/scripts.pory"
	playse SE_LEDGE
# 619 "data/maps/Pyroden/scripts.pory"
	waitse
# 620 "data/maps/Pyroden/scripts.pory"
	playse SE_FALL
# 621 "data/maps/Pyroden/scripts.pory"
	waitse
# 622 "data/maps/Pyroden/scripts.pory"
	playse SE_M_EXPLOSION
# 623 "data/maps/Pyroden/scripts.pory"
	waitse
# 624 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 41, METATILE_Pyroden_EmptyPool_TopLeft, TRUE
# 625 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 41, METATILE_Pyroden_EmptyPool_TopMiddle, TRUE
# 626 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 41, METATILE_Pyroden_EmptyPool_TopRight, TRUE
# 627 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 42, METATILE_Pyroden_EmptyPool_TopLeft, TRUE
# 628 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 42, METATILE_Pyroden_EmptyPool_BottomRightCorner, TRUE
# 629 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 42, METATILE_Pyroden_EmptyPool_MiddleMiddle, TRUE
# 630 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 42, METATILE_Pyroden_EmptyPool_MiddleRight, TRUE
# 631 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 43, METATILE_Pyroden_EmptyPool_BottomLeft, TRUE
# 632 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 43 METATILE_Pyroden_EmptyPool_BottomMiddle, TRUE
# 633 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 43, METATILE_Pyroden_EmptyPool_BottomMiddle, TRUE
# 634 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 43, METATILE_Pyroden_EmptyPool_BottomRight, TRUE
# 636 "data/maps/Pyroden/scripts.pory"
	setmetatile 19, 39, METATILE_Pyroden_Puddle_TopLeft, FALSE
# 637 "data/maps/Pyroden/scripts.pory"
	setmetatile 20, 39, METATILE_Pyroden_Puddle_TopRight, FALSE
# 638 "data/maps/Pyroden/scripts.pory"
	setmetatile 19, 40, METATILE_Pyroden_Puddle_BottomLeft, FALSE
# 639 "data/maps/Pyroden/scripts.pory"
	setmetatile 20, 40, METATILE_Pyroden_Puddle_BottomRight, FALSE
# 641 "data/maps/Pyroden/scripts.pory"
	setmetatile 14, 40, METATILE_Pyroden_Puddle_TopLeft, FALSE
# 642 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 40, METATILE_Pyroden_Puddle_TopRight, FALSE
# 643 "data/maps/Pyroden/scripts.pory"
	setmetatile 14, 41, METATILE_Pyroden_Puddle_BottomLeft, FALSE
# 644 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 41, METATILE_Pyroden_Puddle_BottomRight, FALSE
# 645 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_NIDORINA
# 646 "data/maps/Pyroden/scripts.pory"
	special DrawWholeMapView
# 647 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_1
# 648 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_2
# 649 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 650 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 651 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_3
# 660 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 661 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 662 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_2
# 666 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 667 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_3
# 672 "data/maps/Pyroden/scripts.pory"
	closemessage
# 673 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_4
# 676 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 677 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SNUBBUL
# 678 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_IntroVeeDown_Movement_6
# 681 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 682 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 683 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_4
# 687 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 688 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_5
# 691 "data/maps/Pyroden/scripts.pory"
	closemessage
# 692 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 693 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_TOWN
# 694 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_TOWN
# 695 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_5
# 699 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_6
# 702 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 703 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_HOT_SPRINGS_GANG
# 704 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SEEL_HOT_SPRINGS
# 705 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO_HOT_SPRINGS
# 706 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE_HOT_SPRINGS
# 707 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 708 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_7
# 711 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 712 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 713 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_6
# 718 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 719 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_7
# 724 "data/maps/Pyroden/scripts.pory"
	closemessage
# 725 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 726 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 727 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 728 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 729 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_8
# 730 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 731 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 732 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_8
# 736 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 737 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_9
# 741 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 742 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_10
# 743 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 744 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_IntroVeeUp_Movement_2
# 745 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 746 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 747 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 748 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_11
# 755 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 756 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_12
# 759 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 760 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 761 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 762 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_13
# 765 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 766 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_14
# 769 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 770 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 771 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_15
# 781 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 782 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_16
# 792 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 793 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_10
# 798 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 799 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 800 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_17
# 804 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 805 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_18
# 810 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 811 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_19
# 816 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 817 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_20
# 822 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 823 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_FroJumpsInSprings_Movement_11
# 830 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 831 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 832 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 833 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 834 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 835 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 836 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_21
# 842 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 843 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_22
# 847 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 848 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_23
# 863 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 864 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_24
# 868 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 869 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_25
# 872 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 873 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_26
# 879 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 880 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_27
# 883 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 884 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_28
# 890 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 891 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_29
# 896 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 897 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_30
# 904 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 905 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_31
# 909 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_IntroVeeUp_Movement_2
# 910 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 911 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 912 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_32
# 916 "data/maps/Pyroden/scripts.pory"
	closemessage
# 917 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 918 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_HOT_SPRINGS
# 919 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_HOT_SPRINGS
# 920 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SEEL_HOT_SPRINGS
# 921 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_SNUBBUL_PYRODEN
# 922 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SNUBBUL
# 923 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_NIDORINA_PYRODEN
# 924 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_NIDORINA
# 925 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 2
# 926 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_12
# 929 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_13
# 934 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 935 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_IntroVeeUp_Movement_2
# 936 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 937 "data/maps/Pyroden/scripts.pory"
	special RemoveCameraObject
# 938 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end


# 57 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_0:
# 58 "data/maps/Pyroden/scripts.pory"
	walk_left
# 59 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 61 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_1:
# 62 "data/maps/Pyroden/scripts.pory"
	walk_down
# 63 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 65 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_2:
# 66 "data/maps/Pyroden/scripts.pory"
	walk_in_place_down
	step_end

# 71 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_3:
# 71 "data/maps/Pyroden/scripts.pory"
	walk_in_place_left
	step_end

# 76 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_4:
# 77 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 78 "data/maps/Pyroden/scripts.pory"
	delay_16
# 79 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 95 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_5:
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
# 95 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 99 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_6:
# 99 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 120 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_0:
# 121 "data/maps/Pyroden/scripts.pory"
	walk_up
# 122 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 124 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_1:
# 125 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 158 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_2:
# 158 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 264 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_InvestigationNotOver_Movement_0:
# 264 "data/maps/Pyroden/scripts.pory"
	walk_left
	step_end

# 413 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_0:
# 414 "data/maps/Pyroden/scripts.pory"
	walk_left
# 415 "data/maps/Pyroden/scripts.pory"
	walk_in_place_right
	step_end

# 418 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_1:
# 419 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 422 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_2:
# 423 "data/maps/Pyroden/scripts.pory"
	walk_down
# 424 "data/maps/Pyroden/scripts.pory"
	walk_right
# 424 "data/maps/Pyroden/scripts.pory"
	walk_right
# 424 "data/maps/Pyroden/scripts.pory"
	walk_right
# 425 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 472 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Vee_Movement_0:
# 473 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 474 "data/maps/Pyroden/scripts.pory"
	delay_16
# 475 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 488 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Vee_Movement_1:
# 488 "data/maps/Pyroden/scripts.pory"
	walk_in_place_fast_right
	step_end

# 601 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_0:
# 602 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 603 "data/maps/Pyroden/scripts.pory"
	face_left
# 604 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 613 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_1:
# 614 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 614 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 648 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_2:
# 648 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 648 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 648 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 648 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 651 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_3:
# 652 "data/maps/Pyroden/scripts.pory"
	delay_16
# 652 "data/maps/Pyroden/scripts.pory"
	delay_16
# 652 "data/maps/Pyroden/scripts.pory"
	delay_16
# 653 "data/maps/Pyroden/scripts.pory"
	face_right
# 654 "data/maps/Pyroden/scripts.pory"
	delay_16
# 654 "data/maps/Pyroden/scripts.pory"
	delay_16
# 655 "data/maps/Pyroden/scripts.pory"
	face_left
# 656 "data/maps/Pyroden/scripts.pory"
	delay_16
# 656 "data/maps/Pyroden/scripts.pory"
	delay_16
# 657 "data/maps/Pyroden/scripts.pory"
	face_down
# 658 "data/maps/Pyroden/scripts.pory"
	delay_16
# 658 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 673 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_4:
# 674 "data/maps/Pyroden/scripts.pory"
	walk_right
# 674 "data/maps/Pyroden/scripts.pory"
	walk_right
# 674 "data/maps/Pyroden/scripts.pory"
	walk_right
# 674 "data/maps/Pyroden/scripts.pory"
	walk_right
# 674 "data/maps/Pyroden/scripts.pory"
	walk_right
# 674 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 695 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_5:
# 696 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 696 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 696 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 696 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 697 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
	step_end

# 699 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_6:
# 700 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 700 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 700 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 700 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 700 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 700 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
	step_end

# 708 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_7:
# 709 "data/maps/Pyroden/scripts.pory"
	delay_16
# 709 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 729 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_8:
# 729 "data/maps/Pyroden/scripts.pory"
	delay_16
# 729 "data/maps/Pyroden/scripts.pory"
	delay_16
# 729 "data/maps/Pyroden/scripts.pory"
	delay_16
# 729 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 745 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_9:
# 745 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 793 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_10:
# 794 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 795 "data/maps/Pyroden/scripts.pory"
	face_up
# 796 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 823 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_11:
# 824 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 825 "data/maps/Pyroden/scripts.pory"
	delay_16
# 825 "data/maps/Pyroden/scripts.pory"
	delay_16
# 826 "data/maps/Pyroden/scripts.pory"
	walk_right
# 827 "data/maps/Pyroden/scripts.pory"
	walk_down
# 828 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 926 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_12:
# 927 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 927 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 927 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 927 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
	step_end

# 929 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_13:
# 930 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 930 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 930 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 930 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 930 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 930 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 931 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 931 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 931 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 932 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

Pyroden_EventScript_IntroVeeDown_Text_0:
# 69 "data/maps/Pyroden/scripts.pory"
	.string "Vee$"

Pyroden_EventScript_IntroVeeDown_Text_1:
# 73 "data/maps/Pyroden/scripts.pory"
	.string "Fro$"

Pyroden_EventScript_InvestigationNotOver_Text_0:
# 261 "data/maps/Pyroden/scripts.pory"
	.string "The investigation is not over!\n"
	.string "Don't leave your friends like that!$"

Pyroden_EventScript_Slugma_Text_0:
# 272 "data/maps/Pyroden/scripts.pory"
	.string "Slugma$"

Pyroden_EventScript_Slugma_Text_1:
# 274 "data/maps/Pyroden/scripts.pory"
	.string "Welcome to Pyroden!\n"
	.string "Have you come for our world-famous hot\l"
	.string "springs?\p"
	.string "Lately they haven't been as hot,\n"
	.string "though.\p"
	.string "Maybe I should take a dip in lava.$"

Pyroden_EventScript_Sandshrew_Text_0:
# 286 "data/maps/Pyroden/scripts.pory"
	.string "Sandshrew$"

Pyroden_EventScript_Sandshrew_Text_1:
# 288 "data/maps/Pyroden/scripts.pory"
	.string "See those torches around town?\p"
	.string "They used to be burning bright all day\n"
	.string "and night.\p"
	.string "Dunno who turned them off.\n"
	.string "But it's definitely unusual.$"

Pyroden_EventScript_CheckHints_Text_0:
# 307 "data/maps/Pyroden/scripts.pory"
	.string "This felt like {COLOR RED}important information{COLOR DARK_GRAY}.$"

Pyroden_EventScript_CheckHints_Text_1:
# 317 "data/maps/Pyroden/scripts.pory"
	.string "You've gathered as many hints as you\n"
	.string "could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_CheckHintsInside_Text_0:
# 346 "data/maps/Pyroden/scripts.pory"
	.string "You feel like you've gathered as many\n"
	.string "hints as you could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_Growlithe_Text_0:
# 356 "data/maps/Pyroden/scripts.pory"
	.string "Growlithe$"

Pyroden_EventScript_Growlithe_Text_1:
# 358 "data/maps/Pyroden/scripts.pory"
	.string "Been some trouble lately, but the chief\n"
	.string "ain't doin' nothin' 'bout it.\p"
	.string "Reckon it'd be time to replace 'er.$"

Pyroden_EventScript_Sudowoodo_Text_0:
# 365 "data/maps/Pyroden/scripts.pory"
	.string "Sudowoodo$"

Pyroden_EventScript_Sudowoodo_Text_1:
# 369 "data/maps/Pyroden/scripts.pory"
	.string "I'm telling you, I'm not a tree!\p"
	.string "Are you racist or something?$"

Pyroden_EventScript_Sudowoodo_Text_2:
# 375 "data/maps/Pyroden/scripts.pory"
	.string "I'm glad I'm not a real tree, or I'd be\n"
	.string "burned to a crisp by now.$"

Pyroden_EventScript_Fro_Text_0:
# 387 "data/maps/Pyroden/scripts.pory"
	.string "Hmmmm…\p"
	.string "Investigating sure is a tough job…\p"
	.string "I haven't really learned much…\p"
	.string "Man, I could really use a dip in the\n"
	.string "springs…\p"
	.string "What do you say, {PLAYER}?\n"
	.string "Wanna go?$"

Pyroden_EventScript_Fro_Text_1:
# 398 "data/maps/Pyroden/scripts.pory"
	.string "Sigh…\p"
	.string "Oh, my sweet hot springs…\n"
	.string "When will I have you?$"

Pyroden_EventScript_Fro_Text_2:
# 407 "data/maps/Pyroden/scripts.pory"
	.string "Great!\p"
	.string "If you wanna discuss what you've\n"
	.string "discovered in the mean time, feel free\l"
	.string "to do it.\p"
	.string "I'll be all ears.\n"
	.string "But before that…$"

Pyroden_EventScript_Fro_Text_3:
# 433 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "What a funny looking tree.\p"
	.string "I wonder if it holds any secrets.$"

Pyroden_EventScript_Vee_Text_0:
# 449 "data/maps/Pyroden/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Hi, hi!\p"
	.string "I made sure to interrogate everyone in\n"
	.string "town!\p"
	.string "Unfortunately, I didn't discover much\n"
	.string "of anything…\p"
	.string "What about you, {PLAYER}?\n"
	.string "Do you wanna share it with us?$"

Pyroden_EventScript_Vee_Text_1:
# 460 "data/maps/Pyroden/scripts.pory"
	.string "Oh…\n"
	.string "Well, ok!\p"
	.string "Whenever you want, {PLAYER}!$"

Pyroden_EventScript_Vee_Text_2:
# 468 "data/maps/Pyroden/scripts.pory"
	.string "Yay!\n"
	.string "Let's do it!$"

Pyroden_EventScript_Vee_Text_3:
# 480 "data/maps/Pyroden/scripts.pory"
	.string "Now, hold up a second.\n"
	.string "I was promised hot springs.\p"
	.string "If you want to discuss things, that's\n"
	.string "fine with me.\l"
	.string "But I'd rather do it while relaxing.\p"
	.string "So, if you would please excuse me…$"

Pyroden_EventScript_Vee_Text_4:
# 500 "data/maps/Pyroden/scripts.pory"
	.string "Where were you last night!?\n"
	.string "Any alibi!?\p"
	.string "You did it, didn't you!?\p"
	.string "Confess!$"

Pyroden_EventScript_Sunkern_Text_0:
# 512 "data/maps/Pyroden/scripts.pory"
	.string "Sunkern$"

Pyroden_EventScript_Sunkern_Text_1:
# 517 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\l"
	.string "I don't know anything…$"

Pyroden_EventScript_Sunkern_Text_2:
# 525 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\p"
	.string "I don't really know much about the\n"
	.string "world…$"

Pyroden_EventScript_Nidorina_Text_0:
# 535 "data/maps/Pyroden/scripts.pory"
	.string "Nidorina$"

Pyroden_EventScript_Nidorina_Text_1:
# 537 "data/maps/Pyroden/scripts.pory"
	.string "There used to be an entrance to the\n"
	.string "volcano north of here.\p"
	.string "But now it's not there anymore?\n"
	.string "I'm not really sure what happened.\p"
	.string "One day it was there, and the next…\n"
	.string "Poof.$"

Pyroden_EventScript_Snubbul_Text_0:
# 554 "data/maps/Pyroden/scripts.pory"
	.string "Snubbul$"

Pyroden_EventScript_Snubbul_Text_1:
# 558 "data/maps/Pyroden/scripts.pory"
	.string "Please, no more dives!$"

Pyroden_EventScript_Snubbul_Text_2:
# 563 "data/maps/Pyroden/scripts.pory"
	.string "That spinning guy is SO annoying.\p"
	.string "I'm just trying to enjoy the hot\n"
	.string "springs, but he makes me dizzy just by\l"
	.string "looking at him.\p"
	.string "He NEVER leaves, either.\n"
	.string "Weirdo.$"

Pyroden_EventScript_Spinda_Text_0:
# 572 "data/maps/Pyroden/scripts.pory"
	.string "Spinda$"

Pyroden_EventScript_Spinda_Text_1:
# 576 "data/maps/Pyroden/scripts.pory"
	.string "Find my Fire Stone, Fire Stone!\n"
	.string "It's on Route 2!\p"
	.string "Then I'll show you how to light up\n"
	.string "torches!$"

Pyroden_EventScript_Spinda_Text_2:
# 584 "data/maps/Pyroden/scripts.pory"
	.string "Spinning round, and round, and round\n"
	.string "again!\l"
	.string "From dawn to dusk, from hot to cold!\p"
	.string "Up, and down, and all around!\n"
	.string "The spinning never stops!$"

Pyroden_EventScript_FroJumpsInSprings_Text_0:
# 598 "data/maps/Pyroden/scripts.pory"
	.string "I'm jumping in!$"

Pyroden_EventScript_FroJumpsInSprings_Text_1:
# 608 "data/maps/Pyroden/scripts.pory"
	.string "No, sto-$"

Pyroden_EventScript_FroJumpsInSprings_Text_2:
# 663 "data/maps/Pyroden/scripts.pory"
	.string "Oh, bother.\n"
	.string "I seem to have miscalculated.$"

Pyroden_EventScript_FroJumpsInSprings_Text_3:
# 668 "data/maps/Pyroden/scripts.pory"
	.string "Forget it!\n"
	.string "Can't even have a day at the hot\l"
	.string "springs in peace!\p"
	.string "I'm outta here!$"

Pyroden_EventScript_FroJumpsInSprings_Text_4:
# 684 "data/maps/Pyroden/scripts.pory"
	.string "Uhm, well.\n"
	.string "Let's try the other pool, maybe.$"

Pyroden_EventScript_FroJumpsInSprings_Text_5:
# 689 "data/maps/Pyroden/scripts.pory"
	.string "And be careful this time!$"

Pyroden_EventScript_FroJumpsInSprings_Text_6:
# 714 "data/maps/Pyroden/scripts.pory"
	.string "Ahhh…\n"
	.string "Now that's the stuff.\p"
	.string "I feel like a boiled egg.$"

Pyroden_EventScript_FroJumpsInSprings_Text_7:
# 720 "data/maps/Pyroden/scripts.pory"
	.string "Yeah!\n"
	.string "It's really nice!\p"
	.string "Except, uhm…$"

Pyroden_EventScript_FroJumpsInSprings_Text_8:
# 733 "data/maps/Pyroden/scripts.pory"
	.string "That guy is…\n"
	.string "A bit distracting.$"

Pyroden_EventScript_FroJumpsInSprings_Text_9:
# 738 "data/maps/Pyroden/scripts.pory"
	.string "Ignore them.\n"
	.string "Maybe they will go away on their own.$"

Pyroden_EventScript_FroJumpsInSprings_Text_10:
# 742 "data/maps/Pyroden/scripts.pory"
	.string "If you think so…$"

Pyroden_EventScript_FroJumpsInSprings_Text_11:
# 749 "data/maps/Pyroden/scripts.pory"
	.string "Anyway, {PLAYER}, have you found any\n"
	.string "hints for our mission?\p"
	.string "… … …\p"
	.string "Oh, that's…\n"
	.string "A lot of hints, actually.\p"
	.string "Maybe we should do a recap!$"

Pyroden_EventScript_FroJumpsInSprings_Text_12:
# 757 "data/maps/Pyroden/scripts.pory"
	.string "I understood it perfectly.$"

Pyroden_EventScript_FroJumpsInSprings_Text_13:
# 763 "data/maps/Pyroden/scripts.pory"
	.string "I SAID we should do a recap!$"

Pyroden_EventScript_FroJumpsInSprings_Text_14:
# 767 "data/maps/Pyroden/scripts.pory"
	.string "Ugh. Fine.$"

Pyroden_EventScript_FroJumpsInSprings_Text_15:
# 772 "data/maps/Pyroden/scripts.pory"
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
# 783 "data/maps/Pyroden/scripts.pory"
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
# 801 "data/maps/Pyroden/scripts.pory"
	.string "Fro!\n"
	.string "You're so good at this!$"

Pyroden_EventScript_FroJumpsInSprings_Text_18:
# 806 "data/maps/Pyroden/scripts.pory"
	.string "I suppose.\p"
	.string "But we aren't really any closer to\n"
	.string "figuring it out.\p"
	.string "How are we meant to light the torches\n"
	.string "back up…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_19:
# 812 "data/maps/Pyroden/scripts.pory"
	.string "Speaking of lighting things up…\p"
	.string "Aren't these hot springs getting a bit…\n"
	.string "Lukewarm?$"

Pyroden_EventScript_FroJumpsInSprings_Text_20:
# 818 "data/maps/Pyroden/scripts.pory"
	.string "…\p"
	.string "Now that you mention it…\n"
	.string "These hot springs are not hot at all!$"

Pyroden_EventScript_FroJumpsInSprings_Text_21:
# 837 "data/maps/Pyroden/scripts.pory"
	.string "Friends, friends!\n"
	.string "I must introduce myself!\p"
	.string "I am Spinda!\p"
	.string "But you can call me… Spinda!$"

Pyroden_EventScript_FroJumpsInSprings_Text_22:
# 844 "data/maps/Pyroden/scripts.pory"
	.string "Uhm, hi.\n"
	.string "Can we help you?$"

Pyroden_EventScript_FroJumpsInSprings_Text_23:
# 849 "data/maps/Pyroden/scripts.pory"
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
# 865 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\p"
	.string "And you can't do it yourself, because…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_25:
# 870 "data/maps/Pyroden/scripts.pory"
	.string "Oh, Fro, don't be mean!$"

Pyroden_EventScript_FroJumpsInSprings_Text_26:
# 874 "data/maps/Pyroden/scripts.pory"
	.string "No, I understand, I understand!\n"
	.string "But, I have a proposition!\p"
	.string "If you bring the Fire Stone here…\p"
	.string "I'll teach you how to light up torches!$"

Pyroden_EventScript_FroJumpsInSprings_Text_27:
# 881 "data/maps/Pyroden/scripts.pory"
	.string "You will?$"

Pyroden_EventScript_FroJumpsInSprings_Text_28:
# 885 "data/maps/Pyroden/scripts.pory"
	.string "Yes, yes!\n"
	.string "I could not help but overhear!\p"
	.string "You need to light up the torches!\n"
	.string "And I have a special way to do it!$"

Pyroden_EventScript_FroJumpsInSprings_Text_29:
# 892 "data/maps/Pyroden/scripts.pory"
	.string "Hold on a second…\p"
	.string "Can we not just use the Fire Stone to\n"
	.string "light up the torches…\p"
	.string "And then you use whatever you do with\n"
	.string "the torches to heat up the springs\l"
	.string "instead?$"

Pyroden_EventScript_FroJumpsInSprings_Text_30:
# 898 "data/maps/Pyroden/scripts.pory"
	.string "No, no!\n"
	.string "That's all out of order!\p"
	.string "Torches are special!\n"
	.string "You can't just light them up!\p"
	.string "Bring me the Stone, and I'll show you!$"

Pyroden_EventScript_FroJumpsInSprings_Text_31:
# 906 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Fine.$"

Pyroden_EventScript_FroJumpsInSprings_Text_32:
# 913 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\n"
	.string "Let's find this Fire Stone, and then\l"
	.string "come back here.$"

Pyroden_Text_Intro_Vee_1::
# 172 "data/maps/Pyroden/scripts.pory"
	.string "Yahoo!\n"
	.string "We're finally in Pyroden!$"

Pyroden_Text_Intro_Fro_1::
# 179 "data/maps/Pyroden/scripts.pory"
	.string "Yes.\n"
	.string "I can already feel it.\p"
	.string "The heavenly warmth…\n"
	.string "Almost like being slow cooked…\p"
	.string "Hot springs, here I come.$"

Pyroden_Text_Intro_Vee_2::
# 190 "data/maps/Pyroden/scripts.pory"
	.string "Not so fast!\n"
	.string "We're not here just to relax!$"

Pyroden_Text_Intro_Fro_2::
# 198 "data/maps/Pyroden/scripts.pory"
	.string "I am.$"

Pyroden_Text_Intro_Vee_3::
# 205 "data/maps/Pyroden/scripts.pory"
	.string "No!\n"
	.string "We need to find the artifact, remember?\p"
	.string "You promised!$"

Pyroden_Text_Intro_Fro_3::
# 214 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Did I now…?\p"
	.string "… … …\p"
	.string "Alright, alright.\n"
	.string "We can do some info gathering.\p"
	.string "But after that, a visit to the hot\n"
	.string "springs is in order.$"

Pyroden_Text_Intro_Vee_4::
# 226 "data/maps/Pyroden/scripts.pory"
	.string "Yay!$"

Pyroden_Text_Intro_Fro_4::
# 231 "data/maps/Pyroden/scripts.pory"
	.string "How about this.\p"
	.string "Let's split up, and ask around if anyone\n"
	.string "has seen anything strange.\p"
	.string "Once we get enough info, let's meet up\n"
	.string "at the hot springs.\p"
	.string "Ready? Go.$"

Pyroden_Text_Intro_Vee_5::
# 241 "data/maps/Pyroden/scripts.pory"
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
