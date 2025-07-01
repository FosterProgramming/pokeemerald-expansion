Pyroden_House4_MapScripts::
	.byte 0


Pyroden_EventScript_Gloom::
# 6 "data/maps/Pyroden_House4/scripts.pory"
	lock
# 7 "data/maps/Pyroden_House4/scripts.pory"
	speakername Pyroden_EventScript_Gloom_Text_0
# 8 "data/maps/Pyroden_House4/scripts.pory"
	msgbox Pyroden_EventScript_Gloom_Text_1, MSGBOX_NPC
# 18 "data/maps/Pyroden_House4/scripts.pory"
	goto_if_unset FLAG_INVESTIGATION_HINT_MAN, Pyroden_EventScript_Gloom_2
Pyroden_EventScript_Gloom_1:
# 23 "data/maps/Pyroden_House4/scripts.pory"
	release
	end

Pyroden_EventScript_Gloom_2:
# 20 "data/maps/Pyroden_House4/scripts.pory"
	setflag FLAG_INVESTIGATION_HINT_MAN
# 21 "data/maps/Pyroden_House4/scripts.pory"
	call Pyroden_EventScript_CheckHintsInside
	goto Pyroden_EventScript_Gloom_1


Pyroden_EventScript_Gloom_Text_0:
# 7 "data/maps/Pyroden_House4/scripts.pory"
	.string "Gloom$"

Pyroden_EventScript_Gloom_Text_1:
# 9 "data/maps/Pyroden_House4/scripts.pory"
	.string "I saw a human the other day!\n"
	.string "It was so intense!\p"
	.string "He was running around everywhere!\n"
	.string "And dragging equipment everywhere!\p"
	.string "He was around the volcano, I think?\n"
	.string "But then he disappeared!\p"
	.string "Where did he go, where did he go?\n"
	.string "I don't know!$"
