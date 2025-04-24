# 1 "data/maps/MurkwellBog/scripts.pory"

# 2 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_NYX, 7
# 3 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_VEE, 9
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
	applymovement 6, MurkwellBog_EventScripts_HoothootNPC_Movement_0
# 58 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HoothootNPC_Text_0
# 59 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_NyxNPC::
# 66 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 67 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 68 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 69 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_1, MSGBOX_YESNO
# 70 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne MurkwellBog_EventScripts_NyxNPC_1
	checkitem ITEM_CHARCOAL
# 0 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_4
# 128 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 129 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 130 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_5
# 131 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end

MurkwellBog_EventScripts_NyxNPC_1:
# 72 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 73 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 74 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_2
# 75 "data/maps/MurkwellBog/scripts.pory"
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
# 86 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 87 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 88 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_3
# 89 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 90 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 14
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_12
# 95 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 13
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_13
# 102 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_NyxNPC_Movement_2
# 103 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MurkwellBog_EventScripts_NyxNPC_11:
# 105 "data/maps/MurkwellBog/scripts.pory"
	special SpawnCameraObject
# 106 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MurkwellBog_EventScripts_NyxNPC_Movement_3
# 107 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_4
# 108 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 109 "data/maps/MurkwellBog/scripts.pory"
	call CommonEventScript_ScreenShake
# 110 "data/maps/MurkwellBog/scripts.pory"
	playse SE_EFFECTIVE
# 111 "data/maps/MurkwellBog/scripts.pory"
	delay 40
# 112 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 113 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 114 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MurkwellBog_EventScripts_NyxNPC_Movement_5
# 115 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_5
# 116 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 117 "data/maps/MurkwellBog/scripts.pory"
	special RemoveCameraObject
# 118 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 119 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_4
# 120 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 121 "data/maps/MurkwellBog/scripts.pory"
	call Murkwellbog_CommonEventScript_SetLocalIdsToPlayerXY
# 122 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_CommonEventScript_DetermineParty
	return

MurkwellBog_EventScripts_NyxNPC_12:
# 92 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_NyxNPC_Movement_0
# 93 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_NyxNPC_11

MurkwellBog_EventScripts_NyxNPC_13:
# 97 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_NyxNPC_Movement_1
# 98 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_NyxNPC_11


MurkwellBog_EventScripts_InnkeeperNPC::
# 141 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 142 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_InnkeeperNPC_Text_0
# 143 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_ShopkeeperNPC::
# 150 "data/maps/MurkwellBog/scripts.pory"
	lock
# 151 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ShopkeeperNPC_Text_0
# 152 "data/maps/MurkwellBog/scripts.pory"
	waitmessage
# 153 "data/maps/MurkwellBog/scripts.pory"
	pokemart MurkwellBog_MartItems
# 154 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ShopkeeperNPC_Text_1
# 155 "data/maps/MurkwellBog/scripts.pory"
	release
	end


	.align 2
# 159 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_MartItems:
# 161 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 162 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 163 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 164 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 165 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 166 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 167 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_TINYMUSHROOM
# 168 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_BIG_MUSHROOM
# 169 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 170 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_NONE

MurkwellBog_EventScripts_HomebodyNPC1::
# 176 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 177 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC1_Text_0, MSGBOX_NPC
# 178 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC2::
# 185 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 186 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC2_Text_0, MSGBOX_NPC
# 187 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC3::
# 194 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 195 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC3_Text_0, MSGBOX_NPC
# 196 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_ShopNPC_Gloom::
# 202 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 203 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_ShopNPC_Gloom_Text_0, MSGBOX_NPC
# 204 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_ShopNPC_Dunsparce::
# 210 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 211 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_ShopNPC_Dunsparce_Text_0, MSGBOX_NPC
# 212 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_ShopNPC_Haunter::
# 218 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 219 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_ShopNPC_Haunter_Text_0, MSGBOX_NPC
# 220 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Breloom::
# 226 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 227 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Breloom_Text_0, MSGBOX_NPC
# 228 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Quagsire::
# 234 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 235 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Quagsire_Text_0, MSGBOX_NPC
# 236 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Sableye::
# 242 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 243 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Sableye_Text_0, MSGBOX_NPC
# 244 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Bellossom::
# 250 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 251 "data/maps/MurkwellBog/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LUM_BERRY_MURKWELL_BOG, MurkwellBog_InnNPC_Bellossom_2
# 259 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Bellossom_Text_1, MSGBOX_NPC
MurkwellBog_InnNPC_Bellossom_1:
# 261 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end

