# 1 "data/maps/Moonthistle_House1/scripts.pory"

# 2 "data/maps/Moonthistle_House1/scripts.pory"
.set LOCALID_VEE, 2
# 3 "data/maps/Moonthistle_House1/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/Moonthistle_House1/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4
# 5 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_MapScripts::
# 6 "data/maps/Moonthistle_House1/scripts.pory"
	.byte 0
# 7 "data/maps/Moonthistle_House1/scripts.pory"

# 8 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_EventScript_Trader::
# 9 "data/maps/Moonthistle_House1/scripts.pory"
	lock
# 10 "data/maps/Moonthistle_House1/scripts.pory"
	faceplayer
# 11 "data/maps/Moonthistle_House1/scripts.pory"
	goto_if_set FLAG_FORTREE_NPC_TRADE_COMPLETED, Moonthistle_House1_EventScript_TradeCompleted
# 12 "data/maps/Moonthistle_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_PLUSLE
# 13 "data/maps/Moonthistle_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 14 "data/maps/Moonthistle_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 15 "data/maps/Moonthistle_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 16 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_House1_Text_YouWillTradeWontYou, MSGBOX_YESNO
# 17 "data/maps/Moonthistle_House1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Moonthistle_House1_EventScript_DeclineTrade
# 18 "data/maps/Moonthistle_House1/scripts.pory"
	special ChoosePartyMon
# 19 "data/maps/Moonthistle_House1/scripts.pory"
	waitstate
# 20 "data/maps/Moonthistle_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 21 "data/maps/Moonthistle_House1/scripts.pory"
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Moonthistle_House1_EventScript_DeclineTrade
# 22 "data/maps/Moonthistle_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 23 "data/maps/Moonthistle_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 24 "data/maps/Moonthistle_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 25 "data/maps/Moonthistle_House1/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, Moonthistle_House1_EventScript_NotRequestedMon
# 26 "data/maps/Moonthistle_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/Moonthistle_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 28 "data/maps/Moonthistle_House1/scripts.pory"
	special CreateInGameTradePokemon
# 29 "data/maps/Moonthistle_House1/scripts.pory"
	special DoInGameTradeScene
# 30 "data/maps/Moonthistle_House1/scripts.pory"
	waitstate
# 31 "data/maps/Moonthistle_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 32 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_House1_Text_MonYouTakeCare, MSGBOX_DEFAULT
# 33 "data/maps/Moonthistle_House1/scripts.pory"
	setflag FLAG_FORTREE_NPC_TRADE_COMPLETED
# 34 "data/maps/Moonthistle_House1/scripts.pory"
	release
# 35 "data/maps/Moonthistle_House1/scripts.pory"
	end
# 36 "data/maps/Moonthistle_House1/scripts.pory"

# 37 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_EventScript_DeclineTrade::
# 38 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_House1_Text_YouWontTradeMe, MSGBOX_DEFAULT
# 39 "data/maps/Moonthistle_House1/scripts.pory"
	release
# 40 "data/maps/Moonthistle_House1/scripts.pory"
	end
# 41 "data/maps/Moonthistle_House1/scripts.pory"

# 42 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_EventScript_NotRequestedMon::
# 43 "data/maps/Moonthistle_House1/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_0x8009
# 44 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_House1_Text_ThisIsntAMon, MSGBOX_DEFAULT
# 45 "data/maps/Moonthistle_House1/scripts.pory"
	release
# 46 "data/maps/Moonthistle_House1/scripts.pory"
	end
# 47 "data/maps/Moonthistle_House1/scripts.pory"

# 48 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_EventScript_TradeCompleted::
# 49 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_House1_Text_GoingToMakeVolbeatStrong, MSGBOX_DEFAULT
# 50 "data/maps/Moonthistle_House1/scripts.pory"
	release
# 51 "data/maps/Moonthistle_House1/scripts.pory"
	end
# 52 "data/maps/Moonthistle_House1/scripts.pory"

# 53 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_EventScript_ExpertF::
# 54 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_House1_Text_TradingMemoriesWithOthers, MSGBOX_NPC
# 55 "data/maps/Moonthistle_House1/scripts.pory"
	end
# 56 "data/maps/Moonthistle_House1/scripts.pory"

# 57 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_EventScript_Zigzagoon::
# 58 "data/maps/Moonthistle_House1/scripts.pory"
	lock
