# 1 "data/maps/MurkwellBog/scripts.pory"

# 2 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_NYX, 7
# 3 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_EEVEE, 9
# 4 "data/maps/MurkwellBog/scripts.pory"
.set LOCALID_DRAKE, 10
# 5 "data/maps/MurkwellBog/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 6 "data/maps/MurkwellBog/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

MurkwellBog_MapScripts::
	.byte 0


MurkwellBog_EventScripts_SlowpokeNPC::
# 14 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 15 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_SlowpokeNPC_Text_0
# 16 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_ParasectNPC::
# 22 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 23 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ParasectNPC_Text_0
# 24 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_DrowzeeNPC::
# 30 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 31 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_DrowzeeNPC_Text_0
# 32 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HaunterNPC::
# 38 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 39 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HaunterNPC_Text_0
# 40 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_LanturnNPC::
# 46 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 47 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_LanturnNPC_Text_0
# 48 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HoothootNPC::
# 54 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 55 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HoothootNPC_Text_0
# 56 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_NyxNPC::
# 63 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 64 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 65 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 66 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_1, MSGBOX_YESNO
# 67 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne MurkwellBog_EventScripts_NyxNPC_1
	checkitem ITEM_CHARCOAL
# 0 "data/maps/MurkwellBog/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_4
# 213 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 214 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 215 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_12
# 216 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end

MurkwellBog_EventScripts_NyxNPC_1:
# 69 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 70 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 71 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_2
# 72 "data/maps/MurkwellBog/scripts.pory"
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
# 83 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 84 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 85 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_3
# 86 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 87 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 14
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_12
# 90 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 13
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_13
# 95 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_NyxNPC_Movement_0
# 96 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MurkwellBog_EventScripts_NyxNPC_11:
# 98 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_1
# 99 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 100 "data/maps/MurkwellBog/scripts.pory"
	call CommonEventScript_ScreenShake
# 101 "data/maps/MurkwellBog/scripts.pory"
	playse SE_EFFECTIVE
# 102 "data/maps/MurkwellBog/scripts.pory"
	delay 40
# 103 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 104 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_2
# 105 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 106 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 107 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 14
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_18
# 112 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 13
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_19
MurkwellBog_EventScripts_NyxNPC_17:
# 120 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_4
# 121 "data/maps/MurkwellBog/scripts.pory"
	faceplayer
# 122 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 123 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_EEVEE, PlayerXCoordinates, PlayerYCoordinates
# 124 "data/maps/MurkwellBog/scripts.pory"
	setobjectxyperm LOCALID_DRAKE, PlayerXCoordinates, PlayerYCoordinates
# 125 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_EEVEE
# 126 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 14
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_24
# 133 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 13
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_25
# 142 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, MurkwellBog_EventScripts_NyxNPC_Movement_7
# 143 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 144 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 145 "data/maps/MurkwellBog/scripts.pory"
	waitse
MurkwellBog_EventScripts_NyxNPC_23:
# 147 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_5
# 148 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_6
# 149 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 150 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_7
# 151 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_8
# 152 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_9
# 153 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 14
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_30
# 169 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 13
	goto_if_eq MurkwellBog_EventScripts_NyxNPC_31
# 187 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_8
# 188 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 189 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 190 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 191 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 192 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_10
# 193 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_5
# 194 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_11
# 195 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 196 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 197 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, MurkwellBog_EventScripts_NyxNPC_Movement_11
# 198 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 199 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
MurkwellBog_EventScripts_NyxNPC_29:
# 201 "data/maps/MurkwellBog/scripts.pory"
	call MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue
# 202 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_CHARCOAL
# 203 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_SPELL_TAG
# 204 "data/maps/MurkwellBog/scripts.pory"
	removeitem ITEM_HARD_STONE
# 205 "data/maps/MurkwellBog/scripts.pory"
	release
	end

MurkwellBog_EventScripts_NyxNPC_12:
	goto MurkwellBog_EventScripts_NyxNPC_11

MurkwellBog_EventScripts_NyxNPC_13:
	goto MurkwellBog_EventScripts_NyxNPC_11

MurkwellBog_EventScripts_NyxNPC_18:
# 109 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_3
# 110 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
	goto MurkwellBog_EventScripts_NyxNPC_17

MurkwellBog_EventScripts_NyxNPC_19:
# 114 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_4
# 115 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
	goto MurkwellBog_EventScripts_NyxNPC_17

