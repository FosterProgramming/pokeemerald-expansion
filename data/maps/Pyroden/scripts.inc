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
.set LOCALID_GIRATINA, 20
# 15 "data/maps/Pyroden/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 16 "data/maps/Pyroden/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

Pyroden_MapScripts::
# 23 "data/maps/Pyroden/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Pyroden_MapScripts_MAP_SCRIPT_ON_TRANSITION
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


Generic_EventScript_SpawnVeeFro::
# 45 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 46 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 47 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 48 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE
# 49 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO
	return


Pyroden_EventScript_IntroVeeDown::
# 56 "data/maps/Pyroden/scripts.pory"
	lock
# 57 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 58 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 62 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_1
# 66 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 69 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 70 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 71 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 72 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 73 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 74 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 75 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 76 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 77 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 82 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 83 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 84 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 85 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 86 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 87 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 88 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 89 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 90 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 91 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 92 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 93 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 94 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 95 "data/maps/Pyroden/scripts.pory"
	closemessage
# 96 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 97 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 98 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 99 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 100 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_6
# 101 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 102 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 103 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 104 "data/maps/Pyroden/scripts.pory"
	closemessage
# 105 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 106 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 107 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 108 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 109 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_IntroVeeUp::
# 115 "data/maps/Pyroden/scripts.pory"
	lock
# 116 "data/maps/Pyroden/scripts.pory"
	call Generic_EventScript_SpawnVeeFro
# 117 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_0
# 121 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_0
# 125 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 128 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE
# 129 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 130 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_1
# 131 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_3
# 132 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 133 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 134 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_1
# 135 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 136 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_4
# 141 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 142 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 143 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_2
# 144 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 145 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_2
# 146 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 147 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_3
# 148 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 149 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_3
# 150 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 151 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_4
# 152 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 153 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Fro_4
# 154 "data/maps/Pyroden/scripts.pory"
	closemessage
# 155 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO, Pyroden_EventScript_IntroVeeDown_Movement_5
# 156 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 157 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO
# 158 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeUp_Movement_1
# 159 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeUp_Movement_2
# 160 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 161 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 162 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_Text_Intro_Vee_5
# 163 "data/maps/Pyroden/scripts.pory"
	closemessage
# 164 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE, Pyroden_EventScript_IntroVeeDown_Movement_5
# 165 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 166 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE
# 167 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 1
# 168 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_InvestigationNotOver::
# 260 "data/maps/Pyroden/scripts.pory"
	lock
# 261 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_InvestigationNotOver_Text_0
# 265 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 266 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 267 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Slugma::
# 273 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Slugma_Text_0
# 274 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Slugma_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sandshrew::
# 286 "data/maps/Pyroden/scripts.pory"
	lock
# 287 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sandshrew_Text_0
# 288 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sandshrew_Text_1, MSGBOX_NPC
# 294 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_Sandshrew_2
Pyroden_EventScript_Sandshrew_1:
# 299 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Sandshrew_2:
# 296 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_TORCHES
# 297 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Sandshrew_1


Pyroden_EventScript_CheckHints::
# 305 "data/maps/Pyroden/scripts.pory"
	lock
# 306 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 307 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 310 "data/maps/Pyroden/scripts.pory"
	closemessage
# 311 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHints_4
Pyroden_EventScript_CheckHints_1:
	return

Pyroden_EventScript_CheckHints_2:
# 316 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 317 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_1
# 321 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 322 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_VEE_TOWN, 13, 37
# 323 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, 13, 37
# 324 "data/maps/Pyroden/scripts.pory"
	setobjectxy LOCALID_FRO_TOWN, 14, 37
# 325 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, 14, 37
# 326 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_3:
# 313 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHints_7
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_4:
# 312 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHints_3
	goto Pyroden_EventScript_CheckHints_1

Pyroden_EventScript_CheckHints_7:
# 314 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHints_2
	goto Pyroden_EventScript_CheckHints_1


Pyroden_EventScript_CheckHintsInside::
# 334 "data/maps/Pyroden/scripts.pory"
	lock
# 335 "data/maps/Pyroden/scripts.pory"
	playse SE_M_PAY_DAY
# 336 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHints_Text_0
# 340 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_TORCHES, Pyroden_EventScript_CheckHintsInside_4
Pyroden_EventScript_CheckHintsInside_1:
# 351 "data/maps/Pyroden/scripts.pory"
	closemessage
	return

Pyroden_EventScript_CheckHintsInside_2:
# 345 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_INVESTIGATION_STATE, 1
# 346 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_CheckHintsInside_Text_0
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_3:
# 342 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_CheckHintsInside_7
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_4:
# 341 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_CheckHintsInside_3
	goto Pyroden_EventScript_CheckHintsInside_1

Pyroden_EventScript_CheckHintsInside_7:
# 343 "data/maps/Pyroden/scripts.pory"
	goto_if_set FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_CheckHintsInside_2
	goto Pyroden_EventScript_CheckHintsInside_1


Pyroden_EventScript_Growlithe::
# 357 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Growlithe_Text_0
# 358 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Growlithe_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Sudowoodo::
# 366 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sudowoodo_Text_0
# 367 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sudowoodo_2
# 375 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sudowoodo_2:
# 369 "data/maps/Pyroden/scripts.pory"
	lock
# 370 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sudowoodo_Text_1
# 371 "data/maps/Pyroden/scripts.pory"
	closemessage
# 372 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Fro::
# 383 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 384 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_EventScript_Fro_2
# 432 "data/maps/Pyroden/scripts.pory"
	lock
# 433 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_3
# 438 "data/maps/Pyroden/scripts.pory"
	closemessage
# 439 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Fro_2:
# 386 "data/maps/Pyroden/scripts.pory"
	faceplayer
# 387 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_0, MSGBOX_YESNO
# 395 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 396 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Pyroden_EventScript_Fro_5
# 406 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 407 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_2
# 413 "data/maps/Pyroden/scripts.pory"
	closemessage
# 414 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Fro_Movement_0
# 419 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_Fro_Movement_1
# 422 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 423 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_2
# 428 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 429 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_FroJumpsInSprings
	end

Pyroden_EventScript_Fro_5:
# 398 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Fro_Text_1
# 403 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


Pyroden_EventScript_Vee::
# 445 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 446 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 1
	goto_if_eq Pyroden_EventScript_Vee_2
# 499 "data/maps/Pyroden/scripts.pory"
	lock
# 500 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_4
# 506 "data/maps/Pyroden/scripts.pory"
	closemessage
# 507 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Vee_2:
# 448 "data/maps/Pyroden/scripts.pory"
	faceplayer
# 449 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_0, MSGBOX_YESNO
# 457 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 458 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Pyroden_EventScript_Vee_5
# 468 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_2
# 472 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 473 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Vee_Movement_0
# 478 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 479 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 480 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_3
# 487 "data/maps/Pyroden/scripts.pory"
	closemessage
# 488 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_Fro_Movement_1
# 489 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Vee_Movement_1
# 490 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_2
# 495 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 496 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_FroJumpsInSprings
	end

Pyroden_EventScript_Vee_5:
# 460 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Vee_Text_1
# 465 "data/maps/Pyroden/scripts.pory"
	closemessage
	end


