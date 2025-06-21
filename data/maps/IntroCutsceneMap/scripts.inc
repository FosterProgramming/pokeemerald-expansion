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
	msgbox SummitCaverns_Text_TestSubjectResultsZendanoLooksLikeASeal, MSGBOX_DEFAULT
# 29 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 30 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattkaYouFool, MSGBOX_DEFAULT
# 31 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Zendano
# 32 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsZendano1, MSGBOX_DEFAULT
# 33 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 34 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattka2, MSGBOX_DEFAULT
# 35 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Zendano
# 36 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsZendano2, MSGBOX_DEFAULT
# 37 "data/maps/IntroCutsceneMap/scripts.pory"
	playse SE_PIN
# 38 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, Common_Movement_QuestionMark
# 39 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_WhatWasThat, MSGBOX_DEFAULT
# 40 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, Common_Movement_FaceDown
# 41 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_LATTKA, Common_Movement_FaceDown
# 42 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_LATTKA
# 43 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_YouAgain, MSGBOX_DEFAULT
# 44 "data/maps/IntroCutsceneMap/scripts.pory"
	closemessage
# 45 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 46 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattka3, MSGBOX_DEFAULT
# 47 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Zendano
# 48 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsZendano3, MSGBOX_DEFAULT
# 49 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 50 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_TestSubjectResultsLattka4, MSGBOX_DEFAULT
# 51 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, SummitCavenrs_Movement_ZendanoLeaves1
# 52 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_ZENDANO
# 53 "data/maps/IntroCutsceneMap/scripts.pory"
	playse SE_WALL_HIT
# 54 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_FRO, SummitCaverns_Movement_FroGetsPushed
# 55 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_FRO
# 56 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_ZENDANO, SummitCavenrs_Movement_ZendanoLeaves2
# 57 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_ZENDANO
# 58 "data/maps/IntroCutsceneMap/scripts.pory"
	removeobject LOCALID_ZENDANO
# 59 "data/maps/IntroCutsceneMap/scripts.pory"
	applymovement LOCALID_FRO, Common_Movement_FaceUp_LockportTrail
# 60 "data/maps/IntroCutsceneMap/scripts.pory"
	waitmovement LOCALID_FRO
# 61 "data/maps/IntroCutsceneMap/scripts.pory"
	setflag FLAG_HIDE_SUMMIT_CAVERNS_TEAM_MAGA_ZENDANO
# 62 "data/maps/IntroCutsceneMap/scripts.pory"
	speakername SpeakerName_Lattka
# 63 "data/maps/IntroCutsceneMap/scripts.pory"
	msgbox SummitCaverns_Text_LattkaChallengesFro, MSGBOX_DEFAULT
# 64 "data/maps/IntroCutsceneMap/scripts.pory"
	trainerbattle_no_intro TRAINER_INTRO_CUTSCENE_FRO, SummitCaverns_Text_LattkaDefeat1
# 65 "data/maps/IntroCutsceneMap/scripts.pory"
	releaseall
# 66 "data/maps/IntroCutsceneMap/scripts.pory"
	end
# 67 "data/maps/IntroCutsceneMap/scripts.pory"

# 68 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCavenrs_Movement_ZendanoLeaves2:
# 69 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_left
# 70 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 71 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 72 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 73 "data/maps/IntroCutsceneMap/scripts.pory"

# 74 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Movement_FroGetsPushed:
# 75 "data/maps/IntroCutsceneMap/scripts.pory"
	lock_facing_direction
# 76 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_faster_left
# 77 "data/maps/IntroCutsceneMap/scripts.pory"
	unlock_facing_direction
# 78 "data/maps/IntroCutsceneMap/scripts.pory"
	face_right
# 79 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 80 "data/maps/IntroCutsceneMap/scripts.pory"

# 81 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCavenrs_Movement_ZendanoLeaves1:
# 82 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 83 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_down
# 84 "data/maps/IntroCutsceneMap/scripts.pory"
	walk_left
# 85 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 86 "data/maps/IntroCutsceneMap/scripts.pory"

# 87 "data/maps/IntroCutsceneMap/scripts.pory"
Common_Movement_FaceUp_LockportTrail:
# 88 "data/maps/IntroCutsceneMap/scripts.pory"
	face_up
# 89 "data/maps/IntroCutsceneMap/scripts.pory"
	lock_facing_direction
# 90 "data/maps/IntroCutsceneMap/scripts.pory"
	step_end
# 91 "data/maps/IntroCutsceneMap/scripts.pory"

# 92 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka1:	
# 93 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Excellent…\p"
# 94 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "The prototype is outperforming even\n"
# 95 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "our most optimistic expectations.\p"
# 96 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Even with your failure to secure the\n"
# 97 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Meteorite…\p"
# 98 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "We finally got the results that we were\n"
# 99 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "looking for.\p"
# 100 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "The perfect fusion of human and Pokémon\n"
# 101 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "DNA…\p"
# 102 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Is now a reality.$"
# 103 "data/maps/IntroCutsceneMap/scripts.pory"

