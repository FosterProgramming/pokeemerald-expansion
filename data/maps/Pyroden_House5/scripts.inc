# 1 "data/maps/Pyroden_House5/scripts.pory"

# 2 "data/maps/Pyroden_House5/scripts.pory"
.set LOCALID_TORKOAL, 1

Pyroden_House5_MapScripts::
	.byte 0


Pyroden_EventScript_Torkoal::
# 12 "data/maps/Pyroden_House5/scripts.pory"
	speakername Pyroden_EventScript_Torkoal_Text_0
# 13 "data/maps/Pyroden_House5/scripts.pory"
	switch VAR_PYRODEN_CHIEF_QUEST_STATE
# 16 "data/maps/Pyroden_House5/scripts.pory"
	case 0, Pyroden_EventScript_Torkoal_2
# 27 "data/maps/Pyroden_House5/scripts.pory"
	case 1, Pyroden_EventScript_Torkoal_3
# 84 "data/maps/Pyroden_House5/scripts.pory"
	case 2, Pyroden_EventScript_Torkoal_4
Pyroden_EventScript_Torkoal_4:
# 85 "data/maps/Pyroden_House5/scripts.pory"
	msgbox Pyroden_EventScript_Torkoal_Text_5, MSGBOX_NPC
	end

Pyroden_EventScript_Torkoal_2:
# 17 "data/maps/Pyroden_House5/scripts.pory"
	msgbox Pyroden_EventScript_Torkoal_Text_1, MSGBOX_NPC
	end

Pyroden_EventScript_Torkoal_3:
# 28 "data/maps/Pyroden_House5/scripts.pory"
	faceplayer
# 29 "data/maps/Pyroden_House5/scripts.pory"
	msgbox Pyroden_EventScript_Torkoal_Text_2
# 40 "data/maps/Pyroden_House5/scripts.pory"
	closemessage
# 41 "data/maps/Pyroden_House5/scripts.pory"
	compare VAR_FACING, DIR_NORTH
	goto_if_eq Pyroden_EventScript_Torkoal_6
Pyroden_EventScript_Torkoal_5:
# 49 "data/maps/Pyroden_House5/scripts.pory"
	applymovement LOCALID_TORKOAL, Pyroden_EventScript_Torkoal_Movement_1
# 55 "data/maps/Pyroden_House5/scripts.pory"
	waitmovement 0
# 56 "data/maps/Pyroden_House5/scripts.pory"
	speakername Pyroden_EventScript_Torkoal_Text_0
# 57 "data/maps/Pyroden_House5/scripts.pory"
	msgbox Pyroden_EventScript_Torkoal_Text_3
# 61 "data/maps/Pyroden_House5/scripts.pory"
	closemessage
# 62 "data/maps/Pyroden_House5/scripts.pory"
	applymovement LOCALID_TORKOAL, Pyroden_EventScript_Torkoal_Movement_2
# 65 "data/maps/Pyroden_House5/scripts.pory"
	waitmovement 0
# 66 "data/maps/Pyroden_House5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Torkoal_Movement_3
# 70 "data/maps/Pyroden_House5/scripts.pory"
	waitmovement 0
# 71 "data/maps/Pyroden_House5/scripts.pory"
	faceplayer
# 72 "data/maps/Pyroden_House5/scripts.pory"
	speakername Pyroden_EventScript_Torkoal_Text_0
# 73 "data/maps/Pyroden_House5/scripts.pory"
	msgbox Pyroden_EventScript_Torkoal_Text_4
# 79 "data/maps/Pyroden_House5/scripts.pory"
	closemessage
# 80 "data/maps/Pyroden_House5/scripts.pory"
	setvar VAR_PYRODEN_CHIEF_QUEST_STATE, 2
	end

Pyroden_EventScript_Torkoal_6:
# 43 "data/maps/Pyroden_House5/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Pyroden_EventScript_Torkoal_Movement_0
# 47 "data/maps/Pyroden_House5/scripts.pory"
	waitmovement 0
	goto Pyroden_EventScript_Torkoal_5


# 43 "data/maps/Pyroden_House5/scripts.pory"
Pyroden_EventScript_Torkoal_Movement_0:
# 44 "data/maps/Pyroden_House5/scripts.pory"
	walk_left
# 45 "data/maps/Pyroden_House5/scripts.pory"
	walk_in_place_right
	step_end

# 49 "data/maps/Pyroden_House5/scripts.pory"
Pyroden_EventScript_Torkoal_Movement_1:
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 50 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 51 "data/maps/Pyroden_House5/scripts.pory"
	walk_down
# 52 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 52 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 52 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
# 52 "data/maps/Pyroden_House5/scripts.pory"
	delay_16
	step_end

# 62 "data/maps/Pyroden_House5/scripts.pory"
Pyroden_EventScript_Torkoal_Movement_2:
# 63 "data/maps/Pyroden_House5/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/Pyroden_House5/scripts.pory"
Pyroden_EventScript_Torkoal_Movement_3:
# 67 "data/maps/Pyroden_House5/scripts.pory"
	walk_right
# 68 "data/maps/Pyroden_House5/scripts.pory"
	walk_in_place_up
	step_end

Pyroden_EventScript_Torkoal_Text_0:
# 12 "data/maps/Pyroden_House5/scripts.pory"
	.string "Torkoal$"

Pyroden_EventScript_Torkoal_Text_1:
# 18 "data/maps/Pyroden_House5/scripts.pory"
	.string "Heeelloooo.\n"
	.string "I aaam the chieeeef of Pyrodeeeen.\p"
	.string "… … …\p"
	.string "I apooooologize.\n"
	.string "I aaaam quiiite tired.\p"
	.string "I dooooon't haaaave the eeeenergyyy\n"
	.string "to taaaaalk.$"

Pyroden_EventScript_Torkoal_Text_2:
# 30 "data/maps/Pyroden_House5/scripts.pory"
	.string "Heeelloooo.\n"
	.string "I aaam the chieeeef of Pyrodeeeen.\p"
	.string "Whaaaat is iiiiit?\p"
	.string "… … …\p"
	.string "Aaaaah, yeees.\n"
	.string "The rooooocks.\p"
	.string "Ooook.\n"
	.string "I will geeeet riiid of theeeem.\p"
	.string "I wiiill goooo noooow.$"

Pyroden_EventScript_Torkoal_Text_3:
# 58 "data/maps/Pyroden_House5/scripts.pory"
	.string "I'm sooooorryyyyy.\n"
	.string "I'm tooooo tiiiireeeeed.$"

Pyroden_EventScript_Torkoal_Text_4:
# 74 "data/maps/Pyroden_House5/scripts.pory"
	.string "If youuu waaaant to geeet riiid of the\n"
	.string "roooocks…\p"
	.string "You maaaay waaaant to doooo iiiit\n"
	.string "yourseeeeelf.\p"
	.string "I'm sooooorrry.\n"
	.string "I'm oooooold.$"

Pyroden_EventScript_Torkoal_Text_5:
# 86 "data/maps/Pyroden_House5/scripts.pory"
	.string "Heeelloooo.\n"
	.string "Goooood luuuuuck with the rooooocks.\p"
	.string "THIS IS A QUEST SETUP. THE QUEST IS NOT\n"
	.string "IMPLEMENTED YET.$"