# 59 "data/maps/Moonthistle_House1/scripts.pory"
	faceplayer
# 60 "data/maps/Moonthistle_House1/scripts.pory"
	waitse
# 61 "data/maps/Moonthistle_House1/scripts.pory"
	playmoncry SPECIES_ZIGZAGOON, CRY_MODE_NORMAL
# 62 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_House1_Text_Zigzagoon, MSGBOX_DEFAULT
# 63 "data/maps/Moonthistle_House1/scripts.pory"
	waitmoncry
# 64 "data/maps/Moonthistle_House1/scripts.pory"
	release
# 65 "data/maps/Moonthistle_House1/scripts.pory"
	end
# 66 "data/maps/Moonthistle_House1/scripts.pory"

# 67 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_Text_YouWillTradeWontYou:
# 68 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Wrooooaaar! I need it!\n"
# 69 "data/maps/Moonthistle_House1/scripts.pory"
	.string "I have to get me a {STR_VAR_1}!\l"
# 70 "data/maps/Moonthistle_House1/scripts.pory"
	.string "I'll do anything for it!\p"
# 71 "data/maps/Moonthistle_House1/scripts.pory"
	.string "…Uh… Did you hear that?\n"
# 72 "data/maps/Moonthistle_House1/scripts.pory"
	.string "My shout from the bottom of my heart?\p"
# 73 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Having heard that, you will trade\n"
# 74 "data/maps/Moonthistle_House1/scripts.pory"
	.string "your {STR_VAR_1} for my {STR_VAR_2},\l"
# 75 "data/maps/Moonthistle_House1/scripts.pory"
	.string "won't you?$"
# 76 "data/maps/Moonthistle_House1/scripts.pory"

# 77 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_Text_MonYouTakeCare:
# 78 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Oh, yeah, right on!\p"
# 79 "data/maps/Moonthistle_House1/scripts.pory"
	.string "{STR_VAR_1}, welcome!\n"
# 80 "data/maps/Moonthistle_House1/scripts.pory"
	.string "{STR_VAR_2}, you take care!$"
# 81 "data/maps/Moonthistle_House1/scripts.pory"

# 82 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_Text_ThisIsntAMon:
# 83 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Uh, no, I don't think so.\n"
# 84 "data/maps/Moonthistle_House1/scripts.pory"
	.string "That isn't a {STR_VAR_1}.$"
# 85 "data/maps/Moonthistle_House1/scripts.pory"

# 86 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_Text_YouWontTradeMe:
# 87 "data/maps/Moonthistle_House1/scripts.pory"
	.string "No? You won't trade me?\n"
# 88 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Even after I bared my heart to you?$"
# 89 "data/maps/Moonthistle_House1/scripts.pory"

# 90 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_Text_GoingToMakeVolbeatStrong:
# 91 "data/maps/Moonthistle_House1/scripts.pory"
	.string "I'm going to make VOLBEAT super\n"
# 92 "data/maps/Moonthistle_House1/scripts.pory"
	.string "strong from this moment on!\p"
# 93 "data/maps/Moonthistle_House1/scripts.pory"
	.string "I hope you do the same with PLUSLE!$"
# 94 "data/maps/Moonthistle_House1/scripts.pory"

# 95 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_Text_TradingMemoriesWithOthers:
# 96 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Trading POKéMON with others…\p"
# 97 "data/maps/Moonthistle_House1/scripts.pory"
	.string "It's as if you're trading your own\n"
# 98 "data/maps/Moonthistle_House1/scripts.pory"
	.string "memories with other people.$"
# 99 "data/maps/Moonthistle_House1/scripts.pory"

# 100 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_House1_Text_Zigzagoon:
# 101 "data/maps/Moonthistle_House1/scripts.pory"
	.string "ZIGZAGOON: Gumomoh?$"

Moonthistle_EventScripts_Shade::
# 107 "data/maps/Moonthistle_House1/scripts.pory"
	lock
# 108 "data/maps/Moonthistle_House1/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_Shade_1
# 115 "data/maps/Moonthistle_House1/scripts.pory"
	goto_if_unset FLAG_HINTED_AT_POWERPLANT, Moonthistle_EventScripts_Shade_2