Pyroden_EventScript_Sunkern::
# 513 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Sunkern_Text_0
# 514 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_INVESTIGATION_STATE, 0
	goto_if_eq Pyroden_EventScript_Sunkern_2
# 525 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Sunkern_2:
# 516 "data/maps/Pyroden/scripts.pory"
	lock
# 517 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Sunkern_Text_1
# 521 "data/maps/Pyroden/scripts.pory"
	closemessage
# 522 "data/maps/Pyroden/scripts.pory"
	release
	end


Pyroden_EventScript_Nidorina::
# 535 "data/maps/Pyroden/scripts.pory"
	lock
# 536 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Nidorina_Text_0
# 537 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Nidorina_Text_1, MSGBOX_NPC
# 544 "data/maps/Pyroden/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_ENTRANCE, Pyroden_EventScript_Nidorina_2
Pyroden_EventScript_Nidorina_1:
# 549 "data/maps/Pyroden/scripts.pory"
	release
	end

Pyroden_EventScript_Nidorina_2:
# 546 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_ENTRANCE
# 547 "data/maps/Pyroden/scripts.pory"
	call Pyroden_EventScript_CheckHints
	goto Pyroden_EventScript_Nidorina_1


Pyroden_EventScript_Snubbul::
# 555 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 556 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 1
	goto_if_gt Pyroden_EventScript_Snubbul_2
# 563 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Snubbul_2:
# 558 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Snubbul_Text_1, MSGBOX_NPC
	end


Pyroden_EventScript_Spinda::
# 573 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 574 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 2
	goto_if_gt Pyroden_EventScript_Spinda_2
# 582 "data/maps/Pyroden/scripts.pory"
	compare VAR_PYRODEN_STATE, 2
	goto_if_eq Pyroden_EventScript_Spinda_5
# 598 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_3
# 604 "data/maps/Pyroden/scripts.pory"
	closemessage
	end

Pyroden_EventScript_Spinda_2:
# 576 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_1
	end

Pyroden_EventScript_Spinda_5:
# 584 "data/maps/Pyroden/scripts.pory"
	checkitem ITEM_FIRE_STONE
# 585 "data/maps/Pyroden/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Pyroden_EventScript_Spinda_8
# 590 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_Spinda_Text_2
# 595 "data/maps/Pyroden/scripts.pory"
	closemessage
	end

Pyroden_EventScript_Spinda_8:
# 587 "data/maps/Pyroden/scripts.pory"
	goto Pyroden_EventScript_TeachWillOWisp
	end


Pyroden_EventScript_FroJumpsInSprings::
# 610 "data/maps/Pyroden/scripts.pory"
	special SpawnCameraObject
# 611 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 612 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_0
# 615 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 616 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_0
# 621 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 622 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_1
# 625 "data/maps/Pyroden/scripts.pory"
	closemessage
# 626 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_IntroVeeUp_Movement_2
# 627 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_IntroVeeDown_Movement_2
# 628 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_1
# 631 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_FRO_TOWN
# 632 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_WHITE
# 633 "data/maps/Pyroden/scripts.pory"
	playse SE_LEDGE
# 634 "data/maps/Pyroden/scripts.pory"
	waitse
# 635 "data/maps/Pyroden/scripts.pory"
	playse SE_FALL
# 636 "data/maps/Pyroden/scripts.pory"
	waitse
# 637 "data/maps/Pyroden/scripts.pory"
	playse SE_M_EXPLOSION
# 638 "data/maps/Pyroden/scripts.pory"
	waitse
# 639 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 41, METATILE_Pyroden_EmptyPool_TopLeft, TRUE
# 640 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 41, METATILE_Pyroden_EmptyPool_TopMiddle, TRUE
# 641 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 41, METATILE_Pyroden_EmptyPool_TopRight, TRUE
# 642 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 42, METATILE_Pyroden_EmptyPool_TopLeft, TRUE
# 643 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 42, METATILE_Pyroden_EmptyPool_BottomRightCorner, TRUE
# 644 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 42, METATILE_Pyroden_EmptyPool_MiddleMiddle, TRUE
# 645 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 42, METATILE_Pyroden_EmptyPool_MiddleRight, TRUE
# 646 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 43, METATILE_Pyroden_EmptyPool_BottomLeft, TRUE
# 647 "data/maps/Pyroden/scripts.pory"
	setmetatile 16, 43 METATILE_Pyroden_EmptyPool_BottomMiddle, TRUE
# 648 "data/maps/Pyroden/scripts.pory"
	setmetatile 17, 43, METATILE_Pyroden_EmptyPool_BottomMiddle, TRUE
# 649 "data/maps/Pyroden/scripts.pory"
	setmetatile 18, 43, METATILE_Pyroden_EmptyPool_BottomRight, TRUE
# 651 "data/maps/Pyroden/scripts.pory"
	setmetatile 19, 39, METATILE_Pyroden_Puddle_TopLeft, FALSE
# 652 "data/maps/Pyroden/scripts.pory"
	setmetatile 20, 39, METATILE_Pyroden_Puddle_TopRight, FALSE
# 653 "data/maps/Pyroden/scripts.pory"
	setmetatile 19, 40, METATILE_Pyroden_Puddle_BottomLeft, FALSE
# 654 "data/maps/Pyroden/scripts.pory"
	setmetatile 20, 40, METATILE_Pyroden_Puddle_BottomRight, FALSE
# 656 "data/maps/Pyroden/scripts.pory"
	setmetatile 14, 40, METATILE_Pyroden_Puddle_TopLeft, FALSE
# 657 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 40, METATILE_Pyroden_Puddle_TopRight, FALSE
# 658 "data/maps/Pyroden/scripts.pory"
	setmetatile 14, 41, METATILE_Pyroden_Puddle_BottomLeft, FALSE
# 659 "data/maps/Pyroden/scripts.pory"
	setmetatile 15, 41, METATILE_Pyroden_Puddle_BottomRight, FALSE
# 660 "data/maps/Pyroden/scripts.pory"
	special DrawWholeMapView
# 661 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_1
# 662 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_2
# 663 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 664 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 665 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_3
# 674 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 675 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 676 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_2
# 680 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 681 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_3
# 686 "data/maps/Pyroden/scripts.pory"
	closemessage
# 687 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_4
# 690 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 691 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SNUBBUL
# 692 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_IntroVeeDown_Movement_6
# 695 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 696 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 697 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_4
# 701 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 702 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_5
# 705 "data/maps/Pyroden/scripts.pory"
	closemessage
# 706 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 707 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_TOWN
# 708 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_TOWN
# 709 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_5
# 713 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_6
# 716 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 717 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_HOT_SPRINGS_GANG
# 718 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SEEL_HOT_SPRINGS
# 719 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO_HOT_SPRINGS
# 720 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE_HOT_SPRINGS
# 721 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 722 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_7
# 725 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 726 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 727 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_6
# 732 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 733 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_7
# 738 "data/maps/Pyroden/scripts.pory"
	closemessage
