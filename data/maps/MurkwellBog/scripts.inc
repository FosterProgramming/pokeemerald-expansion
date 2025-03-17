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
# 127 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 128 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 129 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_5
# 130 "data/maps/MurkwellBog/scripts.pory"
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
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 118 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_4
# 119 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 120 "data/maps/MurkwellBog/scripts.pory"
	call Murkwellbog_CommonEventScript_SetLocalIdsToPlayerXY
# 121 "data/maps/MurkwellBog/scripts.pory"
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


MurkwellBog_EventScripts_PsychicNPC::
# 139 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 140 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_PsychicNPC_Text_0
# 141 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_InnkeeperNPC::
# 148 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 149 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_InnkeeperNPC_Text_0
# 150 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_ShopkeeperNPC::
# 157 "data/maps/MurkwellBog/scripts.pory"
	lock
# 158 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ShopkeeperNPC_Text_0
# 159 "data/maps/MurkwellBog/scripts.pory"
	waitmessage
# 160 "data/maps/MurkwellBog/scripts.pory"
	pokemart MurkwellBog_MartItems
# 161 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ShopkeeperNPC_Text_1
# 162 "data/maps/MurkwellBog/scripts.pory"
	release
	end


	.align 2
# 166 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_MartItems:
# 168 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_CLEANSE_TAG
# 169 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_TWISTED_SPOON
# 170 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_BIG_ROOT
# 171 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 172 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_ENERGY_ROOT
# 173 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 174 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_TINYMUSHROOM
# 175 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_BIG_MUSHROOM
# 176 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_SITRUS_BERRY
# 177 "data/maps/MurkwellBog/scripts.pory"
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_NONE

MurkwellBog_EventScripts_HomebodyNPC1::
# 183 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 184 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC1_Text_0, MSGBOX_NPC
# 185 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC2::
# 192 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 193 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC2_Text_0, MSGBOX_NPC
# 194 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC3::
# 201 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 202 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC3_Text_0, MSGBOX_NPC
# 203 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_ShopNPC_Gloom::
# 209 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 210 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_ShopNPC_Gloom_Text_0
# 211 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_ShopNPC_Dunsparce::
# 217 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 218 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_ShopNPC_Dunsparce_Text_0
# 219 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_ShopNPC_Haunter::
# 225 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 226 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_ShopNPC_Haunter_Text_0
# 227 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Breloom::
# 233 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 234 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Breloom_Text_0
# 235 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Quagsire::
# 241 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 242 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Quagsire_Text_0
# 243 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Sableye::
# 249 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 250 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Sableye_Text_0
# 251 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_InnNPC_Bellossom::
# 257 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 258 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_InnNPC_Bellossom_Text_0
# 259 "data/maps/MurkwellBog/scripts.pory"
	goto_if_unset FLAG_RECEIVED_LUM_BERRY_MURKWELL_BOG, MurkwellBog_InnNPC_Bellossom_2
MurkwellBog_InnNPC_Bellossom_1:
# 264 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end

MurkwellBog_InnNPC_Bellossom_2:
# 261 "data/maps/MurkwellBog/scripts.pory"
	giveitem ITEM_LUM_BERRY, 1
# 262 "data/maps/MurkwellBog/scripts.pory"
	setflag FLAG_RECEIVED_LUM_BERRY_MURKWELL_BOG
	goto MurkwellBog_InnNPC_Bellossom_1


MurkwellBog_EventScripts_TempleNeedsRitual::
# 271 "data/maps/MurkwellBog/scripts.pory"
	lock
# 272 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0
# 273 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 274 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 275 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 16
	goto_if_lt MurkwellBog_EventScripts_TempleNeedsRitual_2
# 282 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2
# 283 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MurkwellBog_EventScripts_TempleNeedsRitual_1:
# 285 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 286 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_0
# 287 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_1
# 288 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_2
# 289 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_3
# 290 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_4
# 291 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_5
# 292 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_6
# 293 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_7
# 294 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_2
# 295 "data/maps/MurkwellBog/scripts.pory"
	setvar VAR_MURKWELL_BOG_STATE, 1