MurkwellBog_EventScripts_NyxNPC_24:
# 128 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, MurkwellBog_EventScripts_NyxNPC_Movement_5
# 129 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 130 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 131 "data/maps/MurkwellBog/scripts.pory"
	waitse
	goto MurkwellBog_EventScripts_NyxNPC_23

MurkwellBog_EventScripts_NyxNPC_25:
# 135 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, MurkwellBog_EventScripts_NyxNPC_Movement_6
# 136 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 137 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 138 "data/maps/MurkwellBog/scripts.pory"
	waitse
	goto MurkwellBog_EventScripts_NyxNPC_23

MurkwellBog_EventScripts_NyxNPC_30:
# 155 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_8
# 156 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 157 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 158 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 159 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_10
# 161 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 162 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 163 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_5
# 164 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_11
# 165 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, MurkwellBog_EventScripts_NyxNPC_Movement_9
# 166 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 167 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
	goto MurkwellBog_EventScripts_NyxNPC_29

MurkwellBog_EventScripts_NyxNPC_31:
# 171 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_NyxNPC_Movement_4
# 172 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 173 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_NYX
# 174 "data/maps/MurkwellBog/scripts.pory"
	removeobject 8
# 175 "data/maps/MurkwellBog/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 176 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_10
# 177 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_5
# 178 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_11
# 179 "data/maps/MurkwellBog/scripts.pory"
	waitfanfare
# 180 "data/maps/MurkwellBog/scripts.pory"
	givemon SPECIES_VENOMOTH, 25, ITEM_QUICK_CLAW, ITEM_POKE_BALL, NATURE_HARDY, 0, MON_FEMALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_CONFUSION, MOVE_LEECH_LIFE, MOVE_POISON_POWDER, MOVE_STUN_SPORE
# 181 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_EEVEE, MurkwellBog_EventScripts_NyxNPC_Movement_10
# 182 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_EEVEE
# 183 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_EEVEE
	goto MurkwellBog_EventScripts_NyxNPC_29


MurkwellBog_EventScripts_PsychicNPC::
# 225 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 226 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_PsychicNPC_Text_0
# 227 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_InnkeeperNPC::
# 234 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 235 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_InnkeeperNPC_Text_0
# 236 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_ShopkeeperNPC::
# 243 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 244 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_ShopkeeperNPC_Text_0
# 245 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC1::
# 252 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 253 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC1_Text_0
# 254 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC2::
# 261 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 262 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC2_Text_0
# 263 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_HomebodyNPC3::
# 270 "data/maps/MurkwellBog/scripts.pory"
	lockall
# 271 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_HomebodyNPC3_Text_0
# 272 "data/maps/MurkwellBog/scripts.pory"
	releaseall
	end


MurkwellBog_EventScripts_TempleNeedsRitual::
# 278 "data/maps/MurkwellBog/scripts.pory"
	lock
# 279 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_NYX, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0
# 280 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_NYX
# 281 "data/maps/MurkwellBog/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 282 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 16
	goto_if_lt MurkwellBog_EventScripts_TempleNeedsRitual_2
# 289 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2
# 290 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
MurkwellBog_EventScripts_TempleNeedsRitual_1:
# 292 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScripts_NyxNPC_Text_0
# 293 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_0
# 294 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_1
# 295 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_2
# 296 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_3
# 297 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_4
# 298 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_5
# 299 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_6
# 300 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_TempleNeedsRitual_Text_7
# 301 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScripts_NyxNPC_Text_2
# 302 "data/maps/MurkwellBog/scripts.pory"
	setvar VAR_MURKWELL_BOG_STATE, 1
# 303 "data/maps/MurkwellBog/scripts.pory"
	release
	end

MurkwellBog_EventScripts_TempleNeedsRitual_2:
# 284 "data/maps/MurkwellBog/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1
# 285 "data/maps/MurkwellBog/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	goto MurkwellBog_EventScripts_TempleNeedsRitual_1


MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue::
# 309 "data/maps/MurkwellBog/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_2
MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_1:
	return

MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_2:
# 311 "data/maps/MurkwellBog/scripts.pory"
	addobject LOCALID_DRAKE
# 312 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 14
	goto_if_eq MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_4
# 324 "data/maps/MurkwellBog/scripts.pory"
	compare PlayerXCoordinates, 13
	goto_if_eq MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_5