# 739 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 740 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 741 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 742 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 743 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_8
# 744 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 745 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 746 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_8
# 750 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 751 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_9
# 755 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 756 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_10
# 757 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 758 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_IntroVeeUp_Movement_2
# 759 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 760 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 761 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 762 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_11
# 769 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 770 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_12
# 773 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_IntroVeeDown_Movement_6
# 774 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 775 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 776 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_13
# 779 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 780 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_14
# 783 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 784 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 785 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_15
# 795 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 796 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_16
# 806 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 807 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_10
# 812 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 813 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 814 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_17
# 818 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 819 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_18
# 824 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 825 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_19
# 830 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 831 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_20
# 836 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 837 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_FroJumpsInSprings_Movement_11
# 844 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 845 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 846 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SEEL_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 847 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_Fro_Movement_1
# 848 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 849 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 850 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_21
# 856 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 857 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_22
# 861 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 862 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_23
# 877 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 878 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_24
# 882 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 883 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_25
# 886 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 887 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_26
# 893 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 894 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_27
# 897 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 898 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_28
# 904 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 905 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_29
# 909 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 910 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_30
# 917 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 918 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_31
# 922 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_HOT_SPRINGS, Pyroden_EventScript_IntroVeeUp_Movement_2
# 923 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_HOT_SPRINGS, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 924 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 925 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_FroJumpsInSprings_Text_32
# 929 "data/maps/Pyroden/scripts.pory"
	closemessage
# 930 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_TO_BLACK
# 931 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_HOT_SPRINGS
# 932 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_HOT_SPRINGS
# 933 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SEEL_HOT_SPRINGS
# 934 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_SNUBBUL_PYRODEN
# 935 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SNUBBUL
# 936 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_NIDORINA_PYRODEN
# 937 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 2
# 938 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Pyroden_EventScript_FroJumpsInSprings_Movement_12
# 941 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_FroJumpsInSprings_Movement_13
# 946 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_FroJumpsInSprings_Movement_14
# 951 "data/maps/Pyroden/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 952 "data/maps/Pyroden/scripts.pory"
	special RemoveCameraObject
# 953 "data/maps/Pyroden/scripts.pory"
	fadescreen FADE_FROM_BLACK
	end


Pyroden_EventScript_TeachWillOWisp::
# 959 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_PARTY_PYRODEN
# 960 "data/maps/Pyroden/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 961 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_FRO_TOWN, PlayerXCoordinates, PlayerYCoordinates
# 962 "data/maps/Pyroden/scripts.pory"
	setobjectxyperm LOCALID_VEE_TOWN, PlayerXCoordinates, PlayerYCoordinates
# 963 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_VEE_TOWN
# 964 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_FRO_TOWN
# 965 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_0
# 966 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_1
# 967 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 968 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 969 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_0
# 974 "data/maps/Pyroden/scripts.pory"
	speakername NULL
# 975 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_1
# 978 "data/maps/Pyroden/scripts.pory"
	removeitem ITEM_FIRE_STONE
# 979 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 980 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_2
# 984 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 985 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_3
# 990 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 991 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_4
# 998 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 999 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1000 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1004 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1005 "data/maps/Pyroden/scripts.pory"
	waitse
# 1006 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_5
# 1009 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1010 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_6
# 1018 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1019 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_7
# 1025 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1026 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_8
# 1033 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1034 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_3
# 1039 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_TeachWillOWisp_Movement_4
# 1044 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_5
# 1050 "data/maps/Pyroden/scripts.pory"
	waitmovement LOCALID_VEE_TOWN
# 1051 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1052 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_9
# 1055 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1056 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_10
# 1059 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1060 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_6
# 1061 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1062 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1063 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_11
# 1067 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1068 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_IntroVeeDown_Movement_4
# 1073 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Snubbul_Text_0
# 1074 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_12
# 1077 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1078 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SNUBBUL, Pyroden_EventScript_FroJumpsInSprings_Movement_4
# 1081 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1082 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_7
# 1086 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1087 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1088 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_13
# 1092 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1093 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_8
# 1119 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1120 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_14
# 1123 "data/maps/Pyroden/scripts.pory"
	fadeoutbgm 1
# 1124 "data/maps/Pyroden/scripts.pory"
	setweather WEATHER_SHADE
# 1125 "data/maps/Pyroden/scripts.pory"
	doweather
# 1126 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1127 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1128 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1129 "data/maps/Pyroden/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_TeachWillOWisp_Movement_2
# 1130 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1131 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_9
# 1169 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1170 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1171 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_15
# 1174 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1175 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_10
# 1191 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1192 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1193 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_16
# 1196 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1197 "data/maps/Pyroden/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 1198 "data/maps/Pyroden/scripts.pory"
	doweather
# 1199 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1200 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_17
# 1204 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1205 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_11
# 1221 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1222 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_18
# 1226 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1227 "data/maps/Pyroden/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_NORMAL
# 1228 "data/maps/Pyroden/scripts.pory"
	waitmoncry
# 1229 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_GIRATINA
# 1230 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_GIRATINA
# 1231 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_GIRATINA, Pyroden_EventScript_TeachWillOWisp_Movement_12
# 1234 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1235 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1236 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_19
# 1239 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1240 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_20
# 1245 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1246 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_21
# 1249 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1250 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1251 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_22
# 1254 "data/maps/Pyroden/scripts.pory"
	playmoncry SPECIES_GIRATINA, CRY_MODE_NORMAL
# 1255 "data/maps/Pyroden/scripts.pory"
	waitmoncry
# 1256 "data/maps/Pyroden/scripts.pory"
	setweather WEATHER_NONE
# 1257 "data/maps/Pyroden/scripts.pory"
	doweather
# 1258 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_GIRATINA, Pyroden_EventScript_TeachWillOWisp_Movement_13
# 1261 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1262 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1263 "data/maps/Pyroden/scripts.pory"
	fadescreenswapbuffers FADE_TO_WHITE
# 1264 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_GIRATINA
# 1265 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_SNUBBUL
# 1266 "data/maps/Pyroden/scripts.pory"
	clearflag FLAG_HIDE_SNUBBUL_PYRODEN
# 1267 "data/maps/Pyroden/scripts.pory"
	addobject LOCALID_SNUBBUL
# 1268 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SNUBBUL, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 1269 "data/maps/Pyroden/scripts.pory"
	delay 120
# 1270 "data/maps/Pyroden/scripts.pory"
	fadescreenswapbuffers FADE_FROM_WHITE
# 1271 "data/maps/Pyroden/scripts.pory"
	special WaitWeather
# 1272 "data/maps/Pyroden/scripts.pory"
	waitstate
# 1273 "data/maps/Pyroden/scripts.pory"
	fadeinbgm 1
# 1274 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_14
# 1278 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1279 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1280 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_23
# 1285 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1286 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_24
# 1289 "data/maps/Pyroden/scripts.pory"
	playse SE_PIN
# 1290 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_15
# 1291 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1292 "data/maps/Pyroden/scripts.pory"
	waitse
# 1293 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1294 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_25
# 1297 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1298 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_26
# 1304 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_Spinda_Text_0
# 1305 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_27
# 1312 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1313 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_SPINDA, Pyroden_EventScript_TeachWillOWisp_Movement_16
# 1318 "data/maps/Pyroden/scripts.pory"
	setobjectmovementtype LOCALID_SPINDA, MOVEMENT_TYPE_ROTATE_COUNTERCLOCKWISE
# 1319 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_Fro_Movement_1
# 1320 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_FroJumpsInSprings_Movement_9
# 1321 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1322 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_0
# 1323 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_28
# 1328 "data/maps/Pyroden/scripts.pory"
	speakername Pyroden_EventScript_IntroVeeDown_Text_1