# 159 "data/maps/Moonthistle_House1/scripts.pory"
	speakername Moonthistle_EventScripts_Shade_Text_4
# 160 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_EventScripts_Shade_Text_7
# 161 "data/maps/Moonthistle_House1/scripts.pory"
	release
	end

Moonthistle_EventScripts_Shade_1:
# 110 "data/maps/Moonthistle_House1/scripts.pory"
	speakername Moonthistle_EventScripts_Shade_Text_0
# 111 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_EventScripts_Shade_Text_1, MSGBOX_NPC
# 112 "data/maps/Moonthistle_House1/scripts.pory"
	release
	end

Moonthistle_EventScripts_Shade_2:
# 117 "data/maps/Moonthistle_House1/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 118 "data/maps/Moonthistle_House1/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 119 "data/maps/Moonthistle_House1/scripts.pory"
	compare PlayerXCoordinates, 1
	goto_if_eq Moonthistle_EventScripts_Shade_7
Moonthistle_EventScripts_Shade_6:
# 127 "data/maps/Moonthistle_House1/scripts.pory"
	compare PlayerXCoordinates, 0
	goto_if_eq Moonthistle_EventScripts_Shade_10
Moonthistle_EventScripts_Shade_9:
# 135 "data/maps/Moonthistle_House1/scripts.pory"
	speakername Moonthistle_EventScripts_Shade_Text_2
# 136 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_EventScripts_Shade_Text_3
# 137 "data/maps/Moonthistle_House1/scripts.pory"
	speakername Moonthistle_EventScripts_Shade_Text_4
# 138 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_EventScripts_Shade_Text_5
# 139 "data/maps/Moonthistle_House1/scripts.pory"
	speakername Moonthistle_EventScripts_Shade_Text_2
# 140 "data/maps/Moonthistle_House1/scripts.pory"
	msgbox Moonthistle_EventScripts_Shade_Text_6
# 141 "data/maps/Moonthistle_House1/scripts.pory"
	compare PlayerXCoordinates, 1
	goto_if_eq Moonthistle_EventScripts_Shade_13
Moonthistle_EventScripts_Shade_12:
# 147 "data/maps/Moonthistle_House1/scripts.pory"
	compare PlayerXCoordinates, 0
	goto_if_eq Moonthistle_EventScripts_Shade_16
Moonthistle_EventScripts_Shade_15:
# 153 "data/maps/Moonthistle_House1/scripts.pory"
	setflag FLAG_HINTED_AT_POWERPLANT
# 154 "data/maps/Moonthistle_House1/scripts.pory"
	release
	end

Moonthistle_EventScripts_Shade_7:
# 121 "data/maps/Moonthistle_House1/scripts.pory"
	addobject LOCALID_VEE
# 122 "data/maps/Moonthistle_House1/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_Shade_Movement_0
# 123 "data/maps/Moonthistle_House1/scripts.pory"
	waitmovement LOCALID_VEE
# 124 "data/maps/Moonthistle_House1/scripts.pory"
	applymovement 1, Moonthistle_EventScripts_Shade_Movement_1
# 125 "data/maps/Moonthistle_House1/scripts.pory"
	waitmovement 1
	goto Moonthistle_EventScripts_Shade_6

Moonthistle_EventScripts_Shade_10:
# 129 "data/maps/Moonthistle_House1/scripts.pory"
	addobject LOCALID_VEE
# 130 "data/maps/Moonthistle_House1/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_Shade_Movement_2
# 131 "data/maps/Moonthistle_House1/scripts.pory"
	waitmovement LOCALID_VEE
# 132 "data/maps/Moonthistle_House1/scripts.pory"
	applymovement 1, Moonthistle_EventScripts_Shade_Movement_3
# 133 "data/maps/Moonthistle_House1/scripts.pory"
	waitmovement 1
	goto Moonthistle_EventScripts_Shade_9

Moonthistle_EventScripts_Shade_13:
# 143 "data/maps/Moonthistle_House1/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_Shade_Movement_4
# 144 "data/maps/Moonthistle_House1/scripts.pory"
	waitmovement LOCALID_VEE
# 145 "data/maps/Moonthistle_House1/scripts.pory"
	removeobject LOCALID_VEE
	goto Moonthistle_EventScripts_Shade_12

