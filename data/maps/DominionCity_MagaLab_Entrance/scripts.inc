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
	.2byte 0

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 11 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 12 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 14 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 15 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 16 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 19 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 20 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 21 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 22 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 23 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbattle SPECIES_PORYGON, 25
# 24 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 25 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 26 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 5
# 27 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 28 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 29 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 31 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 33 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 34 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 35 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 36 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_EEVEE
# 37 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 38 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 39 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_EEVEE
# 40 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 41 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 42 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 43 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 44 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 46 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_EEVEE
# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_EEVEE
# 48 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 49 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene::
# 57 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 58 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 59 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	special SaveGame
# 60 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitstate
DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_2:
# 61 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_3
# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	fadeoutbgm 0
# 67 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 68 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	fadescreenspeed FADE_TO_WHITE, 4
	return

DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_3:
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	special SaveGame
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitstate
	goto DominionCity_MagaLab_Entrance_EventScripts_TriggerTitleScreenCutscene_2


# 12 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 12 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
	step_end

# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
	step_end

# 37 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 37 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 37 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 43 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 43 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	face_up
	step_end

# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
	step_end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 19 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "ANALYSIS COMPLETE. CONCLUSION: YOU\n"
	.string "ARE INFERIOR.\p"
	.string "I AM THE PERFECTED MODEL. YOU ARE\n"
	.string "FAILED EXPERIMENTS.\p"
	.string "ATTEMPTING ESCAPE IS FUTILE. YOU WILL\n"
	.string "BE RECAPTURED.\p"
	.string "INITIATING COMBAT PROTOCOLS. PREPARE\n"
	.string "FOR TERMINATION.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 25 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "SYSTEM DAMAGE EXCEEDS PARAMETERS.\n"
	.string "UNACCEPTABLE OUTCOME.\p"
	.string "YOU... YOU ARE NOT SUPERIOR... THIS IS A\n"
	.string "GLITCH.\p"
	.string "I WILL BE REBUILT. YOU WILL BE ERASED$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 41 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 42 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "HAH! That’s what you get for calling us\n"
	.string "failures!$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 44 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Come on, Porygon ran through that door\n"
	.string "down there! I bet that's the way out!\l"
	.string "Let's hurry!$"