# 1329 "data/maps/Pyroden/scripts.pory"
	msgbox Pyroden_EventScript_TeachWillOWisp_Text_29
# 1332 "data/maps/Pyroden/scripts.pory"
	closemessage
# 1333 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_FRO_TOWN, Pyroden_EventScript_InvestigationNotOver_Movement_0
# 1334 "data/maps/Pyroden/scripts.pory"
	applymovement LOCALID_VEE_TOWN, Pyroden_EventScript_TeachWillOWisp_Movement_17
# 1335 "data/maps/Pyroden/scripts.pory"
	waitmovement 0
# 1336 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_VEE_TOWN
# 1337 "data/maps/Pyroden/scripts.pory"
	removeobject LOCALID_FRO_TOWN
# 1338 "data/maps/Pyroden/scripts.pory"
	setflag FLAG_WILL_O_WISP
# 1339 "data/maps/Pyroden/scripts.pory"
	setvar VAR_PYRODEN_STATE, 3
# 1340 "data/maps/Pyroden/scripts.pory"
	end
	end


# 58 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_0:
# 59 "data/maps/Pyroden/scripts.pory"
	walk_left
# 60 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 62 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_1:
# 63 "data/maps/Pyroden/scripts.pory"
	walk_down
# 64 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 66 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_2:
# 67 "data/maps/Pyroden/scripts.pory"
	walk_in_place_down
	step_end

# 72 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_3:
# 72 "data/maps/Pyroden/scripts.pory"
	walk_in_place_left
	step_end

# 77 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_4:
# 78 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 79 "data/maps/Pyroden/scripts.pory"
	delay_16
# 80 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 96 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_5:
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
# 96 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 100 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeDown_Movement_6:
# 100 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 121 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_0:
# 122 "data/maps/Pyroden/scripts.pory"
	walk_up
# 123 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 125 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_1:
# 126 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 159 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_IntroVeeUp_Movement_2:
# 159 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 265 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_InvestigationNotOver_Movement_0:
# 265 "data/maps/Pyroden/scripts.pory"
	walk_left
	step_end

# 414 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_0:
# 415 "data/maps/Pyroden/scripts.pory"
	walk_left
# 416 "data/maps/Pyroden/scripts.pory"
	walk_in_place_right
	step_end

# 419 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_1:
# 420 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 423 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Fro_Movement_2:
# 424 "data/maps/Pyroden/scripts.pory"
	walk_down
# 425 "data/maps/Pyroden/scripts.pory"
	walk_right
# 425 "data/maps/Pyroden/scripts.pory"
	walk_right
# 425 "data/maps/Pyroden/scripts.pory"
	walk_right
# 426 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 473 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Vee_Movement_0:
# 474 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 475 "data/maps/Pyroden/scripts.pory"
	delay_16
# 476 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 489 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_Vee_Movement_1:
# 489 "data/maps/Pyroden/scripts.pory"
	walk_in_place_fast_right
	step_end

# 616 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_0:
# 617 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 618 "data/maps/Pyroden/scripts.pory"
	face_left
# 619 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 628 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_1:
# 629 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 629 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 662 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_2:
# 662 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 662 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 662 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 662 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 665 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_3:
# 666 "data/maps/Pyroden/scripts.pory"
	delay_16
# 666 "data/maps/Pyroden/scripts.pory"
	delay_16
# 666 "data/maps/Pyroden/scripts.pory"
	delay_16
# 667 "data/maps/Pyroden/scripts.pory"
	face_right
# 668 "data/maps/Pyroden/scripts.pory"
	delay_16
# 668 "data/maps/Pyroden/scripts.pory"
	delay_16
# 669 "data/maps/Pyroden/scripts.pory"
	face_left
# 670 "data/maps/Pyroden/scripts.pory"
	delay_16
# 670 "data/maps/Pyroden/scripts.pory"
	delay_16
# 671 "data/maps/Pyroden/scripts.pory"
	face_down
# 672 "data/maps/Pyroden/scripts.pory"
	delay_16
# 672 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 687 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_4:
# 688 "data/maps/Pyroden/scripts.pory"
	walk_right
# 688 "data/maps/Pyroden/scripts.pory"
	walk_right
# 688 "data/maps/Pyroden/scripts.pory"
	walk_right
# 688 "data/maps/Pyroden/scripts.pory"
	walk_right
# 688 "data/maps/Pyroden/scripts.pory"
	walk_right
# 688 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 709 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_5:
# 710 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 710 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 710 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 710 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 711 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
	step_end

# 713 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_6:
# 714 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 714 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 714 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 714 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 714 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 714 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
	step_end

# 722 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_7:
# 723 "data/maps/Pyroden/scripts.pory"
	delay_16
# 723 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 743 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_8:
# 743 "data/maps/Pyroden/scripts.pory"
	delay_16
# 743 "data/maps/Pyroden/scripts.pory"
	delay_16
# 743 "data/maps/Pyroden/scripts.pory"
	delay_16
# 743 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 759 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_9:
# 759 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 807 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_10:
# 808 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 809 "data/maps/Pyroden/scripts.pory"
	face_up
# 810 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 837 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_11:
# 838 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 839 "data/maps/Pyroden/scripts.pory"
	delay_16
# 839 "data/maps/Pyroden/scripts.pory"
	delay_16
# 840 "data/maps/Pyroden/scripts.pory"
	walk_right
# 841 "data/maps/Pyroden/scripts.pory"
	walk_down
# 842 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 938 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_12:
# 939 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 939 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 939 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 939 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
	step_end

# 941 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_13:
# 942 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 942 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 942 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 942 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 942 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 942 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 943 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 943 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 943 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 944 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 946 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_FroJumpsInSprings_Movement_14:
# 947 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 948 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 949 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 965 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_0:
# 965 "data/maps/Pyroden/scripts.pory"
	walk_up
# 965 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 966 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_1:
# 966 "data/maps/Pyroden/scripts.pory"
	walk_down
# 966 "data/maps/Pyroden/scripts.pory"
	face_left
	step_end

# 1000 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_2:
# 1001 "data/maps/Pyroden/scripts.pory"
	emote_exclamation_mark
# 1002 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 1034 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_3:
# 1035 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1035 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1036 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1036 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1036 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1036 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1036 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1037 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 1039 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_4:
# 1040 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1041 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1041 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1041 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1041 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1042 "data/maps/Pyroden/scripts.pory"
	walk_in_place_up
	step_end

# 1044 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_5:
# 1045 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1046 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1046 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1046 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1047 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1048 "data/maps/Pyroden/scripts.pory"
	face_up
	step_end

# 1060 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_6:
# 1060 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1060 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1060 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1060 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1060 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

# 1082 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_7:
# 1083 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1083 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1084 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1093 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_8:
# 1094 "data/maps/Pyroden/scripts.pory"
	face_right
# 1095 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1095 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1096 "data/maps/Pyroden/scripts.pory"
	face_up
# 1097 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1097 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1098 "data/maps/Pyroden/scripts.pory"
	face_left
# 1099 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1099 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1100 "data/maps/Pyroden/scripts.pory"
	face_down