# 338 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, MurkwellBog_EventScripts_NyxNPC_Movement_7
# 339 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_DRAKE
# 340 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 341 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 342 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_0
# 343 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_1
# 344 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, MurkwellBog_EventScripts_NyxNPC_Movement_11
# 345 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_DRAKE
# 346 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
	goto MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_1

MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_4:
# 314 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, MurkwellBog_EventScripts_NyxNPC_Movement_5
# 315 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_DRAKE
# 316 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 317 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 318 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_0
# 319 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_1
# 320 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, MurkwellBog_EventScripts_NyxNPC_Movement_9
# 321 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_DRAKE
# 322 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
	goto MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_1

MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_5:
# 326 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, MurkwellBog_EventScripts_NyxNPC_Movement_6
# 327 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_DRAKE
# 328 "data/maps/MurkwellBog/scripts.pory"
	playse SE_PIN
# 329 "data/maps/MurkwellBog/scripts.pory"
	waitse
# 330 "data/maps/MurkwellBog/scripts.pory"
	speakername MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_0
# 331 "data/maps/MurkwellBog/scripts.pory"
	msgbox MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_1
# 332 "data/maps/MurkwellBog/scripts.pory"
	applymovement LOCALID_DRAKE, MurkwellBog_EventScripts_NyxNPC_Movement_10
# 333 "data/maps/MurkwellBog/scripts.pory"
	waitmovement LOCALID_DRAKE
# 334 "data/maps/MurkwellBog/scripts.pory"
	removeobject LOCALID_DRAKE
	goto MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_1


# 95 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_0:
# 95 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 95 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_up
	step_end

# 98 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_1:
# 98 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 98 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 98 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 98 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 98 "data/maps/MurkwellBog/scripts.pory"
	emote_exclamation_mark
	step_end

# 104 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_2:
# 104 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 104 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 104 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 109 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_3:
# 109 "data/maps/MurkwellBog/scripts.pory"
	walk_left
# 109 "data/maps/MurkwellBog/scripts.pory"
	face_down
	step_end

# 114 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_4:
# 114 "data/maps/MurkwellBog/scripts.pory"
	walk_left
	step_end

# 128 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_5:
# 128 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 128 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 128 "data/maps/MurkwellBog/scripts.pory"
	face_left
# 128 "data/maps/MurkwellBog/scripts.pory"
	emote_exclamation_mark
	step_end

# 135 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_6:
# 135 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 135 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 135 "data/maps/MurkwellBog/scripts.pory"
	face_up
	step_end

# 142 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_7:
# 142 "data/maps/MurkwellBog/scripts.pory"
	walk_left
# 142 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 142 "data/maps/MurkwellBog/scripts.pory"
	face_right
	step_end

# 155 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_8:
# 155 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 165 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_9:
# 165 "data/maps/MurkwellBog/scripts.pory"
	walk_down
# 165 "data/maps/MurkwellBog/scripts.pory"
	walk_left
	step_end

# 181 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_10:
# 181 "data/maps/MurkwellBog/scripts.pory"
	walk_left
# 181 "data/maps/MurkwellBog/scripts.pory"
	walk_up
	step_end

# 197 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_NyxNPC_Movement_11:
# 197 "data/maps/MurkwellBog/scripts.pory"
	walk_right
# 197 "data/maps/MurkwellBog/scripts.pory"
	walk_down
	step_end

# 279 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_0:
# 279 "data/maps/MurkwellBog/scripts.pory"
	emote_question_mark
	step_end

# 284 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_1:
# 284 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 284 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 284 "data/maps/MurkwellBog/scripts.pory"
	walk_in_place_left
	step_end

# 289 "data/maps/MurkwellBog/scripts.pory"
MurkwellBog_EventScripts_TempleNeedsRitual_Movement_2:
# 289 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 289 "data/maps/MurkwellBog/scripts.pory"
	walk_up
# 289 "data/maps/MurkwellBog/scripts.pory"
	walk_left
	step_end

MurkwellBog_EventScripts_SlowpokeNPC_Text_0:
# 15 "data/maps/MurkwellBog/scripts.pory"
	.string "Huh… I don't remember the swamp bein'\n"
	.string "this… cloudy. These things weren't\l"
	.string "always floatin' around, right? Huh… Was\l"
	.string "it always like this?$"

