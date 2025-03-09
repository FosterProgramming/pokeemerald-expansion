# 1 "data/maps/IntroCutsceneMap/scripts.pory"

# 2 "data/maps/IntroCutsceneMap/scripts.pory"
.set LOCALID_LATTKA, 1
# 3 "data/maps/IntroCutsceneMap/scripts.pory"
.set LOCALID_ZENDANO, 2
# 4 "data/maps/IntroCutsceneMap/scripts.pory"
.set LOCALID_FRO, 3
# 5 "data/maps/IntroCutsceneMap/scripts.pory"

# 6 "data/maps/IntroCutsceneMap/scripts.pory"
IntroCutsceneMap_MapScripts::
# 7 "data/maps/IntroCutsceneMap/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IntroCutsceneMap_OnFrame
# 8 "data/maps/IntroCutsceneMap/scripts.pory"
	.byte 0
# 9 "data/maps/IntroCutsceneMap/scripts.pory"

# 10 "data/maps/IntroCutsceneMap/scripts.pory"

# 11 "data/maps/IntroCutsceneMap/scripts.pory"
IntroCutsceneMap_OnFrame::
# 12 "data/maps/IntroCutsceneMap/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, IntroCutsceneMap_IntroSequence
# 13 "data/maps/IntroCutsceneMap/scripts.pory"
	.2byte 0
# 14 "data/maps/IntroCutsceneMap/scripts.pory"

# 15 "data/maps/IntroCutsceneMap/scripts.pory"
IntroCutsceneMap_IntroSequence:
# 16 "data/maps/IntroCutsceneMap/scripts.pory"
	lockall
# 17 "data/maps/IntroCutsceneMap/scripts.pory"
	givemon SPECIES_DEWGONG, 25, ITEM_NONE, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_HEADBUTT, MOVE_GROWL, MOVE_NONE, MOVE_NONE
# 18 "data/maps/IntroCutsceneMap/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 19 "data/maps/IntroCutsceneMap/scripts.pory"
	setrespawn HEAL_LOCATION_DOMINION_CITY_MAGA_LAB_HOLDING_CELLS
# 20 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_FRO, Common_Movement_WalkUp
# 21 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_FRO
# 22 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_LATTKA, Common_Movement_FaceRight
# 23 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, Common_Movement_FaceLeft
# 24 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_ZENDANO
# 25 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 26 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattka1, MSGBOX_DEFAULT
# 27 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Zendano
# 28 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsZendano1, MSGBOX_DEFAULT
# 29 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 30 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattka2, MSGBOX_DEFAULT
# 31 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Zendano
# 32 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsZendano2, MSGBOX_DEFAULT
# 33 "data/maps/IntroCutsceneMap/scripts.pory"
	playse SE_PIN
# 34 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, Common_Movement_QuestionMark
# 35 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_WhatWasThat, MSGBOX_DEFAULT
# 36 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, Common_Movement_FaceDown
# 37 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_LATTKA, Common_Movement_FaceDown
# 38 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_LATTKA
# 39 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_YouAgain, MSGBOX_DEFAULT
# 40 "data/maps/IntroCutsceneMap/scripts.pory"
	closemessage
# 41 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 42 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattka3, MSGBOX_DEFAULT
# 43 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Zendano
# 44 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsZendano3, MSGBOX_DEFAULT
# 45 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 46 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattka4, MSGBOX_DEFAULT
# 47 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, SummitCavenrs_Movement_ZendanoLeaves1
# 48 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_ZENDANO
# 49 "data/maps/IntroCutsceneMap/scripts.pory"
	playse SE_WALL_HIT
# 50 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_FRO, SummitCaverns_Movement_FroGetsPushed
# 51 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_FRO
# 52 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, SummitCavenrs_Movement_ZendanoLeaves2
# 53 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_ZENDANO
# 54 "data/maps/IntroCutsceneMap/scripts.pory"
	removeobject LOCALID_ZENDANO
# 55 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_FRO, Common_Movement_FaceUp_LockportTrail
# 56 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_FRO
# 57 "data/maps/IntroCutsceneMap/scripts.pory"
	setflag FLAG_HIDE_SUMMIT_CAVERNS_TEAM_MAGA_ZENDANO
# 58 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 59 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_LattkaChallengesFro, MSGBOX_DEFAULT
# 60 "data/maps/IntroCutsceneMap/scripts.pory"
	trainerbattle_no_intro TRAINER_INTRO_CUTSCENE_FRO, SummitCaverns_Text_LattkaDefeat1
# 61 "data/maps/IntroCutsceneMap/scripts.pory"
	releaseall
# 62 "data/maps/IntroCutsceneMap/scripts.pory"
	end
