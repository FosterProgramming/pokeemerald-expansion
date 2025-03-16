# 1 "data/maps/MurkwellBog/scripts.pory"

# 2 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_NYX, 7
# 3 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_EEVEE, 9
# 4 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_DRAKE, 10
# 5 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_ACE, 11
# 6 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_TALON, 12
# 7 "data/maps/MurkwellBog/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 8 "data/maps/MurkwellBog/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

MurkwellBog_MapScripts::
	.byte 0


MurkwellBog_EventScripts_SlowpokeNPC::
# 16 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 17 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_SlowpokeNPC_Text_0
# 18 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_ParasectNPC::
# 24 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 25 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ParasectNPC_Text_0
# 26 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_DrowzeeNPC::
# 32 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 33 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_DrowzeeNPC_Text_0
# 34 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HaunterNPC::
# 40 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 41 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HaunterNPC_Text_0
# 42 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_LanturnNPC::
# 48 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 49 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_LanturnNPC_Text_0
# 50 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HoothootNPC::
# 56 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 57 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HoothootNPC_Text_0
# 58 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_NyxNPC::
# 65 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 66 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 67 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 68 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_1, MSGBOX_YESNO
# 69 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne MurkwellBog_EventScripts_NyxNPC_1
	checkitem ITEM_CHARCOAL
# 0 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_4
# 126 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 127 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 128 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_5
# 129 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end

MurkwellBog_EventScripts_NyxNPC_1:
# 71 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 72 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 73 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_2
# 74 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end

MurkwellBog_EventScripts_NyxNPC_4:
	checkitem ITEM_SPELL_TAG
# 0 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_7
	return

MurkwellBog_EventScripts_NyxNPC_7:
	checkitem ITEM_HARD_STONE
# 0 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_9
	return

MurkwellBog_EventScripts_NyxNPC_9:
# 85 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 86 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 87 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_3
# 88 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 89 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 14
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_12
# 94 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 13
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_13
# 101 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_NyxNPC_Movement_2
# 102 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MurkwellBog_EventScripts_NyxNPC_11:
# 104 "data/maps/MurkwellBog/scripts.pory"
	special SpawnCameraObject
# 105 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MurkwellBog_EventScripts_NyxNPC_Movement_3
# 106 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_4
# 107 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 108 "data/maps/MurkwellBog/scripts.pory"
	call CommonEventScript_ScreenShake
# 109 "data/maps/MurkwellBog/scripts.pory"
	playse SE_EFFECTIVE
# 110 "data/maps/MurkwellBog/scripts.pory"
	delay 40
# 111 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 112 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 113 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MurkwellBog_EventScripts_NyxNPC_Movement_5
# 114 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_5
# 115 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 116 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 117 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_4
# 118 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 119 "data/maps/MurkwellBog/scripts.pory"
	call Murkwellbog_CommonEventScript_SetLocalIdsToPlayerXY
# 120 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_CommonEventScript_DetermineParty
	return

MurkwellBog_EventScripts_NyxNPC_12:
# 91 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_NyxNPC_Movement_0
# 92 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_NyxNPC_11

MurkwellBog_EventScripts_NyxNPC_13:
# 96 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_NyxNPC_Movement_1
# 97 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_NyxNPC_11


MurkwellBog_EventScripts_PsychicNPC::
# 138 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 139 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_PsychicNPC_Text_0
# 140 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_InnkeeperNPC::
# 147 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 148 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_InnkeeperNPC_Text_0
# 149 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_ShopkeeperNPC::
# 156 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 157 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ShopkeeperNPC_Text_0
# 158 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC1::
# 165 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 166 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC1_Text_0
# 167 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC2::
# 174 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 175 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC2_Text_0
# 176 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC3::
# 183 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 184 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC3_Text_0
# 185 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_TempleNeedsRitual::
# 191 "data/maps/MurkwellBog/scripts.pory"
	lock
# 192 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0
# 193 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 194 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 195 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 16
	goto_if_lt MurkwellBog_EventScripts_TempleNeedsRitual_2