MurkwellBog_InnNPC_Bellossom_2:
# 253 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Bellossom_Text_0, MSGBOX_NPC
# 254 "data/maps/MurkwellBog/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 255 "data/maps/MurkwellBog/scripts.pory"
	setflag FLAG_RECEIVED_LUM_BERRY_MURKWELL_BOG
	goto MurkwellBog_InnNPC_Bellossom_1


MurkwellBog_EventScripts_TempleNeedsRitual::
# 268 "data/maps/MurkwellBog/scripts.pory"
	lock
# 269 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0
# 270 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 271 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 272 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 16
	goto_if_lt MurkwellBog_EventScripts_TempleNeedsRitual_2
# 279 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2
# 280 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MurkwellBog_EventScripts_TempleNeedsRitual_1:
# 282 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 283 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_0
# 284 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_1
# 285 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_2
# 286 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_3
# 287 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_4
# 288 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_5
# 289 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_6
# 290 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_7
# 291 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_2
# 292 "data/maps/MurkwellBog/scripts.pory"
	setvar VAR_MURKWELL_BOG_STATE, 1
# 293 "data/maps/MurkwellBog/scripts.pory"
	release
	end

MurkwellBog_EventScripts_TempleNeedsRitual_2:
# 274 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1
# 275 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_TempleNeedsRitual_1


Murkwellbog_CommonEventScript_SetLocalIdsToPlayerXY::
# 299 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 300 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 301 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, PlayerXCoordinates, PlayerYCoordinates
# 302 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_TALON, PlayerXCoordinates, PlayerYCoordinates
# 303 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_ACE, PlayerXCoordinates, PlayerYCoordinates
	return


Murkwellbog_CommonEventScript_DetermineParty::
# 309 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_22
Murkwellbog_CommonEventScript_DetermineParty_19:
# 313 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_18
Murkwellbog_CommonEventScript_DetermineParty_16:
# 317 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_15
Murkwellbog_CommonEventScript_DetermineParty_13:
# 321 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_12
Murkwellbog_CommonEventScript_DetermineParty_11:
# 325 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_5
# 329 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_6
# 333 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_7
# 339 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember
	return

Murkwellbog_CommonEventScript_DetermineParty_1:
# 311 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_FullParty
	return

Murkwellbog_CommonEventScript_DetermineParty_2:
# 315 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty
	return

Murkwellbog_CommonEventScript_DetermineParty_3:
# 319 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_4:
# 323 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_5:
# 327 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty
	return

Murkwellbog_CommonEventScript_DetermineParty_6:
# 331 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_AceParty
	return

Murkwellbog_CommonEventScript_DetermineParty_7:
# 335 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_TalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_12:
# 321 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_4
	goto Murkwellbog_CommonEventScript_DetermineParty_11

Murkwellbog_CommonEventScript_DetermineParty_15:
# 317 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_3
	goto Murkwellbog_CommonEventScript_DetermineParty_13

Murkwellbog_CommonEventScript_DetermineParty_18:
# 313 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_2
	goto Murkwellbog_CommonEventScript_DetermineParty_16

Murkwellbog_CommonEventScript_DetermineParty_21:
# 309 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_1
	goto Murkwellbog_CommonEventScript_DetermineParty_19

Murkwellbog_CommonEventScript_DetermineParty_22:
# 309 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_21
	goto Murkwellbog_CommonEventScript_DetermineParty_19


