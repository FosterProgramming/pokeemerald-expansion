# 1 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
.set LOCALID_EEVEE, 2
# 3 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

DominionCity_MagaLab_Entrance_MapScripts::
# 8 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 4, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
# 54 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 5, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
	.2byte 0

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 11 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 12 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 14 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 5
# 15 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 16 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 19 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 20 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 21 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 22 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 23 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 27 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_ED, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 28 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 29 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 31 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 33 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 34 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 35 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 36 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 37 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 38 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_EEVEE
# 39 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 40 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 41 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_EEVEE
# 42 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 43 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 44 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 46 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 48 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_EEVEE
# 49 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_EEVEE
# 50 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 56 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 57 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 58 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 59 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 60 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 61 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 65 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 67 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 68 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbattle SPECIES_PORYGON, 25
# 69 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 72 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 73 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 74 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 75 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 76 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 77 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 78 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 79 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 80 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 81 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_EEVEE
# 82 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 83 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 84 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_EEVEE
# 85 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 86 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 87 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 88 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 89 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 90 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 91 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_EEVEE
# 92 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_EEVEE
# 93 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 94 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene::
# 102 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 103 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 7
# 104 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	special SaveGame
# 105 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitstate
DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_2:
# 106 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_3
# 111 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	fadeoutbgm 0
# 112 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 113 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
	return

DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_3:
# 108 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	special SaveGame
# 109 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitstate
	goto DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_2


# 12 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 12 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
	step_end

# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
	step_end

# 39 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 39 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 39 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	face_up
	step_end

# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
	step_end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 20 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "ANALYSIS COMPLETE. CONCLUSION: YOU\n"
	.string "ARE INFERIOR.\p"
	.string "I AM THE PERFECTED MODEL. YOU ARE\n"
	.string "FAILED EXPERIMENTS.\p"
	.string "ATTEMPTING ESCAPE IS FUTILE. YOU WILL\n"
	.string "BE RECAPTURED.\p"
	.string "INITIATING COMBAT PROTOCOLS. PREPARE\n"
	.string "FOR TERMINATION.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 27 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "SYSTEM DAMAGE EXCEEDS PARAMETERS.\n"
	.string "UNACCEPTABLE OUTCOME.\p"
	.string "YOU... YOU ARE NOT SUPERIOR... THIS IS A\n"
	.string "GLITCH.\p"
	.string "I WILL BE REBUILT. YOU WILL BE ERASED$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 43 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 44 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "HAH! That’s what you get for calling us\n"
	.string "failures!$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 46 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Come on, Porygon ran through that door\n"
	.string "down there! I bet that's the way out!\l"
	.string "Let's hurry!$"
