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
# 37 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_3
# 38 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 39 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_VEE
# 40 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	clearflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
# 41 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
# 42 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell::
# 47 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 48 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setrespawn HEAL_LOCATION_DOMINION_CITY_MAGA_LAB_HOLDING_CELLS
# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 50 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer
# 51 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 52 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0
# 53 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 54 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1
# 55 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Movement_0
# 56 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 57 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2
# 68 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 69 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3
# 81 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4
# 93 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 1
# 94 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked::
# 99 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 100 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	checkitem ITEM_CARD_KEY
# 101 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2
# 107 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0
# 108 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 109 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1:
# 111 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2:
	goto DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1


DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript::
# 116 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 117 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 118 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0, MSGBOX_NPC
# 132 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_VEE
# 134 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE
# 135 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1
# 136 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	givemon SPECIES_EEVEE, 25, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SAND_ATTACK, MOVE_BUBBLEBEAM, MOVE_FLAME_CHARGE, MOVE_THUNDERBOLT
# 137 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey::
# 142 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 143 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1
# 179 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_3
# 180 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1:
# 145 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0
# 146 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_CARD_KEY, 1
# 147 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1
# 148 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
# 149 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_AGUAV_BERRY, 1
# 150 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ENIGMA_BERRY, 1
# 151 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
# 152 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_PECHA_BERRY, 1
# 153 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_LUM_BERRY, 1
# 154 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 155 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 156 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	addobject LOCALID_VEE
# 157 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 158 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_PlayerFacesPartyMemberEast
# 159 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 160 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 161 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 162 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2
# 171 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 172 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_VEE
# 173 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_VEE
# 174 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript::
# 186 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 187 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB, DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2
# 193 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1
# 194 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
	goto_if_ge DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5
# 201 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_MIRROR_HERB, 1
# 202 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1:
# 205 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2:
# 189 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5:
# 196 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 197 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1


# 209 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer:
# 210 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	face_left
# 211 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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

# 37 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_3:
# 37 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_right
	step_end

# 55 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Movement_0:
# 55 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	walk_in_place_right
# 55 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
	.string "Heeeey!\n"
	.string "So you CAN still talk!\p"
	.string "What did you say about item… Reple…\n"
	.string "Replenishment?\p"
	.string "Hmm…\p"
	.string "Maybe these are the items we need to\n"
	.string "defeat the other Porygon!\p"
	.string "It makes sense, right? Right?\p"
	.string "Anyway, thanks Porygon!\n"
	.string "It was nice hearing your voice again!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0:
# 52 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "???$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1:
# 54 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh!\n"
	.string "You're awake!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2:
# 58 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
# 69 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh, and, um…\n"
	.string "Speaking of friends…\p"
	.string "See that Porygon over there?\p"
	.string "They're nice, but they're not much of a\n"
	.string "talker.\p"
	.string "They USED to talk nonstop, actually.\n"
	.string "Numbers, and beeps, and stuff…\p"
	.string "I didn't really understand what they\n"
	.string "were saying.\p"
	.string "But it was nice having company.\p"
	.string "But then the scientists did something\n"
	.string "to them, and now…\p"
	.string "They just kinda sit there…\n"
	.string "Flickering.\p"
	.string "Creepy, right?\p"
	.string "Oh, but I'm being rude!\n"
	.string "What's your story?\p"
	.string "Let me guess: you got captured by\n"
	.string "those scary men.\p"
	.string "Am I right?$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4:
# 82 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
	.string "I've tried escaping through there\n"
	.string "before, but…\p"
	.string "I may be a little… Scared… Of the dark…\p"
	.string "But I know for a fact that you can get\n"
	.string "to my cell through them!\p"
	.string "And once you're here, we can talk more\n"
	.string "quietly.\p"
	.string "C'mon, I'll wait for you!$"

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0:
# 107 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The door appears need a key card with a\n"
	.string "code to unlock.$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0:
# 119 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Phew!\n"
	.string "You made it!\p"
	.string "I told ya the vents were the best way\n"
	.string "to move around.\p"
	.string "Alright, alright, here's the deal.\n"
	.string "I know how we can get out.\p"
	.string "There's a guard that comes and goes\n"
	.string "through the locked door.\p"
	.string "When he's on break, he always leaves his\n"
	.string "keycard on his desk.\p"
	.string "Stealing it will be a piece of pie!\p"
	.string "Buuut, there's just one little, tiny\n"
	.string "problem…\p"
	.string "To open the door to the outside, you\n"
	.string "need to swipe the card and then insert\l"
	.string "a code.\p"
	.string "The good news is that the code is\n"
	.string "probably written down somewhere.\p"
	.string "The bad news is that… Well…\n"
	.string "I don't really… Know… How to read.\p"
	.string "But you were human!\n"
	.string "With your human powers, you can read it\l"
	.string "and open the doors!\p"
	.string "Alright, it's a plan then!\n"
	.string "Let's go!$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1:
# 135 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee joined your party!$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0:
# 145 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The guard left his bag on the desk.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1:
# 147 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "There were also some berries inside one\n"
	.string "of the pockets.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2:
# 162 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
	.string "…No, you're right, we should focus on\n"
	.string "escaping.\l"
	.string "Sorryyy!$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_3:
# 179 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…It's not right to leave Vee behind.$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0:
# 189 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1:
# 193 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Porygon is holding something…$"
