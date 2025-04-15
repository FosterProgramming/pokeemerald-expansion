# 1 "data/maps/Moonthistle_Shop/scripts.pory"

# 2 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_MapScripts::
# 3 "data/maps/Moonthistle_Shop/scripts.pory"
	.byte 0
# 4 "data/maps/Moonthistle_Shop/scripts.pory"

# 5 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_EventScript_PokefanM::
# 6 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_Shop_Text_MerchandiseSentToPC, MSGBOX_NPC
# 7 "data/maps/Moonthistle_Shop/scripts.pory"
	end
# 8 "data/maps/Moonthistle_Shop/scripts.pory"

# 9 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_EventScript_Girl::
# 10 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_Shop_Text_BuyingDeskForDolls, MSGBOX_NPC
# 11 "data/maps/Moonthistle_Shop/scripts.pory"
	end
# 12 "data/maps/Moonthistle_Shop/scripts.pory"

# 13 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_EventScript_ClerkDesks::
# 14 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 15 "data/maps/Moonthistle_Shop/scripts.pory"
	faceplayer
# 16 "data/maps/Moonthistle_Shop/scripts.pory"
	message gText_HowMayIServeYou
# 17 "data/maps/Moonthistle_Shop/scripts.pory"
	waitmessage
# 18 "data/maps/Moonthistle_Shop/scripts.pory"
	pokemartdecoration Moonthistle_Shop_PokemartDecor_Desks
# 19 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 20 "data/maps/Moonthistle_Shop/scripts.pory"
	release
# 21 "data/maps/Moonthistle_Shop/scripts.pory"
	end
# 22 "data/maps/Moonthistle_Shop/scripts.pory"

# 23 "data/maps/Moonthistle_Shop/scripts.pory"
	.align 2
# 24 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_PokemartDecor_Desks:
# 25 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_SMALL_DESK
# 26 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_POKEMON_DESK
# 27 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_HEAVY_DESK
# 28 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_RAGGED_DESK
# 29 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 30 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_BRICK_DESK
# 31 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_CAMP_DESK
# 32 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_HARD_DESK
# 33 "data/maps/Moonthistle_Shop/scripts.pory"
	pokemartlistend
# 34 "data/maps/Moonthistle_Shop/scripts.pory"

# 35 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_EventScript_ClerkChairs::
# 36 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 37 "data/maps/Moonthistle_Shop/scripts.pory"
	faceplayer
# 38 "data/maps/Moonthistle_Shop/scripts.pory"
	message gText_HowMayIServeYou
# 39 "data/maps/Moonthistle_Shop/scripts.pory"
	waitmessage
# 40 "data/maps/Moonthistle_Shop/scripts.pory"
	pokemartdecoration Moonthistle_Shop_PokemartDecor_Chairs
# 41 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 42 "data/maps/Moonthistle_Shop/scripts.pory"
	release
# 43 "data/maps/Moonthistle_Shop/scripts.pory"
	end
# 44 "data/maps/Moonthistle_Shop/scripts.pory"

# 45 "data/maps/Moonthistle_Shop/scripts.pory"
	.align 2
# 46 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_PokemartDecor_Chairs:
# 47 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_SMALL_CHAIR
# 48 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_POKEMON_CHAIR
# 49 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_HEAVY_CHAIR
# 50 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_RAGGED_CHAIR
# 51 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 52 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_BRICK_CHAIR
# 53 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_CAMP_CHAIR
# 54 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte DECOR_HARD_CHAIR
# 55 "data/maps/Moonthistle_Shop/scripts.pory"
	pokemartlistend
# 56 "data/maps/Moonthistle_Shop/scripts.pory"

# 57 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_Text_MerchandiseSentToPC:
# 58 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Merchandise you buy here is sent to "
# 59 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "your own PC.\p"
# 60 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "That's fantastic! I wish they could "
# 61 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "also deliver me home like that.$"
# 62 "data/maps/Moonthistle_Shop/scripts.pory"

# 63 "data/maps/Moonthistle_Shop/scripts.pory"
Moonthistle_Shop_Text_BuyingDeskForDolls:
# 64 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "I'm buying a pretty desk and I'm "
# 65 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "putting my cute DOLLS on it.\p"
# 66 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "If I don't, when I decorate my "
# 67 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "SECRET BASE, my DOLLS will get\l"
# 68 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "dirty or poked with splinters.$"

Moonthistle_EventScripts_SlowbroInn::
# 74 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 75 "data/maps/Moonthistle_Shop/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_SlowbroInn_1
# 84 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_SlowbroInn_Text_0
# 85 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_SlowbroInn_Text_2, MSGBOX_NPC
# 86 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_SlowbroInn_Text_3, MSGBOX_NPC
# 87 "data/maps/Moonthistle_Shop/scripts.pory"
	closemessage
# 88 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_SlowbroInn_Text_4, MSGBOX_YESNO
# 89 "data/maps/Moonthistle_Shop/scripts.pory"
	switch VAR_RESULT
# 91 "data/maps/Moonthistle_Shop/scripts.pory"
	case NO, Moonthistle_EventScripts_SlowbroInn_5
# 95 "data/maps/Moonthistle_Shop/scripts.pory"
	case YES, Moonthistle_EventScripts_SlowbroInn_6
# 99 "data/maps/Moonthistle_Shop/scripts.pory"
	case MULTI_B_PRESSED, Moonthistle_EventScripts_SlowbroInn_7