# 202 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2
# 203 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MurkwellBog_EventScripts_TempleNeedsRitual_1:
# 205 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 206 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_0
# 207 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_1
# 208 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_2
# 209 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_3
# 210 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_4
# 211 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_5
# 212 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_6
# 213 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_7
# 214 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_2
# 215 "data/maps/MurkwellBog/scripts.pory"
	setvar VAR_MURKWELL_BOG_STATE, 1
# 216 "data/maps/MurkwellBog/scripts.pory"
	release
	end

MurkwellBog_EventScripts_TempleNeedsRitual_2:
# 197 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1
# 198 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_TempleNeedsRitual_1


Murkwellbog_CommonEventScript_SetLocalIdsToPlayerXY::
# 222 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 223 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 224 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, PlayerXCoordinates, PlayerYCoordinates
# 225 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_TALON, PlayerXCoordinates, PlayerYCoordinates
# 226 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_ACE, PlayerXCoordinates, PlayerYCoordinates
	return


Murkwellbog_CommonEventScript_DetermineParty::
# 232 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_22
Murkwellbog_CommonEventScript_DetermineParty_19:
# 236 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_18
Murkwellbog_CommonEventScript_DetermineParty_16:
# 240 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_15
Murkwellbog_CommonEventScript_DetermineParty_13:
# 244 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_12
Murkwellbog_CommonEventScript_DetermineParty_11:
# 248 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_5
# 252 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_6
# 256 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_7
# 262 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember
	return

Murkwellbog_CommonEventScript_DetermineParty_1:
# 234 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_FullParty
	return

Murkwellbog_CommonEventScript_DetermineParty_2:
# 238 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty
	return

Murkwellbog_CommonEventScript_DetermineParty_3:
# 242 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_4:
# 246 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_5:
# 250 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty
	return

Murkwellbog_CommonEventScript_DetermineParty_6:
# 254 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_AceParty
	return

Murkwellbog_CommonEventScript_DetermineParty_7:
# 258 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_TalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_12:
# 244 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_4
	goto Murkwellbog_CommonEventScript_DetermineParty_11

Murkwellbog_CommonEventScript_DetermineParty_15:
# 240 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_3
	goto Murkwellbog_CommonEventScript_DetermineParty_13

Murkwellbog_CommonEventScript_DetermineParty_18:
# 236 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_2
	goto Murkwellbog_CommonEventScript_DetermineParty_16

Murkwellbog_CommonEventScript_DetermineParty_21:
# 232 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_1
	goto Murkwellbog_CommonEventScript_DetermineParty_19

Murkwellbog_CommonEventScript_DetermineParty_22:
# 232 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_21
	goto Murkwellbog_CommonEventScript_DetermineParty_19