# 296 "data/maps/MurkwellBog/scripts.pory"
	release
	end

MurkwellBog_EventScripts_TempleNeedsRitual_2:
# 277 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1
# 278 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_TempleNeedsRitual_1


Murkwellbog_CommonEventScript_SetLocalIdsToPlayerXY::
# 302 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 303 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 304 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, PlayerXCoordinates, PlayerYCoordinates
# 305 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_TALON, PlayerXCoordinates, PlayerYCoordinates
# 306 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_ACE, PlayerXCoordinates, PlayerYCoordinates
	return


Murkwellbog_CommonEventScript_DetermineParty::
# 312 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_22
Murkwellbog_CommonEventScript_DetermineParty_19:
# 316 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_18
Murkwellbog_CommonEventScript_DetermineParty_16:
# 320 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_15
Murkwellbog_CommonEventScript_DetermineParty_13:
# 324 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_12
Murkwellbog_CommonEventScript_DetermineParty_11:
# 328 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, Murkwellbog_CommonEventScript_DetermineParty_5
# 332 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_6
# 336 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_7
# 342 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember
	return

Murkwellbog_CommonEventScript_DetermineParty_1:
# 314 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_FullParty
	return

Murkwellbog_CommonEventScript_DetermineParty_2:
# 318 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty
	return

Murkwellbog_CommonEventScript_DetermineParty_3:
# 322 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_4:
# 326 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_5:
# 330 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty
	return

Murkwellbog_CommonEventScript_DetermineParty_6:
# 334 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_AceParty
	return

Murkwellbog_CommonEventScript_DetermineParty_7:
# 338 "data/maps/MurkwellBog/scripts.pory"
	goto Murkwellbog_EventScript_NyxOpenedTemple_TalonParty
	return

Murkwellbog_CommonEventScript_DetermineParty_12:
# 324 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_4
	goto Murkwellbog_CommonEventScript_DetermineParty_11

Murkwellbog_CommonEventScript_DetermineParty_15:
# 320 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_3
	goto Murkwellbog_CommonEventScript_DetermineParty_13

Murkwellbog_CommonEventScript_DetermineParty_18:
# 316 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_2
	goto Murkwellbog_CommonEventScript_DetermineParty_16

Murkwellbog_CommonEventScript_DetermineParty_21:
# 312 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, Murkwellbog_CommonEventScript_DetermineParty_1
	goto Murkwellbog_CommonEventScript_DetermineParty_19

Murkwellbog_CommonEventScript_DetermineParty_22:
# 312 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, Murkwellbog_CommonEventScript_DetermineParty_21
	goto Murkwellbog_CommonEventScript_DetermineParty_19


