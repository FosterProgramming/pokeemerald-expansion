Route121_SafariZoneEntrance_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route121_SafariZoneEntrance_OnFrame
	.byte 0

Route121_SafariZoneEntrance_OnFrame:
	map_script_2 VAR_SAFARI_ZONE_STATE, 1, Route121_SafariZoneEntrance_EventScript_ExitSafariZone
	map_script_2 VAR_SAFARI_ZONE_STATE, 2, SafariZoneEntrance_Endgame
	.2byte 0

Route121_SafariZoneEntrance_EventScript_ExitSafariZone::
	lockall
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_ExitSafariZone
	waitmovement 0
	setvar VAR_SAFARI_ZONE_STATE, 0
	releaseall
	end

Route121_SafariZoneEntrance_Movement_ExitSafariZone:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Route121_SafariZoneEntrance_EventScript_WelcomeAttendant::
	msgbox SafariZoneEntrance_Welcome, MSGBOX_NPC
	end

Route121_SafariZoneEntrance_EventScript_InfoAttendant::
	lock
	faceplayer
	msgbox SafariZoneEntrance_Info, MSGBOX_NPC
	//goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_FirstTimeInfo
	//msgbox Route121_SafariZoneEntrance_Text_ComeInAndEnjoy, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_FirstTimeInfo::
	msgbox Route121_SafariZoneEntrance_Text_FirstTimeInfo, MSGBOX_DEFAULT
	release
	end

Route121_SafariZoneEntrance_EventScript_EntranceCounterTrigger::
	lockall
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	//showmoneybox 0, 0
	//msgbox Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay, MSGBOX_YESNO
	//goto_if_eq VAR_RESULT, YES, Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
	goto Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone
	msgbox Route121_SafariZoneEntrance_Text_PlayAnotherTime, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_TryEnterSafariZone::
	msgbox SafariZoneEntrance_Introduction, MSGBOX_DEFAULT
	playfanfare MUS_OBTAIN_ITEM
	//message Route121_SafariZoneEntrance_Text_Received30SafariBalls
	giveitem ITEM_SAFARI_BALL
	//waitfanfare
	msgbox SafariZoneEntrance_GoodLuck, MSGBOX_DEFAULT
	closemessage
	//hidemoneybox
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_EnterSafariZone
	waitmovement 0
	special EnterSafariMode
	setvar VAR_SAFARI_ZONE_STATE, 2
	clearflag FLAG_GOOD_LUCK_SAFARI_ZONE
	warp MAP_SAFARI_ZONE_SOUTH, 32, 33
	waitstate
	end

Route121_SafariZoneEntrance_EventScript_CheckHasRoomForPokemon::
	getpartysize
	goto_if_ne VAR_RESULT, PARTY_SIZE, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
	specialvar VAR_RESULT, ScriptCheckFreePokemonStorageSpace
	goto_if_eq VAR_RESULT, 1, Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon
	msgbox Route121_SafariZoneEntrance_Text_PCIsFull, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_HasRoomForPokemon::
	return

Route121_SafariZoneEntrance_EventScript_NoPokeblockCase::
	msgbox Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_NotEnoughMoney::
	msgbox Route121_SafariZoneEntrance_Text_NotEnoughMoney, MSGBOX_DEFAULT
	goto Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter
	end

Route121_SafariZoneEntrance_EventScript_MovePlayerBackFromCounter::
	closemessage
	hidemoneybox
	applymovement LOCALID_PLAYER, Route121_SafariZoneEntrance_Movement_BackAwayFromCounter
	waitmovement 0
	releaseall
	end

Route121_SafariZoneEntrance_Movement_BackAwayFromCounter:
	walk_right
	step_end

Route121_SafariZoneEntrance_Movement_EnterSafariZone:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	delay_16
	step_end

Route121_SafariZoneEntrance_EventScript_TrainerTipSign::
	msgbox SafariZoneEntrance_ExplainContestTypesSign, MSGBOX_SIGN
	end

SafariZoneEntrance_Endgame:
	applymovement LOCALID_PLAYER, SafariZoneEntrance_Movement_GoToProfessor
	waitmovement 0
	applymovement 4, SafariZoneEntrance_ProfessorWalkForward
	waitmovement 0
	msgbox SafariZoneEntrance_EndgameSpeech, MSGBOX_DEFAULT
	applymovement 4, SafariZoneEntrance_ProfessorLeaves
	fadescreenspeed FADE_TO_BLACK, 8
	delay 48
	special GameClear
	end

SafariZoneEntrance_ProfessorWalkForward:
	walk_left
	walk_left
	walk_left
	step_end

SafariZoneEntrance_ProfessorLeaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

SafariZoneEntrance_Movement_GoToProfessor:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

SafariZoneEntrance_EndgameSpeech:
	.string "You did great out there, {PLAYER} {PAUSE 30}\p"
	.string "Most trainers are confused when\n"
	.string "they have to capture Pokemon in\l"
	.string "a non-violent way but you dit it\l"
	.string "with no issue. {PAUSE 10}\p"
	.string "I don't think our techniques are\n"
	.string "ready for widespread use yet but I\l"
	.string "hope one day people will accept new\l"
	.string "ways to capture Pokemon. {PAUSE 10}\p"
	.string "I need to go back to my lab to\n"
	.string "study the specimen you captured. {PAUSE 10}\p"
	.string "I wish you a good day {PLAYER}.$"