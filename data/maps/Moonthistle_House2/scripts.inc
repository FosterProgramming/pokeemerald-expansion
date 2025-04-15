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
# 140 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 141 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_8, MSGBOX_NPC
# 142 "data/maps/Moonthistle_House2/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 143 "data/maps/Moonthistle_House2/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 144 "data/maps/Moonthistle_House2/scripts.pory"
	addobject LOCALID_VEE
# 145 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 146 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 147 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_0
# 148 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 149 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 150 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 151 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_9
# 152 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 153 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 154 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 155 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_10
# 156 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 157 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 158 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 159 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_11
# 160 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 161 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 162 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 163 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_12
# 164 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 165 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 166 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 167 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_13
# 168 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 169 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 170 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 171 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_14
# 172 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 173 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 174 "data/maps/Moonthistle_House2/scripts.pory"
	removeobject LOCALID_VEE
# 175 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUST_QUEST_STARTED
# 176 "data/maps/Moonthistle_House2/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_13_SATCHEL
Moonthistle_EventScripts_LinooneTrustQuestStart_1:
# 179 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end

Moonthistle_EventScripts_LinooneTrustQuestStart_2:
# 93 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_LinooneTrustQuestStart_5
# 100 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_SATCHEL_RECOVERED, Moonthistle_EventScripts_LinooneTrustQuestStart_6
# 134 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 135 "data/maps/Moonthistle_House2/scripts.pory"
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
	applymovement 1, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_2
# 111 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 112 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3
# 113 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 114 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 115 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 116 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 117 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 118 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 119 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 120 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 121 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 122 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 123 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 124 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6
# 125 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 126 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 127 "data/maps/Moonthistle_House2/scripts.pory"
	removeobject LOCALID_VEE
# 128 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 129 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end


Moonthistle_EventScripts_LinooneTrustQuestComplete::
# 187 "data/maps/Moonthistle_House2/scripts.pory"
	lock
# 188 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_SATCHEL_RECOVERED, Moonthistle_EventScripts_LinooneTrustQuestComplete_2
# 204 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 205 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3
# 206 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 207 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 208 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 209 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 210 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 211 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 212 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 213 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6, MSGBOX_NPC
# 214 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 215 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end

Moonthistle_EventScripts_LinooneTrustQuestComplete_2:
# 190 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 191 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3, MSGBOX_NPC
# 192 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 193 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 194 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 195 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 196 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 197 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 198 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 199 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6, MSGBOX_NPC
# 200 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 201 "data/maps/Moonthistle_House2/scripts.pory"
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

# 110 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_2:
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
# 110 "data/maps/Moonthistle_House2/scripts.pory"
	face_down
	step_end

# 113 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3:
# 113 "data/maps/Moonthistle_House2/scripts.pory"
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
# 111 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Vee$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3:
# 112 "data/maps/Moonthistle_House2/scripts.pory"
	.string "We got the satchel!\p"
	.string "A MAGA scout found us, but we stopped\n"
	.string "him. He ran off, though…$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4:
# 116 "data/maps/Moonthistle_House2/scripts.pory"
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
# 120 "data/maps/Moonthistle_House2/scripts.pory"
	.string "That artifact story still sounds like\n"
	.string "fantasy to me.\p"
	.string "But… there's one ‘mon here who used to\n"
	.string "live in Voltbrook.\p"
	.string "Name’s Shade. Mightyena. Keeps to the\n"
	.string "shadows, but sees more than most.\p"
	.string "If there’s a hiding spot in Voltbrook…\n"
	.string "Shade would know it.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6:
# 124 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Thank you… really. We won’t let you down.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_7:
# 135 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You want trust? Bring that satchel\n"
	.string "back. Quietly.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_8:
# 141 "data/maps/Moonthistle_House2/scripts.pory"
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
# 151 "data/maps/Moonthistle_House2/scripts.pory"
	.string "W-We’re not here to cause any trouble!\n"
	.string "Really!\p"
	.string "We just… we’re trying to stay hidden.\n"
	.string "Just for a little while.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_10:
# 155 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Letting you stay would be a big risk.\n"
	.string "How do we know we can trust you?$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_11:
# 159 "data/maps/Moonthistle_House2/scripts.pory"
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
# 163 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Artifacts? You mean like treasure?\n"
	.string "Magic trinkets?$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_13:
# 167 "data/maps/Moonthistle_House2/scripts.pory"
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
# 171 "data/maps/Moonthistle_House2/scripts.pory"
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