Murkwellbog_EventScript_NyxOpenedTemple_FullParty::
# 345 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 346 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 347 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 348 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 349 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 350 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 351 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerSouth
# 352 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerNorthWest
# 353 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 354 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 355 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 356 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 357 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 358 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 359 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 360 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_3
# 361 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 362 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 363 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 364 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_5
# 365 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 366 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 367 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 368 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_7
# 369 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 370 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 371 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 372 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_9
# 373 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 374 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_11
# 375 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 376 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 377 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 378 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 379 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 380 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 381 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 382 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 383 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 384 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 385 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 386 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 387 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 388 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 389 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerSouth
# 390 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerNorthwest
# 391 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 392 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 393 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 394 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 395 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 396 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 397 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 398 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 399 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty::
# 405 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 406 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 407 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 408 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 409 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 410 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerSouth
# 411 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 412 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 413 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 414 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 415 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 416 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 417 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 418 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 419 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 420 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 421 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 422 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 423 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 424 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 425 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 426 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 427 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 428 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_1
# 429 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 430 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 431 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 432 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_2
# 433 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 434 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 435 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 436 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_3
# 437 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 438 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 439 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 440 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 441 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 442 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 443 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 444 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 445 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 446 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 447 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 448 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 449 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 450 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 451 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty::
# 458 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 459 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 460 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 461 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 462 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerEast
# 463 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerSouth
# 464 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 465 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 466 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 467 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 468 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 469 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 470 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 471 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 472 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 473 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 474 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 475 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 476 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 477 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 478 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 479 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 480 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 481 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_0
# 482 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 483 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 484 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 485 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_1
# 486 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 487 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 488 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 489 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_2
# 490 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 491 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 492 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 493 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 494 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 495 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerEast
# 496 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 497 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 498 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 499 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 500 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 501 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 502 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 503 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 504 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty::
# 510 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 511 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 512 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 513 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 514 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 515 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerSouth
# 516 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 517 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 518 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 519 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 520 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 521 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 522 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 523 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_0
# 524 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 525 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 526 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 527 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_1
# 528 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 529 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 530 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 531 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_2
# 532 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 533 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 534 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 535 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_3
# 536 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 537 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 538 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 539 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 540 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 541 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 542 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 543 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 544 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 545 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 546 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 547 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 548 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 549 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 550 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerSouth
# 551 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 552 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 553 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 554 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 555 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 556 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 557 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 558 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty::
# 564 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 565 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 566 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 567 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerEast
# 568 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 569 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 570 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 571 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 572 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 573 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 574 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 575 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_0
# 576 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 577 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 578 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 579 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_1
# 580 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 581 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 582 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 583 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 584 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 585 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 586 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 587 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 588 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 589 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 590 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 591 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 592 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 593 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerEast
# 594 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 595 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 596 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 597 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 598 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 599 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 600 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_AceParty::
# 606 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 607 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 608 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 609 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 610 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 611 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 612 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 613 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 614 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 615 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 616 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 617 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_0
# 618 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 619 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 620 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 621 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_1
# 622 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 623 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 624 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 625 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_2
# 626 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 627 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 628 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 629 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 630 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 631 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 632 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 633 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 634 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 635 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 636 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 637 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 638 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 639 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 640 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 641 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 642 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 643 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 644 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 645 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 646 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_TalonParty::
# 652 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 653 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 654 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 655 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerEast
# 656 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 657 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 658 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 659 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 660 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 661 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 662 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 663 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_0
# 664 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 665 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 666 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 667 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_1
# 668 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 669 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 670 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 671 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_2
# 672 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 673 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 674 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 675 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 676 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 677 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 678 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 679 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 680 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 681 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 682 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 683 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 684 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 685 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerEast
# 686 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 687 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 688 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 689 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 690 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 691 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 692 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember::
# 698 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_VEE
# 699 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_0
# 700 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_1
# 701 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 702 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 703 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 704 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 705 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 706 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 707 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 708 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_HoothootNPC_Movement_0
# 709 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 710 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 711 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 712 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 713 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 714 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 715 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 716 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 717 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 718 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 719 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 720 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 721 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 722 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_VEE, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_2
# 723 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_VEE
# 724 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_VEE
# 725 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 726 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 727 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 728 "data/maps/MurkwellBog/scripts.pory"
	release
	end


# 57 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_HoothootNPC_Movement_0:
# 57 "data/maps/MurkwellBog/scripts.pory"
	face_down
	step_end

# 92 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_0:
# 92 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 92 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 97 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_1:
# 97 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 97 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 97 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 97 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 102 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_2:
# 102 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 102 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 106 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_3:
# 106 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 106 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 106 "data/maps/MurkwellBog/scripts.pory"
	walk_up
	step_end

# 107 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_4:
# 107 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 107 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 107 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 107 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 107 "data/maps/MurkwellBog/scripts.pory"
	emote_exclamation_mark
	step_end

# 114 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_5:
# 114 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 114 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 114 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 269 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0:
# 269 "data/maps/MurkwellBog/scripts.pory"
	emote_question_mark
	step_end

