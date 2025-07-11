Pyroden_House3_MapScripts::
	.byte 0


Pyroden_EventScript_Geodude::
# 5 "data/maps/Pyroden_House3/scripts.pory"
	speakername Pyroden_EventScript_Geodude_Text_0
# 6 "data/maps/Pyroden_House3/scripts.pory"
	switch VAR_PYRODEN_CHIEF_QUEST_STATE
# 8 "data/maps/Pyroden_House3/scripts.pory"
	case 0, Pyroden_EventScript_Geodude_2
# 25 "data/maps/Pyroden_House3/scripts.pory"
	case 1, Pyroden_EventScript_Geodude_3
Pyroden_EventScript_Geodude_3:
# 26 "data/maps/Pyroden_House3/scripts.pory"
	msgbox Pyroden_EventScript_Geodude_Text_2, MSGBOX_NPC
	end

Pyroden_EventScript_Geodude_2:
# 9 "data/maps/Pyroden_House3/scripts.pory"
	msgbox Pyroden_EventScript_Geodude_Text_1, MSGBOX_NPC
# 21 "data/maps/Pyroden_House3/scripts.pory"
	setvar VAR_PYRODEN_CHIEF_QUEST_STATE, 1
	end


Pyroden_EventScript_Geodude_Text_0:
# 5 "data/maps/Pyroden_House3/scripts.pory"
	.string "Geodude$"

Pyroden_EventScript_Geodude_Text_1:
# 10 "data/maps/Pyroden_House3/scripts.pory"
	.string "I'll say!\n"
	.string "This village is in the pits!\p"
	.string "There's rockS everywhere blocking the\n"
	.string "way!\p"
	.string "What!\n"
	.string "Don't look at me!\l"
	.string "I move around, at least!\p"
	.string "I tried bringing it up the the mayor, but\n"
	.string "she refused to do anything!\l"
	.string "But maybe you will have better luck!\p"
	.string "Try talking to her, maybe she will listen\n"
	.string "for once!\l"
	.string "If she even has any hearing left!$"

Pyroden_EventScript_Geodude_Text_2:
# 27 "data/maps/Pyroden_House3/scripts.pory"
	.string "Good luck with the mayor!\n"
	.string "You will need it!$"