Moonthistle_EventScripts_Shade_16:
# 149 "data/maps/Moonthistle_House1/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_Shade_Movement_5
# 150 "data/maps/Moonthistle_House1/scripts.pory"
	waitmovement LOCALID_VEE
# 151 "data/maps/Moonthistle_House1/scripts.pory"
	removeobject LOCALID_VEE
	goto Moonthistle_EventScripts_Shade_15


# 122 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_EventScripts_Shade_Movement_0:
# 122 "data/maps/Moonthistle_House1/scripts.pory"
	walk_down
# 122 "data/maps/Moonthistle_House1/scripts.pory"
	walk_left
# 122 "data/maps/Moonthistle_House1/scripts.pory"
	face_up
# 122 "data/maps/Moonthistle_House1/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_EventScripts_Shade_Movement_1:
# 124 "data/maps/Moonthistle_House1/scripts.pory"
	face_down
	step_end

# 130 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_EventScripts_Shade_Movement_2:
# 130 "data/maps/Moonthistle_House1/scripts.pory"
	walk_right
# 130 "data/maps/Moonthistle_House1/scripts.pory"
	walk_up
# 130 "data/maps/Moonthistle_House1/scripts.pory"
	face_left
# 130 "data/maps/Moonthistle_House1/scripts.pory"
	emote_exclamation_mark
	step_end

# 132 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_EventScripts_Shade_Movement_3:
# 132 "data/maps/Moonthistle_House1/scripts.pory"
	face_right
	step_end

# 143 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_EventScripts_Shade_Movement_4:
# 143 "data/maps/Moonthistle_House1/scripts.pory"
	walk_right
# 143 "data/maps/Moonthistle_House1/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/Moonthistle_House1/scripts.pory"
Moonthistle_EventScripts_Shade_Movement_5:
# 149 "data/maps/Moonthistle_House1/scripts.pory"
	walk_down
# 149 "data/maps/Moonthistle_House1/scripts.pory"
	walk_left
# 149 "data/maps/Moonthistle_House1/scripts.pory"
	face_left
	step_end

Moonthistle_EventScripts_Shade_Text_0:
# 110 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Mightyena$"

Moonthistle_EventScripts_Shade_Text_1:
# 111 "data/maps/Moonthistle_House1/scripts.pory"
	.string "…You’re not from here.\p"
	.string "Best not to ask questions until you’re\n"
	.string "sure who’s listening.$"

Moonthistle_EventScripts_Shade_Text_2:
# 135 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Vee$"

Moonthistle_EventScripts_Shade_Text_3:
# 136 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Shade, right? Linoone said you used to\n"
	.string "live in Voltbrook.\p"
	.string "We’re, uh… we’re looking for something.\n"
	.string "Something important.\p"
	.string "A-Artifacts. Eight of them.\p"
	.string "We know one of them is in Voltbrook, but\n"
	.string "we don't know where.\p"
	.string "They’re connected to the experiments…\n"
	.string "the ones that turned him-my\l"
	.string "friend-into what he is now.\p"
	.string "If we can find them all… we might be\n"
	.string "able to fix it.$"

Moonthistle_EventScripts_Shade_Text_4:
# 137 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Shade$"

Moonthistle_EventScripts_Shade_Text_5:
# 138 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Artifacts tied to human experiments…\p"
	.string "…If Team MAGA’s hoarding something like\n"
	.string "that, it’ll be in the power plant.\p"
	.string "Locked tight. High voltage gates, full\n"
	.string "security grid. You’re not strolling in\l"
	.string "through the front door.\p"
	.string "But there was a maintenance tunnel.\n"
	.string "Back when I lived there.\p"
	.string "It ran behind the powerplant. Workers\n"
	.string "used it when the plant was being built.\p"
	.string "If it’s still open… that tunnel might be\n"
	.string "your way in.$"

Moonthistle_EventScripts_Shade_Text_6:
# 140 "data/maps/Moonthistle_House1/scripts.pory"
	.string "Really? That’s… that’s actually really\n"
	.string "helpful!\p"
	.string "Thank you, Shade. We’ll be careful. I\n"
	.string "promise!$"

Moonthistle_EventScripts_Shade_Text_7:
# 160 "data/maps/Moonthistle_House1/scripts.pory"
	.string "If the tunnel behind the powerplant is\n"
	.string "still open… it might be your way in.$"
