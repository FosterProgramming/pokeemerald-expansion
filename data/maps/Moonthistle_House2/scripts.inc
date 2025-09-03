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
# 158 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 159 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_8, MSGBOX_NPC
# 165 "data/maps/Moonthistle_House2/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 166 "data/maps/Moonthistle_House2/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 167 "data/maps/Moonthistle_House2/scripts.pory"
	addobject LOCALID_VEE
# 168 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 169 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 170 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_0
# 171 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 172 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 173 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 174 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_9
# 179 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 180 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 181 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 182 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_10
# 185 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 186 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement 0
# 187 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 189 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_11
# 200 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 201 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_12
# 208 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 209 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_13
# 213 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 214 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 215 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 216 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_14
# 217 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 218 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 219 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 220 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_15
# 233 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 234 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 235 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 236 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_16
# 243 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 244 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 245 "data/maps/Moonthistle_House2/scripts.pory"
	removeobject LOCALID_VEE
# 246 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUST_QUEST_STARTED
# 247 "data/maps/Moonthistle_House2/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_13_SATCHEL
Moonthistle_EventScripts_LinooneTrustQuestStart_1:
# 250 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end

Moonthistle_EventScripts_LinooneTrustQuestStart_2:
# 93 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_TRUSTED, Moonthistle_EventScripts_LinooneTrustQuestStart_5
# 100 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_SATCHEL_RECOVERED, Moonthistle_EventScripts_LinooneTrustQuestStart_6
# 152 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 153 "data/maps/Moonthistle_House2/scripts.pory"
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
# 116 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3
# 117 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 118 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 119 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 129 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 130 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 131 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 132 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 139 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_1
# 140 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 141 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 142 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6
# 143 "data/maps/Moonthistle_House2/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 144 "data/maps/Moonthistle_House2/scripts.pory"
	waitmovement LOCALID_VEE
# 145 "data/maps/Moonthistle_House2/scripts.pory"
	removeobject LOCALID_VEE
# 146 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 147 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end


Moonthistle_EventScripts_LinooneTrustQuestComplete::
# 258 "data/maps/Moonthistle_House2/scripts.pory"
	lock
# 259 "data/maps/Moonthistle_House2/scripts.pory"
	goto_if_set FLAG_MOONTHISTLE_SATCHEL_RECOVERED, Moonthistle_EventScripts_LinooneTrustQuestComplete_2
# 293 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 294 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3
# 298 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 299 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4
# 309 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 310 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 311 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 312 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestComplete_Text_1
# 313 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 314 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6
# 315 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 316 "data/maps/Moonthistle_House2/scripts.pory"
	release
	end

Moonthistle_EventScripts_LinooneTrustQuestComplete_2:
# 261 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 262 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3
# 266 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 267 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestComplete_Text_0
# 277 "data/maps/Moonthistle_House2/scripts.pory"
	closemessage
# 278 "data/maps/Moonthistle_House2/scripts.pory"
	delay 40
# 279 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0
# 280 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5
# 287 "data/maps/Moonthistle_House2/scripts.pory"
	speakername Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2
# 288 "data/maps/Moonthistle_House2/scripts.pory"
	msgbox Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6
# 289 "data/maps/Moonthistle_House2/scripts.pory"
	setflag FLAG_MOONTHISTLE_TRUSTED
# 290 "data/maps/Moonthistle_House2/scripts.pory"
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

# 116 "data/maps/Moonthistle_House2/scripts.pory"
Moonthistle_EventScripts_LinooneTrustQuestStart_Movement_3:
# 116 "data/maps/Moonthistle_House2/scripts.pory"
	walk_in_place_up
	step_end

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_0:
# 95 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Linoone$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_1:
# 96 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You’ve earned a place here.\p"
	.string "Rest when you need.\n"
	.string "No one will chase you off.\p"
	.string "Feel free to meet the others.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_2:
# 111 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Vee$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_3:
# 112 "data/maps/Moonthistle_House2/scripts.pory"
	.string "We got the satchel!\p"
	.string "A MAGA scout found us, but we stopped\n"
	.string "him.\p"
	.string "He ran off, though…$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_4:
# 119 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Hmph.\p"
	.string "So, they know you're out there.\n"
	.string "That won’t help our nerves.\p"
	.string "But you brought it back.\n"
	.string "Even with danger breathing down your\l"
	.string "neck.\p"
	.string "Maybe you two aren’t a liability after\n"
	.string "all.\p"
	.string "You’ve earned a place here.\p"
	.string "Rest when you need. No one will chase\n"
	.string "you off.\p"
	.string "Feel free to meet the others.\n"
	.string "Some might be more helpful than I was.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_5:
# 132 "data/maps/Moonthistle_House2/scripts.pory"
	.string "That artifact story still sounds like\n"
	.string "fantasy to me.\p"
	.string "But… there's one ‘mon here who used to\n"
	.string "live in Voltbrook.\p"
	.string "Name’s Shade, the Mightyena.\n"
	.string "Keeps to the shadows, but sees more\l"
	.string "than most.\p"
	.string "If there’s a hiding spot in Voltbrook…\n"
	.string "Shade would know it.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_6:
# 142 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Thank you.\n"
	.string "We won’t let you down.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_7:
# 153 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You want trust?\p"
	.string "Bring that satchel back.\n"
	.string "Quietly.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_8:
# 159 "data/maps/Moonthistle_House2/scripts.pory"
	.string "You’re not from here.\n"
	.string "And in this town, that means trouble.\p"
	.string "Wait… I know your faces.\p"
	.string "I've seen the wanted posters from\n"
	.string "Voltbrook, heard the whispers about\l"
	.string "escaped experiments…\p"
	.string "How do I know you're not here to spy on\n"
	.string "us?$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_9:
# 174 "data/maps/Moonthistle_House2/scripts.pory"
	.string "W-We’re not here to cause any trouble!\n"
	.string "Really!\p"
	.string "We just…\n"
	.string "We’re trying to stay hidden.\l"
	.string "Just for a little while.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_10:
# 182 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Letting you stay would be a big risk.\n"
	.string "We have no reason to trust you.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_11:
# 190 "data/maps/Moonthistle_House2/scripts.pory"
	.string "We're the victims here!\p"
	.string "They locked us up and ran all sorts of\n"
	.string "experiments…\p"
	.string "My friend here, he used to be human!\n"
	.string "Team MAGA transformed him into a\l"
	.string "Pokémon.\p"
	.string "And me…\n"
	.string "Well, I'm not sure what's wrong with me\l"
	.string "exactly, but…\p"
	.string "It's all strange!\p"
	.string "And now we're not useful anymore, so\n"
	.string "they want to get rid of us.\p"
	.string "Please, we don’t have anywhere else to\n"
	.string "go!$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_12:
# 202 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Hmm…\p"
	.string "I've heard the rumors…\n"
	.string "But it really does sound hard to\l"
	.string "believe…\p"
	.string "If you're speaking the truth, then\n"
	.string "prove it.\p"
	.string "Give us information that can help us\n"
	.string "defeat team MAGA.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_13:
# 209 "data/maps/Moonthistle_House2/scripts.pory"
	.string "We, uh… We did find something in the lab.\p"
	.string "S-some note that mentioned eight\n"
	.string "artifacts.\p"
	.string "Super duper important ones!$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_14:
# 216 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Artifacts?\p"
	.string "You mean, like treasure?\n"
	.string "Magic trinkets?$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_15:
# 220 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Yes!\n"
	.string "Well, no?\l"
	.string "Kind of?\p"
	.string "They're connected to…\n"
	.string "Fixing what they did. To my friend.\p"
	.string "I don’t think they’ll help me.\n"
	.string "But he… He was human.\p"
	.string "And the notes said these artifacts can\n"
	.string "change him back to the way he was!\p"
	.string "We’re sure one of the artifacts is in\n"
	.string "Voltbrook.\l"
	.string "We just need time to find it.\p"
	.string "Please. We can’t even walk around out\n"
	.string "there.\p"
	.string "They’ll send us back to the lab… or\n"
	.string "worse.$"

Moonthistle_EventScripts_LinooneTrustQuestStart_Text_16:
# 236 "data/maps/Moonthistle_House2/scripts.pory"
	.string "…What a story.\n"
	.string "You sound like you believe it, at least.\p"
	.string "But belief alone won’t earn you shelter.\n"
	.string "Not here.\p"
	.string "One of ours wandered into Route 7.\n"
	.string "Dropped a marked satchel.\l"
	.string "Really important.\p"
	.string "If MAGA spots it, they might trace it\n"
	.string "back here.\l"
	.string "We can’t take that risk.\p"
	.string "You want trust?\p"
	.string "Bring that satchel back.\n"
	.string "Quietly.$"

Moonthistle_EventScripts_LinooneTrustQuestComplete_Text_0:
# 267 "data/maps/Moonthistle_House2/scripts.pory"
	.string "Hmph.\p"
	.string "So, they know you're out there.\n"
	.string "That won’t help our nerves.\p"
	.string "But you brought it back.\n"
	.string "Even with danger breathing down your\l"
	.string "neck.\p"
	.string "Maybe you two aren’t a liability after\n"
	.string "all.\l"
	.string "You’ve earned a place here.\p"
	.string "Rest when you need. No one will chase\n"
	.string "you off.\p"
	.string "And feel free to meet the others.\n"
	.string "Some might be more helpful than I was.$"

Moonthistle_EventScripts_LinooneTrustQuestComplete_Text_1:
# 312 "data/maps/Moonthistle_House2/scripts.pory"
	.string "That artifact story still sounds like\n"
	.string "fantasy to me.\p"
	.string "But… there's one ‘mon here who used to\n"
	.string "live in Voltbrook.\p"
	.string "Name’s Shade. Mightyena. Keeps to the\n"
	.string "shadows, but sees more than most.\p"
	.string "If there’s a hiding spot in Voltbrook…\n"
	.string "Shade would know it.$"