# 104 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendanoLooksLikeASeal:
# 105 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Hmm…\n"
# 106 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Ya sure it worked properly?\p"
# 107 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "It just looks like a regular ol' Seel\n"
# 108 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "to me.$"
# 109 "data/maps/IntroCutsceneMap/scripts.pory"

# 110 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattkaYouFool:
# 111 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Hah!\n"
# 112 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Of course, a simpleton like you wouldn't\n"
# 113 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "understand the magnitude of this.\p"
# 114 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "What you are seeing is a new type of being.\p"
# 115 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Neither human nor Pokémon…\n"
# 116 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "But something with much more potential.$"
# 117 "data/maps/IntroCutsceneMap/scripts.pory"

# 118 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano1:	
# 119 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "If ya say so, man.\n"
# 120 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "So, is it ready for field testing?\p"
# 121 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You know the Boss has been on my tail\n"
# 122 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "about that.$"
# 123 "data/maps/IntroCutsceneMap/scripts.pory"

# 124 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka2:
# 125 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Not quite.\p"
# 126 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "The speciment is still proving rather\n"
# 127 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "difficult to work with.\p"
# 128 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "His participation has not been…\n"
# 129 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Strictly voluntary.\p"
# 130 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "He used to be a proud member of the\n"
# 131 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "airforce, you see.\p"
# 132 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Oh, for the most part, he obeys commands\n"
# 133 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "just fine.\p"
# 134 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "But a part of his old self is still in\n"
# 135 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "there, fighting back.\p"
# 136 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "No matter.\p"
# 137 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "With time, he will be conditioned out\n"
# 138 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "of it.$"
# 139 "data/maps/IntroCutsceneMap/scripts.pory"

# 140 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano2:	
# 141 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I'll be telling the Boss that, then.\p"
# 142 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "But if he complains, it's on you.$"
# 143 "data/maps/IntroCutsceneMap/scripts.pory"

# 144 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_WhatWasThat:
# 145 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "What was that?$"
# 146 "data/maps/IntroCutsceneMap/scripts.pory"

# 147 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_YouAgain:
# 148 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You again?!$"
# 149 "data/maps/IntroCutsceneMap/scripts.pory"

# 150 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka3:	
# 151 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Ah, you know each other?\p"
# 152 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Why, could it be the very same thug\n"
# 153 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "that stole the Meteorite from you, Z?$"
# 154 "data/maps/IntroCutsceneMap/scripts.pory"

# 155 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsZendano3:
# 156 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Darn right he is!\p"
# 157 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Let me at him, Lattka!\n"
# 158 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I'm itching for a rematch!$"
# 159 "data/maps/IntroCutsceneMap/scripts.pory"

# 160 "data/maps/IntroCutsceneMap/scripts.pory"

# 161 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_TestSubjectResultsLattka4:
# 162 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Now, now, Z.\n"
# 163 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Don't be so hasty.\p"
# 164 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "We don't want a repeat of your failure.\p"
# 165 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "No, you go and report to the Boss…\p"
# 166 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "That we have some kid snooping in the\n"
# 167 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "affairs of Team MAGA.\p"
# 168 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "… … …\p"
# 169 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "…I said go, now.$"
# 170 "data/maps/IntroCutsceneMap/scripts.pory"

# 171 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaChallengesFro:
# 172 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Meanwhile…\n"
# 173 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Look at who we have here.\p"
# 174 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You wanted to play hero, eh?\n"
# 175 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Very well, then.\p"
# 176 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "This might be a fine occasion to\n"
# 177 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "test the worth of my specimen.\p"
# 178 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "He might not be fully ready yet, but…\p"
# 179 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "…Oh, to hell with it.\p"
# 180 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Seel, show me what you can do!$"
# 181 "data/maps/IntroCutsceneMap/scripts.pory"

# 182 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaDefeat1:
# 183 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Well, this is awkward."
# 184 "data/maps/IntroCutsceneMap/scripts.pory"

# 185 "data/maps/IntroCutsceneMap/scripts.pory"
SummitCaverns_Text_LattkaBattle:
# 186 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "You really don't see it, do you?\p"
# 187 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Everything we're doing is for the\n"
# 188 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "greater good!\p"
# 189 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "I guess I'll just have to show you,\n"
# 190 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "then!$"
# 191 "data/maps/IntroCutsceneMap/scripts.pory"

# 192 "data/maps/IntroCutsceneMap/scripts.pory"
SpeakerName_Lattka:
# 193 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Lattka$"
# 194 "data/maps/IntroCutsceneMap/scripts.pory"

# 195 "data/maps/IntroCutsceneMap/scripts.pory"

# 196 "data/maps/IntroCutsceneMap/scripts.pory"
SpeakerName_Zendano:
# 197 "data/maps/IntroCutsceneMap/scripts.pory"
	.string "Zendano$"
