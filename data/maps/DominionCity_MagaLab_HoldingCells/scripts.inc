# 1 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set LOCALID_EEVEE, 1
# 3 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set LOCALID_PORYGON, 2

DominionCity_MagaLab_HoldingCells_MapScripts::
# 6 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 0, DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell
# 8 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 5, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems
	.2byte 0


DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems::
# 14 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_1
	return

DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_1:
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
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 25 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	addobject LOCALID_EEVEE
# 26 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_2
# 27 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 28 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_EEVEE
# 29 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 30 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_3
# 31 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Movement_3
# 32 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_EEVEE
# 33 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_EEVEE
# 34 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	clearflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
# 35 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 4
# 36 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell::
# 42 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 43 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setrespawn HEAL_LOCATION_DOMINION_CITY_MAGA_LAB_HOLDING_CELLS
# 44 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 45 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer
# 46 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_EEVEE
# 47 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0
# 48 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1
# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 50 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2
# 51 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3
# 52 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 1
# 53 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked::
# 58 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 59 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	checkitem ITEM_CARD_KEY
# 60 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2
# 66 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0
# 67 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 68 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1:
# 70 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2:
	goto DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1


DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript::
# 75 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 76 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_LostBossBattleGiveItems_Text_2
# 77 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0, MSGBOX_NPC
# 78 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 79 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_EEVEE
# 80 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE
# 81 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1
# 82 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	givemon SPECIES_EEVEE, 25, ITEM_LEFTOVERS, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_SAND_ATTACK, MOVE_BUBBLEBEAM, MOVE_FLAME_CHARGE, MOVE_THUNDERBOLT
# 83 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey::
# 88 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 89 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1
# 105 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2
# 106 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1:
# 91 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0
# 92 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_CARD_KEY, 1
# 93 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1
# 94 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
# 95 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_AGUAV_BERRY, 1
# 96 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ENIGMA_BERRY, 1
# 97 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
# 98 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_PECHA_BERRY, 1
# 99 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_LUM_BERRY, 1
# 100 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript::
# 112 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 113 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB, DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2
# 119 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1
# 120 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_DOMINION_CITY_LAB_INTRO_STATE, 5
	goto_if_ge DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5
# 127 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_MIRROR_HERB, 1
# 128 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1:
# 131 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2:
# 115 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_5:
# 122 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 5
# 123 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1


# 135 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer:
# 136 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	face_left
# 137 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
# 47 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "???$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1:
# 48 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh! You're awake! I was starting to\n"
	.string "think they overdid it this time.\p"
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
	.string "Who am I? Oh, I'm Vee!$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2:
# 50 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh, and, um… don't expect much from\n"
	.string "that one. Porygon over there? Used to\l"
	.string "talk all the time. All numbers and beeps\l"
	.string "and stuff I didn't get. But ever since\l"
	.string "its last 'experiment' … nothing. Just\l"
	.string "sits there, flickering. Kinda creepy,\l"
	.string "right? I tried talking to it, but it won't\l"
	.string "even beep at me anymore.$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3:
# 51 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
# 66 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The door appears need a key card with a\n"
	.string "code to unlock.$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0:
# 77 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
# 81 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee joined your party!$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0:
# 91 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The guard left his bag on the desk.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_1:
# 93 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "There were also some berries inside one\n"
	.string "of the pockets.$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_2:
# 105 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…it's not right to leave Vee behind.$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0:
# 115 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1:
# 119 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Porygon is holding something…$"
