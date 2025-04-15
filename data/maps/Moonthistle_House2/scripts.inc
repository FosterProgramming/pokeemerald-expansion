# 1 "data/maps/Moonthistle_House2/scripts.pory"

# 2 "data/maps/Moonthistle_House2/scripts.pory"
.set LOCALID_VEE, 2
# 3 "data/maps/Moonthistle_House2/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/Moonthistle_House2/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4
# 5 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_MapScripts::
# 6 "data/maps/Moonthistle_House2/scripts.pory"
	.byte 0
# 7 "data/maps/Moonthistle_House2/scripts.pory"

# 8 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_EventScript_HiddenPowerGiver::
# 9 "data/maps/Moonthistle_House2/scripts.pory"
	lock
# 10 "data/maps/Moonthistle_House2/scripts.pory"
	faceplayer
# 11 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_TM_HIDDEN_POWER, Moonthistle_House2_EventScript_ExplainHiddenPower
# 12 "data/maps/Moonthistle_House2/scripts.pory"
	call_if_unset FLAG_MET_HIDDEN_POWER_GIVER, Moonthistle_House2_EventScript_Greeting
# 13 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_CoinInWhichHand, MSGBOX_DEFAULT
# 14 "data/maps/Moonthistle_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 15 "data/maps/Moonthistle_House2/scripts.pory"
	switch VAR_RESULT
# 16 "data/maps/Moonthistle_House2/scripts.pory"
	case 1, Moonthistle_House2_EventScript_WrongGuess
# 17 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_CorrectTryAgainWhichHand, MSGBOX_DEFAULT
# 18 "data/maps/Moonthistle_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 19 "data/maps/Moonthistle_House2/scripts.pory"
	switch VAR_RESULT
# 20 "data/maps/Moonthistle_House2/scripts.pory"
	case 1, Moonthistle_House2_EventScript_WrongGuess
# 21 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_CorrectTryAgainWhichHand2, MSGBOX_DEFAULT
# 22 "data/maps/Moonthistle_House2/scripts.pory"
	multichoice 21, 8, MULTI_RIGHTLEFT, TRUE
# 23 "data/maps/Moonthistle_House2/scripts.pory"
	switch VAR_RESULT
# 24 "data/maps/Moonthistle_House2/scripts.pory"
	case 0, Moonthistle_House2_EventScript_WrongGuess
# 25 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_YourHiddenPowerHasAwoken, MSGBOX_DEFAULT
# 26 "data/maps/Moonthistle_House2/scripts.pory"
	giveitem ITEM_TM_HIDDEN_POWER
# 27 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 28 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_RECEIVED_TM_HIDDEN_POWER
# 29 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 30 "data/maps/Moonthistle_House2/scripts.pory"
	release
# 31 "data/maps/Moonthistle_House2/scripts.pory"
	end
# 32 "data/maps/Moonthistle_House2/scripts.pory"

# 33 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_EventScript_Greeting::
# 34 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_HiddenPowersArousedByNature, MSGBOX_DEFAULT
# 35 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MET_HIDDEN_POWER_GIVER
# 36 "data/maps/Moonthistle_House2/scripts.pory"
	return
# 37 "data/maps/Moonthistle_House2/scripts.pory"

# 38 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_EventScript_ExplainHiddenPower::
# 39 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_ExplainHiddenPower, MSGBOX_DEFAULT
# 40 "data/maps/Moonthistle_House2/scripts.pory"
	release
# 41 "data/maps/Moonthistle_House2/scripts.pory"
	end
# 42 "data/maps/Moonthistle_House2/scripts.pory"

# 43 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_EventScript_WrongGuess::
# 44 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_House2_Text_YouGuessedWrong, MSGBOX_DEFAULT
# 45 "data/maps/Moonthistle_House2/scripts.pory"
	release
# 46 "data/maps/Moonthistle_House2/scripts.pory"
	end
# 47 "data/maps/Moonthistle_House2/scripts.pory"

# 48 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_Text_HiddenPowersArousedByNature:
# 49 "data/maps/Moonthistle_House2/scripts.pory"
	.string "People… POKéMON…\p"
# 50 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Their hidden powers are aroused by\n"
# 51 "data/maps/Moonthistle_House2/scripts.pory"
	.string "living in natural environments…$"
# 52 "data/maps/Moonthistle_House2/scripts.pory"

# 53 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_Text_CoinInWhichHand:
# 54 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Let this old woman see if your hidden\n"
# 55 "data/maps/Moonthistle_House2/scripts.pory"
	.string "power has awoken…\p"
# 56 "data/maps/Moonthistle_House2/scripts.pory"
	.string "I hold a coin in my hand.\p"
# 57 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Now, tell me, have I palmed it in\n"
# 58 "data/maps/Moonthistle_House2/scripts.pory"
	.string "the right hand? Or in the left?$"
