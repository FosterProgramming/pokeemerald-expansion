# 1 "data/maps/MountPyroden_FinalRoom/scripts.pory"

# 2 "data/maps/MountPyroden_FinalRoom/scripts.pory"
.set LOCALID_BALL, 11
# 3 "data/maps/MountPyroden_FinalRoom/scripts.pory"
.set LOCALID_VEE, 10
# 4 "data/maps/MountPyroden_FinalRoom/scripts.pory"
.set LOCALID_FRO, 9
# 5 "data/maps/MountPyroden_FinalRoom/scripts.pory"
.set LOCALID_DOM, 7
# 6 "data/maps/MountPyroden_FinalRoom/scripts.pory"
.set LOCALID_MAGMORTAR, 8

MountPyroden_FinalRoom_MapScripts::
# 10 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_FinalRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_FinalRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	goto_if_unset FLAG_BEATEN_MAGMORTAR, MountPyroden_FinalRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 22 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 1
# 23 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 24 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 2
# 25 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 26 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 3
# 27 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 28 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 4
# 29 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 30 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 5
# 31 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 32 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 6
# 33 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
	return

MountPyroden_FinalRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	clearflag FLAG_SYS_HIDE_DOM_PARTY_MEMBER
# 14 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	addobject LOCALID_DOM
# 15 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_PYRODEN_LAST_ROOM_STATE, 0
# 16 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_VEE
# 17 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_FRO
# 18 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_BALL
	return


MountPyrooden_FinalRoom_EventScript_Fire1::
# 40 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 1
# 41 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 42 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 2
# 43 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 44 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_M_EMBER
# 45 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_VEE
# 46 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_FRO
# 47 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_BALL
# 48 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_PYRODEN_LAST_ROOM_STATE, 1
	end


MountPyrooden_FinalRoom_EventScript_Fire2::
# 54 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 3
# 55 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 56 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 4
# 57 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 58 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_M_EMBER
# 59 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_PYRODEN_LAST_ROOM_STATE, 2
	end


MountPyrooden_FinalRoom_EventScript_Fire3::
# 65 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	lock
# 66 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 5
# 67 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 68 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_0x8000, 6
# 69 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	callnative SetFirePitOn
# 70 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_M_EMBER
# 71 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	setvar VAR_PYRODEN_LAST_ROOM_STATE, 3
# 72 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	fadeoutbgm 0
# 73 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	special SpawnCameraObject
# 74 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	delay 20
# 75 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_0
# 78 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 79 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	delay 16
# 80 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 81 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 82 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_1
# 86 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_2
# 87 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_3
# 91 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 92 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_4
# 99 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_2
# 100 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_5
# 110 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 111 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_6
# 122 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_PIN
# 123 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_MAGMORTAR, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_1
# 124 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 125 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitse
# 126 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_2
# 127 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_7
# 131 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 132 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_MAGMORTAR, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_2
# 133 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 134 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	delay 10
# 135 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 136 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_M_FLAMETHROWER
# 138 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 139 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	clearflag FLAG_SYS_HIDE_FRO_PARTY_MEMBER
# 140 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	addobject LOCALID_FRO
# 141 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	addobject LOCALID_VEE
# 142 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_3
# 146 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 147 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitse
# 148 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 149 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	delay 10
# 150 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_PIN
# 151 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_MAGMORTAR, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_1
# 152 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_1
# 153 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 154 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitse
# 155 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 156 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_9
# 157 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 158 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_10
# 161 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_2
# 162 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_11
# 168 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_12
# 169 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_13
# 170 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_2
# 171 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_14
# 179 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 180 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_15
# 181 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 182 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_16
# 183 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_2
# 184 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_17
# 188 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_12
# 189 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_18
# 195 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_19
# 196 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_20
# 197 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_2
# 198 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_21
# 207 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 208 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	fadedefaultbgm
# 209 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	clearflag FLAG_HIDE_BALL_PYRODEN
# 210 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	addobject LOCALID_BALL
# 211 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_MAGMORTAR, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_4
# 215 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 216 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_5
# 217 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_5
# 218 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_5
# 219 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_6
# 220 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_MAGMORTAR, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_7
# 221 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement LOCALID_MAGMORTAR
# 222 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8
# 223 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8
# 224 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8
# 225 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_9
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_MAGMORTAR, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_10
# 227 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement LOCALID_MAGMORTAR
# 228 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_MAGMORTAR
# 229 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_PIN
# 230 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_11
# 235 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 236 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_12
# 237 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_22
# 246 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 247 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_12
# 248 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_12
# 249 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_13
# 254 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 255 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_BALL
# 256 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 257 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_23
# 258 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitfanfare
# 259 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 260 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_24
# 268 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 269 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8
# 270 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8
# 271 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_9
# 272 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 273 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	delay 64
# 274 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 275 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_25
# 293 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 294 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_26
# 297 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 298 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_27
# 309 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 310 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_28
# 315 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 316 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_29
# 320 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 321 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_30
# 324 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 325 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_31
# 332 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 333 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_32
# 337 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 338 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_33
# 345 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 346 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_34
# 349 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_12
# 350 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_35
# 353 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_14
# 354 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 355 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 356 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_36
# 359 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 360 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_37
# 369 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 370 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_38
# 373 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_5
# 374 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 375 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_12
# 376 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_39
# 380 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	playse SE_PIN
# 381 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_1
# 384 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 385 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitse
# 386 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 387 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_40
# 394 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 395 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_15
# 400 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 401 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_6
# 402 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_12
# 403 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_12
# 404 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 405 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 406 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_41
# 412 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 413 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_16
# 414 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 415 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 416 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_42
# 419 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 420 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_43
# 425 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 426 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_17
# 429 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 430 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 431 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_44
# 442 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 443 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_45
# 446 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 447 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_46
# 484 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8
# 485 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_47
# 491 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_12
# 492 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_48
# 495 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 496 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_49
# 500 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 501 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_50
# 504 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 505 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_51
# 508 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_14
# 511 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 512 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 513 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_52
# 518 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_5
# 521 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 522 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_12
# 523 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_53
# 528 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_8
# 529 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_54
# 533 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8
# 536 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement 0
# 537 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	speakername MountPyrooden_FinalRoom_EventScript_Fire3_Text_0
# 538 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	msgbox MountPyrooden_FinalRoom_EventScript_Fire3_Text_55
# 542 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	closemessage
# 543 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_18
# 546 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_19
# 549 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_20
# 553 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MountPyrooden_FinalRoom_EventScript_Fire3_Movement_19
# 554 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	waitmovement LOCALID_VEE
# 555 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	special RemoveCameraObject
# 556 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_VEE
# 557 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_FRO
# 558 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	removeobject LOCALID_DOM
# 559 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	release
	end