MurkwellBog_EventScripts_ParasectNPC_Text_0:
# 23 "data/maps/MurkwellBog/scripts.pory"
	.string "The air is… heavy. My spores mix with it,\n"
	.string "but something else lingers here.\l"
	.string "Something that wasn't here before.$"

MurkwellBog_EventScripts_DrowzeeNPC_Text_0:
# 31 "data/maps/MurkwellBog/scripts.pory"
	.string "I tried to enter the temple the other\n"
	.string "night. Ever since, the air feels… thick.\l"
	.string "My dreams feel like I'm breathing it in.$"

MurkwellBog_EventScripts_HaunterNPC_Text_0:
# 39 "data/maps/MurkwellBog/scripts.pory"
	.string "Oh, the temple? Heh… It's just an old\n"
	.string "ruin! Nothin' special… Nope, nothin' at\l"
	.string "all! And, uh, you definitely don't wanna\l"
	.string "go there. Definitely.$"

MurkwellBog_EventScripts_LanturnNPC_Text_0:
# 47 "data/maps/MurkwellBog/scripts.pory"
	.string "My light doesn't reach as far anymore…\n"
	.string "It's like the air itself is swallowing it.\l"
	.string "I've guided Pokémon through here for\l"
	.string "years, but lately, I can barely see the\l"
	.string "way myself.$"

MurkwellBog_EventScripts_HoothootNPC_Text_0:
# 55 "data/maps/MurkwellBog/scripts.pory"
	.string "The temple's always been there. But\n"
	.string "lately… the air around it shimmers. I\l"
	.string "don't like looking at it. It feels like\l"
	.string "it's moving.$"

MurkwellBog_EventScripts_NyxNPC_Text_0:
# 64 "data/maps/MurkwellBog/scripts.pory"
	.string "???$"

MurkwellBog_EventScripts_NyxNPC_Text_1:
# 66 "data/maps/MurkwellBog/scripts.pory"
	.string "Have you retreived the lost items?\p"
	.string "A Hard Stone\p"
	.string "A Spell Tag\p"
	.string "A Charcoal Fragment$"

MurkwellBog_EventScripts_NyxNPC_Text_2:
# 71 "data/maps/MurkwellBog/scripts.pory"
	.string "Go, then.\p"
	.string "Seek what is lost.\p"
	.string "And if the temple answers… perhaps I\n"
	.string "shall walk this path with you.$"

MurkwellBog_EventScripts_NyxNPC_Text_3:
# 85 "data/maps/MurkwellBog/scripts.pory"
	.string "The offerings have been gathered.\p"
	.string "Step aside. I will perform the ritual.$"

MurkwellBog_EventScripts_NyxNPC_Text_4:
# 120 "data/maps/MurkwellBog/scripts.pory"
	.string "…It is done.\p"
	.string "The seal has lifted.\p"
	.string "The temple awaits.$"

MurkwellBog_EventScripts_NyxNPC_Text_5:
# 147 "data/maps/MurkwellBog/scripts.pory"
	.string "Vee$"

MurkwellBog_EventScripts_NyxNPC_Text_6:
# 148 "data/maps/MurkwellBog/scripts.pory"
	.string "Whoa, that was kinda cool.\p"
	.string "So, uh… what do we call you, anyway?$"

MurkwellBog_EventScripts_NyxNPC_Text_7:
# 150 "data/maps/MurkwellBog/scripts.pory"
	.string "Names are… fleeting.\p"
	.string "But if you must, you may call me Nyx.$"

MurkwellBog_EventScripts_NyxNPC_Text_8:
# 151 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx$"

MurkwellBog_EventScripts_NyxNPC_Text_9:
# 152 "data/maps/MurkwellBog/scripts.pory"
	.string "I will accompany you inside.\p"
	.string "There is more yet to uncover.$"

MurkwellBog_EventScripts_NyxNPC_Text_10:
# 160 "data/maps/MurkwellBog/scripts.pory"
	.string "Nyx joined your party.$"

MurkwellBog_EventScripts_NyxNPC_Text_11:
# 164 "data/maps/MurkwellBog/scripts.pory"
	.string "Alright, alright, enough of the spooky\n"
	.string "talk.\p"
	.string "We've got a temple to explore!$"

MurkwellBog_EventScripts_NyxNPC_Text_12:
# 215 "data/maps/MurkwellBog/scripts.pory"
	.string "A liars tounge will heed you no entry.\p"
	.string "Go, then.\p"
	.string "Seek what is lost.\p"
	.string "And if the temple answers… perhaps I\n"
	.string "shall walk this path with you.$"

