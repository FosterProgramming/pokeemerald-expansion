# 1 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
.set LOCALID_EEVEE, 1

DominionCity_MagaLab_HoldingCells_MapScripts::
# 5 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_HoldingCells_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 6 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 0, DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell
	.2byte 0


DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell::
# 13 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 14 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playse SE_PIN
# 15 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer
# 16 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement LOCALID_EEVEE
# 17 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0
# 18 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1
# 19 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2
# 20 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3
# 21 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4
# 22 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	givemon SPECIES_DEWGONG, 25, ITEM_NONE, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_GROWL, MOVE_NONE, MOVE_NONE
# 23 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 24 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 1
# 25 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked::
# 30 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 31 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	checkitem ITEM_CARD_KEY
# 32 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2
# 38 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_Text_0
# 39 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 40 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1:
# 42 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_2:
	goto DominionCity_MagaLab_HoldingCells_EventScript_DoorIsLocked_1


DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript::
# 47 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 48 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	speakername DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_2
# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0, MSGBOX_NPC
# 50 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	removeobject LOCALID_EEVEE
# 52 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE
# 53 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_1
# 54 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	givemon SPECIES_EEVEE, 25, ITEM_NONE, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_TACKLE, MOVE_SAND_ATTACK, MOVE_GROWL, MOVE_TAIL_WHIP
# 55 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey::
# 60 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 61 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_HIDE_DOMINION_CITY_LAB_HOLDING_CELLS_EEVEE, DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1
# 69 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0
# 70 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_1:
# 63 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	finditem ITEM_CARD_KEY, 1
# 64 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript::
# 76 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	lockall
# 77 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	goto_if_set FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB, DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2
# 83 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1
# 84 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	giveitem ITEM_MIRROR_HERB, 1
# 85 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	setflag FLAG_RECEIVED_DOMINION_CITY_LAB_HOLDING_CELLS_MIRROR_HERB
DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1:
# 87 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	releaseall
	end

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_2:
# 79 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	msgbox DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0
	goto DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_1


# 91 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
DominionCity_MagaLab_HoldingCells_Movement_EeveeFacesPlayer:
# 92 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	face_left
# 93 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	emote_exclamation_mark
	step_end

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_0:
# 17 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "???$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_1:
# 18 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
# 19 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_3:
# 20 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Oh, and, um… don't expect much from\n"
	.string "that one. Porygon over there? Used to\l"
	.string "talk all the time. All numbers and beeps\l"
	.string "and stuff I didn't get. But ever since\l"
	.string "its last 'experiment' … nothing. Just\l"
	.string "sits there, flickering. Kinda creepy,\l"
	.string "right? I tried talking to it, but it won't\l"
	.string "even beep at me anymore.$"

DominionCity_MagaLab_HoldingCells_EventScript_DewgongWakesInHoldingCell_Text_4:
# 21 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
# 38 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "The door appears need a key card with a\n"
	.string "code to unlock.$"

DominionCity_MagaLab_HoldingCells_EventScript_EeveeNPCScript_Text_0:
# 49 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
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
# 53 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Vee joined your party!$"

DominionCity_MagaLab_HoldingCells_EventScript_FindCardKey_Text_0:
# 69 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…it's not right to leave Vee behind.$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_0:
# 79 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "…$"

DominionCity_MagaLab_HoldingCells_EventScript_PorygonNPCScript_Text_1:
# 83 "data/maps/DominionCity_MagaLab_HoldingCells/scripts.pory"
	.string "Porygon is holding something…$"