Murkwellbog_EventScript_NyxOpenedTemple_FullParty::
# 268 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 269 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 270 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 271 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 272 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 273 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 274 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerSouth
# 275 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerNorthWest
# 276 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 277 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 278 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 279 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 280 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 281 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 282 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 283 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_3
# 284 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 285 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 286 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 287 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_5
# 288 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 289 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 290 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 291 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_7
# 292 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 293 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 294 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 295 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_9
# 296 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 297 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_11
# 298 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 299 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 300 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 301 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 302 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 303 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 304 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 305 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 306 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 307 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 308 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 309 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 310 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 311 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 312 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerSouth
# 313 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerNorthwest
# 314 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 315 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 316 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 317 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 318 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 319 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 320 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 321 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 322 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty::
# 328 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 329 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 330 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 331 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 332 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 333 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerSouth
# 334 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 335 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 336 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 337 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 338 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 339 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 340 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 341 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 342 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 343 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 344 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 345 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 346 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 347 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 348 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 349 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 350 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 351 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_1
# 352 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 353 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 354 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 355 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_2
# 356 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 357 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 358 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 359 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_3
# 360 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 361 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 362 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 363 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 364 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 365 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 366 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 367 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 368 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 369 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 370 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 371 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 372 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 373 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 374 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty::
# 381 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 382 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 383 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 384 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 385 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerEast
# 386 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerSouth
# 387 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 388 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 389 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 390 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 391 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 392 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 393 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 394 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 395 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 396 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 397 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 398 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 399 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 400 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 401 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 402 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 403 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 404 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_0
# 405 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 406 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 407 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 408 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_1
# 409 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 410 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 411 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 412 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_2
# 413 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 414 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 415 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 416 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 417 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 418 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerEast
# 419 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 420 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 421 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 422 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 423 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 424 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 425 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 426 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 427 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty::
# 433 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 434 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 435 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 436 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 437 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 438 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerSouth
# 439 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 440 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 441 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 442 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 443 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 444 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 445 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 446 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_0
# 447 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 448 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 449 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 450 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_1
# 451 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 452 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 453 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 454 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_2
# 455 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 456 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 457 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 458 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_3
# 459 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 460 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 461 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 462 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 463 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 464 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 465 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 466 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 467 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 468 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 469 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 470 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 471 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 472 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 473 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerSouth
# 474 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 475 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 476 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 477 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 478 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 479 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 480 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 481 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty::
# 487 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 488 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 489 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 490 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerEast
# 491 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 492 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 493 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 494 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 495 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 496 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 497 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 498 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_0
# 499 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 500 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 501 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 502 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_1
# 503 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 504 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 505 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 506 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 507 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 508 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 509 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 510 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 511 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 512 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 513 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 514 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 515 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 516 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerEast
# 517 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 518 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 519 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 520 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 521 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 522 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 523 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_AceParty::
# 529 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 530 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 531 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 532 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 533 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 534 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 535 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 536 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 537 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 538 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 539 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 540 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_0
# 541 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 542 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 543 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 544 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_1
# 545 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 546 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 547 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 548 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_2
# 549 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 550 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 551 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 552 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 553 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 554 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 555 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 556 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 557 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 558 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 559 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 560 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 561 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 562 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 563 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 564 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 565 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 566 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 567 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 568 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 569 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_TalonParty::
# 575 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 576 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 577 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 578 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerEast
# 579 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 580 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 581 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 582 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 583 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 584 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 585 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 586 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_0
# 587 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 588 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 589 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 590 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_1
# 591 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 592 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 593 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 594 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_2
# 595 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 596 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 597 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 598 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 599 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 600 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 601 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 602 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 603 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 604 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 605 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 606 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 607 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 608 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerEast
# 609 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 610 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 611 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 612 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 613 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 614 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 615 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember::
# 621 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 622 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_0
# 623 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_1
# 624 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 625 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 626 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 627 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 628 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 629 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 630 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 631 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_2
# 632 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 633 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 634 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 635 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 636 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 637 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 638 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 639 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 640 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 641 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 642 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 643 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 644 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 645 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_3
# 646 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 647 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 648 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 649 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 650 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 651 "data/maps/MurkwellBog/scripts.pory"
	release
	end


# 91 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_0:
# 91 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 91 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 96 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_1:
# 96 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 96 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 96 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 96 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 101 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_2:
# 101 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 101 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 105 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_3:
# 105 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 105 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 105 "data/maps/MurkwellBog/scripts.pory"
	walk_up
	step_end

# 106 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_4:
# 106 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 106 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 106 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 106 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 106 "data/maps/MurkwellBog/scripts.pory"
	emote_exclamation_mark
	step_end

# 113 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_5:
# 113 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 113 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 113 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 192 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0:
# 192 "data/maps/MurkwellBog/scripts.pory"
	emote_question_mark
	step_end

# 197 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1:
# 197 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 197 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 197 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_left
	step_end

# 202 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2:
# 202 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 202 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 202 "data/maps/MurkwellBog/scripts.pory"
	walk_left
	step_end

# 280 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0:
# 280 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_left
	step_end

# 284 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1:
# 284 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_down
	step_end