Murkwellbog_EventScript_NyxOpenedTemple_FullParty::
# 348 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 349 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 350 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 351 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 352 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 353 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 354 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerSouth
# 355 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerNorthWest
# 356 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 357 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 358 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 359 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 360 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 361 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 362 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 363 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_3
# 364 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 365 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 366 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 367 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_5
# 368 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 369 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 370 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 371 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_7
# 372 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 373 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 374 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 375 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_9
# 376 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 377 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_11
# 378 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 379 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 380 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 381 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 382 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 383 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 384 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 385 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 386 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 387 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 388 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 389 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 390 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 391 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 392 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerSouth
# 393 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerNorthwest
# 394 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 395 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 396 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 397 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 398 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 399 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 400 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 401 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 402 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty::
# 408 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 409 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 410 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 411 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 412 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 413 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerSouth
# 414 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 415 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 416 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 417 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 418 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 419 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 420 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 421 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 422 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 423 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 424 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 425 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 426 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 427 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 428 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 429 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 430 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 431 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_1
# 432 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 433 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 434 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 435 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_2
# 436 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 437 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 438 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 439 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_3
# 440 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 441 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 442 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 443 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 444 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 445 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 446 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 447 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 448 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 449 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 450 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 451 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 452 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 453 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 454 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty::
# 461 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 462 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 463 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 464 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 465 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerEast
# 466 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerSouth
# 467 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 468 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 469 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 470 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 471 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 472 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 473 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 474 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 475 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 476 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 477 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 478 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 479 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 480 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 481 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 482 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 483 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 484 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_0
# 485 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 486 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 487 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 488 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_1
# 489 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 490 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 491 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 492 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_2
# 493 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 494 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 495 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 496 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 497 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 498 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerEast
# 499 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 500 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 501 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 502 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 503 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 504 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 505 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 506 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 507 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty::
# 513 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 514 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 515 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 516 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 517 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 518 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerSouth
# 519 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 520 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 521 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 522 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 523 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 524 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 525 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 526 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_0
# 527 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 528 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 529 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 530 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_1
# 531 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1
# 532 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 533 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 534 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_2
# 535 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 536 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 537 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 538 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_3
# 539 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 540 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 541 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 542 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 543 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 544 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 545 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 546 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 547 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 548 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 549 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 550 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 551 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 552 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 553 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerSouth
# 554 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 555 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 556 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 557 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 558 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 559 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 560 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 561 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty::
# 567 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 568 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 569 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 570 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberTalksToPlayerEast
# 571 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 572 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 573 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 574 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 575 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 576 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 577 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8
# 578 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_0
# 579 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 580 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 581 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 582 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_1
# 583 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 584 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 585 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 586 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 587 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 588 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 589 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 590 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 591 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 592 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 593 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 594 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 595 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 596 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, Common_Movement_PartyMemberReturnsToPlayerEast
# 597 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 598 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 599 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
# 600 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 601 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 602 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 603 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_AceParty::
# 609 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 610 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_ACE
# 611 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 612 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberTalksToPlayerEast
# 613 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 614 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 615 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 616 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 617 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 618 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 619 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 620 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_0
# 621 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 622 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 623 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6
# 624 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_1
# 625 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 626 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 627 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 628 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_2
# 629 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 630 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 631 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 632 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 633 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 634 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 635 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 636 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 637 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 638 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 639 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 640 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 641 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 642 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_ACE, Common_Movement_PartyMemberReturnsToPlayerEast
# 643 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 644 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 645 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_ACE
# 646 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 647 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 648 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 649 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_TalonParty::
# 655 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 656 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_TALON
# 657 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberTalksToPlayerWest
# 658 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberTalksToPlayerEast
# 659 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 660 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 661 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 662 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 663 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 664 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 665 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 666 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_0
# 667 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2
# 668 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 669 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4
# 670 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_1
# 671 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3
# 672 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 673 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 674 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_2
# 675 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 676 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 677 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 678 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 679 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 680 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 681 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0
# 682 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 683 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 684 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 685 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 686 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 687 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 688 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_TALON, Common_Movement_PartyMemberReturnsToPlayerEast
# 689 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 690 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 691 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_TALON
# 692 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 693 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 694 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 695 "data/maps/MurkwellBog/scripts.pory"
	release
	end


Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember::
# 701 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 702 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_0
# 703 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_1
# 704 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 705 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 706 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 707 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 708 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1
# 709 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 710 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2
# 711 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_HoothootNPC_Movement_0
# 712 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 713 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10
# 714 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0
# 715 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4
# 716 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 717 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 718 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 719 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 720 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12
# 721 "data/maps/MurkwellBog/scripts.pory"
	speakername Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0
# 722 "data/maps/MurkwellBog/scripts.pory"
	msgbox Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13
# 723 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 724 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 725 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_2
# 726 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 727 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
# 728 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 729 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 730 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 731 "data/maps/MurkwellBog/scripts.pory"
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

# 272 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0:
# 272 "data/maps/MurkwellBog/scripts.pory"
	emote_question_mark
	step_end

# 277 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1:
# 277 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 277 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 277 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_left
	step_end

# 282 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2:
# 282 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 282 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 282 "data/maps/MurkwellBog/scripts.pory"
	walk_left
	step_end

# 360 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_0:
# 360 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_left
	step_end

# 364 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_1:
# 364 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_down
	step_end

