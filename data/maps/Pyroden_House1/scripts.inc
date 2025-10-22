# 1 "data/maps/Pyroden_House1/scripts.pory"

# 2 "data/maps/Pyroden_House1/scripts.pory"
.set LOCALID_SLOWPOKE, 1

Pyroden_House1_MapScripts::
	.byte 0


Pyroden_EventScript_Slowpoke::
# 10 "data/maps/Pyroden_House1/scripts.pory"
	switch VAR_SLOWPOKE_QUEST_STATE
# 12 "data/maps/Pyroden_House1/scripts.pory"
	case 0, Pyroden_EventScript_Slowpoke_2
# 18 "data/maps/Pyroden_House1/scripts.pory"
	case 1, Pyroden_EventScript_Slowpoke_3
# 27 "data/maps/Pyroden_House1/scripts.pory"
	case 2, Pyroden_EventScript_Slowpoke_4
# 71 "data/maps/Pyroden_House1/scripts.pory"
	case 3, Pyroden_EventScript_Slowpoke_5
	end

Pyroden_EventScript_Slowpoke_2:
# 13 "data/maps/Pyroden_House1/scripts.pory"
	msgbox Pyroden_EventScript_Slowpoke_Text_0
# 14 "data/maps/Pyroden_House1/scripts.pory"
	setvar VAR_SLOWPOKE_DOOR, 1
# 15 "data/maps/Pyroden_House1/scripts.pory"
	closemessage
	end

Pyroden_EventScript_Slowpoke_3:
# 19 "data/maps/Pyroden_House1/scripts.pory"
	speakername Pyroden_EventScript_Slowpoke_Text_1
# 20 "data/maps/Pyroden_House1/scripts.pory"
	msgbox Pyroden_EventScript_Slowpoke_Text_2
# 24 "data/maps/Pyroden_House1/scripts.pory"
	setvar VAR_SLOWPOKE_DOOR, 1
# 25 "data/maps/Pyroden_House1/scripts.pory"
	closemessage
	end

Pyroden_EventScript_Slowpoke_4:
# 28 "data/maps/Pyroden_House1/scripts.pory"
	speakername Pyroden_EventScript_Slowpoke_Text_1
# 29 "data/maps/Pyroden_House1/scripts.pory"
	msgbox Pyroden_EventScript_Slowpoke_Text_3, MSGBOX_NPC
# 68 "data/maps/Pyroden_House1/scripts.pory"
	setvar VAR_SLOWPOKE_QUEST_STATE, 3
	end

Pyroden_EventScript_Slowpoke_5:
# 72 "data/maps/Pyroden_House1/scripts.pory"
	speakername Pyroden_EventScript_Slowpoke_Text_1
# 73 "data/maps/Pyroden_House1/scripts.pory"
	msgbox Pyroden_EventScript_Slowpoke_Text_4, MSGBOX_NPC
	end


Pyroden_EventScript_Slowpoke_Entrance::
# 97 "data/maps/Pyroden_House1/scripts.pory"
	switch VAR_SLOWPOKE_QUEST_STATE
# 99 "data/maps/Pyroden_House1/scripts.pory"
	case 0, Pyroden_EventScript_Slowpoke_Entrance_2
# 126 "data/maps/Pyroden_House1/scripts.pory"
	case 1, Pyroden_EventScript_Slowpoke_Entrance_3
	end

Pyroden_EventScript_Slowpoke_Entrance_2:
# 100 "data/maps/Pyroden_House1/scripts.pory"
	lock
# 101 "data/maps/Pyroden_House1/scripts.pory"
	playse SE_PIN
# 102 "data/maps/Pyroden_House1/scripts.pory"
	applymovement LOCALID_SLOWPOKE, Pyroden_EventScript_Slowpoke_Entrance_Movement_0
# 108 "data/maps/Pyroden_House1/scripts.pory"
	waitmovement 0
# 109 "data/maps/Pyroden_House1/scripts.pory"
	speakername Pyroden_EventScript_Slowpoke_Text_1
# 110 "data/maps/Pyroden_House1/scripts.pory"
	msgbox Pyroden_EventScript_Slowpoke_Entrance_Text_0
# 116 "data/maps/Pyroden_House1/scripts.pory"
	closemessage
# 117 "data/maps/Pyroden_House1/scripts.pory"
	setvar VAR_SLOWPOKE_DOOR, 0
# 118 "data/maps/Pyroden_House1/scripts.pory"
	setvar VAR_SLOWPOKE_QUEST_STATE, 1
# 119 "data/maps/Pyroden_House1/scripts.pory"
	applymovement LOCALID_SLOWPOKE, Pyroden_EventScript_Slowpoke_Entrance_Movement_1
# 122 "data/maps/Pyroden_House1/scripts.pory"
	waitmovement 0
# 123 "data/maps/Pyroden_House1/scripts.pory"
	release
	end

Pyroden_EventScript_Slowpoke_Entrance_3:
# 127 "data/maps/Pyroden_House1/scripts.pory"
	lock
