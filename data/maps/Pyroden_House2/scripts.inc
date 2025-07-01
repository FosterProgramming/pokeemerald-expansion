Pyroden_House2_MapScripts::
	.byte 0


Pyroden_EventScript_Houndour::
# 5 "data/maps/Pyroden_House2/scripts.pory"
	lock
# 6 "data/maps/Pyroden_House2/scripts.pory"
	speakername Pyroden_EventScript_Houndour_Text_0
# 7 "data/maps/Pyroden_House2/scripts.pory"
	msgbox Pyroden_EventScript_Houndour_Text_1, MSGBOX_NPC
# 16 "data/maps/Pyroden_House2/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_MAGMORTAR, Pyroden_EventScript_Houndour_2
Pyroden_EventScript_Houndour_1:
# 21 "data/maps/Pyroden_House2/scripts.pory"
	release
	end

Pyroden_EventScript_Houndour_2:
# 18 "data/maps/Pyroden_House2/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_MAGMORTAR
# 19 "data/maps/Pyroden_House2/scripts.pory"
	call Pyroden_EventScript_CheckHintsInside
	goto Pyroden_EventScript_Houndour_1


Pyroden_EventScript_Houndour_Text_0:
# 6 "data/maps/Pyroden_House2/scripts.pory"
	.string "Houndour$"

Pyroden_EventScript_Houndour_Text_1:
# 8 "data/maps/Pyroden_House2/scripts.pory"
	.string "Oh? A new face?\n"
	.string "Funny.\p"
	.string "This town's usually pretty quiet, but\n"
	.string "you're the second stranger we've had\l"
	.string "recently.\p"
	.string "Yeah, there was this big Magmortar that\n"
	.string "strolled through here a while ago.\l"
	.string "Real mean guy, that one.\p"
	.string "I think he said something about the\n"
	.string "volcano?\p"
	.string "I dunno. I wouldn't wanna mess with him.$"