# 368 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_2:
# 368 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_right
	step_end

# 372 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_3:
# 372 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 378 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Movement_4:
# 378 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 702 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_0:
# 702 "data/maps/MurkwellBog/scripts.pory"
	walk_left
# 702 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 702 "data/maps/MurkwellBog/scripts.pory"
	face_right
	step_end

# 703 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_1:
# 703 "data/maps/MurkwellBog/scripts.pory"
	face_left
	step_end

# 725 "data/maps/MurkwellBog/scripts.pory"
Murkwellbog_EventScript_NyxOpenedTemple_VeeOnlyPartyMember_Movement_2:
# 725 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 725 "data/maps/MurkwellBog/scripts.pory"
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
# 118 "data/maps/MurkwellBog/scripts.pory"
	.string "…It is done.\p"
	.string "The seal has lifted.\p"
	.string "The temple awaits.$"

MurkwellBog_EventScripts_NyxNPC_Text_5:
# 129 "data/maps/MurkwellBog/scripts.pory"
	.string "A liars tounge will heed you no entry.\p"
	.string "Go, then.\p"
	.string "Seek what is lost.\p"
	.string "And if the temple answers… perhaps I\n"
	.string "shall walk this path with you.$"

MurkwellBog_EventScripts_PsychicNPC_Text_0:
# 140 "data/maps/MurkwellBog/scripts.pory"
	.string "The air hums with echoes of thoughts\n"
	.string "long lost. You hear them too, don't you?\l"
	.string "The voices that aren't yours…?$"

MurkwellBog_EventScripts_InnkeeperNPC_Text_0:
# 149 "data/maps/MurkwellBog/scripts.pory"
	.string "Rest easy, traveler. But if you hear\n"
	.string "whispers in your sleep, best not to\l"
	.string "listen too closely…$"

MurkwellBog_EventScripts_ShopkeeperNPC_Text_0:
# 158 "data/maps/MurkwellBog/scripts.pory"
	.string "Welcome! Got all sorts of goods! Just…\n"
	.string "don't ask where I got 'em. The bog\l"
	.string "provides… heh.$"

MurkwellBog_EventScripts_ShopkeeperNPC_Text_1:
# 161 "data/maps/MurkwellBog/scripts.pory"
	.string "Come again soon…$"

MurkwellBog_EventScripts_HomebodyNPC1_Text_0:
# 184 "data/maps/MurkwellBog/scripts.pory"
	.string "I tried painting the swamp once. But\n"
	.string "the colors… they changed when I wasn't\l"
	.string "looking. Like they were alive…$"

MurkwellBog_EventScripts_HomebodyNPC2_Text_0:
# 193 "data/maps/MurkwellBog/scripts.pory"
	.string "You ever notice how the trees move?\n"
	.string "Not just in the wind… they shift when\l"
	.string "you ain't lookin'. Always facin' the\l"
	.string "temple…$"

MurkwellBog_EventScripts_HomebodyNPC3_Text_0:
# 202 "data/maps/MurkwellBog/scripts.pory"
	.string "My kin are buried here… but lately, I\n"
	.string "don't feel alone when I visit. Someone\l"
	.string "else watches the graves…$"

MurkwellBog_ShopNPC_Gloom_Text_0:
# 210 "data/maps/MurkwellBog/scripts.pory"
	.string "Mmm... need more supplies.\p"
	.string "Never know when the swamp might turn\n"
	.string "against you.\p"
	.string "Been hearing things--whispers on the\n"
	.string "wind.\p"
	.string "Stocking up is just common sense.$"

MurkwellBog_ShopNPC_Dunsparce_Text_0:
# 218 "data/maps/MurkwellBog/scripts.pory"
	.string "Pfft. These prices are criminal!\p"
	.string "I could find better deals in Voltbrook\n"
	.string "Town!\p"
	.string "...But, uh, gettin' back there? Kinda\n"
	.string "tricky.\p"
	.string "Ugh. Fine, take my money.$"