# 75 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_0:
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 76 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
	step_end

# 123 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_1:
# 123 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	emote_exclamation_mark
	step_end

# 132 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_2:
# 132 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_down
	step_end

# 142 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_3:
# 143 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_left
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
# 144 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_faster_up
	step_end

# 211 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_4:
# 212 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_left
# 212 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_left
# 213 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
# 213 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
	step_end

# 216 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_5:
# 216 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	face_left
	step_end

# 219 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_6:
# 219 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_in_place_left
	step_end

# 220 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_7:
# 220 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
# 220 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_right
	step_end

# 222 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_8:
# 222 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	face_down
	step_end

# 225 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_9:
# 225 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_in_place_down
	step_end

# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_10:
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_right
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
# 226 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_fast_down
	step_end

# 230 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_11:
# 231 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	emote_exclamation_mark
# 232 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	delay_16
# 233 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	face_up
	step_end

# 247 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_12:
# 247 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	face_up
	step_end

# 249 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_13:
# 250 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 251 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_right
# 252 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_in_place_up
	step_end

# 353 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_14:
# 353 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	face_right
	step_end

# 395 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_15:
# 396 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_left
# 397 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 397 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
# 398 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	face_right
	step_end

# 413 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_16:
# 413 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_left
# 413 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_left
# 413 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_left
	step_end

# 426 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_17:
# 427 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_right
# 427 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_right
# 427 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_right
	step_end

# 543 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_18:
# 544 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_right
	step_end

# 546 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_19:
# 547 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
	step_end

# 549 "data/maps/MountPyroden_FinalRoom/scripts.pory"
MountPyrooden_FinalRoom_EventScript_Fire3_Movement_20:
# 550 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_left
# 551 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	walk_up
	step_end

MountPyrooden_FinalRoom_EventScript_Fire3_Text_0:
# 81 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Dom$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_1:
# 83 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Urgh…\n"
	.string "What power…!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_2:
# 86 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Magmortar$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_3:
# 88 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Didn't your momma teach you not to\n"
	.string "bring fists to a gun fight?\l"
	.string "Gya ha!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_4:
# 93 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "So this…\n"
	.string "Is the culmination of Team MAGA's\l"
	.string "research, eh?\p"
	.string "The fusion of humans and Pokémon.\n"
	.string "Impressive.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_5:
# 101 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Now you regret crossing us, don't you?\p"
	.string "You could have gotten all of this and\n"
	.string "more.\p"
	.string "But you just had to go and grow a\n"
	.string "conscience!\l"
	.string "How cute!\p"
	.string "You're nothing but a traitor.\p"
	.string "And traitors…\n"
	.string "Get what they deserve.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_6:
# 112 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "… … …\p"
	.string "So, this is the end, then?\p"
	.string "…Very well.\p"
	.string "I suppose I deserve it, after what I've\n"
	.string "done.\p"
	.string "But before you do it…\p"
	.string "Would you mind answering a question for\n"
	.string "me?\p"
	.string "Just for old time's sake.\p"
	.string "Is this kind of power really worth it…\p"
	.string "…If you end up stuck with a face that\n"
	.string "looks like a butt?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_7:
# 128 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Now you've done it!\p"
	.string "Get blown to smithereens!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_8:
# 155 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Fro$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_9:
# 156 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Cavalry's here.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_10:
# 158 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "My saviors!\n"
	.string "My angels!\p"
	.string "Tell me, did it hurt when you fell from\n"
	.string "Heaven?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_11:
# 163 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "How in the world!?\p"
	.string "Who are you?\p"
	.string "Why are you?\p"
	.string "How are you?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_12:
# 168 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Vee$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_13:
# 169 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Pretty good, thanks.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_14:
# 171 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string " But…\n But…!\p I made sure to seal the entrance!\p How did you manage to get in here?!\p Dom!\n Are these your allies, you sly coward?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_15:
# 180 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Yes!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_16:
# 182 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "No.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_17:
# 185 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "It doesn't matter!\p"
	.string "Those who stand against Team MAGA will\n"
	.string "be incinerated!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_18:
# 190 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Seel! Fro!\n"
	.string "I'm still a bit scared, but…\p"
	.string "I've done it before, and I can do it\n"
	.string "again!\p"
	.string "Let's beat up this guy, team!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_19:
# 195 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Narrator$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_20:
# 196 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Please pretend that you're looking at a\n"
	.string "fierce battle against the Magmortar,\l"
	.string "with our heroes coming out victorious.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_21:
# 199 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "… … …\p"
	.string "So you think you've beaten me, don't\n"
	.string "you?\p"
	.string "… … …\p"
	.string "And you would be correct.\p"
	.string "But!\n"
	.string "Let's see how you like it when you get\l"
	.string "locked up inside a volcano!\p"
	.string "See you never, suckers!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_22:
# 238 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "We did it, we did it!\n"
	.string "That makes two!\p"
	.string "And look, {PLAYER}!\n"
	.string "That Magmortar dropped something!\p"
	.string "It looks like…\n"
	.string "It's one of the Artifacts!\p"
	.string "{PLAYER}, grab it!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_23:
# 257 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "You obtained the {COLOR RED}second Artifact{COLOR DARK_GRAY}!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_24:
# 261 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Seel, eh?\n"
	.string "Funny, that.\p"
	.string "Used to know a guy called Seel.\n"
	.string "But he was a human, not a Pokémon.\p"
	.string "Interesting fellow.\n"
	.string "Wonder what happened to him.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_25:
# 276 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "… … …\p"
	.string "Wait.\n"
	.string "Wait wait wait.\p"
	.string "Wait wait wait wait wait wait wait wait\n"
	.string "wait.\p"
	.string "Wait wait.\n"
	.string "Wait.\p"
	.string "Wait wait wait.\n"
	.string "Hold up a second.\p"
	.string "You're telling me.\n"
	.string "You're TELLING me.\p"
	.string "That THIS…\n"
	.string "Creature?\p"
	.string "This beast?\p"
	.string "Is my ol' buddy pal Seel?\p"
	.string "Oh.\n"
	.string "My God.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_26:
# 295 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "And you are…?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_27:
# 299 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Oh!\n"
	.string "How rude of me!\p"
	.string "You saved me, and I haven't even\n"
	.string "introduced myself!\p"
	.string "Name's Dom!\n"
	.string "Dom Colangelo!\p"
	.string "You might've heard of me?\n"
	.string "From Colangelo Graphics?\l"
	.string "The company?\p"
	.string "It was on the Chansey 500 list?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_28:
# 311 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Literally never heard of it.\n"
	.string "Colangelo Graphics?\p"
	.string "Do you do graphic design or something?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_29:
# 317 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Nah.\n"
	.string "Money laundering.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_30:
# 322 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Ah.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_31:
# 326 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Yeah, but it's like…\n"
	.string "Transparent money laundering, you\l"
	.string "know?\p"
	.string "Stakeholder-focused, and all of that.\p"
	.string "But you guys…\n"
	.string "Can I have your names?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_32:
# 334 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "I'm Fro.\n"
	.string "And she's Vee.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_33:
# 339 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Vee and Fro, eh?\n"
	.string "Cool, cool.\p"
	.string "Hold on, lemme take out my phone.\n"
	.string "Can I add you guys on PorydIn?\p"
	.string "I'm kinda out of a job, and I need some\n"
	.string "references.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_34:
# 347 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "We're, uh, not on PorydIn.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_35:
# 351 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "I am!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_36:
# 357 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "No you're not, Vee.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_37:
# 361 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Nah, nah, wait, there she is.\p"
	.string "Vee the Eevee.\n"
	.string "Yup, that's it.\p"
	.string "Work history…\p"
	.string "Lab rat (former)…\n"
	.string "Currently on the run…\p"
	.string "This gap in your resume isn't gonna look\n"
	.string "good to future employers, lemme tell\l"
	.string "you.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_38:
# 371 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "How in the…$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_39:
# 377 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "The guards were bored and made a\n"
	.string "profile for me!\p"
	.string "They thought it was funny!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_40:
# 388 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "But…\n"
	.string "Wait a minute!\p"
	.string "We're getting sidetracked, here!\n"
	.string "Seel!\n"
	.string "Oh, man, Seel!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_41:
# 407 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Oh, God, it's really you, isn't it?\p"
	.string "I could recognize that expression\n"
	.string "anywhere!\p"
	.string "Oh, what have I done?\n"
	.string "It's all my fault!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_42:
# 417 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "I will jump into the boiling lava to\n"
	.string "atone for my sins!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_43:
# 421 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Please don't.\p"
	.string "I can see why Seel never introduced you\n"
	.string "to me.\p"
	.string "Do you really know each other?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_44:
# 432 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Yeah!\n"
	.string "We're like best buds, right?\p"
	.string "Except I hadn't seen him in ages!\p"
	.string "But this…\n"
	.string "Oh, what have I done?\p"
	.string "Look I…\n"
	.string "Was approached, right?\p"
	.string "A guy wrote me and told me that they\n"
	.string "needed new graphics for their website.\l"
	.string "And I…$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_45:
# 444 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Didn't you say you do money laundering?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_46:
# 448 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Yeah, that's what I said!\p"
	.string "I said nah man, you got it all wrong!\p"
	.string "Colangelo Graphics?\n"
	.string "We don't do graphics!\l"
	.string "We do money laundering!\p"
	.string "And he said, that's perfect, we also\n"
	.string "need some money to be laundered!\p"
	.string "And I said, cool, when can I start?\p"
	.string "And lemme tell you, these guys?\n"
	.string "They're something else.\p"
	.string "I did some laundering…\n"
	.string "We split some profits…\p"
	.string "I know they were doing something shady,\n"
	.string "but I mean, who isn't?\p"
	.string "And the amount of dough they had\n"
	.string "rolling in…\p"
	.string "… … …\p"
	.string "So I huh, decided to look a bit more into\n"
	.string "it, after a while.\p"
	.string "And I found out they were doing some…\p"
	.string "Highly morally questionable genetic\n"
	.string "experiments/eugenics.\p"
	.string "And I though well, this isn't\n"
	.string "necessarily my business.\l"
	.string "But…\p"
	.string "If my stakeholders find about this…\n"
	.string "They're gonna rake me over the coals!\p"
	.string "I can't be caught supporting animal\n"
	.string "cruelty, man!\p"
	.string "So I went to them, and said, well, hey,\n"
	.string "could you maybe tone it down with the\l"
	.string "evil science stuff?\p"
	.string "And you know what they did?\n"
	.string "You KNOW what they did?\p"
	.string "They booted me out!\n"
	.string "From my own company!\l"
	.string "Me, Dom Colangelo!\p"
	.string "And I said, well, now you're gonna get it!\p"
	.string "And I tracked them down to here, and\n"
	.string "tried to get my revenge.\p"
	.string "But…\n"
	.string "Ya know how it is.\p"
	.string "But Seel…\n"
	.string "If I knew they were gonna get you like\l"
	.string "this…\p"
	.string "Oh, man, I shouldn't have partnered with\n"
	.string "Team MAGA!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_47:
# 486 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "You, small fox…\n"
	.string "You're the leader of this team, right?\p"
	.string "Please, let me join you!\p"
	.string "Together, we can take our revenge!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_48:
# 493 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Okay!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_49:
# 497 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Absolutely not.\p"
	.string "What are you going to do, defeat the\n"
	.string "hybrid super-soldiers by punching\l"
	.string "them?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_50:
# 502 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "…Yes?$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_51:
# 506 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Out of the question.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_52:
# 514 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Aw, come on.\p"
	.string "Tell 'em, Seel!\n"
	.string "They can trust me!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_53:
# 524 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "C'mon, Fro!\n"
	.string "Don't be mean!\p"
	.string "It's a friend of Seel!$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_54:
# 530 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "…Look, let's get outta here first.\p"
	.string "Then we'll talk.$"

MountPyrooden_FinalRoom_EventScript_Fire3_Text_55:
# 539 "data/maps/MountPyroden_FinalRoom/scripts.pory"
	.string "Yeah, sure thing, man!\n"
	.string "Let's do that!$"
