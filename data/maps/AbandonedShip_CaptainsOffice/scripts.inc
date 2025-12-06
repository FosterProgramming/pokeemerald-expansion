# 1 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 2 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_MapScripts::
# 3 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 11 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 12 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 13 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 14 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 15 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 18 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 19 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 20 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 21 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 26 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
# 27 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
# 28 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "of CAPT. STERN.\p"
# 29 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "He also asked me to find a SCANNER,\n"
# 30 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "but I haven't had any success…$"
# 31 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a SCANNER!\p"
# 34 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Listen, can I get you to deliver that\n"
# 35 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "to CAPT. STERN?\p"
# 36 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I want to investigate this ship a\n"
# 37 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "little more.$"
# 38 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 39 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
# 40 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\n"
# 41 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "It seems to be from an earlier era.$"

VictoryRoad_1F_EventScript_FloorSwitch1::
# 46 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lockall
# 47 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VictoryRoad_1F_EventScript_FloorSwitch1_2
# 54 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 18, 10, METATILE_General_Grass, 0
# 55 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
VictoryRoad_1F_EventScript_FloorSwitch1_1:
# 57 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitch1_2:
# 49 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 18, 10, METATILE_General_TallGrass, 0
# 50 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
	goto VictoryRoad_1F_EventScript_FloorSwitch1_1


VictoryRoad_1F_EventScript_FloorSwitch2::
# 62 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lockall
# 63 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_2, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VictoryRoad_1F_EventScript_FloorSwitch2_2
# 70 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 20, 10, METATILE_General_Grass, 0
# 71 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
VictoryRoad_1F_EventScript_FloorSwitch2_1:
# 73 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitch2_2:
# 65 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 20, 10, METATILE_General_TallGrass, 0
# 66 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
	goto VictoryRoad_1F_EventScript_FloorSwitch2_1


VictoryRoad_1F_EventScript_FloorSwitch3::
# 78 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lockall
# 79 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_3, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VictoryRoad_1F_EventScript_FloorSwitch3_2
# 86 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 22, 10, METATILE_General_Grass, 0
# 87 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
VictoryRoad_1F_EventScript_FloorSwitch3_1:
# 89 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitch3_2:
# 81 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 22, 10, METATILE_General_TallGrass, 0
# 82 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
	goto VictoryRoad_1F_EventScript_FloorSwitch3_1


Common_EventScript_StartBossDebugBattle::
# 94 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 95 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 96 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_IRON_FIST
# 97 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOTOR_DRIVE
# 98 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_STATIC
# 99 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 200
# 100 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_SYS_SMART_WILD_AI
# 102 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_ELECTIVIRE
# 104 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	playmoncry SPECIES_ELECTIVIRE, 2
# 105 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setwildbossbattle SPECIES_ELECTIVIRE, 20, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_BULLDOZE, MOVE_LOW_KICK, 6, 252, 0, 0, 0, 252
# 106 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 107 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	dowildbattle
# 108 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 109 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 110 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	switch VAR_RESULT
# 111 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_StartBossDebugBattle_3
# 118 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_StartBossDebugBattle_4
# 119 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_StartBossDebugBattle_4
# 120 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_StartBossDebugBattle_4
Common_EventScript_StartBossDebugBattle_1:
# 130 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end

Common_EventScript_StartBossDebugBattle_3:
# 113 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 114 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 115 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 116 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_StartBossDebugBattle_1

Common_EventScript_StartBossDebugBattle_4:
# 121 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 122 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 123 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 124 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 125 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 126 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 127 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox Common_EventScript_StartBossDebugBattle_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_StartBossDebugBattle_1


Common_EventScript_StartBossDebugBattle_Text_0:
# 127 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Electivire dove away$"
