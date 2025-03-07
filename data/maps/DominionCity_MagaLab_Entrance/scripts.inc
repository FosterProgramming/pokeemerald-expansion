DominionCity_MagaLab_Entrance_MapScripts::
# 4 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 5 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 4, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 7 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 8 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 9 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 10 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 11 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 12 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 14 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 15 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 16 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1, MSGBOX_AUTOCLOSE
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2, MSGBOX_AUTOCLOSE
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3, MSGBOX_AUTOCLOSE
# 19 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_MARCEL, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 20 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5, MSGBOX_AUTOCLOSE
# 21 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6, MSGBOX_AUTOCLOSE
# 22 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7, MSGBOX_AUTOCLOSE
# 23 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 5
# 24 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end


# 8 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 8 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
# 13 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
	step_end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 15 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "ANALYSIS COMPLETE. CONCLUSION: YOU\n"
	.string "ARE INFERIOR.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 16 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "I AM THE PERFECTED MODEL. YOU ARE\n"
	.string "FAILED EXPERIMENTS.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 17 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "ATTEMPTING ESCAPE IS FUTILE. YOU WILL\n"
	.string "BE RECAPTURED.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 18 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "INITIATING COMBAT PROTOCOLS. PREPARE\n"
	.string "FOR TERMINATION.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 19 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "SYSTEM ERROR... IMPOSSIBLE...$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 20 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "SYSTEM DAMAGE EXCEEDS PARAMETERS.\n"
	.string "UNACCEPTABLE OUTCOME.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 21 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "YOU... YOU ARE NOT SUPERIOR... THIS IS A\n"
	.string "GLITCH.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 22 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "I WILL BE REBUILT. YOU WILL BE ERASED.$"