# 274 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1:
# 274 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 274 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 274 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_left
	step_end

# 279 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2:
# 279 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 279 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 279 "data/maps/MurkwellBog/scripts.pory"
	walk_left
	step_end

# 357 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0:
# 357 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_left
	step_end

# 361 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1:
# 361 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_down
	step_end

# 365 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2:
# 365 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_right
	step_end

# 369 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3:
# 369 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 375 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4:
# 375 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 699 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_0:
# 699 "data/maps/MurkwellBog/scripts.pory"
	walk_left
# 699 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 699 "data/maps/MurkwellBog/scripts.pory"
	face_right
	step_end

# 700 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_1:
# 700 "data/maps/MurkwellBog/scripts.pory"
	face_left
	step_end

# 722 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_2:
# 722 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 722 "data/maps/MurkwellBog/scripts.pory"
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
# 58 "data/maps/MurkwellBog/scripts.pory"
	.string "The temple's always been there. But\n"
	.string "lately… the air around it shimmers. I\l"
	.string "don't like looking at it. It feels like\l"
	.string "it's moving.$"

MurkwellBog_EventScripts_NyxNPC_Text_0:
# 67 "data/maps/MurkwellBog/scripts.pory"
	.string "???$"

MurkwellBog_EventScripts_NyxNPC_Text_1:
# 69 "data/maps/MurkwellBog/scripts.pory"
	.string "Have you retreived the lost items?\p"
	.string "A Hard Stone\p"
	.string "A Spell Tag\p"
	.string "A Charcoal Fragment$"

MurkwellBog_EventScripts_NyxNPC_Text_2:
# 74 "data/maps/MurkwellBog/scripts.pory"
	.string "Go, then.\p"
	.string "Seek what is lost.\p"
	.string "And if the temple answers… perhaps I\n"
	.string "shall walk this path with you.$"

MurkwellBog_EventScripts_NyxNPC_Text_3:
# 88 "data/maps/MurkwellBog/scripts.pory"
	.string "The offerings have been gathered.\p"
	.string "Stand back, I will perform the ritual.$"

MurkwellBog_EventScripts_NyxNPC_Text_4:
# 119 "data/maps/MurkwellBog/scripts.pory"
	.string "…It is done.\p"
	.string "The seal has lifted.\p"
	.string "The temple awaits.$"

MurkwellBog_EventScripts_NyxNPC_Text_5:
# 130 "data/maps/MurkwellBog/scripts.pory"
	.string "A liars tounge will heed you no entry.\p"
	.string "Go, then.\p"
	.string "Seek what is lost.\p"
	.string "And if the temple answers… perhaps I\n"
	.string "shall walk this path with you.$"

MurkwellBog_EventScripts_InnkeeperNPC_Text_0:
# 142 "data/maps/MurkwellBog/scripts.pory"
	.string "Rest easy, traveler. But if you hear\n"
	.string "whispers in your sleep, best not to\l"
	.string "listen too closely…$"

MurkwellBog_EventScripts_ShopkeeperNPC_Text_0:
# 151 "data/maps/MurkwellBog/scripts.pory"
	.string "Welcome! Got all sorts of goods! Just…\n"
	.string "don't ask where I got 'em. The bog\l"
	.string "provides… heh.$"

MurkwellBog_EventScripts_ShopkeeperNPC_Text_1:
# 154 "data/maps/MurkwellBog/scripts.pory"
	.string "Come again soon…$"

MurkwellBog_EventScripts_HomebodyNPC1_Text_0:
# 177 "data/maps/MurkwellBog/scripts.pory"
	.string "I tried painting the swamp once. But\n"
	.string "the colors… they changed when I wasn't\l"
	.string "looking. Like they were alive…$"

MurkwellBog_EventScripts_HomebodyNPC2_Text_0:
# 186 "data/maps/MurkwellBog/scripts.pory"
	.string "You ever notice how the trees move?\n"
	.string "Not just in the wind… they shift when\l"
	.string "you ain't lookin'. Always facin' the\l"
	.string "temple…$"

MurkwellBog_EventScripts_HomebodyNPC3_Text_0:
# 195 "data/maps/MurkwellBog/scripts.pory"
	.string "My kin are buried here… but lately, I\n"
	.string "don't feel alone when I visit. Someone\l"
	.string "else watches the graves…$"