# 59 "data/maps/Moonthistle_House2/scripts.pory"

# 60 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_Text_CorrectTryAgainWhichHand:
# 61 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 62 "data/maps/Moonthistle_House2/scripts.pory"
	.string "We shall try again.\p"
# 63 "data/maps/Moonthistle_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 64 "data/maps/Moonthistle_House2/scripts.pory"
	.string "The right or left?$"
# 65 "data/maps/Moonthistle_House2/scripts.pory"

# 66 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_Text_CorrectTryAgainWhichHand2:
# 67 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Oh! Yes, correct!\p"
# 68 "data/maps/Moonthistle_House2/scripts.pory"
	.string "We shall try again.\p"
# 69 "data/maps/Moonthistle_House2/scripts.pory"
	.string "In which hand have I palmed the coin?\n"
# 70 "data/maps/Moonthistle_House2/scripts.pory"
	.string "The right or left?$"
# 71 "data/maps/Moonthistle_House2/scripts.pory"

# 72 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_Text_YourHiddenPowerHasAwoken:
# 73 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Oh! Splendid!\n"
# 74 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Your hidden power has awoken!\p"
# 75 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Here, take this and awaken the hidden\n"
# 76 "data/maps/Moonthistle_House2/scripts.pory"
	.string "power of your POKéMON.$"
# 77 "data/maps/Moonthistle_House2/scripts.pory"

# 78 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_Text_ExplainHiddenPower:
# 79 "data/maps/Moonthistle_House2/scripts.pory"
	.string "HIDDEN POWER is a move that changes\n"
# 80 "data/maps/Moonthistle_House2/scripts.pory"
	.string "with the POKéMON.$"
# 81 "data/maps/Moonthistle_House2/scripts.pory"

# 82 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_House2_Text_YouGuessedWrong:
# 83 "data/maps/Moonthistle_House2/scripts.pory"
	.string "No, too bad.\n"
# 84 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You guessed wrong.$"

Moonthistle_EventScripts_LinooneTrustQuestStart::
# 90 "data/maps/Moonthistle_House2/scripts.pory"
	lock
# 91 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_TRUST_QUEST_STARTED, Moonthistle_EventScripts_LinooneTrustQuestStart_2
# 139 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 140 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_8, MSGBOX_NPC
# 141 "data/maps/Moonthistle_House2/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 142 "data/maps/Moonthistle_House2/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 143 "data/maps/Moonthistle_House2/scripts.pory"
	addobject LOCALID_VEE
# 144 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 145 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 146 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_0
# 147 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 148 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 149 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 150 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_9
# 151 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_2
# 152 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 153 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 154 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_10
# 155 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 156 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 157 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 158 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_11
# 159 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_2
# 160 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 161 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 162 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_12
# 163 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 164 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 165 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 166 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_13
# 167 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_2
# 168 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 169 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 170 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_14
# 171 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 172 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 173 "data/maps/Moonthistle_House2/scripts.pory"
	removeobject LOCALID_VEE
# 174 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUST_QUEST_STARTED
Moonthistle_EventScripts_LinooneTrustQuestStart_1:
# 177 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end

Moonthistle_EventScripts_LinooneTrustQuestStart_2:
# 93 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_LinooneTrustQuestStart_5
# 100 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_SATCHEL_RECOVERED, Moonthistle_EventScripts_LinooneTrustQuestStart_6
# 133 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 134 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_7, MSGBOX_NPC
	goto Moonthistle_EventScripts_LinooneTrustQuestStart_1

Moonthistle_EventScripts_LinooneTrustQuestStart_5:
# 95 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 96 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_1, MSGBOX_NPC
# 97 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end

Moonthistle_EventScripts_LinooneTrustQuestStart_6:
# 102 "data/maps/Moonthistle_House2/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 103 "data/maps/Moonthistle_House2/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 104 "data/maps/Moonthistle_House2/scripts.pory"
	addobject LOCALID_VEE
# 105 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 106 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 107 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_0
# 108 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 109 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 111 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3, MSGBOX_NPC
# 112 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_2
# 113 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 114 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 115 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 116 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 117 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 118 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 119 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 120 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 121 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 122 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 123 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6
# 124 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 125 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 126 "data/maps/Moonthistle_House2/scripts.pory"
	removeobject LOCALID_VEE
# 127 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 128 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end


Moonthistle_EventScripts_LinooneTrustQuestComplete::
# 185 "data/maps/Moonthistle_House2/scripts.pory"
	lock
# 186 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_SATCHEL_RECOVERED, Moonthistle_EventScripts_LinooneTrustQuestComplete_2
# 202 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 203 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3
# 204 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 205 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 206 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 207 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 208 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 209 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 210 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 211 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6, MSGBOX_NPC
# 212 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 213 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end

