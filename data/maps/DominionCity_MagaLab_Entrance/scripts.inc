# 1 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
.set LOCALID_VEE, 2
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
# 77 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 29 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 30 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 31 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 35 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	trainerbattle_no_intro TRAINER_ED, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 48 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 49 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 50 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 52 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 53 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 54 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 55 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 56 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 57 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 58 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 59 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 60 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 61 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 67 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 72 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 73 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 74 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 79 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 80 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 81 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 82 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 83 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 84 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 85 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 86 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 87 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 96 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 97 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 98 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 99 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbattle SPECIES_PORYGON, 25
# 100 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 101 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 113 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 114 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 115 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 116 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 117 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 118 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 119 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 120 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 121 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 122 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 123 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 124 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 125 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 126 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 127 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 128 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 129 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 132 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 133 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 136 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 137 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 138 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 139 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 140 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end


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

# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
	step_end

# 58 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 58 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 58 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	face_up
	step_end

# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_up
	step_end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 20 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "SCANNING…\n"
	.string "SCANNING…\p"
	.string "ANALYSIS COMPLETE.\n"
	.string "INFERIOR LIFEFORMS IDENTIFIED.\p"
	.string "CONCLUSION: ESCAPE IS FUTILE.\n"
	.string "VICTORY IS FOREGONE.\p"
	.string "COMBAT MODE: ENGAGED.\p"
	.string "PLEASE SIT STILL AND PREPARE FOR THE\n"
	.string "TERMINATION PROTOCOL.$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 36 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "WARNING.\n"
	.string "WARNING.\p"
	.string "SYSTEM DAMAGE EXCEEDS ACCEPTABLE\n"
	.string "THRESHOLD.\p"
	.string "ERROR: INITIAL ANALYSIS WAS\n"
	.string "ERRONEOUS.\p"
	.string "NO.\n"
	.string "IMPOSSIBLE.\p"
	.string "RECALIBRATE.\n"
	.string "RECALIBRATE.\p"
	.string "YOU… ARE INFERIOR…\n"
	.string "YOU… WILL BE ERASED…\l"
	.string "I… WILL BE… REBUILT…$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Hah!\n"
	.string "How's that for inferior lifeforms?$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 67 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Come on, that Porygon went that way!\p"
	.string "I bet that's the way out!$"