MurkwellBog_ShopNPC_Haunter_Text_0:
# 226 "data/maps/MurkwellBog/scripts.pory"
	.string "Heheheh... so many interesting items\n"
	.string "here.\p"
	.string "Ooooh, Cleanse Tags? I love Cleanse\n"
	.string "Tags.\p"
	.string "Not for cursing or anything! Just, uh…\n"
	.string "for a friend.$"

MurkwellBog_InnNPC_Breloom_Text_0:
# 234 "data/maps/MurkwellBog/scripts.pory"
	.string "Been traveling a long way.\p"
	.string "But somethin' about this place...\p"
	.string "The air feels off.\p"
	.string "Like something's watching.$"

MurkwellBog_InnNPC_Quagsire_Text_0:
# 242 "data/maps/MurkwellBog/scripts.pory"
	.string "Ahhh... comfy bed, warm meal.\p"
	.string "Nothin’ weird about this place at all.\p"
	.string "Nope. Not a thing.$"

MurkwellBog_InnNPC_Sableye_Text_0:
# 250 "data/maps/MurkwellBog/scripts.pory"
	.string "Eheheh... spooky stories?\p"
	.string "I ain’t scared. Nope, not at all.\p"
	.string "B-but you totally saw that shadow\n"
	.string "move, right?$"

MurkwellBog_InnNPC_Bellossom_Text_0:
# 258 "data/maps/MurkwellBog/scripts.pory"
	.string "Long journeys can wear a Pokémon down.\p"
	.string "Here, take this!\p"
	.string "It always helps me keep going.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_0:
# 286 "data/maps/MurkwellBog/scripts.pory"
	.string "…\p"
	.string "You do not belong here.\p"
	.string "And yet, the voices stir.\p"
	.string "How curious.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_1:
# 287 "data/maps/MurkwellBog/scripts.pory"
	.string "This place does not open its secrets to\n"
	.string "just anyone.\p"
	.string "The lost whisper of those who have come\n"
	.string "before.\p"
	.string "But only one with the right presence\n"
	.string "may listen.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_2:
# 288 "data/maps/MurkwellBog/scripts.pory"
	.string "You… are different.\p"
	.string "The echoes follow you, bending around\n"
	.string "your path.\p"
	.string "That inscription--it reacts to you, not\n"
	.string "the others.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_3:
# 289 "data/maps/MurkwellBog/scripts.pory"
	.string "This door was not always shut.\p"
	.string "Something lingers, unseen.\p"
	.string "Not a lock. Not a barrier.\p"
	.string "Something… watching.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_4:
# 290 "data/maps/MurkwellBog/scripts.pory"
	.string "I have spent long years studying what\n"
	.string "remains of the old ways.\p"
	.string "This seal is unnatural.\p"
	.string "Its origin unknown.\p"
	.string "And yet, there is always a way through.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_5:
# 291 "data/maps/MurkwellBog/scripts.pory"
	.string "The temple rejects the living, but it\n"
	.string "does not ignore the past.\p"
	.string "An offering--proof of those who walked\n"
	.string "before--may force its hand.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_6:
# 292 "data/maps/MurkwellBog/scripts.pory"
	.string "Three remnants must be gathered:\p"
	.string "A Hard Stone\p"
	.string "A Spell Tag\p"
	.string "A Charcoal Fragment$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_7:
# 293 "data/maps/MurkwellBog/scripts.pory"
	.string "Only these may wake the ruin.\p"
	.string "Only then will might path open.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_0:
# 356 "data/maps/MurkwellBog/scripts.pory"
	.string "Vee$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_1:
# 357 "data/maps/MurkwellBog/scripts.pory"
	.string "Whoa, that was kinda cool.\p"
	.string "So, uh… what do we call you, anyway?$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_2:
# 359 "data/maps/MurkwellBog/scripts.pory"
	.string "Names are… fleeting.\p"
	.string "But if you must, you may call me Nyx.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_3:
# 363 "data/maps/MurkwellBog/scripts.pory"
	.string "Sooo… who wants to go first?$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_4:
# 366 "data/maps/MurkwellBog/scripts.pory"
	.string "Talon$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_5:
# 367 "data/maps/MurkwellBog/scripts.pory"
	.string "Not it.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_6:
# 370 "data/maps/MurkwellBog/scripts.pory"
	.string "Ace$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_7:
# 371 "data/maps/MurkwellBog/scripts.pory"
	.string "Y’know what? I second that.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_8:
# 374 "data/maps/MurkwellBog/scripts.pory"
	.string "Drake$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_9:
# 375 "data/maps/MurkwellBog/scripts.pory"
	.string "We all move forward together.\p"
	.string "The ruin waits for none.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_10:
# 376 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_11:
# 377 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us not keep it waiting…\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_12:
# 383 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx joined your party.$"

Murkwellbog_EventScript_NyxOpenedTemple_FullParty_Text_13:
# 387 "data/maps/MurkwellBog/scripts.pory"
	.string "Alright, alright, enough of the spooky\n"
	.string "talk.\p"
	.string "We've got a temple to explore!$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_0:
# 419 "data/maps/MurkwellBog/scripts.pory"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_1:
# 431 "data/maps/MurkwellBog/scripts.pory"
	.string "You both look way too calm for what\n"
	.string "just happened.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_2:
# 435 "data/maps/MurkwellBog/scripts.pory"
	.string "Composure is key.\p"
	.string "The unknown does not frighten me.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeAceParty_Text_3:
# 439 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, yeah, tough guy routine.\p"
	.string "Let’s just hope ‘the unknown’ doesn’t\n"
	.string "fight back.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_0:
# 484 "data/maps/MurkwellBog/scripts.pory"
	.string "Sooo, Talon, you're the lookout guy. Did\n"
	.string "you expect THIS to happen?$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_1:
# 488 "data/maps/MurkwellBog/scripts.pory"
	.string "Didn’t see this coming.\p"
	.string "And I don’t like surprises.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeTalonParty_Text_2:
# 492 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us tread carefully.\p"
	.string "The ruin may yet have more secrets to\n"
	.string "unveil.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_0:
# 526 "data/maps/MurkwellBog/scripts.pory"
	.string "So, we’re actually going in there, huh?$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_1:
# 530 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, ‘cause running away sounds soooo\n"
	.string "smart right now.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_2:
# 534 "data/maps/MurkwellBog/scripts.pory"
	.string "If something goes wrong, we fight our\n"
	.string "way out. Simple.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceTalonParty_Text_3:
# 538 "data/maps/MurkwellBog/scripts.pory"
	.string "Not everything can be fought. Some\n"
	.string "things must be understood.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_0:
# 578 "data/maps/MurkwellBog/scripts.pory"
	.string "Ancient places hold ancient dangers. We\n"
	.string "should tread carefully.$"

Murkwellbog_EventScript_NyxOpenedTemple_DrakeParty_Text_1:
# 582 "data/maps/MurkwellBog/scripts.pory"
	.string "Caution is wise. But curiosity will serve\n"
	.string "us better.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_0:
# 620 "data/maps/MurkwellBog/scripts.pory"
	.string "You’re awfully quiet, Ace.\p"
	.string "That’s not normal.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_1:
# 624 "data/maps/MurkwellBog/scripts.pory"
	.string "Yeah, yeah, I know.\p"
	.string "Just… thinking.\p"
	.string "Places like this don’t open for no\n"
	.string "reason.$"

Murkwellbog_EventScript_NyxOpenedTemple_AceParty_Text_2:
# 628 "data/maps/MurkwellBog/scripts.pory"
	.string "Then let us see why it stirs.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_0:
# 666 "data/maps/MurkwellBog/scripts.pory"
	.string "C’mon, Talon.\p"
	.string "Say something so I don’t start freaking\n"
	.string "out.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_1:
# 670 "data/maps/MurkwellBog/scripts.pory"
	.string "Just feels like we woke something up.$"

Murkwellbog_EventScript_NyxOpenedTemple_TalonParty_Text_2:
# 674 "data/maps/MurkwellBog/scripts.pory"
	.string "We did.\p"
	.string "And now, it watches.\p"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"