# 1101 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1101 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1102 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1103 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1104 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1105 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1106 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1107 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1108 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1109 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1110 "data/maps/Pyroden/scripts.pory"
	walk_right
# 1111 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1112 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1113 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1114 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1115 "data/maps/Pyroden/scripts.pory"
	delay_16
# 1116 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1117 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 1131 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_9:
# 1132 "data/maps/Pyroden/scripts.pory"
	face_right
# 1133 "data/maps/Pyroden/scripts.pory"
	face_up
# 1134 "data/maps/Pyroden/scripts.pory"
	face_left
# 1135 "data/maps/Pyroden/scripts.pory"
	face_down
# 1136 "data/maps/Pyroden/scripts.pory"
	face_right
# 1137 "data/maps/Pyroden/scripts.pory"
	face_up
# 1138 "data/maps/Pyroden/scripts.pory"
	face_left
# 1139 "data/maps/Pyroden/scripts.pory"
	face_down
# 1140 "data/maps/Pyroden/scripts.pory"
	face_right
# 1141 "data/maps/Pyroden/scripts.pory"
	face_up
# 1142 "data/maps/Pyroden/scripts.pory"
	face_left
# 1143 "data/maps/Pyroden/scripts.pory"
	face_down
# 1144 "data/maps/Pyroden/scripts.pory"
	face_right
# 1145 "data/maps/Pyroden/scripts.pory"
	face_up
# 1146 "data/maps/Pyroden/scripts.pory"
	face_left
# 1147 "data/maps/Pyroden/scripts.pory"
	face_down
# 1148 "data/maps/Pyroden/scripts.pory"
	face_right
# 1149 "data/maps/Pyroden/scripts.pory"
	face_up
# 1150 "data/maps/Pyroden/scripts.pory"
	face_left
# 1151 "data/maps/Pyroden/scripts.pory"
	face_down
# 1152 "data/maps/Pyroden/scripts.pory"
	face_right
# 1153 "data/maps/Pyroden/scripts.pory"
	face_up
# 1154 "data/maps/Pyroden/scripts.pory"
	face_left
# 1155 "data/maps/Pyroden/scripts.pory"
	face_down
# 1156 "data/maps/Pyroden/scripts.pory"
	face_right
# 1157 "data/maps/Pyroden/scripts.pory"
	face_up
# 1158 "data/maps/Pyroden/scripts.pory"
	face_left
# 1159 "data/maps/Pyroden/scripts.pory"
	face_down
# 1160 "data/maps/Pyroden/scripts.pory"
	face_right
# 1161 "data/maps/Pyroden/scripts.pory"
	face_up
# 1162 "data/maps/Pyroden/scripts.pory"
	face_left
# 1163 "data/maps/Pyroden/scripts.pory"
	face_down
# 1164 "data/maps/Pyroden/scripts.pory"
	face_right
# 1165 "data/maps/Pyroden/scripts.pory"
	face_up
# 1166 "data/maps/Pyroden/scripts.pory"
	face_left
# 1167 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1175 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_10:
# 1176 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1177 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1178 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1178 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1179 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1180 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1180 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1181 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1182 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1182 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1183 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1184 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1184 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1185 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1186 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1186 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1187 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1188 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1189 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1205 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_11:
# 1206 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1207 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1208 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1208 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1209 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1210 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1210 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1211 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1212 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1212 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1213 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1214 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1214 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1215 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1216 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1216 "data/maps/Pyroden/scripts.pory"
	walk_fast_left
# 1217 "data/maps/Pyroden/scripts.pory"
	walk_fast_up
# 1218 "data/maps/Pyroden/scripts.pory"
	walk_fast_right
# 1219 "data/maps/Pyroden/scripts.pory"
	face_down
	step_end

# 1231 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_12:
# 1232 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1232 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1232 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1232 "data/maps/Pyroden/scripts.pory"
	walk_down
	step_end

# 1258 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_13:
# 1259 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1259 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
# 1259 "data/maps/Pyroden/scripts.pory"
	walk_fast_down
	step_end

# 1274 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_14:
# 1275 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1276 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1276 "data/maps/Pyroden/scripts.pory"
	walk_down
# 1276 "data/maps/Pyroden/scripts.pory"
	walk_down
	step_end

# 1290 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_15:
# 1290 "data/maps/Pyroden/scripts.pory"
	emote_question_mark
# 1290 "data/maps/Pyroden/scripts.pory"
	delay_16
	step_end

# 1313 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_16:
# 1314 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1314 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1314 "data/maps/Pyroden/scripts.pory"
	walk_up
# 1315 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1315 "data/maps/Pyroden/scripts.pory"
	walk_left
# 1316 "data/maps/Pyroden/scripts.pory"
	face_right
	step_end

# 1334 "data/maps/Pyroden/scripts.pory"
Pyroden_EventScript_TeachWillOWisp_Movement_17:
# 1334 "data/maps/Pyroden/scripts.pory"
	walk_right
	step_end

Pyroden_EventScript_IntroVeeDown_Text_0:
# 70 "data/maps/Pyroden/scripts.pory"
	.string "Vee$"

Pyroden_EventScript_IntroVeeDown_Text_1:
# 74 "data/maps/Pyroden/scripts.pory"
	.string "Fro$"

Pyroden_EventScript_InvestigationNotOver_Text_0:
# 262 "data/maps/Pyroden/scripts.pory"
	.string "The investigation is not over!\n"
	.string "Don't leave your friends like that!$"

Pyroden_EventScript_Slugma_Text_0:
# 273 "data/maps/Pyroden/scripts.pory"
	.string "Slugma$"

Pyroden_EventScript_Slugma_Text_1:
# 275 "data/maps/Pyroden/scripts.pory"
	.string "Welcome to Pyroden!\n"
	.string "Have you come for our world-famous hot\l"
	.string "springs?\p"
	.string "Lately they haven't been as hot,\n"
	.string "though.\p"
	.string "Maybe I should take a dip in lava.$"

Pyroden_EventScript_Sandshrew_Text_0:
# 287 "data/maps/Pyroden/scripts.pory"
	.string "Sandshrew$"

Pyroden_EventScript_Sandshrew_Text_1:
# 289 "data/maps/Pyroden/scripts.pory"
	.string "See those torches around town?\p"
	.string "They used to be burning bright all day\n"
	.string "and night.\p"
	.string "Dunno who turned them off.\n"
	.string "But it's definitely unusual.$"

Pyroden_EventScript_CheckHints_Text_0:
# 308 "data/maps/Pyroden/scripts.pory"
	.string "This felt like {COLOR RED}important information{COLOR DARK_GRAY}.$"

Pyroden_EventScript_CheckHints_Text_1:
# 318 "data/maps/Pyroden/scripts.pory"
	.string "You've gathered as many hints as you\n"
	.string "could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_CheckHintsInside_Text_0:
# 347 "data/maps/Pyroden/scripts.pory"
	.string "You feel like you've gathered as many\n"
	.string "hints as you could.\p"
	.string "Meet up with the others at the hot\n"
	.string "springs!$"

Pyroden_EventScript_Growlithe_Text_0:
# 357 "data/maps/Pyroden/scripts.pory"
	.string "Growlithe$"

