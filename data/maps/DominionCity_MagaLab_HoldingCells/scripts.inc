# 1 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set LOCALID_EEVEE, 1
# 3 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set LOCALID_PORYGON, 2

DominionCity_MagaLab_HoldingCells_MapScripts::
# 10 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 6 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 12 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 6
	goto_if_lt DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 14 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	clearflag FLAG_UNUSED_0x1DE
# 15 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 0, DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell
# 8 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 5, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems
	.2byte 0


DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems::
# 23 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_1
	return

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_1:
# 25 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 26 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 27 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_PORYGON, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_0
# 28 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_PORYGON
# 29 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_1
# 30 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_0
# 31 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_1
# 32 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 33 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 34 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	addobject LOCALID_EEVEE
# 35 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_2
# 36 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 37 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_EEVEE
# 38 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 39 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_3
# 40 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_3
# 41 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_EEVEE
# 42 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_EEVEE
# 43 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	clearflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
# 44 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
# 45 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell::
# 51 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 52 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setrespawn HEAL_LOCATION_DOMINION_CITY_MAGA_LAB_HOLDING_CELLS
# 53 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 54 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer
# 55 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_EEVEE
# 56 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0
# 57 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 58 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1
# 59 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Movement_0
# 60 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 61 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2
# 62 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 63 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3
# 64 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4
# 65 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 1
# 66 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked::
# 71 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 72 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	checkitem ITEM_CARD_KEY
# 73 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2
# 79 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0
# 80 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 81 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1:
# 83 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2:
	goto DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1


DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript::
# 88 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 89 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 90 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0, MSGBOX_NPC
# 91 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 92 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_EEVEE
# 93 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE
# 94 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1
# 95 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	givemon SPECIES_EEVEE, 25, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SAND_ATTACK, MOVE_BUBBLEBEAM, MOVE_FLAME_CHARGE, MOVE_THUNDERBOLT
# 96 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey::
# 101 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 102 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1
# 118 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2
# 119 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1:
# 104 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0
# 105 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_CARD_KEY, 1
# 106 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1
# 107 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
# 108 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_AGUAV_BERRY, 1
# 109 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ENIGMA_BERRY, 1
# 110 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
# 111 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_PECHA_BERRY, 1
# 112 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_LUM_BERRY, 1
# 113 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript::
# 125 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 126 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB, DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2
# 132 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1
# 133 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
	goto_if_ge DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5
# 140 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_MIRROR_HERB, 1
# 141 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1:
# 144 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2:
# 128 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5:
# 135 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 136 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1


# 148 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer:
# 149 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	face_left
# 150 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_exclamation_mark
	step_end

# 27 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_0:
# 27 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	face_right
# 27 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_exclamation_mark
	step_end

# 29 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_1:
# 29 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_in_place_left
	step_end

# 35 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_2:
# 35 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_left
# 35 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_exclamation_mark
	step_end

# 40 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_3:
# 40 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Movement_0:
# 59 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_in_place_right
# 59 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_question_mark
	step_end

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_0:
# 30 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Porygon$"

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_1:
# 31 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Beep… Boop…\p"
	.string "ITEM REPLENISHMENT COMPLETE$"

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2:
# 38 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_3:
# 39 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Heeeey! You CAN still talk? And did you\n"
	.string "say item's replenished? That Porygon at\l"
	.string "the entrance sure was tough, maybe we\l"
	.string "should see what kinda items Porygon\l"
	.string "has to see if they can help us escape!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0:
# 56 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "???$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1:
# 58 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh! You're awake!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2:
# 61 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "I was starting to think they overdid it\n"
	.string "this time.\p"
	.string "You were out for sooo long! I saw them\n"
	.string "bring you back after your fight. It\l"
	.string "didn't go so well, huh?\p"
	.string "Whoa, take it easy! You look like you\n"
	.string "just got hit by a truck! …Or maybe a\l"
	.string "Rhydon. They like to mess with us while\l"
	.string "we're knocked out. Weird injections,\l"
	.string "weird machines… All super weird. You\l"
	.string "probably feel kinda fuzzy, huh? I did\l"
	.string "too, after my last 'check-up.' Not fun.\l"
	.string "They do that. Send us out, see what we\l"
	.string "can do, then throw us back in here when\l"
	.string "we're not good enough.\p"
	.string "Who am I? The scientists call me 42, but\n"
	.string "my friends call me Vee!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3:
# 63 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh, and, um… don't expect much from\n"
	.string "that one. Porygon over there? Used to\l"
	.string "talk all the time. All numbers and beeps\l"
	.string "and stuff I didn't get. But ever since\l"
	.string "its last 'experiment' … nothing. Just\l"
	.string "sits there, flickering. Kinda creepy,\l"
	.string "right? I tried talking to it, but it won't\l"
	.string "even beep at me anymore.$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4:
# 64 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Wait, hold on. Did you just say you used\n"
	.string "to be human? That's… whoa. That's\l"
	.string "crazy! No wonder they're keeping you\l"
	.string "here! But… that's perfect! If you were\l"
	.string "human before, maybe you can help me\l"
	.string "escape!\p"
	.string "See, the guards don't know this, but the\n"
	.string "vent covers? You can open 'em. I've\l"
	.string "snuck around before when they weren't\l"
	.string "here. They're a little scary for me,\l"
	.string "though. You should sneak through the\l"
	.string "'em and come to my cell! We can talk more\l"
	.string "quietly here. C'mon, I'll wait for you!$"

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0:
# 79 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The door appears need a key card with a\n"
	.string "code to unlock.$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0:
# 90 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Phew! You made it! See? Told ya the\n"
	.string "vents were the best way around here.\p"
	.string "Alright, so here's the deal-I know how\n"
	.string "we can get out.\p"
	.string "The guard? He always leaves his keycard\n"
	.string "in his desk when he's on break.\p"
	.string "Buuut, there's just one little problem…\n"
	.string "I can't read. I know the code's written\l"
	.string "on the card, but it just looks like weird\l"
	.string "symbols to me. But you were human!\l"
	.string "Maybe you can read it and help us open\l"
	.string "the doors!\p"
	.string "Alright, it's settled then, let's go.$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1:
# 94 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee joined your party!$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0:
# 104 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The guard left his bag on the desk.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1:
# 106 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "There were also some berries inside one\n"
	.string "of the pockets.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2:
# 118 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…it's not right to leave Vee behind.$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0:
# 128 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1:
# 132 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Porygon is holding something…$"