# 128 "data/maps/Pyroden_House1/scripts.pory"
	playse SE_PIN
# 129 "data/maps/Pyroden_House1/scripts.pory"
	applymovement LOCALID_SLOWPOKE, Pyroden_EventScript_Slowpoke_Entrance_Movement_0
# 135 "data/maps/Pyroden_House1/scripts.pory"
	waitmovement 0
# 136 "data/maps/Pyroden_House1/scripts.pory"
	speakername Pyroden_EventScript_Slowpoke_Text_1
# 137 "data/maps/Pyroden_House1/scripts.pory"
	msgbox Pyroden_EventScript_Slowpoke_Entrance_Text_1
# 143 "data/maps/Pyroden_House1/scripts.pory"
	closemessage
# 144 "data/maps/Pyroden_House1/scripts.pory"
	setvar VAR_SLOWPOKE_DOOR, 0
# 145 "data/maps/Pyroden_House1/scripts.pory"
	setvar VAR_SLOWPOKE_QUEST_STATE, 2
# 146 "data/maps/Pyroden_House1/scripts.pory"
	release
	end


# 102 "data/maps/Pyroden_House1/scripts.pory"
Pyroden_EventScript_Slowpoke_Entrance_Movement_0:
# 103 "data/maps/Pyroden_House1/scripts.pory"
	emote_exclamation_mark
# 104 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
# 104 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
# 104 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
# 104 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
# 105 "data/maps/Pyroden_House1/scripts.pory"
	face_down
# 106 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
# 106 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
# 106 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
# 106 "data/maps/Pyroden_House1/scripts.pory"
	delay_16
	step_end

# 119 "data/maps/Pyroden_House1/scripts.pory"
Pyroden_EventScript_Slowpoke_Entrance_Movement_1:
# 120 "data/maps/Pyroden_House1/scripts.pory"
	face_up
	step_end

Pyroden_EventScript_Slowpoke_Text_0:
# 13 "data/maps/Pyroden_House1/scripts.pory"
	.string "They seem to be unresponsive.$"

Pyroden_EventScript_Slowpoke_Text_1:
# 19 "data/maps/Pyroden_House1/scripts.pory"
	.string "Slowpoke$"

Pyroden_EventScript_Slowpoke_Text_2:
# 21 "data/maps/Pyroden_House1/scripts.pory"
	.string "Ah… They're leaving already…\n"
	.string "Gosh dang it…$"

Pyroden_EventScript_Slowpoke_Text_3:
# 30 "data/maps/Pyroden_House1/scripts.pory"
	.string "Ok. Ok.\n"
	.string "Please wait a second.\p"
	.string "Hold on.\n"
	.string "I need to- Hold on.\p"
	.string "… … …\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "… … …\p"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\p"
	.string "One more second…\p"
	.string "… … …\p"
	.string "Ok.\p"
	.string "If you want to talk to me, please, don't\n"
	.string "keep coming and going.\p"
	.string "I'm rather slow.\n"
	.string "Anyway. Hello.\p"
	.string "My name is Slowpoke.\p"
	.string "What brings you here…?\p"
	.string "Oh, please, don't answer. I…\n"
	.string "Gosh, I'm sorry. I can't really follow\l"
	.string "well.\p"
	.string "I'm a bit…\n"
	.string "Slow, you see.\p"
	.string "Hmm.\p"
	.string "I've heard…\n"
	.string "Maybe…\p"
	.string "That if a Shellder bites a Slowpoke…\n"
	.string "The Slowpoke becomes smart.\p"
	.string "Do you think that…\n"
	.string "Even I could…\p"
	.string "Ah! My head!\n"
	.string "A headache!\p"
	.string "Oh gosh, I'm so sorry.\p"
	.string "If you could…\n"
	.string "Find a Shellder, maybe…\p"
	.string "I could…\n"
	.string "Become smart.$"

Pyroden_EventScript_Slowpoke_Text_4:
# 74 "data/maps/Pyroden_House1/scripts.pory"
	.string "… … …\p"
	.string "… … …\p"
	.string "Ah!\n"
	.string "You're back!\p"
	.string "Have you found a Shellder…?\p"
	.string "THE QUEST IS NOT IMPLEMENTED YET.\p"
	.string "No?\n"
	.string "Ohh…\p"
	.string "That's ok. That's ok.\p"
	.string "If… Ah!\n"
	.string "You can find one…\p"
	.string "I would be glad.$"

Pyroden_EventScript_Slowpoke_Entrance_Text_0:
# 111 "data/maps/Pyroden_House1/scripts.pory"
	.string "Ah!\n"
	.string "A visitor!\p"
	.string "Come in!\n"
	.string "Come in!$"

Pyroden_EventScript_Slowpoke_Entrance_Text_1:
# 138 "data/maps/Pyroden_House1/scripts.pory"
	.string "Ah!\n"
	.string "You're back!\p"
	.string "No, you're going again!\n"
	.string "Wait, wait!$"