Pyroden_EventScript_Growlithe_Text_1:
# 359 "data/maps/Pyroden/scripts.pory"
	.string "Been some trouble lately, but the chief\n"
	.string "ain't doin' nothin' 'bout it.\p"
	.string "Reckon it'd be time to replace 'er.$"

Pyroden_EventScript_Sudowoodo_Text_0:
# 366 "data/maps/Pyroden/scripts.pory"
	.string "Sudowoodo$"

Pyroden_EventScript_Sudowoodo_Text_1:
# 370 "data/maps/Pyroden/scripts.pory"
	.string "I'm telling you, I'm not a tree!\p"
	.string "Are you racist or something?$"

Pyroden_EventScript_Sudowoodo_Text_2:
# 376 "data/maps/Pyroden/scripts.pory"
	.string "I'm glad I'm not a real tree, or I'd be\n"
	.string "burned to a crisp by now.$"

Pyroden_EventScript_Fro_Text_0:
# 388 "data/maps/Pyroden/scripts.pory"
	.string "Hmmmm…\p"
	.string "Investigating sure is a tough job…\p"
	.string "I haven't really learned much…\p"
	.string "Man, I could really use a dip in the\n"
	.string "springs…\p"
	.string "What do you say, {PLAYER}?\n"
	.string "Wanna go?$"

Pyroden_EventScript_Fro_Text_1:
# 399 "data/maps/Pyroden/scripts.pory"
	.string "Sigh…\p"
	.string "Oh, my sweet hot springs…\n"
	.string "When will I have you?$"

Pyroden_EventScript_Fro_Text_2:
# 408 "data/maps/Pyroden/scripts.pory"
	.string "Great!\p"
	.string "If you wanna discuss what you've\n"
	.string "discovered in the mean time, feel free\l"
	.string "to do it.\p"
	.string "I'll be all ears.\n"
	.string "But before that…$"

Pyroden_EventScript_Fro_Text_3:
# 434 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "What a funny looking tree.\p"
	.string "I wonder if it holds any secrets.$"

Pyroden_EventScript_Vee_Text_0:
# 450 "data/maps/Pyroden/scripts.pory"
	.string "{PLAYER}!\n"
	.string "Hi, hi!\p"
	.string "I made sure to interrogate everyone in\n"
	.string "town!\p"
	.string "Unfortunately, I didn't discover much\n"
	.string "of anything…\p"
	.string "What about you, {PLAYER}?\n"
	.string "Do you wanna share it with us?$"

Pyroden_EventScript_Vee_Text_1:
# 461 "data/maps/Pyroden/scripts.pory"
	.string "Oh…\n"
	.string "Well, ok!\p"
	.string "Whenever you want, {PLAYER}!$"

Pyroden_EventScript_Vee_Text_2:
# 469 "data/maps/Pyroden/scripts.pory"
	.string "Yay!\n"
	.string "Let's do it!$"

Pyroden_EventScript_Vee_Text_3:
# 481 "data/maps/Pyroden/scripts.pory"
	.string "Now, hold up a second.\n"
	.string "I was promised hot springs.\p"
	.string "If you want to discuss things, that's\n"
	.string "fine with me.\l"
	.string "But I'd rather do it while relaxing.\p"
	.string "So, if you would please excuse me…$"

Pyroden_EventScript_Vee_Text_4:
# 501 "data/maps/Pyroden/scripts.pory"
	.string "Where were you last night!?\n"
	.string "Any alibi!?\p"
	.string "You did it, didn't you!?\p"
	.string "Confess!$"

Pyroden_EventScript_Sunkern_Text_0:
# 513 "data/maps/Pyroden/scripts.pory"
	.string "Sunkern$"

Pyroden_EventScript_Sunkern_Text_1:
# 518 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\l"
	.string "I don't know anything…$"

Pyroden_EventScript_Sunkern_Text_2:
# 526 "data/maps/Pyroden/scripts.pory"
	.string "Ah…\n"
	.string "I'm just a little seed…\p"
	.string "I don't really know much about the\n"
	.string "world…$"

Pyroden_EventScript_Nidorina_Text_0:
# 536 "data/maps/Pyroden/scripts.pory"
	.string "Nidorina$"

Pyroden_EventScript_Nidorina_Text_1:
# 538 "data/maps/Pyroden/scripts.pory"
	.string "There used to be an entrance to the\n"
	.string "volcano north of here.\p"
	.string "But now it's not there anymore?\n"
	.string "I'm not really sure what happened.\p"
	.string "One day it was there, and the next…\n"
	.string "Poof.$"

Pyroden_EventScript_Snubbul_Text_0:
# 555 "data/maps/Pyroden/scripts.pory"
	.string "Snubbul$"

Pyroden_EventScript_Snubbul_Text_1:
# 559 "data/maps/Pyroden/scripts.pory"
	.string "Please, no more dives!$"

Pyroden_EventScript_Snubbul_Text_2:
# 564 "data/maps/Pyroden/scripts.pory"
	.string "That spinning guy is SO annoying.\p"
	.string "I'm just trying to enjoy the hot\n"
	.string "springs, but he makes me dizzy just by\l"
	.string "looking at him.\p"
	.string "He NEVER leaves, either.\n"
	.string "Weirdo.$"

Pyroden_EventScript_Spinda_Text_0:
# 573 "data/maps/Pyroden/scripts.pory"
	.string "Spinda$"

Pyroden_EventScript_Spinda_Text_1:
# 577 "data/maps/Pyroden/scripts.pory"
	.string "I'm late! I'm late!\n"
	.string "For a very important appointment!$"

Pyroden_EventScript_Spinda_Text_2:
# 591 "data/maps/Pyroden/scripts.pory"
	.string "Find my Fire Stone, Fire Stone!\n"
	.string "It's on Route 2!\p"
	.string "Then I'll show you how to light up\n"
	.string "torches!$"

Pyroden_EventScript_Spinda_Text_3:
# 599 "data/maps/Pyroden/scripts.pory"
	.string "Spinning round, and round, and round\n"
	.string "again!\l"
	.string "From dawn to dusk, from hot to cold!\p"
	.string "Up, and down, and all around!\n"
	.string "The spinning never stops!$"

Pyroden_EventScript_FroJumpsInSprings_Text_0:
# 613 "data/maps/Pyroden/scripts.pory"
	.string "I'm jumping in!$"

Pyroden_EventScript_FroJumpsInSprings_Text_1:
# 623 "data/maps/Pyroden/scripts.pory"
	.string "No, sto-$"

Pyroden_EventScript_FroJumpsInSprings_Text_2:
# 677 "data/maps/Pyroden/scripts.pory"
	.string "Oh, bother.\n"
	.string "I seem to have miscalculated.$"

Pyroden_EventScript_FroJumpsInSprings_Text_3:
# 682 "data/maps/Pyroden/scripts.pory"
	.string "Forget it!\n"
	.string "Can't even have a day at the hot\l"
	.string "springs in peace!\p"
	.string "I'm outta here!$"

Pyroden_EventScript_FroJumpsInSprings_Text_4:
# 698 "data/maps/Pyroden/scripts.pory"
	.string "Uhm, well.\n"
	.string "Let's try the other pool, maybe.$"

Pyroden_EventScript_FroJumpsInSprings_Text_5:
# 703 "data/maps/Pyroden/scripts.pory"
	.string "And be careful this time!$"

