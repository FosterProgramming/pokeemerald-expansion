# 1 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set LOCALID_VEE, 1
# 3 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set LOCALID_PORYGON, 2
# 4 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 5 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

DominionCity_MagaLab_HoldingCells_MapScripts::
# 8 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 0, DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell
# 10 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 5, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems
	.2byte 0


DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems::
# 16 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 17 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 18 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_PORYGON, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_0
# 19 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_PORYGON
# 20 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_1
# 21 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_0
# 22 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_1
# 23 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 24 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 25 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	addobject LOCALID_VEE
# 26 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_2
# 27 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 28 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 29 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 30 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_3
# 31 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_3
# 32 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 33 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_VEE
# 34 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	clearflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
# 35 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
# 36 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell::
# 41 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 42 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setrespawn HEAL_LOCATION_DOMINION_CITY_MAGA_LAB_HOLDING_CELLS
# 43 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 44 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer
# 45 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 46 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0
# 47 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 48 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1
# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Movement_0
# 50 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 51 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2
# 62 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 63 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3
# 74 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4
# 86 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 1
# 87 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked::
# 92 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 93 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	checkitem ITEM_CARD_KEY
# 94 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2
# 100 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0
# 101 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 102 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1:
# 104 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2:
	goto DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1


DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript::
# 109 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 110 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 111 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0, MSGBOX_NPC
# 124 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 125 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_VEE
# 126 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE
# 127 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1
# 128 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	givemon SPECIES_EEVEE, 25, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SAND_ATTACK, MOVE_BUBBLEBEAM, MOVE_FLAME_CHARGE, MOVE_THUNDERBOLT
# 129 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey::
# 134 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 135 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1
# 171 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_3
# 172 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1:
# 137 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0
# 138 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_CARD_KEY, 1
# 139 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1
# 140 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
# 141 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_AGUAV_BERRY, 1
# 142 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ENIGMA_BERRY, 1
# 143 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
# 144 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_PECHA_BERRY, 1
# 145 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_LUM_BERRY, 1
# 146 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 147 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 148 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	addobject LOCALID_VEE
# 149 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 150 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerFacesPartyMemberEast
# 151 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 152 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 153 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 154 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2
# 163 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 164 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 165 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_VEE
# 166 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript::
# 178 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 179 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB, DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2
# 185 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1
# 186 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
	goto_if_ge DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5
# 193 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_MIRROR_HERB, 1
# 194 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1:
# 197 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2:
# 181 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5:
# 188 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 189 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1


# 201 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer:
# 202 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	face_left
# 203 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_exclamation_mark
	step_end

# 18 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_0:
# 18 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	face_right
# 18 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_exclamation_mark
	step_end

# 20 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_1:
# 20 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_in_place_left
	step_end

# 26 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_2:
# 26 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_left
# 26 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_exclamation_mark
	step_end

# 31 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_3:
# 31 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_right
	step_end

# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Movement_0:
# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_in_place_right
# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_question_mark
	step_end

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_0:
# 21 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Porygon$"

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_1:
# 22 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Beep… Boop…\p"
	.string "ITEM REPLENISHMENT COMPLETE$"

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2:
# 29 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_3:
# 30 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Heeeey! You CAN still talk? And did you\n"
	.string "say item's replenished? That Porygon at\l"
	.string "the entrance sure was tough, maybe we\l"
	.string "should see what kinda items Porygon\l"
	.string "has to see if they can help us escape!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0:
# 46 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "???$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1:
# 48 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh!\n"
	.string "You're awake!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2:
# 52 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Goodness, I was worried you were never\n"
	.string "gonna wake up!\p"
	.string "I know it's scary, but try to take it\n"
	.string "easy now.\p"
	.string "The people here do all sorts of stuff to\n"
	.string "you while you're sleeping.\p"
	.string "Weird injections, weird machines…\n"
	.string "They make you feel all kinds of fuzzy.\p"
	.string "And then they take you out, see what\n"
	.string "you can do, and throw you back in here…\p"
	.string "Not fun.\p"
	.string "So that's why you need to rest plenty!\p"
	.string "Oh, and nice to meet you, by the way!\p"
	.string "The scientists call me 42, but you can\n"
	.string "call me Vee! All my friends do!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3:
# 63 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh, and, um…\n"
	.string "Speaking of friends…\p"
	.string "That Porygon over there?\n"
	.string "Not much of a talker.\p"
	.string "Oh, they used to talk lots.\n"
	.string "Numbers, and beeps, and stuff…\p"
	.string "I didn't really get what they were\n"
	.string "saying, but…\p"
	.string "It was nice having company.\p"
	.string "But they did something to them, and\n"
	.string "now…\p"
	.string "They just sit there, flickering.\p"
	.string "They won't even beep at me anymore!\n"
	.string "Creepy, right?\p"
	.string "Oh, but I'm being rude!\n"
	.string "What's your story?\p"
	.string "Let me guess: you tried picking a fight\n"
	.string "with the weird men, and lost.\p"
	.string "Am I right?$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4:
# 75 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Wait, whaat?\n"
	.string "Did you just say you used to be human?\p"
	.string "That's… whoa.\n"
	.string "No wonder they're keeping you here!\p"
	.string "But… that's perfect!\n"
	.string "If you were human before, then…\p"
	.string "Maybe you can help me escape!\p"
	.string "I might have a plan, but you'll need to\n"
	.string "come to my cell first.\p"
	.string "See the vent covers?\n"
	.string "The guards don't know this, but you can\l"
	.string "open them.\p"
	.string "I've tried escaping through them\n"
	.string "before, but…\p"
	.string "I may be a little… Scared… Of the dark…\p"
	.string "But I know for a fact that you can get\n"
	.string "to my cell through them!\p"
	.string "And once you're here, we can talk more\n"
	.string "quietly.\p"
	.string "C'mon, I'll wait for you!$"

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0:
# 100 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The door appears need a key card with a\n"
	.string "code to unlock.$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0:
# 112 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Phew!\n"
	.string "You made it!\p"
	.string "I told ya the vents were the best way\n"
	.string "around here.\p"
	.string "Alright, here's the deal- I know how we\n"
	.string "can get out.\p"
	.string "The guard always leaves his keycard on\n"
	.string "his desk while he's on break.\p"
	.string "Stealing it will be a piece of pie!\p"
	.string "Buuut, there's just one little, tiny\n"
	.string "problem…\p"
	.string "To open the doors, you need to swipe\n"
	.string "the card and then insert a code.\p"
	.string "The good news is that the code is\n"
	.string "probably written down somewhere.\p"
	.string "The bad news is that… Well…\n"
	.string "I don't really… Know… How to read.\p"
	.string "But you were human!\n"
	.string "With your human powers, you can read it\l"
	.string "and open the doors!\p"
	.string "Alright, it's settled then!\n"
	.string "Let's go.$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1:
# 127 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee joined your party!$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0:
# 137 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The guard left his bag on the desk.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1:
# 139 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "There were also some berries inside one\n"
	.string "of the pockets.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2:
# 154 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Ooooh, berries??\n"
	.string "I LOVE berries.\p"
	.string "Did you know I can hold up to four\n"
	.string "berries at a time?\p"
	.string "Hey, hey, how many do can you hold?\n"
	.string "Three? Five? Eleven million?\p"
	.string "Oooh, I know, let's have a berry holding\n"
	.string "contest!\p"
	.string "… … …\p"
	.string "Whaa? I'm being silly?\p"
	.string "…No you're right, we should focus on\n"
	.string "escaping.\l"
	.string "Sowwyyy!$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_3:
# 171 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…It's not right to leave Vee behind.$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0:
# 181 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1:
# 185 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Porygon is holding something…$"