MurkwellBog_ShopNPC_Gloom_Text_0:
# 203 "data/maps/MurkwellBog/scripts.pory"
	.string "Mmm... need more supplies.\p"
	.string "Never know when the swamp might turn\n"
	.string "against you.\p"
	.string "Been hearing things--whispers on the\n"
	.string "wind.\p"
	.string "Stocking up is just common sense.$"

MurkwellBog_ShopNPC_Dunsparce_Text_0:
# 211 "data/maps/MurkwellBog/scripts.pory"
	.string "Pfft. These prices are criminal!\p"
	.string "I could find better deals in Voltbrook\n"
	.string "Town!\p"
	.string "...But, uh, gettin' back there? Kinda\n"
	.string "tricky.\p"
	.string "Ugh. Fine, take my money.$"

MurkwellBog_ShopNPC_Haunter_Text_0:
# 219 "data/maps/MurkwellBog/scripts.pory"
	.string "Heheheh... so many interesting items\n"
	.string "here.\p"
	.string "Ooooh, Cleanse Tags? I love Cleanse\n"
	.string "Tags.\p"
	.string "Not for cursing or anything! Just, uh…\n"
	.string "for a friend.$"

MurkwellBog_InnNPC_Breloom_Text_0:
# 227 "data/maps/MurkwellBog/scripts.pory"
	.string "Been traveling a long way.\p"
	.string "But somethin' about this place...\p"
	.string "The air feels off.\p"
	.string "Like something's watching.$"

MurkwellBog_InnNPC_Quagsire_Text_0:
# 235 "data/maps/MurkwellBog/scripts.pory"
	.string "Ahhh... comfy bed, warm meal.\p"
	.string "Nothin’ weird about this place at all.\p"
	.string "Nope. Not a thing.$"

MurkwellBog_InnNPC_Sableye_Text_0:
# 243 "data/maps/MurkwellBog/scripts.pory"
	.string "Eheheh... spooky stories?\p"
	.string "I ain’t scared. Nope, not at all.\p"
	.string "B-but you totally saw that shadow\n"
	.string "move, right?$"

MurkwellBog_InnNPC_Bellossom_Text_0:
# 253 "data/maps/MurkwellBog/scripts.pory"
	.string "Long journeys can wear a Pokémon down.\p"
	.string "Here, take this!\p"
	.string "It always helps me keep going.$"

MurkwellBog_InnNPC_Bellossom_Text_1:
# 259 "data/maps/MurkwellBog/scripts.pory"
	.string "Long journeys can wear a Pokémon down.\p"
	.string "I always make sure to rest at the local\n"
	.string "inn every time I arrive at a new area!$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_0:
# 283 "data/maps/MurkwellBog/scripts.pory"
	.string "…\p"
	.string "You do not belong here.\p"
	.string "And yet, the voices stir.\p"
	.string "How curious.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_1:
# 284 "data/maps/MurkwellBog/scripts.pory"
	.string "This place does not open its secrets to\n"
	.string "just anyone.\p"
	.string "The lost whisper of those who have come\n"
	.string "before.\p"
	.string "But only one with the right presence\n"
	.string "may listen.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_2:
# 285 "data/maps/MurkwellBog/scripts.pory"
	.string "You… are different.\p"
	.string "The echoes follow you, bending around\n"
	.string "your path.\p"
	.string "That inscription--it reacts to you, not\n"
	.string "the others.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_3:
# 286 "data/maps/MurkwellBog/scripts.pory"
	.string "This door was not always shut.\p"
	.string "Something lingers, unseen.\p"
	.string "Not a lock. Not a barrier.\p"
	.string "Something… watching.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_4:
# 287 "data/maps/MurkwellBog/scripts.pory"
	.string "I have spent long years studying what\n"
	.string "remains of the old ways.\p"
	.string "This seal is unnatural.\p"
	.string "Its origin unknown.\p"
	.string "And yet, there is always a way through.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_5:
# 288 "data/maps/MurkwellBog/scripts.pory"
	.string "The temple rejects the living, but it\n"
	.string "does not ignore the past.\p"
	.string "An offering--proof of those who walked\n"
	.string "before--may force its hand.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_6:
# 289 "data/maps/MurkwellBog/scripts.pory"
	.string "Three remnants must be gathered:\p"
	.string "A Hard Stone\p"
	.string "A Spell Tag\p"
	.string "A Charcoal Fragment$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_7:
# 290 "data/maps/MurkwellBog/scripts.pory"
	.string "Only these may wake the ruin.\p"
	.string "Only then will might path open.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0:
# 353 "data/maps/MurkwellBog/scripts.pory"
	.string "Vee$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1:
# 354 "data/maps/MurkwellBog/scripts.pory"
	.string "Whoa, that was kinda cool.\p"
	.string "So, uh… what do we call you, anyway?$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2:
# 356 "data/maps/MurkwellBog/scripts.pory"
	.string "Names are… fleeting.\p"
	.string "But if you must, you may call me Nyx.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_3:
# 360 "data/maps/MurkwellBog/scripts.pory"
	.string "Sooo… who wants to go first?$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4:
# 363 "data/maps/MurkwellBog/scripts.pory"
	.string "Talon$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_5:
# 364 "data/maps/MurkwellBog/scripts.pory"
	.string "Not it.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6:
# 367 "data/maps/MurkwellBog/scripts.pory"
	.string "Ace$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_7:
# 368 "data/maps/MurkwellBog/scripts.pory"
	.string "Y’know what? I second that.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8:
# 371 "data/maps/MurkwellBog/scripts.pory"
	.string "Drake$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_9:
# 372 "data/maps/MurkwellBog/scripts.pory"
	.string "We all move forward together.\p"
	.string "The ruin waits for none.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10:
# 373 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_11:
# 374 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us not keep it waiting…\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12:
# 380 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx joined your party.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13:
# 384 "data/maps/MurkwellBog/scripts.pory"
	.string "Alright, alright, enough of the spooky\n"
	.string "talk.\p"
	.string "We've got a temple to explore!$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0:
# 416 "data/maps/MurkwellBog/scripts.pory"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_1:
# 428 "data/maps/MurkwellBog/scripts.pory"
	.string "You both look way too calm for what\n"
	.string "just happened.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_2:
# 432 "data/maps/MurkwellBog/scripts.pory"
	.string "Composure is key.\p"
	.string "The unknown does not frighten me.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_3:
# 436 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, yeah, tough guy routine.\p"
	.string "Let’s just hope ‘the unknown’ doesn’t\n"
	.string "fight back.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_0:
# 481 "data/maps/MurkwellBog/scripts.pory"
	.string "Sooo, Talon, you're the lookout guy. Did\n"
	.string "you expect THIS to happen?$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_1:
# 485 "data/maps/MurkwellBog/scripts.pory"
	.string "Didn’t see this coming.\p"
	.string "And I don’t like surprises.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_2:
# 489 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us tread carefully.\p"
	.string "The ruin may yet have more secrets to\n"
	.string "unveil.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_0:
# 523 "data/maps/MurkwellBog/scripts.pory"
	.string "So, we’re actually going in there, huh?$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_1:
# 527 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, ‘cause running away sounds soooo\n"
	.string "smart right now.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_2:
# 531 "data/maps/MurkwellBog/scripts.pory"
	.string "If something goes wrong, we fight our\n"
	.string "way out. Simple.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_3:
# 535 "data/maps/MurkwellBog/scripts.pory"
	.string "Not everything can be fought. Some\n"
	.string "things must be understood.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_0:
# 575 "data/maps/MurkwellBog/scripts.pory"
	.string "Ancient places hold ancient dangers. We\n"
	.string "should tread carefully.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_1:
# 579 "data/maps/MurkwellBog/scripts.pory"
	.string "Caution is wise. But curiosity will serve\n"
	.string "us better.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_0:
# 617 "data/maps/MurkwellBog/scripts.pory"
	.string "You’re awfully quiet, Ace.\p"
	.string "That’s not normal.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_1:
# 621 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, yeah, I know.\p"
	.string "Just… thinking.\p"
	.string "Places like this don’t open for no\n"
	.string "reason.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_2:
# 625 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us see why it stirs.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_0:
# 663 "data/maps/MurkwellBog/scripts.pory"
	.string "C’mon, Talon.\p"
	.string "Say something so I don’t start freaking\n"
	.string "out.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_1:
# 667 "data/maps/MurkwellBog/scripts.pory"
	.string "Just feels like we woke something up.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_2:
# 671 "data/maps/MurkwellBog/scripts.pory"
	.string "We did.\p"
	.string "And now, it watches.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"