# 288 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2:
# 288 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_right
	step_end

# 292 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3:
# 292 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 298 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4:
# 298 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 622 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_0:
# 622 "data/maps/MurkwellBog/scripts.pory"
	walk_left
# 622 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 622 "data/maps/MurkwellBog/scripts.pory"
	face_right
	step_end

# 623 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_1:
# 623 "data/maps/MurkwellBog/scripts.pory"
	face_left
	step_end

# 631 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_2:
# 631 "data/maps/MurkwellBog/scripts.pory"
	face_down
	step_end

# 645 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_3:
# 645 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 645 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

MurkwellBog_EventScripts_SlowpokeNPC_Text_0:
# 17 "data/maps/MurkwellBog/scripts.pory"
	.string "Huh… I don't remember the swamp bein'\n"
	.string "this… cloudy. These things weren't\l"
	.string "always floatin' around, right? Huh… Was\l"
	.string "it always like this?$"

MurkwellBog_EventScripts_ParasectNPC_Text_0:
# 25 "data/maps/MurkwellBog/scripts.pory"
	.string "The air is… heavy. My spores mix with it,\n"
	.string "but something else lingers here.\l"
	.string "Something that wasn't here before.$"

MurkwellBog_EventScripts_DrowzeeNPC_Text_0:
# 33 "data/maps/MurkwellBog/scripts.pory"
	.string "I tried to enter the temple the other\n"
	.string "night. Ever since, the air feels… thick.\l"
	.string "My dreams feel like I'm breathing it in.$"

MurkwellBog_EventScripts_HaunterNPC_Text_0:
# 41 "data/maps/MurkwellBog/scripts.pory"
	.string "Oh, the temple? Heh… It's just an old\n"
	.string "ruin! Nothin' special… Nope, nothin' at\l"
	.string "all! And, uh, you definitely don't wanna\l"
	.string "go there. Definitely.$"

MurkwellBog_EventScripts_LanturnNPC_Text_0:
# 49 "data/maps/MurkwellBog/scripts.pory"
	.string "My light doesn't reach as far anymore…\n"
	.string "It's like the air itself is swallowing it.\l"
	.string "I've guided Pokémon through here for\l"
	.string "years, but lately, I can barely see the\l"
	.string "way myself.$"

MurkwellBog_EventScripts_HoothootNPC_Text_0:
# 57 "data/maps/MurkwellBog/scripts.pory"
	.string "The temple's always been there. But\n"
	.string "lately… the air around it shimmers. I\l"
	.string "don't like looking at it. It feels like\l"
	.string "it's moving.$"

MurkwellBog_EventScripts_NyxNPC_Text_0:
# 66 "data/maps/MurkwellBog/scripts.pory"
	.string "???$"

MurkwellBog_EventScripts_NyxNPC_Text_1:
# 68 "data/maps/MurkwellBog/scripts.pory"
	.string "Have you retreived the lost items?\p"
	.string "A Hard Stone\p"
	.string "A Spell Tag\p"
	.string "A Charcoal Fragment$"

MurkwellBog_EventScripts_NyxNPC_Text_2:
# 73 "data/maps/MurkwellBog/scripts.pory"
	.string "Go, then.\p"
	.string "Seek what is lost.\p"
	.string "And if the temple answers… perhaps I\n"
	.string "shall walk this path with you.$"

MurkwellBog_EventScripts_NyxNPC_Text_3:
# 87 "data/maps/MurkwellBog/scripts.pory"
	.string "The offerings have been gathered.\p"
	.string "Stand back, I will perform the ritual.$"

MurkwellBog_EventScripts_NyxNPC_Text_4:
# 117 "data/maps/MurkwellBog/scripts.pory"
	.string "…It is done.\p"
	.string "The seal has lifted.\p"
	.string "The temple awaits.$"

MurkwellBog_EventScripts_NyxNPC_Text_5:
# 128 "data/maps/MurkwellBog/scripts.pory"
	.string "A liars tounge will heed you no entry.\p"
	.string "Go, then.\p"
	.string "Seek what is lost.\p"
	.string "And if the temple answers… perhaps I\n"
	.string "shall walk this path with you.$"