Pyroden_EventScript_FroJumpsInSprings_Text_6:
# 728 "data/maps/Pyroden/scripts.pory"
	.string "Ahhh…\n"
	.string "Now that's the stuff.\p"
	.string "I feel like a soaking egg.$"

Pyroden_EventScript_FroJumpsInSprings_Text_7:
# 734 "data/maps/Pyroden/scripts.pory"
	.string "Yeah!\n"
	.string "It's really nice!\p"
	.string "Except, uhm…$"

Pyroden_EventScript_FroJumpsInSprings_Text_8:
# 747 "data/maps/Pyroden/scripts.pory"
	.string "That guy is…\n"
	.string "A bit distracting.$"

Pyroden_EventScript_FroJumpsInSprings_Text_9:
# 752 "data/maps/Pyroden/scripts.pory"
	.string "Ignore them.\n"
	.string "Maybe they will go away on their own.$"

Pyroden_EventScript_FroJumpsInSprings_Text_10:
# 756 "data/maps/Pyroden/scripts.pory"
	.string "If you think so…$"

Pyroden_EventScript_FroJumpsInSprings_Text_11:
# 763 "data/maps/Pyroden/scripts.pory"
	.string "Anyway, {PLAYER}, have you found any\n"
	.string "hints for our mission?\p"
	.string "… … …\p"
	.string "Oh, that's…\n"
	.string "A lot of hints, actually.\p"
	.string "Maybe we should do a recap!$"

Pyroden_EventScript_FroJumpsInSprings_Text_12:
# 771 "data/maps/Pyroden/scripts.pory"
	.string "I understood it perfectly.$"

Pyroden_EventScript_FroJumpsInSprings_Text_13:
# 777 "data/maps/Pyroden/scripts.pory"
	.string "I SAID we should do a recap!$"

Pyroden_EventScript_FroJumpsInSprings_Text_14:
# 781 "data/maps/Pyroden/scripts.pory"
	.string "Ugh. Fine.$"

Pyroden_EventScript_FroJumpsInSprings_Text_15:
# 786 "data/maps/Pyroden/scripts.pory"
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
# 797 "data/maps/Pyroden/scripts.pory"
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
# 815 "data/maps/Pyroden/scripts.pory"
	.string "Fro!\n"
	.string "You're so good at this!$"

Pyroden_EventScript_FroJumpsInSprings_Text_18:
# 820 "data/maps/Pyroden/scripts.pory"
	.string "I suppose.\p"
	.string "But we aren't really any closer to\n"
	.string "figuring it out.\p"
	.string "How are we meant to light the torches\n"
	.string "back up…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_19:
# 826 "data/maps/Pyroden/scripts.pory"
	.string "Speaking of lighting things up…\p"
	.string "Aren't these hot springs getting a bit…\n"
	.string "Lukewarm?$"

Pyroden_EventScript_FroJumpsInSprings_Text_20:
# 832 "data/maps/Pyroden/scripts.pory"
	.string "…\p"
	.string "Now that you mention it…\n"
	.string "These hot springs are not hot at all!$"

Pyroden_EventScript_FroJumpsInSprings_Text_21:
# 851 "data/maps/Pyroden/scripts.pory"
	.string "Friends, friends!\n"
	.string "I must introduce myself!\p"
	.string "I am Spinda!\p"
	.string "But you can call me… Spinda!$"

Pyroden_EventScript_FroJumpsInSprings_Text_22:
# 858 "data/maps/Pyroden/scripts.pory"
	.string "Uhm, hi.\n"
	.string "Can we help you?$"

Pyroden_EventScript_FroJumpsInSprings_Text_23:
# 863 "data/maps/Pyroden/scripts.pory"
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
# 879 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\p"
	.string "And you can't do it yourself, because…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_25:
# 884 "data/maps/Pyroden/scripts.pory"
	.string "Oh, Fro, don't be mean!$"

Pyroden_EventScript_FroJumpsInSprings_Text_26:
# 888 "data/maps/Pyroden/scripts.pory"
	.string "No, I understand, I understand!\n"
	.string "But, I have a proposition!\p"
	.string "If you bring the Fire Stone here…\p"
	.string "I'll teach you how to light up torches!$"

Pyroden_EventScript_FroJumpsInSprings_Text_27:
# 895 "data/maps/Pyroden/scripts.pory"
	.string "You will?$"

Pyroden_EventScript_FroJumpsInSprings_Text_28:
# 899 "data/maps/Pyroden/scripts.pory"
	.string "Yes, yes!\n"
	.string "I could not help but overhear!\p"
	.string "You need to light up the torches!\n"
	.string "And I have a special way to do it!$"

Pyroden_EventScript_FroJumpsInSprings_Text_29:
# 906 "data/maps/Pyroden/scripts.pory"
	.string "Hold on a second…\p"
	.string "Can we not just use the Fire Stone to\n"
	.string "light up the torches…?$"

Pyroden_EventScript_FroJumpsInSprings_Text_30:
# 911 "data/maps/Pyroden/scripts.pory"
	.string "No, no!\n"
	.string "That's all out of order!\p"
	.string "Torches are special!\n"
	.string "You can't just light them up!\p"
	.string "Bring me the Stone, and I'll show you!$"

Pyroden_EventScript_FroJumpsInSprings_Text_31:
# 919 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Fine.$"

Pyroden_EventScript_FroJumpsInSprings_Text_32:
# 926 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\n"
	.string "Let's find this Fire Stone, and then\l"
	.string "come back here.$"

Pyroden_EventScript_TeachWillOWisp_Text_0:
# 970 "data/maps/Pyroden/scripts.pory"
	.string "Friends! Friends!\n"
	.string "You found the Fire Stone!\p"
	.string "Give it to me! To me!$"

Pyroden_EventScript_TeachWillOWisp_Text_1:
# 976 "data/maps/Pyroden/scripts.pory"
	.string "You gave the Fire Stone to Spinda.$"

Pyroden_EventScript_TeachWillOWisp_Text_2:
# 981 "data/maps/Pyroden/scripts.pory"
	.string "Great! Great!\n"
	.string "Now the springs will be hot once again!$"

Pyroden_EventScript_TeachWillOWisp_Text_3:
# 986 "data/maps/Pyroden/scripts.pory"
	.string "Ok.\n"
	.string "Very happy to know that.\p"
	.string "Now, you promised to teach us how to\n"
	.string "light the torches back up, didn't you?$"

Pyroden_EventScript_TeachWillOWisp_Text_4:
# 992 "data/maps/Pyroden/scripts.pory"
	.string "Oh, me?\n"
	.string "Teach you how to light torches?\p"
	.string "Oh, I cannot do that!\n"
	.string "I cannot do that!\l"
	.string "Not me!$"

Pyroden_EventScript_TeachWillOWisp_Text_5:
# 1007 "data/maps/Pyroden/scripts.pory"
	.string "I swear I'm gonna…$"

Pyroden_EventScript_TeachWillOWisp_Text_6:
# 1011 "data/maps/Pyroden/scripts.pory"
	.string "Wait! Wait!\n"
	.string "Hear me out, first!\p"
	.string "What I'm saying is:\n"
	.string "I cannot teach that to you. But!\p"
	.string "I have a friend who can!\n"
	.string "Yes, a very special friend!$"

