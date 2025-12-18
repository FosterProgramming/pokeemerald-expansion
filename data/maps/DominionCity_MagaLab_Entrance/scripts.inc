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
# 88 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 44 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_DOWNLOAD
# 45 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOODY
# 46 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 40
# 47 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 49 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_PORYGON
# 51 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 52 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbossbattle SPECIES_PORYGON, 2, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDERSHOCK, MOVE_TACKLE, MOVE_RECOVER, MOVE_PSYBEAM, 6, 252, 0, 0, 0, 252
# 53 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 54 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 55 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 56 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_NONE
# 57 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 58 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 59 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 60 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 61 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 63 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 64 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 65 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 66 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 67 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 68 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 69 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 70 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 71 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 72 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 73 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 74 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 77 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 78 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 81 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 82 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 83 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 84 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 85 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 90 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	lockall
# 91 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 92 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 93 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 94 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 95 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 96 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 97 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 98 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0, MSGBOX_AUTOCLOSE
# 107 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 108 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 109 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 110 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setwildbattle SPECIES_PORYGON, 25
# 111 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	dowildbattle
# 112 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 124 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
# 125 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_NORMAL
# 126 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	delay 40
# 127 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmoncry
# 128 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement 1, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 129 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement 1
# 130 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject 1
# 131 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setflag FLAG_HIDE_MAGA_LAB_ENTRANCE_PORYGON
# 132 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 133 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 134 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	addobject LOCALID_VEE
# 135 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 136 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	playse SE_PIN
# 137 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 138 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitse
# 139 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	speakername DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 140 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 143 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 144 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	msgbox DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 147 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 148 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	waitmovement LOCALID_VEE
# 149 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	removeobject LOCALID_VEE
# 150 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	closemessage
# 151 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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

# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 62 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
	step_end

# 69 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 69 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	walk_down
# 69 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 77 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 77 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	face_up
	step_end

# 81 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 81 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 33 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
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
# 73 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 75 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Hah!\n"
	.string "How's that for inferior lifeforms?$"

DominionCity_MagaLab_Entrance_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 78 "data/maps/DominionCity_MagaLab_Entrance/scripts.pory"
	.string "Come on, that Porygon went that way!\p"
	.string "I bet that's the way out!$"