MurkwellBog_EventScripts_PsychicNPC_Text_0:
# 139 "data/maps/MurkwellBog/scripts.pory"
	.string "The air hums with echoes of thoughts\n"
	.string "long lost. You hear them too, don't you?\l"
	.string "The voices that aren't yours…?$"

MurkwellBog_EventScripts_InnkeeperNPC_Text_0:
# 148 "data/maps/MurkwellBog/scripts.pory"
	.string "Rest easy, traveler. But if you hear\n"
	.string "whispers in your sleep, best not to\l"
	.string "listen too closely…$"

MurkwellBog_EventScripts_ShopkeeperNPC_Text_0:
# 157 "data/maps/MurkwellBog/scripts.pory"
	.string "Welcome! Got all sorts of goods! Just…\n"
	.string "don't ask where I got 'em. The bog\l"
	.string "provides… heh.$"

MurkwellBog_EventScripts_HomebodyNPC1_Text_0:
# 166 "data/maps/MurkwellBog/scripts.pory"
	.string "I tried painting the swamp once. But\n"
	.string "the colors… they changed when I wasn't\l"
	.string "looking. Like they were alive…$"

MurkwellBog_EventScripts_HomebodyNPC2_Text_0:
# 175 "data/maps/MurkwellBog/scripts.pory"
	.string "You ever notice how the trees move?\n"
	.string "Not just in the wind… they shift when\l"
	.string "you ain't lookin'. Always facin' the\l"
	.string "temple…$"

MurkwellBog_EventScripts_HomebodyNPC3_Text_0:
# 184 "data/maps/MurkwellBog/scripts.pory"
	.string "My kin are buried here… but lately, I\n"
	.string "don't feel alone when I visit. Someone\l"
	.string "else watches the graves…$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_0:
# 206 "data/maps/MurkwellBog/scripts.pory"
	.string "…\p"
	.string "You do not belong here.\p"
	.string "And yet, the voices stir.\p"
	.string "How curious.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_1:
# 207 "data/maps/MurkwellBog/scripts.pory"
	.string "This place does not open its secrets to\n"
	.string "just anyone.\p"
	.string "The lost whisper of those who have come\n"
	.string "before.\p"
	.string "But only one with the right presence\n"
	.string "may listen.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_2:
# 208 "data/maps/MurkwellBog/scripts.pory"
	.string "You… are different.\p"
	.string "The echoes follow you, bending around\n"
	.string "your path.\p"
	.string "That inscription--it reacts to you, not\n"
	.string "the others.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_3:
# 209 "data/maps/MurkwellBog/scripts.pory"
	.string "This door was not always shut.\p"
	.string "Something lingers, unseen.\p"
	.string "Not a lock. Not a barrier.\p"
	.string "Something… watching.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_4:
# 210 "data/maps/MurkwellBog/scripts.pory"
	.string "I have spent long years studying what\n"
	.string "remains of the old ways.\p"
	.string "This seal is unnatural.\p"
	.string "Its origin unknown.\p"
	.string "And yet, there is always a way through.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_5:
# 211 "data/maps/MurkwellBog/scripts.pory"
	.string "The temple rejects the living, but it\n"
	.string "does not ignore the past.\p"
	.string "An offering--proof of those who walked\n"
	.string "before--may force its hand.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_6:
# 212 "data/maps/MurkwellBog/scripts.pory"
	.string "Three remnants must be gathered:\p"
	.string "A Hard Stone\p"
	.string "A Spell Tag\p"
	.string "A Charcoal Fragment$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_7:
# 213 "data/maps/MurkwellBog/scripts.pory"
	.string "Only these may wake the ruin.\p"
	.string "Only then will might path open.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0:
# 276 "data/maps/MurkwellBog/scripts.pory"
	.string "Vee$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1:
# 277 "data/maps/MurkwellBog/scripts.pory"
	.string "Whoa, that was kinda cool.\p"
	.string "So, uh… what do we call you, anyway?$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2:
# 279 "data/maps/MurkwellBog/scripts.pory"
	.string "Names are… fleeting.\p"
	.string "But if you must, you may call me Nyx.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_3:
# 283 "data/maps/MurkwellBog/scripts.pory"
	.string "Sooo… who wants to go first?$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4:
# 286 "data/maps/MurkwellBog/scripts.pory"
	.string "Talon$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_5:
# 287 "data/maps/MurkwellBog/scripts.pory"
	.string "Not it.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6:
# 290 "data/maps/MurkwellBog/scripts.pory"
	.string "Ace$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_7:
# 291 "data/maps/MurkwellBog/scripts.pory"
	.string "Y’know what? I second that.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8:
# 294 "data/maps/MurkwellBog/scripts.pory"
	.string "Drake$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_9:
# 295 "data/maps/MurkwellBog/scripts.pory"
	.string "We all move forward together.\p"
	.string "The ruin waits for none.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10:
# 296 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_11:
# 297 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us not keep it waiting…\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12:
# 303 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx joined your party.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13:
# 307 "data/maps/MurkwellBog/scripts.pory"
	.string "Alright, alright, enough of the spooky\n"
	.string "talk.\p"
	.string "We've got a temple to explore!$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0:
# 339 "data/maps/MurkwellBog/scripts.pory"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_1:
# 351 "data/maps/MurkwellBog/scripts.pory"
	.string "You both look way too calm for what\n"
	.string "just happened.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_2:
# 355 "data/maps/MurkwellBog/scripts.pory"
	.string "Composure is key.\p"
	.string "The unknown does not frighten me.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_3:
# 359 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, yeah, tough guy routine.\p"
	.string "Let’s just hope ‘the unknown’ doesn’t\n"
	.string "fight back.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_0:
# 404 "data/maps/MurkwellBog/scripts.pory"
	.string "Sooo, Talon, you're the lookout guy. Did\n"
	.string "you expect THIS to happen?$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_1:
# 408 "data/maps/MurkwellBog/scripts.pory"
	.string "Didn’t see this coming.\p"
	.string "And I don’t like surprises.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_2:
# 412 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us tread carefully.\p"
	.string "The ruin may yet have more secrets to\n"
	.string "unveil.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_0:
# 446 "data/maps/MurkwellBog/scripts.pory"
	.string "So, we’re actually going in there, huh?$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_1:
# 450 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, ‘cause running away sounds soooo\n"
	.string "smart right now.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_2:
# 454 "data/maps/MurkwellBog/scripts.pory"
	.string "If something goes wrong, we fight our\n"
	.string "way out. Simple.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_3:
# 458 "data/maps/MurkwellBog/scripts.pory"
	.string "Not everything can be fought. Some\n"
	.string "things must be understood.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_0:
# 498 "data/maps/MurkwellBog/scripts.pory"
	.string "Ancient places hold ancient dangers. We\n"
	.string "should tread carefully.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_1:
# 502 "data/maps/MurkwellBog/scripts.pory"
	.string "Caution is wise. But curiosity will serve\n"
	.string "us better.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_0:
# 540 "data/maps/MurkwellBog/scripts.pory"
	.string "You’re awfully quiet, Ace.\p"
	.string "That’s not normal.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_1:
# 544 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, yeah, I know.\p"
	.string "Just… thinking.\p"
	.string "Places like this don’t open for no\n"
	.string "reason.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_2:
# 548 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us see why it stirs.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_0:
# 586 "data/maps/MurkwellBog/scripts.pory"
	.string "C’mon, Talon.\p"
	.string "Say something so I don’t start freaking\n"
	.string "out.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_1:
# 590 "data/maps/MurkwellBog/scripts.pory"
	.string "Just feels like we woke something up.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_2:
# 594 "data/maps/MurkwellBog/scripts.pory"
	.string "We did.\p"
	.string "And now, it watches.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"