MurkwellBog_EventScripts_PsychicNPC_Text_0:
# 226 "data/maps/MurkwellBog/scripts.pory"
	.string "The air hums with echoes of thoughts\n"
	.string "long lost. You hear them too, don't you?\l"
	.string "The voices that aren't yours…?$"

MurkwellBog_EventScripts_InnkeeperNPC_Text_0:
# 235 "data/maps/MurkwellBog/scripts.pory"
	.string "Rest easy, traveler. But if you hear\n"
	.string "whispers in your sleep, best not to\l"
	.string "listen too closely…$"

MurkwellBog_EventScripts_ShopkeeperNPC_Text_0:
# 244 "data/maps/MurkwellBog/scripts.pory"
	.string "Welcome! Got all sorts of goods! Just…\n"
	.string "don't ask where I got 'em. The bog\l"
	.string "provides… heh.$"

MurkwellBog_EventScripts_HomebodyNPC1_Text_0:
# 253 "data/maps/MurkwellBog/scripts.pory"
	.string "I tried painting the swamp once. But\n"
	.string "the colors… they changed when I wasn't\l"
	.string "looking. Like they were alive…$"

MurkwellBog_EventScripts_HomebodyNPC2_Text_0:
# 262 "data/maps/MurkwellBog/scripts.pory"
	.string "You ever notice how the trees move?\n"
	.string "Not just in the wind… they shift when\l"
	.string "you ain't lookin'. Always facin' the\l"
	.string "temple…$"

MurkwellBog_EventScripts_HomebodyNPC3_Text_0:
# 271 "data/maps/MurkwellBog/scripts.pory"
	.string "My kin are buried here… but lately, I\n"
	.string "don't feel alone when I visit. Someone\l"
	.string "else watches the graves…$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_0:
# 293 "data/maps/MurkwellBog/scripts.pory"
	.string "…\p"
	.string "You do not belong here.\p"
	.string "And yet, the voices stir.\p"
	.string "How curious.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_1:
# 294 "data/maps/MurkwellBog/scripts.pory"
	.string "This place does not open its secrets to\n"
	.string "just anyone.\p"
	.string "The lost whisper of those who have come\n"
	.string "before.\p"
	.string "But only one with the right presence\n"
	.string "may listen.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_2:
# 295 "data/maps/MurkwellBog/scripts.pory"
	.string "You… are different.\p"
	.string "The echoes follow you, bending around\n"
	.string "your path.\p"
	.string "That inscription--it reacts to you, not\n"
	.string "the others.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_3:
# 296 "data/maps/MurkwellBog/scripts.pory"
	.string "This door was not always shut.\p"
	.string "Something lingers, unseen.\p"
	.string "Not a lock. Not a barrier.\p"
	.string "Something… watching.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_4:
# 297 "data/maps/MurkwellBog/scripts.pory"
	.string "I have spent long years studying what\n"
	.string "remains of the old ways.\p"
	.string "This seal is unnatural.\p"
	.string "Its origin unknown.\p"
	.string "And yet, there is always a way through.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_5:
# 298 "data/maps/MurkwellBog/scripts.pory"
	.string "The temple rejects the living, but it\n"
	.string "does not ignore the past.\p"
	.string "An offering--proof of those who walked\n"
	.string "before--may force its hand.$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_6:
# 299 "data/maps/MurkwellBog/scripts.pory"
	.string "Three remnants must be gathered:\p"
	.string "A Hard Stone\p"
	.string "A Spell Tag\p"
	.string "A Charcoal Fragment$"

MurkwellBog_EventScripts_TempleNeedsRitual_Text_7:
# 300 "data/maps/MurkwellBog/scripts.pory"
	.string "Only these may wake the ruin.\p"
	.string "Only then will might path open.$"

MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_0:
# 318 "data/maps/MurkwellBog/scripts.pory"
	.string "Drake$"

MurkwellBog_EventScript_NyxNPC_AdditionalPartyMemberDrakeDialogue_Text_1:
# 319 "data/maps/MurkwellBog/scripts.pory"
	.string "Ancient rites, lost echoes…\p"
	.string "It is good to remember the past.\p"
	.string "But be wary. Some things are buried for\n"
	.string "a reason.$"
