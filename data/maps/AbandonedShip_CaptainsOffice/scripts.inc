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
	msgbox Common_EventScript_StartBossDebugBattle_Text_0, MSGBOX_DEFAULT
# 97 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	multichoice 0, 0, MULTI_DEBUG_BOSSES, TRUE
# 98 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	switch VAR_RESULT
# 99 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case BRAVE_BOSS_PORYGON, Common_EventScript_StartBossDebugBattle_3
# 102 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case BRAVE_BOSS_ELECTIVIRE, Common_EventScript_StartBossDebugBattle_4
# 105 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case BRAVE_BOSS_MAGMORTAR, Common_EventScript_StartBossDebugBattle_5
Common_EventScript_StartBossDebugBattle_1:
# 111 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end

Common_EventScript_StartBossDebugBattle_3:
# 100 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto Common_EventScript_StartBossDebugBattle_Porygon
	goto Common_EventScript_StartBossDebugBattle_1

Common_EventScript_StartBossDebugBattle_4:
# 103 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto Common_EventScript_StartBossDebugBattle_Elektivire
	goto Common_EventScript_StartBossDebugBattle_1

Common_EventScript_StartBossDebugBattle_5:
# 106 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto Common_EventScript_StartBossDebugBattle_Magmortar
	goto Common_EventScript_StartBossDebugBattle_1


Common_EventScript_StartBossDebugBattle_Porygon2::
# 116 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
# 117 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	warp MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE, 192, 192, 192
	return


Common_EventScript_StartBossDebugBattle_Elektivire::
# 121 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_IRON_FIST
# 122 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOTOR_DRIVE
# 123 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_STATIC
# 124 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 200
# 125 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_FORCE_DOUBLE_WILD_BATTLE
# 126 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_ELECTIVIRE
# 128 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	playmoncry SPECIES_ELECTIVIRE, 2
# 129 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	callnative ScrCmd_getpartyaveragelevel
# 130 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setwildbossbattle SPECIES_ELECTIVIRE, 1, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_BULLDOZE, MOVE_LOW_KICK, 6, 252, 0, 0, 0, 252
# 131 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 132 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	dowildbattle
# 133 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 134 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 135 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	switch VAR_RESULT
# 136 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_StartBossDebugBattle_Elektivire_3
# 143 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_StartBossDebugBattle_Elektivire_4
# 144 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_StartBossDebugBattle_Elektivire_4
# 145 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_StartBossDebugBattle_Elektivire_4
Common_EventScript_StartBossDebugBattle_Elektivire_1:
# 155 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end

Common_EventScript_StartBossDebugBattle_Elektivire_3:
# 138 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 139 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 140 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 141 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_StartBossDebugBattle_Elektivire_1

Common_EventScript_StartBossDebugBattle_Elektivire_4:
# 146 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 147 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 148 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 149 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 150 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 151 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 152 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox Common_EventScript_StartBossDebugBattle_Elektivire_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_StartBossDebugBattle_Elektivire_1


Common_EventScript_StartBossDebugBattle_Porygon::
# 160 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER
# 161 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	delay 40
# 162 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	waitmoncry
# 163 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_SHED_SKIN
# 164 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_DOWNLOAD
# 165 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_INNER_FOCUS
# 166 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_4, ABILITY_NONE
# 167 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 150
# 169 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_PORYGON
# 171 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	playmoncry SPECIES_PORYGON, 2
# 172 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setwildbossbattle SPECIES_PORYGON, 1, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDERSHOCK, MOVE_PSYBEAM, MOVE_DISCHARGE, MOVE_SWIFT, 0, 0, 0, 40, 0, 0
# 173 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 174 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	dowildbattle
# 175 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 176 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_NONE
# 177 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 178 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	switch VAR_RESULT
# 179 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_StartBossDebugBattle_Porygon_3
# 186 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_StartBossDebugBattle_Porygon_4
# 187 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_StartBossDebugBattle_Porygon_4
# 188 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_StartBossDebugBattle_Porygon_4
Common_EventScript_StartBossDebugBattle_Porygon_1:
# 198 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end

Common_EventScript_StartBossDebugBattle_Porygon_3:
# 181 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 182 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 183 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 184 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_StartBossDebugBattle_Porygon_1

Common_EventScript_StartBossDebugBattle_Porygon_4:
# 189 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 190 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 191 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 192 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 193 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 194 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 195 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox Common_EventScript_StartBossDebugBattle_Porygon_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_StartBossDebugBattle_Porygon_1


Common_EventScript_StartBossDebugBattle_Magmortar::
# 203 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER
# 204 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	delay 40
# 205 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	waitmoncry
# 206 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_SCORCHED_ENGINE
# 207 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_FLAME_BODY
# 208 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_WHITE_SMOKE
# 209 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_4, ABILITY_ANGER_POINT
# 210 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 40
# 212 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_MAGMORTAR
# 214 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	playmoncry SPECIES_MAGMORTAR, 2
# 215 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setwildbossbattle SPECIES_MAGMORTAR, 20, ITEM_NONE, NATURE_ADAMANT, MOVE_FIRE_PUNCH, MOVE_FAINT_ATTACK, MOVE_CLEAR_SMOG, MOVE_ROCK_TOMB, 6, 252, 0, 0, 0, 252
# 216 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 217 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	dowildbattle
# 218 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
# 219 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_NONE
# 220 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 221 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	switch VAR_RESULT
# 222 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_CAUGHT, Common_EventScript_StartBossDebugBattle_Magmortar_3
# 229 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_RAN, Common_EventScript_StartBossDebugBattle_Magmortar_4
# 230 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_WON, Common_EventScript_StartBossDebugBattle_Magmortar_4
# 231 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	case B_OUTCOME_PLAYER_TELEPORTED, Common_EventScript_StartBossDebugBattle_Magmortar_4
Common_EventScript_StartBossDebugBattle_Magmortar_1:
# 241 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
	end

Common_EventScript_StartBossDebugBattle_Magmortar_3:
# 224 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 225 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 226 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 227 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
	goto Common_EventScript_StartBossDebugBattle_Magmortar_1

Common_EventScript_StartBossDebugBattle_Magmortar_4:
# 232 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setvar VAR_0x8004, SPECIES_LAPRAS
# 233 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setweather WEATHER_NONE
# 234 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 235 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	removeobject VAR_LAST_TALKED
# 236 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 237 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	bufferspeciesname 0, VAR_0x8004
# 238 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox Common_EventScript_StartBossDebugBattle_Magmortar_Text_0, MSGBOX_DEFAULT
	goto Common_EventScript_StartBossDebugBattle_Magmortar_1


Common_EventScript_StartBossDebugBattle_Text_0:
# 96 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Would you like to test a boss battle?$"

Common_EventScript_StartBossDebugBattle_Elektivire_Text_0:
# 152 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Electivire dove away$"

Common_EventScript_StartBossDebugBattle_Porygon_Text_0:
# 195 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Porygon dove away$"

Common_EventScript_StartBossDebugBattle_Magmortar_Text_0:
# 238 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Magmortar dove away$"