# 63 "data/maps/IntroCutsceneMap/scripts.pory"

# 64 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCavenrs_Movement_ZendanoLeaves2:
# 65 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_left
# 66 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 67 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 68 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 69 "data/maps/IntroCutsceneMap/scripts.pory"

# 70 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Movement_FroGetsPushed:
# 71 "data/maps/IntroCutsceneMap/scripts.pory"
	lock_facing_direction
# 72 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_faster_left
# 73 "data/maps/IntroCutsceneMap/scripts.pory"
	unlock_facing_direction
# 74 "data/maps/IntroCutsceneMap/scripts.pory"
	face_right
# 75 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 76 "data/maps/IntroCutsceneMap/scripts.pory"

# 77 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCavenrs_Movement_ZendanoLeaves1:
# 78 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 79 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 80 "data/maps/IntroCutsceneMap/scripts.pory"
	face_left
# 81 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 82 "data/maps/IntroCutsceneMap/scripts.pory"

# 83 "data/maps/IntroCutsceneMap/scripts.pory"
Common_Movement_FaceUp_LockportTrail:
# 84 "data/maps/IntroCutsceneMap/scripts.pory"
	face_up
# 85 "data/maps/IntroCutsceneMap/scripts.pory"
	lock_facing_direction
# 86 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 87 "data/maps/IntroCutsceneMap/scripts.pory"

# 88 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka1:	
# 89 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Ah yes, the prototype is\n"
# 90 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "progressing very well.\p"
# 91 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Although you weren't able to\n"
# 92 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "secure the Meteroite, this may prove\l"
# 93 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "to be an even larger development.\p"
# 94 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Who knew that the fusion of Pokémon\n"
# 95 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "DNA with humans could produce such\l"
# 96 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "incredible results.$"
# 97 "data/maps/IntroCutsceneMap/scripts.pory"

# 98 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano1:	
# 99 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Is it ready for field testing\n"
# 100 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "yet?$"
# 101 "data/maps/IntroCutsceneMap/scripts.pory"

# 102 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka2:
# 103 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Not quite. Our test subject is\n"
# 104 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "a proud member of the airforce, his\l"
# 105 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "participation wasn't voluentary.\p"
# 106 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "For the most part, he obeys commands\n"
# 107 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "as he should, but sometimes I can\l"
# 108 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "tell there is still a little bit of\l"
# 109 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "his human side in there, fighting back.\p"
# 110 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I still need to train that out of him.$"
# 111 "data/maps/IntroCutsceneMap/scripts.pory"

# 112 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano2:	
# 113 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I'll report this to the boss.\n"
# 114 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Have the subject ready for a field\l"
# 115 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "test as soon as you can.$"
# 116 "data/maps/IntroCutsceneMap/scripts.pory"

# 117 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_WhatWasThat:
# 118 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "What was that?$"
# 119 "data/maps/IntroCutsceneMap/scripts.pory"

# 120 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_YouAgain:
# 121 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You again?!$"
# 122 "data/maps/IntroCutsceneMap/scripts.pory"

# 123 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka3:	
# 124 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Is this the thug that stole \n"
# 125 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "the Meteorite from you Z?$"
# 126 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano3:
# 127 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Yea, and it looks like he\n"
# 128 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "wants a rematch!$"
# 129 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka4:
# 130 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Why don't you let me handle him?\n"
# 131 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Get out of here and warn the boss\l"
# 132 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "this punk is still interfering with\l"
# 133 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Team MAGA.$"
# 134 "data/maps/IntroCutsceneMap/scripts.pory"

# 135 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaChallengesFro:
# 136 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Well com on then, punk.\n"
# 137 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Challenge me if you dare.$"
# 138 "data/maps/IntroCutsceneMap/scripts.pory"

# 139 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaDefeat1:
# 140 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Time the moves we can make ends\n"
# 141 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "meet. Something about the ends$"
# 142 "data/maps/IntroCutsceneMap/scripts.pory"

# 143 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaBattle:
# 144 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You really don't see that everything\n"
# 145 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "we're doing is for the greater good?\p"
# 146 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I guess I'll just have to show you\n"
# 147 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "then!$"
# 148 "data/maps/IntroCutsceneMap/scripts.pory"

# 149 "data/maps/IntroCutsceneMap/scripts.pory"
SpeakerName_Lattka:
# 150 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Lattka$"
# 151 "data/maps/IntroCutsceneMap/scripts.pory"

# 152 "data/maps/IntroCutsceneMap/scripts.pory"

# 153 "data/maps/IntroCutsceneMap/scripts.pory"
SpeakerName_Zendano:
# 154 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Zendano$"
