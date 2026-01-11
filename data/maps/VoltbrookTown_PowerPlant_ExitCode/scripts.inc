VoltbrookTown_PowerPlant_ExitCode_MapScripts::
# 3 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VoltbrookTown_PowerPlant_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VoltbrookTown_PowerPlant_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	map_script_2 VAR_VOLTBROOK_PLANT_STATE, 3, VoltbrookTown_PowerPlant_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

VoltbrookTown_PowerPlant_ExitCode_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 6 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	goto VoltbrookTown_PowerPlant_ExitCode_EventScripts_CodeToUnlockDoor
	return


VoltbrookTown_PowerPlant_ExitCode_EventScripts_CodeToUnlockDoor::
# 13 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_ExitCode_EventScripts_CodeToUnlockDoor_Text_0, MSGBOX_YESNO
# 15 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VoltbrookTown_PowerPlant_ExitCode_EventScripts_EnterPassword
# 16 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	warpsilent MAP_VOLTBROOK_TOWN_POWER_PLANT_UNDERGROUND_TUNNEL, 9, 4
# 17 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	delay 40
	end


VoltbrookTown_PowerPlant_ExitCode_EventScripts_EnterPassword::
# 23 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	special EnterCode
# 24 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	waitstate
# 25 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	comparepassword 1
# 26 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, 0, VoltbrookTown_PowerPlant_ExitCode_EventScripts_WrongPassword
# 27 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, 1, VoltbrookTown_PowerPlant_ExitCode_EventScripts_CorrectPassword
	return


VoltbrookTown_PowerPlant_ExitCode_EventScripts_WrongPassword::
# 32 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_ExitCode_EventScripts_WrongPassword_Text_0, MSGBOX_YESNO
# 33 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VoltbrookTown_PowerPlant_ExitCode_EventScripts_EnterPassword
# 34 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	warpsilent MAP_VOLTBROOK_TOWN_POWER_PLANT_UNDERGROUND_TUNNEL, 9, 4
# 35 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	delay 40
	end


VoltbrookTown_PowerPlant_ExitCode_EventScripts_CorrectPassword::
# 41 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	playse SE_DOOR
# 42 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	waitse
# 43 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	speakername VoltbrookTown_PowerPlant_ExitCode_EventScripts_CorrectPassword_Text_0
# 44 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_ExitCode_EventScripts_CorrectPassword_Text_1
# 45 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	setvar VAR_VOLTBROOK_PLANT_STATE, 4
# 46 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	releaseall
# 47 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	warpsilent MAP_VOLTBROOK_TOWN_POWER_PLANT_UNDERGROUND_TUNNEL, 9, 4
	return


VoltbrookTown_PowerPlant_ExitCode_EventScripts_CodeToUnlockDoor_Text_0:
# 13 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	.string "Emergency lockdown initiated and\n"
	.string "requires a passcode to override.\p"
	.string "Would you like to enter the passcode\n"
	.string "now?$"

VoltbrookTown_PowerPlant_ExitCode_EventScripts_WrongPassword_Text_0:
# 32 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	.string "Nothing happened. Would you like to try\n"
	.string "again?$"

VoltbrookTown_PowerPlant_ExitCode_EventScripts_CorrectPassword_Text_0:
# 43 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	.string "Vee$"

VoltbrookTown_PowerPlant_ExitCode_EventScripts_CorrectPassword_Text_1:
# 44 "data/maps/VoltbrookTown_PowerPlant_ExitCode/scripts.pory"
	.string "Yay! We did it Seel! Let's get out of\n"
	.string "here!$"
