# 1 "data/maps/Moonthistle_House3/scripts.pory"

# 2 "data/maps/Moonthistle_House3/scripts.pory"
Moonthistle_House3_MapScripts::
# 3 "data/maps/Moonthistle_House3/scripts.pory"
	.byte 0
# 4 "data/maps/Moonthistle_House3/scripts.pory"

# 5 "data/maps/Moonthistle_House3/scripts.pory"
Moonthistle_House3_EventScript_Maniac::
# 6 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_House3_Text_MetStevenHadAmazingPokemon, MSGBOX_NPC
# 7 "data/maps/Moonthistle_House3/scripts.pory"
	end
# 8 "data/maps/Moonthistle_House3/scripts.pory"

# 9 "data/maps/Moonthistle_House3/scripts.pory"
Moonthistle_House3_EventScript_SchoolKidM::
# 10 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_House3_Text_OhYouHavePokedex, MSGBOX_NPC
# 11 "data/maps/Moonthistle_House3/scripts.pory"
	end
# 12 "data/maps/Moonthistle_House3/scripts.pory"

# 13 "data/maps/Moonthistle_House3/scripts.pory"
Moonthistle_House3_Text_MetStevenHadAmazingPokemon:
# 14 "data/maps/Moonthistle_House3/scripts.pory"
	.string "While speaking about POKéDEXES,\n"
# 15 "data/maps/Moonthistle_House3/scripts.pory"
	.string "I remembered something.\p"
# 16 "data/maps/Moonthistle_House3/scripts.pory"
	.string "I met this TRAINER, STEVEN, when\n"
# 17 "data/maps/Moonthistle_House3/scripts.pory"
	.string "I was searching for rare stones.\p"
# 18 "data/maps/Moonthistle_House3/scripts.pory"
	.string "Hoo, boy, he had some amazing POKéMON\n"
# 19 "data/maps/Moonthistle_House3/scripts.pory"
	.string "with him.\p"
# 20 "data/maps/Moonthistle_House3/scripts.pory"
	.string "They weren't just rare, they were\n"
# 21 "data/maps/Moonthistle_House3/scripts.pory"
	.string "trained to terrifying extremes!\p"
# 22 "data/maps/Moonthistle_House3/scripts.pory"
	.string "He might even be stronger than the\n"
# 23 "data/maps/Moonthistle_House3/scripts.pory"
	.string "GYM LEADER in this town…$"
# 24 "data/maps/Moonthistle_House3/scripts.pory"

# 25 "data/maps/Moonthistle_House3/scripts.pory"
Moonthistle_House3_Text_OhYouHavePokedex:
# 26 "data/maps/Moonthistle_House3/scripts.pory"
	.string "What's that thing you have there?\p"
# 27 "data/maps/Moonthistle_House3/scripts.pory"
	.string "… … … … … …\p"
# 28 "data/maps/Moonthistle_House3/scripts.pory"
	.string "Oh, it's called a POKéDEX?\n"
# 29 "data/maps/Moonthistle_House3/scripts.pory"
	.string "It's really awesome!$"

Moonthistle_EventScripts_Whismur::
# 35 "data/maps/Moonthistle_House3/scripts.pory"
	lock
# 36 "data/maps/Moonthistle_House3/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_Whismur_2
# 43 "data/maps/Moonthistle_House3/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_WHISMUR_GIFT, Moonthistle_EventScripts_Whismur_4
# 52 "data/maps/Moonthistle_House3/scripts.pory"
	speakername Moonthistle_EventScripts_Whismur_Text_0
# 53 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_EventScripts_Whismur_Text_3, MSGBOX_NPC
# 54 "data/maps/Moonthistle_House3/scripts.pory"
	giveitem ITEM_SITRUS_BERRY, 1
# 55 "data/maps/Moonthistle_House3/scripts.pory"
	setflag FLAG_MOONTHISTLE_WHISMUR_GIFT
# 56 "data/maps/Moonthistle_House3/scripts.pory"
	speakername Moonthistle_EventScripts_Whismur_Text_0
# 57 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_EventScripts_Whismur_Text_4
# 58 "data/maps/Moonthistle_House3/scripts.pory"
	release
	end

Moonthistle_EventScripts_Whismur_2:
# 38 "data/maps/Moonthistle_House3/scripts.pory"
	speakername Moonthistle_EventScripts_Whismur_Text_0
# 39 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_EventScripts_Whismur_Text_1, MSGBOX_NPC
# 40 "data/maps/Moonthistle_House3/scripts.pory"
	release
	end

Moonthistle_EventScripts_Whismur_4:
# 45 "data/maps/Moonthistle_House3/scripts.pory"
	speakername Moonthistle_EventScripts_Whismur_Text_0
# 46 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_EventScripts_Whismur_Text_2, MSGBOX_NPC
# 47 "data/maps/Moonthistle_House3/scripts.pory"
	release
	end


Moonthistle_EventScripts_Absol::
# 65 "data/maps/Moonthistle_House3/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_Absol_1
# 74 "data/maps/Moonthistle_House3/scripts.pory"
	speakername Moonthistle_EventScripts_Absol_Text_0
# 75 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_EventScripts_Absol_Text_2, MSGBOX_NPC
# 76 "data/maps/Moonthistle_House3/scripts.pory"
	release
	end

Moonthistle_EventScripts_Absol_1:
# 67 "data/maps/Moonthistle_House3/scripts.pory"
	speakername Moonthistle_EventScripts_Absol_Text_0
# 68 "data/maps/Moonthistle_House3/scripts.pory"
	msgbox Moonthistle_EventScripts_Absol_Text_1, MSGBOX_NPC
# 69 "data/maps/Moonthistle_House3/scripts.pory"
	release
	end


Moonthistle_EventScripts_Whismur_Text_0:
# 38 "data/maps/Moonthistle_House3/scripts.pory"
	.string "Whismur$"

Moonthistle_EventScripts_Whismur_Text_1:
# 39 "data/maps/Moonthistle_House3/scripts.pory"
	.string "…h-hi…$"

Moonthistle_EventScripts_Whismur_Text_2:
# 46 "data/maps/Moonthistle_House3/scripts.pory"
	.string "…stay safe out there, o-okay…?$"

Moonthistle_EventScripts_Whismur_Text_3:
# 53 "data/maps/Moonthistle_House3/scripts.pory"
	.string "U-um…\n"
	.string "You helped Linoone, right?\p"
	.string "That was really brave…\p"
	.string "I-I found this near the roots.\n"
	.string "Maybe it’ll help…?$"

Moonthistle_EventScripts_Whismur_Text_4:
# 57 "data/maps/Moonthistle_House3/scripts.pory"
	.string "…Please don’t let Team MAGA find this\n"
	.string "place.$"

Moonthistle_EventScripts_Absol_Text_0:
# 67 "data/maps/Moonthistle_House3/scripts.pory"
	.string "Absol$"

Moonthistle_EventScripts_Absol_Text_1:
# 68 "data/maps/Moonthistle_House3/scripts.pory"
	.string "You shouldn't have come here.$"

Moonthistle_EventScripts_Absol_Text_2:
# 75 "data/maps/Moonthistle_House3/scripts.pory"
	.string "Stay sharp.\n"
	.string "Team MAGA won’t stop until everything\l"
	.string "burns.$"
