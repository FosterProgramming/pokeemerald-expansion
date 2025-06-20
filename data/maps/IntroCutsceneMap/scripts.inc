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
	givemon SPECIES_DEWGONG, 25, ITEM_NONE, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_ICE_SHARD, MOVE_BUBBLEBEAM, MOVE_DISABLE, MOVE_SAFEGUARD
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
	walk_left
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
	.string "Excellent…\p"
# 90 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "The prototype is outperforming even\n"
# 91 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "our most optimistic expectations.\p"
# 92 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Even with your failure to secure the\n"
# 93 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Meteorite…\p"
# 94 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "We finally got the results that we were\n"
# 95 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "looking for.\p"
# 96 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "The perfect fusion of Pokémon and\n"
# 97 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "human DNA…\p"
# 98 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Is now a reality.$"
# 99 "data/maps/IntroCutsceneMap/scripts.pory"

# 100 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano1:	
# 101 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Is the prototype ready for field\n"
# 102 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "testing?$"
# 103 "data/maps/IntroCutsceneMap/scripts.pory"

# 104 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka2:
# 105 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Not quite.\p"
# 106 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Our subject has been causing some\n"
# 107 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "delays.\p"
# 108 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "His participation has not been…\n"
# 109 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Strictly voluntary.\p"
# 110 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "He used to be a proud member of the\n"
# 111 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "airforce, you see.\p"
# 112 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Oh, for the most part, he obeys commands\n"
# 113 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "just fine.\p"
# 114 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "But a part of his old self is still in\n"
# 115 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "there, fighting back.\p"
# 116 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "No matter.\p"
# 117 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "With time, he will be conditioned out\n"
# 118 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "of it.$"
# 119 "data/maps/IntroCutsceneMap/scripts.pory"

# 120 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano2:	
# 121 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I'll report this to the Boss.\p"
# 122 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Have him be ready for a field test\n"
# 123 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "as soon as you can.$"
# 124 "data/maps/IntroCutsceneMap/scripts.pory"

# 125 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_WhatWasThat:
# 126 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "What was that?$"
# 127 "data/maps/IntroCutsceneMap/scripts.pory"

# 128 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_YouAgain:
# 129 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You again?!$"
# 130 "data/maps/IntroCutsceneMap/scripts.pory"

# 131 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka3:	
# 132 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Ah, you know each other?\p"
# 133 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Why, could it be the very same thug\n"
# 134 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "that stole the Meteorite from you, Z?$"
# 135 "data/maps/IntroCutsceneMap/scripts.pory"

# 136 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano3:
# 137 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Darn right he is!\p"
# 138 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Let me at him, Lattka!\n"
# 139 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I'm itching for a rematch!$"
# 140 "data/maps/IntroCutsceneMap/scripts.pory"

# 141 "data/maps/IntroCutsceneMap/scripts.pory"

# 142 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka4:
# 143 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Now, now, Z.\n"
# 144 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Don't be so hasty.\p"
# 145 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "We don't want a repeat of your failure.\p"
# 146 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "No, you go and report to the Boss…\p"
# 147 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "That we have some kid snooping in the\n"
# 148 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "affairs of Team MAGA.\p"
# 149 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "… … …\p"
# 150 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "…I said go, now.$"
# 151 "data/maps/IntroCutsceneMap/scripts.pory"

# 152 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaChallengesFro:
# 153 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Meanwhile…\n"
# 154 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Look at who we have here.\p"
# 155 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You wanted to play hero, eh?\n"
# 156 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Very well, then.\p"
# 157 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I'll show you what happens when\n"
# 158 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "you stick your nose where it doesn't\l"
# 159 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "belong!$"
# 160 "data/maps/IntroCutsceneMap/scripts.pory"

# 161 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaDefeat1:
# 162 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Well, this is awkward."
# 163 "data/maps/IntroCutsceneMap/scripts.pory"

# 164 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaBattle:
# 165 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You really don't see it, do you?\p"
# 166 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Everything we're doing is for the\n"
# 167 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "greater good!\p"
# 168 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I guess I'll just have to show you,\n"
# 169 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "then!$"
# 170 "data/maps/IntroCutsceneMap/scripts.pory"

# 171 "data/maps/IntroCutsceneMap/scripts.pory"
SpeakerName_Lattka:
# 172 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Lattka$"
# 173 "data/maps/IntroCutsceneMap/scripts.pory"

# 174 "data/maps/IntroCutsceneMap/scripts.pory"

# 175 "data/maps/IntroCutsceneMap/scripts.pory"
SpeakerName_Zendano:
# 176 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Zendano$"
