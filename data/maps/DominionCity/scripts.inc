# 1 "data/maps/DominionCity/scripts.pory"

# 2 "data/maps/DominionCity/scripts.pory"
.set LOCALID_EEVEE, 1
# 3 "data/maps/DominionCity/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/DominionCity/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

DominionCity_MapScripts::
# 9 "data/maps/DominionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/DominionCity/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 8, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 13 "data/maps/DominionCity/scripts.pory"
	lockall
# 14 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 15 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 16 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_EEVEE
# 17 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 18 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 19 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 20 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 21 "data/maps/DominionCity/scripts.pory"
	waitse
# 22 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 23 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 24 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 25 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 26 "data/maps/DominionCity/scripts.pory"
	delay 40
# 27 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 28 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 29 "data/maps/DominionCity/scripts.pory"
	delay 40
# 30 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 31 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 32 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 33 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 34 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 35 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 36 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 37 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_EEVEE
# 38 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 9
# 39 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_WhatIsThisPlace::
# 47 "data/maps/DominionCity/scripts.pory"
	lockall
# 48 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 49 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 50 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_EEVEE
# 51 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_0
# 52 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_1
# 53 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 54 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 55 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_2
# 56 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 57 "data/maps/DominionCity/scripts.pory"
	delay 40
# 58 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_3
# 59 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 60 "data/maps/DominionCity/scripts.pory"
	delay 40
# 61 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_4
# 62 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 63 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 64 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_0
# 65 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 66 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 67 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 68 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_1
# 69 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_EEVEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 70 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_EEVEE
# 71 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_EEVEE
# 72 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 10
# 73 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


# 18 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 18 "data/maps/DominionCity/scripts.pory"
	walk_left
# 18 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 19 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 19 "data/maps/DominionCity/scripts.pory"
	walk_in_place_left
# 19 "data/maps/DominionCity/scripts.pory"
	walk_in_place_left
	step_end

# 22 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 22 "data/maps/DominionCity/scripts.pory"
	walk_left
# 22 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 24 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 27 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 27 "data/maps/DominionCity/scripts.pory"
	face_right
# 27 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 30 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 30 "data/maps/DominionCity/scripts.pory"
	walk_up
# 30 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 51 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_0:
# 51 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 51 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 51 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 51 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 51 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 51 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 51 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
	step_end

# 52 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_1:
# 52 "data/maps/DominionCity/scripts.pory"
	walk_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 55 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_2:
# 55 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
# 55 "data/maps/DominionCity/scripts.pory"
	walk_left
# 55 "data/maps/DominionCity/scripts.pory"
	walk_left
# 55 "data/maps/DominionCity/scripts.pory"
	walk_left
# 55 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 58 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_3:
# 58 "data/maps/DominionCity/scripts.pory"
	walk_right
# 58 "data/maps/DominionCity/scripts.pory"
	walk_right
# 58 "data/maps/DominionCity/scripts.pory"
	walk_right
# 58 "data/maps/DominionCity/scripts.pory"
	walk_right
# 58 "data/maps/DominionCity/scripts.pory"
	walk_right
# 58 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 61 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_4:
# 61 "data/maps/DominionCity/scripts.pory"
	walk_left
# 61 "data/maps/DominionCity/scripts.pory"
	walk_left
# 61 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_5:
# 65 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 69 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_6:
# 69 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 33 "data/maps/DominionCity/scripts.pory"
	.string "Vee$"

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 34 "data/maps/DominionCity/scripts.pory"
	.string "Whoa-- This is… THIS IS OUTSIDE?! The\n"
	.string "sky--it's HUGE! And the air--it's all…\l"
	.string "fresh and stuff! I thought fresh air\l"
	.string "was just a myth!\p"
	.string "Okaaay, okay, focus! We're not safe yet!\n"
	.string "Still fences… still gotta find a way out\l"
	.string "before--\p"
	.string "Wait, do you hear that? No alarms. No\n"
	.string "buzzing doors. No heavy boots stomping\l"
	.string "around… Just… wind. And… birds? Huh.\p"
	.string "Okay, no time to get distracted--gotta\n"
	.string "keep moving before Team MAGA figures\l"
	.string "out we're gone! C'mon, let's find a way\l"
	.string "outta here--fast!$"

DominionCity_EventScripts_WhatIsThisPlace_Text_0:
# 64 "data/maps/DominionCity/scripts.pory"
	.string "Huh? What is this place?\p"
	.string "It's like a town, but… where is\n"
	.string "everyone?\p"
	.string "Every building looks empty…\p"
	.string "This is really weird, {PLAYER}.\p"
	.string "Wait a second… why would Team MAGA\n"
	.string "have a whole lab here?\p"
	.string "In a town with no people? That makes no\n"
	.string "sense.$"

DominionCity_EventScripts_WhatIsThisPlace_Text_1:
# 68 "data/maps/DominionCity/scripts.pory"
	.string "…Oh. Yeah. I guess if you were gonna do\n"
	.string "a bunch of creepy experiments, you'd\l"
	.string "wanna do it somewhere private.\p"
	.string "Still, this place gives me the creeps.\n"
	.string "Let's get out of here.$"