# 104 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_SlowbroInn_Text_5
# 105 "data/maps/Moonthistle_Shop/scripts.pory"
	releaseall
	end

Moonthistle_EventScripts_SlowbroInn_1:
# 77 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_SlowbroInn_Text_0
# 78 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_SlowbroInn_Text_1, MSGBOX_NPC
# 79 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end

Moonthistle_EventScripts_SlowbroInn_5:
# 92 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_SlowbroInn_Text_5
# 93 "data/maps/Moonthistle_Shop/scripts.pory"
	releaseall
	end

Moonthistle_EventScripts_SlowbroInn_6:
# 96 "data/maps/Moonthistle_Shop/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 97 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end

Moonthistle_EventScripts_SlowbroInn_7:
# 100 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_SlowbroInn_Text_5
# 101 "data/maps/Moonthistle_Shop/scripts.pory"
	releaseall
	end


Moonthistle_EventScripts_KecleonShopkeeper::
# 114 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 115 "data/maps/Moonthistle_Shop/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_KecleonShopkeeper_1
# 123 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_KecleonShopkeeper_Text_0
# 124 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_KecleonShopkeeper_Text_2, MSGBOX_NPC
# 125 "data/maps/Moonthistle_Shop/scripts.pory"
	pokemart MoonthistleShopItems
# 126 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end

Moonthistle_EventScripts_KecleonShopkeeper_1:
# 116 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_KecleonShopkeeper_Text_0
# 117 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_KecleonShopkeeper_Text_1, MSGBOX_NPC
# 118 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end


	.align 2
# 131 "data/maps/Moonthistle_Shop/scripts.pory"
MoonthistleShopItems:
# 133 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 134 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 135 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte ITEM_CHERI_BERRY
# 136 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte ITEM_LEMONADE
# 137 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte ITEM_WISE_GLASSES
# 138 "data/maps/Moonthistle_Shop/scripts.pory"
	.2byte ITEM_CHARCOAL
	.2byte ITEM_NONE

Moonthistle_EventScripts_Pineco::
# 144 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 145 "data/maps/Moonthistle_Shop/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_Pineco_1
# 154 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 155 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_Pineco_Text_0
# 156 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_Pineco_Text_2, MSGBOX_NPC
# 157 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end

Moonthistle_EventScripts_Pineco_1:
# 147 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_Pineco_Text_0
# 148 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_Pineco_Text_1, MSGBOX_NPC
# 149 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end


Moonthistle_EventScripts_Gulpin::
# 165 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 166 "data/maps/Moonthistle_Shop/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_Gulpin_1
# 175 "data/maps/Moonthistle_Shop/scripts.pory"
	lock
# 176 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_Gulpin_Text_0
# 177 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_Gulpin_Text_2, MSGBOX_NPC
# 178 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end

Moonthistle_EventScripts_Gulpin_1:
# 168 "data/maps/Moonthistle_Shop/scripts.pory"
	speakername Moonthistle_EventScripts_Gulpin_Text_0
# 169 "data/maps/Moonthistle_Shop/scripts.pory"
	msgbox Moonthistle_EventScripts_Gulpin_Text_1, MSGBOX_NPC
# 170 "data/maps/Moonthistle_Shop/scripts.pory"
	release
	end


Moonthistle_EventScripts_SlowbroInn_Text_0:
# 77 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Slowbro$"

Moonthistle_EventScripts_SlowbroInn_Text_1:
# 78 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "…this place’s for locals only…$"

Moonthistle_EventScripts_SlowbroInn_Text_2:
# 85 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "…yawn… bed’s free upstairs if you need\n"
	.string "it…$"

Moonthistle_EventScripts_SlowbroInn_Text_3:
# 86 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "…no loud stomping or weird energy\n"
	.string "moves…$"

Moonthistle_EventScripts_SlowbroInn_Text_4:
# 88 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Would you like to take a rest?$"

Moonthistle_EventScripts_SlowbroInn_Text_5:
# 92 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "…yawn… okay…$"

Moonthistle_EventScripts_KecleonShopkeeper_Text_0:
# 116 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Kecleon$"

Moonthistle_EventScripts_KecleonShopkeeper_Text_1:
# 117 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Shop’s closed to outsiders. No badge, no\n"
	.string "bargain.$"

Moonthistle_EventScripts_KecleonShopkeeper_Text_2:
# 124 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Linoone says you’re alright. So, fine.\n"
	.string "You can browse.$"

Moonthistle_EventScripts_Pineco_Text_0:
# 147 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Pineco$"

Moonthistle_EventScripts_Pineco_Text_1:
# 148 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "You're not from here… Please don't\n"
	.string "cause trouble.\p"
	.string "I-I just want to be left alone.$"

Moonthistle_EventScripts_Pineco_Text_2:
# 156 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Sorry I was so nervous earlier… You’re\n"
	.string "not like the others.\p"
	.string "If you ever need a place to breathe,\n"
	.string "this corner’s quiet.$"

Moonthistle_EventScripts_Gulpin_Text_0:
# 168 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Gulpin$"

Moonthistle_EventScripts_Gulpin_Text_1:
# 169 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "Stay away from my berries, outsider.$"

Moonthistle_EventScripts_Gulpin_Text_2:
# 177 "data/maps/Moonthistle_Shop/scripts.pory"
	.string "I came for healing herbs… But if you\n"
	.string "find any sweet berries, let me know…$"
