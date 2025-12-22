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
# 90 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_MOODY
# 33 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_DOWNLOAD
# 34 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_RUN_AWAY
# 35 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_4, ABILITY_RUN_AWAY
# 36 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 40
# 37 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 39 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_PORYGON
# 41 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 42 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbossbattle SPECIES_PORYGON, 2, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDERSHOCK, MOVE_TACKLE, MOVE_RECOVER, MOVE_PSYBEAM, 6, 252, 0, 0, 0, 252
# 43 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 44 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 46 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_NONE
# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 48 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 49 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 61 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 65 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 67 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 68 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 69 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 72 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 73 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 74 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 75 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 76 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 79 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 80 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 83 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 84 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 85 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 86 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 87 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 92 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 93 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 94 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 95 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 96 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 97 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 98 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 99 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 100 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 109 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 110 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 111 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 112 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbattle SPECIES_PORYGON, 25
# 113 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 114 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 126 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 127 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 128 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 129 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 130 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 131 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 132 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 133 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 134 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 135 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 136 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 137 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 138 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 139 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 140 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 141 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 142 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 145 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 146 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 149 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 150 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 151 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 152 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 153 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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

# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
	step_end

# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 79 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 79 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	face_up
	step_end

# 83 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 83 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 50 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 75 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 77 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Hah!\n"
	.string "How's that for inferior lifeforms?$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 80 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Come on, that Porygon went that way!\p"
	.string "I bet that's the way out!$"
