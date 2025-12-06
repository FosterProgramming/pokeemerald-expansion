# 1 "data/maps/Moonthistle/scripts.pory"

# 2 "data/maps/Moonthistle/scripts.pory"
Moonthistle_MapScripts::
# 3 "data/maps/Moonthistle/scripts.pory"
	.byte 0

Moonthistle_EventScripts_Bellossom::
# 8 "data/maps/Moonthistle/scripts.pory"
	lock
# 9 "data/maps/Moonthistle/scripts.pory"
	goto_if_unset FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_Bellossom_2
# 18 "data/maps/Moonthistle/scripts.pory"
	speakername Moonthistle_EventScripts_Bellossom_Text_0
# 19 "data/maps/Moonthistle/scripts.pory"
	msgbox Moonthistle_EventScripts_Bellossom_Text_2, MSGBOX_NPC
# 21 "data/maps/Moonthistle/scripts.pory"
	release
	end

Moonthistle_EventScripts_Bellossom_2:
# 11 "data/maps/Moonthistle/scripts.pory"
	speakername Moonthistle_EventScripts_Bellossom_Text_0
# 12 "data/maps/Moonthistle/scripts.pory"
	msgbox Moonthistle_EventScripts_Bellossom_Text_1, MSGBOX_NPC
# 13 "data/maps/Moonthistle/scripts.pory"
	release
	end


Moonthistle_EventScripts_Loudred::
# 28 "data/maps/Moonthistle/scripts.pory"
	lock
# 29 "data/maps/Moonthistle/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_Loudred_2
# 38 "data/maps/Moonthistle/scripts.pory"
	speakername Moonthistle_EventScripts_Loudred_Text_0
# 39 "data/maps/Moonthistle/scripts.pory"
	msgbox Moonthistle_EventScripts_Loudred_Text_2, MSGBOX_NPC
# 41 "data/maps/Moonthistle/scripts.pory"
	release
	end

Moonthistle_EventScripts_Loudred_2:
# 31 "data/maps/Moonthistle/scripts.pory"
	speakername Moonthistle_EventScripts_Loudred_Text_0
# 32 "data/maps/Moonthistle/scripts.pory"
	msgbox Moonthistle_EventScripts_Loudred_Text_1, MSGBOX_NPC
# 33 "data/maps/Moonthistle/scripts.pory"
	release
	end


Moonthistle_EventScripts_Bellossom_Text_0:
# 11 "data/maps/Moonthistle/scripts.pory"
	.string "Bellossom$"

Moonthistle_EventScripts_Bellossom_Text_1:
# 12 "data/maps/Moonthistle/scripts.pory"
	.string "Oh! Hello, stranger.\n"
	.string "Sorry-I’ve got a lot of planting to do…$"

Moonthistle_EventScripts_Bellossom_Text_2:
# 19 "data/maps/Moonthistle/scripts.pory"
	.string "You’re one of the new faces, right?\n"
	.string "Glad to see Linoone’s warming up.\p"
	.string "Don’t let the gloom get to you. We’ve got\n"
	.string "flowers, and that’s a start!$"

Moonthistle_EventScripts_Loudred_Text_0:
# 31 "data/maps/Moonthistle/scripts.pory"
	.string "Loudred$"

Moonthistle_EventScripts_Loudred_Text_1:
# 32 "data/maps/Moonthistle/scripts.pory"
	.string "KEEP YOUR-\n"
	.string "I mean, keep your head down, and your\l"
	.string "voice low.$"

Moonthistle_EventScripts_Loudred_Text_2:
# 39 "data/maps/Moonthistle/scripts.pory"
	.string "I’ve got my ears on the whole town.\n"
	.string "Don’t think I won’t notice trouble.$"