Pyroden_EventScript_TeachWillOWisp_Text_7:
# 1020 "data/maps/Pyroden/scripts.pory"
	.string "Ooh!\n"
	.string "I like friends!\p"
	.string "Where's your friend right now?\n"
	.string "Is he inside you?$"

Pyroden_EventScript_TeachWillOWisp_Text_8:
# 1027 "data/maps/Pyroden/scripts.pory"
	.string "No, no!\n"
	.string "Not inside!\p"
	.string "The friend is coming!\n"
	.string "But I need to call them, first!\p"
	.string "Look, why don't you all get over there!$"

Pyroden_EventScript_TeachWillOWisp_Text_9:
# 1053 "data/maps/Pyroden/scripts.pory"
	.string "This is stupid.$"

Pyroden_EventScript_TeachWillOWisp_Text_10:
# 1057 "data/maps/Pyroden/scripts.pory"
	.string "This is exciting!$"

Pyroden_EventScript_TeachWillOWisp_Text_11:
# 1064 "data/maps/Pyroden/scripts.pory"
	.string "Shoo, shoo!\p"
	.string "I need some room!$"

Pyroden_EventScript_TeachWillOWisp_Text_12:
# 1075 "data/maps/Pyroden/scripts.pory"
	.string "What rudeness!$"

Pyroden_EventScript_TeachWillOWisp_Text_13:
# 1089 "data/maps/Pyroden/scripts.pory"
	.string "Ok!\n"
	.string "Time to call my friend here!$"

Pyroden_EventScript_TeachWillOWisp_Text_14:
# 1121 "data/maps/Pyroden/scripts.pory"
	.string "What in the world are they…$"

Pyroden_EventScript_TeachWillOWisp_Text_15:
# 1172 "data/maps/Pyroden/scripts.pory"
	.string "Dlrowrednu eht morf eeht nommus I, em\n"
	.string "nopu detnarg srewop eht htiw!$"

Pyroden_EventScript_TeachWillOWisp_Text_16:
# 1194 "data/maps/Pyroden/scripts.pory"
	.string "Sluos tsol eseht ot WILL OF THE WISPS\n"
	.string "eht wohs dna, niagrab eht fo dne ruoy\l"
	.string "dlohpu!$"

Pyroden_EventScript_TeachWillOWisp_Text_17:
# 1201 "data/maps/Pyroden/scripts.pory"
	.string "{PLAYER}!\n"
	.string "What's happening, {PLAYER}!?$"

Pyroden_EventScript_TeachWillOWisp_Text_18:
# 1223 "data/maps/Pyroden/scripts.pory"
	.string "Pape, GIRATINA!\n"
	.string "Pape GIRATINA aleppe!$"

Pyroden_EventScript_TeachWillOWisp_Text_19:
# 1237 "data/maps/Pyroden/scripts.pory"
	.string "Oh, my.$"

Pyroden_EventScript_TeachWillOWisp_Text_20:
# 1241 "data/maps/Pyroden/scripts.pory"
	.string "SEEL!\n"
	.string "I CAN'T MOVE!\p"
	.string "PLEASE, SOMEBODY HELP!$"

Pyroden_EventScript_TeachWillOWisp_Text_21:
# 1247 "data/maps/Pyroden/scripts.pory"
	.string "Our father, who art in Heaven…$"

Pyroden_EventScript_TeachWillOWisp_Text_22:
# 1252 "data/maps/Pyroden/scripts.pory"
	.string "Egdelwonk terces eht meht hcaet,\n"
	.string "GIRATINA!$"

Pyroden_EventScript_TeachWillOWisp_Text_23:
# 1281 "data/maps/Pyroden/scripts.pory"
	.string "Done!\n"
	.string "You have learned {COLOR RED}Will-O-Wisp{COLOR DARK_GRAY}!\p"
	.string "You can now light the torches back up!$"

Pyroden_EventScript_TeachWillOWisp_Text_24:
# 1287 "data/maps/Pyroden/scripts.pory"
	.string "What. Was. That.$"

Pyroden_EventScript_TeachWillOWisp_Text_25:
# 1295 "data/maps/Pyroden/scripts.pory"
	.string "What was what?$"

Pyroden_EventScript_TeachWillOWisp_Text_26:
# 1299 "data/maps/Pyroden/scripts.pory"
	.string "What do you MEAN what was WHAT?\p"
	.string "The thing!\n"
	.string "That just happened!\p"
	.string "With youre extremely terrifying friend!$"

Pyroden_EventScript_TeachWillOWisp_Text_27:
# 1306 "data/maps/Pyroden/scripts.pory"
	.string "I don't really have any friends.\n"
	.string "Who are you guys, anyway?\p"
	.string "Oh, I'm sorry!\n"
	.string "I gotta go!\p"
	.string "I'm late for an appointment!$"

Pyroden_EventScript_TeachWillOWisp_Text_28:
# 1324 "data/maps/Pyroden/scripts.pory"
	.string "I guess we can light up the torches\n"
	.string "now…\l"
	.string "Haha…\p"
	.string "We should see if the entrance to the\n"
	.string "volcano opens up…$"

Pyroden_EventScript_TeachWillOWisp_Text_29:
# 1330 "data/maps/Pyroden/scripts.pory"
	.string "Let's never speak of this again.$"

Pyroden_Text_Intro_Vee_1::
# 173 "data/maps/Pyroden/scripts.pory"
	.string "Yahoo!\n"
	.string "We're finally in Pyroden!$"

Pyroden_Text_Intro_Fro_1::
# 180 "data/maps/Pyroden/scripts.pory"
	.string "Yes.\n"
	.string "I can already feel it.\p"
	.string "The heavenly warmth…\n"
	.string "Almost like being slow cooked…\p"
	.string "Hot springs, here I come.$"

Pyroden_Text_Intro_Vee_2::
# 191 "data/maps/Pyroden/scripts.pory"
	.string "Not so fast!\n"
	.string "We're not here just to relax!$"

Pyroden_Text_Intro_Fro_2::
# 199 "data/maps/Pyroden/scripts.pory"
	.string "I am.$"

Pyroden_Text_Intro_Vee_3::
# 206 "data/maps/Pyroden/scripts.pory"
	.string "No!\n"
	.string "We need to find the artifact, remember?\p"
	.string "You promised!$"

Pyroden_Text_Intro_Fro_3::
# 215 "data/maps/Pyroden/scripts.pory"
	.string "Hmm…\n"
	.string "Did I now…?\p"
	.string "… … …\p"
	.string "Alright, alright.\n"
	.string "We can do some info gathering.\p"
	.string "But after that, a visit to the hot\n"
	.string "springs is in order.$"

Pyroden_Text_Intro_Vee_4::
# 227 "data/maps/Pyroden/scripts.pory"
	.string "Yay!$"

Pyroden_Text_Intro_Fro_4::
# 232 "data/maps/Pyroden/scripts.pory"
	.string "How about this.\p"
	.string "Let's split up, and ask around if anyone\n"
	.string "has seen anything strange.\p"
	.string "Once we get enough info, let's meet up\n"
	.string "at the hot springs.\p"
	.string "Ready? Go.$"

Pyroden_Text_Intro_Vee_5::
# 242 "data/maps/Pyroden/scripts.pory"
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
