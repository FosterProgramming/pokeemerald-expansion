DominionCity_MagaLab_ExitCode_MapScripts::
# 3 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 6, DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DominionCity_MagaLab_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor
	return


DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor::
# 101 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_0, MSGBOX_YESNO
# 103 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DominionCity_MagaLab_ExitRoom_EventScripts_EnterPassword
# 104 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 105 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end


DominionCity_MagaLab_ExitRoom_EventScripts_EnterPassword::
# 111 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	special EnterCode
# 112 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	waitstate
# 113 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	comparepassword 0
# 114 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DominionCity_MagaLab_ExitRoom_EventScripts_WrongPassword
# 115 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DominionCity_MagaLab_ExitRoom_EventScripts_CorrectPassword
	return


DominionCity_MagaLab_ExitRoom_EventScripts_WrongPassword::
# 120 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_WrongPassword_Text_0, MSGBOX_YESNO
# 121 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DominionCity_MagaLab_ExitRoom_EventScripts_EnterPassword
# 122 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
# 123 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	delay 40
	end


DominionCity_MagaLab_ExitRoom_EventScripts_CorrectPassword::
# 129 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	playse SE_DOOR
# 130 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	waitse
# 131 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	speakername DominionCity_MagaLab_ExitRoom_EventScripts_CorrectPassword_Text_0
# 132 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	msgbox DominionCity_MagaLab_ExitRoom_EventScripts_CorrectPassword_Text_1
# 142 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 7
# 143 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	releaseall
# 144 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_ENTRANCE_HALLWAY, 25, 8
	return


DominionCity_MagaLab_ExitRoom_EventScripts_CodeToUnlockDoor_Text_0:
# 101 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "The door is locked from the outside and\n"
	.string "requires a passcode to exit.\p"
	.string "Would you like to enter the passcode\n"
	.string "now?$"

DominionCity_MagaLab_ExitRoom_EventScripts_WrongPassword_Text_0:
# 120 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Nothing happened. Would you like to try\n"
	.string "again?$"

DominionCity_MagaLab_ExitRoom_EventScripts_CorrectPassword_Text_0:
# 131 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Vee$"

DominionCity_MagaLab_ExitRoom_EventScripts_CorrectPassword_Text_1:
# 132 "data/maps/DominionCity_MagaLab_ExitCode/scripts.pory"
	.string "Oooh, that's a good sound!\n"
	.string "It looks like the door's unlocked!\p"
	.string "…Sooo, I guess we're really doing this,\n"
	.string "huh?\p"
	.string "Eight whole artifacts to find…\p"
	.string "And eight terrifying guardians to\n"
	.string "defeat…\p"
	.string "Hey, I bet you're soo relieved that I'm\n"
	.string "coming with you!\p"
	.string "You know, for emotional support!\p"
	.string "In case you get too scared, or\n"
	.string "something!\p"
	.string "… … …\p"
	.string "Okletsjustgonow!$"
