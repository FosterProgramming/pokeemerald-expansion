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
# 89 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 32 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_SHED_SKIN
# 33 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_DOWNLOAD
# 34 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_INNER_FOCUS
# 35 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_4, ABILITY_NONE
# 36 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 150
# 38 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_PORYGON
# 40 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 41 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbossbattle SPECIES_PORYGON, 1, ITEM_NONE, NATURE_ADAMANT, MOVE_ELECTROWEB, MOVE_PSYBEAM, MOVE_RECOVER, MOVE_NONE, 0, 0, 0, 45, 0, 0
# 42 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 43 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 44 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_NONE
# 46 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 48 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 60 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 61 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 65 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 67 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 68 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 69 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 72 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 73 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 74 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 75 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 78 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 79 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 82 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 83 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 84 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 85 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 86 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 91 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 92 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 93 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 94 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 95 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 96 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 97 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 98 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 99 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 108 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 109 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 110 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 111 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbattle SPECIES_PORYGON, 25
# 112 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 113 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 125 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 126 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 127 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 128 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 129 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 130 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 131 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 132 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 133 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 134 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 135 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 136 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 137 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 138 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 139 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 140 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 141 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 144 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 145 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 148 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 149 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 150 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 151 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 152 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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

# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
	step_end

# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 78 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 78 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	face_up
	step_end

# 82 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 82 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 49 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 74 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 76 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Hah!\n"
	.string "How's that for inferior lifeforms?$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 79 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Come on, that Porygon went that way!\p"
	.string "I bet that's the way out!$"