Moonthistle_EventScripts_LinooneTrustQuestComplete_2:
# 188 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 189 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3
# 190 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 191 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 192 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 193 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 194 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 195 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 196 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 197 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6, MSGBOX_NPC
# 198 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 199 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end


# 107 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_0:
# 107 "data/maps/Moonthistle_House2/scripts.pory"
	face_up
	step_end

# 108 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1:
# 108 "data/maps/Moonthistle_House2/scripts.pory"
	walk_in_place_left
	step_end

# 112 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_2:
# 112 "data/maps/Moonthistle_House2/scripts.pory"
	walk_in_place_up
	step_end

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0:
# 95 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Linoone$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_1:
# 96 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You’ve earned a place here. Rest when\n"
	.string "you need. No one will chase you off.\p"
	.string "Feel free to meet the others.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2:
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Vee$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3:
# 111 "data/maps/Moonthistle_House2/scripts.pory"
	.string "We got the satchel!\p"
	.string "A MAGA scout found us, but we stopped\n"
	.string "him. He ran off, though…$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4:
# 115 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Hmph. So they know you're out there.\n"
	.string "That won’t help our nerves.\p"
	.string "But you brought it back. Even with\n"
	.string "danger breathing down your necks.\p"
	.string "Maybe you two aren’t a liability after\n"
	.string "all.\p"
	.string "You’ve earned a place here. Rest when\n"
	.string "you need. No one will chase you off.\p"
	.string "Feel free to meet the others. Some\n"
	.string "might be more helpful than I was.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5:
# 119 "data/maps/Moonthistle_House2/scripts.pory"
	.string "That artifact story still sounds like\n"
	.string "fantasy to me.\p"
	.string "But… there's one ‘mon here who used to\n"
	.string "live in Voltbrook.\p"
	.string "Name’s Shade. Mightyena. Keeps to the\n"
	.string "shadows, but sees more than most.\p"
	.string "If there’s a hiding spot in Voltbrook…\n"
	.string "Shade would know it.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6:
# 123 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Thank you… really. We won’t let you down.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_7:
# 134 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You want trust? Bring that satchel\n"
	.string "back. Quietly.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_8:
# 140 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You’re not from here. And around here,\n"
	.string "that means trouble. I know your faces.\l"
	.string "I've seen the wanted posters from\l"
	.string "Voltbrook, head the whispers of the\l"
	.string "dangerous, escaped experiments…\p"
	.string "We don’t trust easy. Especially not ones\n"
	.string "who walked out of a MAGA lab.\p"
	.string "How do I know you're not here to spy on\n"
	.string "us? Or help Team MAGA capture us?$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_9:
# 150 "data/maps/Moonthistle_House2/scripts.pory"
	.string "W-We’re not here to cause any trouble!\n"
	.string "Really!\p"
	.string "We just… we’re trying to stay hidden.\n"
	.string "Just for a little while.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_10:
# 154 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Letting you stay would be a big risk.\n"
	.string "How do we know we can trust you?$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_11:
# 158 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Because they experimented on us.\p"
	.string "They locked us up. Said we were just\n"
	.string "test subjects. When I wasn’t useful\l"
	.string "anymore… they tossed me aside.\p"
	.string "We escaped. We don’t have anywhere else\n"
	.string "to go.\p"
	.string "We, uh… found something in the lab.\p"
	.string "N-Notes that mentioned eight\n"
	.string "artifacts-really super duper important\l"
	.string "ones.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_12:
# 162 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Artifacts? You mean like treasure?\n"
	.string "Magic trinkets?$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_13:
# 166 "data/maps/Moonthistle_House2/scripts.pory"
	.string "No! I mean-yes? Kind of! But not like\n"
	.string "that.\p"
	.string "They're connected to… fixing what they\n"
	.string "did. To my friend.\p"
	.string "I don’t think they’ll help me. But he was\n"
	.string "human. The notes said these artifacts\l"
	.string "are needed to change him back to the\l"
	.string "way he was!\p"
	.string "And we’re sure one of the artifacts is in\n"
	.string "Voltbrook. We just need time to find it.\p"
	.string "Please. We can’t even walk around out\n"
	.string "there. They’ll send us back to the lab…\l"
	.string "or worse.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_14:
# 170 "data/maps/Moonthistle_House2/scripts.pory"
	.string "…You sound like you believe it, at least.\p"
	.string "But belief won’t earn you shelter. Not\n"
	.string "here.\p"
	.string "One of ours wandered into Route 7.\n"
	.string "Dropped a marked satchel. It was real\l"
	.string "important.\p"
	.string "If MAGA spots it, they might trace it\n"
	.string "back here. We can’t take that risk.\p"
	.string "You want trust? Bring that satchel\n"
	.string "back. Quietly.$"
