VoltbrookTown_PowerPlant_Underground_Tunnel_MapScripts::
	.byte 0


# 3 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"

# 4 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_VEE, 2
# 5 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_ELECTIVIRE, 1
# 6 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_BALL, 3
# 7 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_MAGA_F, 4
# 8 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_MAGA_M, 5

VoltbrookTown_PowerPlant_Underground_Tunnel_Event::
# 13 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lockall
# 14 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_IRON_FIST
# 15 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOTOR_DRIVE
# 16 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_STATIC
# 17 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 400
# 19 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_ELECTIVIRE
# 21 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playmoncry SPECIES_ELECTIVIRE, 2
# 22 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setwildbossbattle SPECIES_ELECTIVIRE, 7, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_BULLDOZE, MOVE_LOW_KICK, 6, 252, 0, 0, 0, 252
# 23 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 24 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	dowildbattle
# 25 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 26 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_VEE
# 27 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0
# 31 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 34 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 35 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 36 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1
# 41 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 42 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8004, 1
# 43 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8005, 1
# 44 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8006, 8
# 45 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8007, 5
# 46 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special ShakeCamera
# 47 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitstate
# 48 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 16
# 49 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 50 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2
# 55 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3
# 60 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 61 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4
# 65 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 66 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 67 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3
# 72 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 73 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 74 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 75 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 76 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 77 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5
# 83 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 85 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4
# 90 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 91 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 92 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 93 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6
# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 97 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 98 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7
# 101 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 104 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 105 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5
# 111 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 112 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_HIDE_VOLTBROOK_MAGA
# 113 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_F
# 114 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_M
# 115 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8
# 119 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 123 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 126 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 127 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 128 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 131 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 134 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 135 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 136 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6
# 140 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 141 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11
# 142 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 143 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 144 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8
# 149 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 150 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10
# 159 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 160 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11
# 163 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 164 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12
# 170 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 173 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 176 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 181 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 186 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 187 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 188 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13
# 195 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 196 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14
# 201 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 202 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 205 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 208 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14
# 215 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 220 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 221 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 224 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 225 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15
# 240 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 241 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 244 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 247 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 248 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_16
# 252 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 253 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17
# 261 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 262 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 263 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 264 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17
# 273 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 274 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 275 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 276 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18
# 280 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 281 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 282 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 283 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 284 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 285 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 286 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18
# 294 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 295 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 296 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19
# 299 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 300 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20
# 304 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 305 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21
# 324 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_IRON_FIST
# 325 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOTOR_DRIVE
# 326 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_STATIC
# 327 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 100
# 329 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_ELECTIVIRE
# 331 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playmoncry SPECIES_ELECTIVIRE, 2
# 332 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setwildbossbattle SPECIES_ELECTIVIRE, 7, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_BULLDOZE, MOVE_LOW_KICK, 6, 252, 0, 0, 0, 252
# 333 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 334 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	dowildbattle
# 335 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 336 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_22
# 340 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 341 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_23
# 346 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 347 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_19
# 351 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 352 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 353 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 354 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 355 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 356 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 357 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_24
# 365 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 366 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 367 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 370 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 371 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 372 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_25
# 378 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 379 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 380 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 381 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 382 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 383 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 384 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_26
# 389 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 390 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 391 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 392 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 393 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 394 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 395 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_27
# 399 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 400 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 401 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 402 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 403 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 404 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 405 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 406 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 407 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 408 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 409 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 410 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_20
# 416 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 417 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 418 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_28
# 423 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 424 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 427 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 428 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_21
# 433 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_22
# 438 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 439 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 440 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_23
# 441 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 442 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 443 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_29
# 446 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 447 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_30
# 453 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 454 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_24
# 458 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_25
# 461 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_ELECTIVIRE
# 462 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 463 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_EXPLOSION
# 464 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 465 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 466 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_31
# 469 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 470 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_BRICK_BREAK
# 471 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 472 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 473 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_32
# 477 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 478 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_HYPER_BEAM
# 479 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 480 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 481 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_33
# 486 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 487 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_EXPLOSION
# 488 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 489 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 490 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_34
# 495 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 496 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_35
# 502 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 503 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 16
# 504 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_EXIT
# 505 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 506 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_MAGA_F
# 507 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_MAGA_M
# 508 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_ELECTIVIRE
# 509 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 510 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 511 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 512 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 513 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26
# 516 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27
# 519 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 520 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 521 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_36
# 535 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 536 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 537 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3
# 542 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 543 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 544 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_37
# 547 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 548 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28
# 551 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28
# 554 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 555 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 556 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_38
# 570 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername NULL
# 571 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_39
# 578 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_BALL
# 579 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_HIDE_VOLTBROOK_ARTIFACT
# 580 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 581 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_40
# 582 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitfanfare
# 583 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_29
# 584 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27
# 585 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 586 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 587 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_41
# 593 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26
# 594 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 595 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_VEE
# 596 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_VOLTBROOK_PLANT_STATE, 2
# 597 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	releaseall
	end


# 27 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0:
# 28 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 29 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 31 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1:
# 32 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_right
	step_end

# 50 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2:
# 51 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 52 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 53 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 55 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3:
# 56 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 57 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 58 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4:
# 63 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 63 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 63 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 63 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5:
# 78 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 79 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 79 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 80 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 81 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 81 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6:
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 98 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7:
# 99 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 115 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8:
# 116 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 117 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_faster_left
	step_end

# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9:
# 121 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 121 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 121 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 121 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
	step_end

# 128 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10:
# 129 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
	step_end

# 141 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11:
# 141 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 141 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 170 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12:
# 171 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 176 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13:
# 177 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 178 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 179 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
	step_end

# 208 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14:
# 209 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 210 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 211 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
# 212 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 213 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 221 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15:
# 222 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 222 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16:
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 268 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17:
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 286 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18:
# 287 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 288 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 289 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 290 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 291 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_down
# 292 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 347 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_19:
# 348 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 349 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 410 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_20:
# 411 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 412 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 413 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_down
# 414 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 428 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_21:
# 429 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 429 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 429 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 430 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 431 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 431 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 431 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 433 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_22:
# 434 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 434 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 434 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 434 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 435 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 436 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 436 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 440 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_23:
# 440 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 454 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_24:
# 455 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_left
# 456 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_right
	step_end

# 458 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_25:
# 459 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 459 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
	step_end

# 513 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26:
# 514 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
	step_end

# 516 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27:
# 517 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_left
	step_end

# 548 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28:
# 549 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 549 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 549 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 583 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_29:
# 583 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_right
	step_end

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0:
# 35 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Vee$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1:
# 37 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I think we're getting close to the\n"
	.string "Artifact.\p"
	.string "I can feel it!\n"
	.string "Just a bit more and…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2:
# 66 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Electivire$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3:
# 68 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!\p"
	.string "GRAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4:
# 86 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MUST… GET… STRONGER!\n"
	.string "MUST… ABSORB… MORE!\p"
	.string "GRAAAAAAAAAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5:
# 106 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "N-no…!\n"
	.string "It's the Guardian!\p"
	.string "There's no way we can beat him, Seel!\n"
	.string "Let's run away!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6:
# 137 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Team MAGA?\n"
	.string "No…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7:
# 143 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 1$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8:
# 145 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Well, well, well.\n"
	.string "Look who we have here.\p"
	.string "We've been searching all over for you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9:
# 149 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 2$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10:
# 151 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This area is off limits, don't you know?\p"
	.string "But…\n"
	.string "You've seen it now.\p"
	.string "The crown jewel of Team MAGA's efforts.\p"
	.string "A Guardian.\p"
	.string "Strong like a Pokémon…\n"
	.string "Intelligent like a human…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11:
# 161 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Maybe this one isn't the best example\n"
	.string "of intelligence.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12:
# 165 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Perhaps not.\p"
	.string "But even the dumbest human, fused with\n"
	.string "a Pokémon, can become a one-man army.\p"
	.string "In fact…\n"
	.string "Why don't you give it a try?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13:
# 189 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Come on…\n"
	.string "It'll be fun.\p"
	.string "They've been talking about getting rid\n"
	.string "of you, anywyay.\p"
	.string "But I think this idea is more\n"
	.string "entertaining.\p"
	.string "Let's see how you do against Electivire.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14:
# 197 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Oh, you have the BEST ideas.\n"
	.string "Now I really wanna see this.\l"
	.string "Gyahaha!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15:
# 226 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We're trapped…!\p"
	.string "We…\n"
	.string "We have no choice but do what they say.\p"
	.string "But… We can't possibly…\n"
	.string "We can't possibly defeat a Guardian!\p"
	.string "But if we don't…\p"
	.string "Seel, I…\n"
	.string "I'm so sorry…\p"
	.string "I really wanted to help you go back to\n"
	.string "being a human…\p"
	.string "And I wanted to see the world, and…\p"
	.string "Maybe I could even have made friends\n"
	.string "that aren't weird beeping ducks…\p"
	.string "But now, I…\n"
	.string "I can't do it…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_16:
# 249 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This is getting old.\p"
	.string "Quit dawdling, or you're going back in a\n"
	.string "ball.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17:
# 254 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We have no choice, don't we…?\p"
	.string "Gulp…\n"
	.string "O-ok, then…\p"
	.string "Seel, I…\n"
	.string "If the guardian beats us…\p"
	.string "I'm really happy that I got to know you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18:
# 277 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19:
# 297 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHO ARE YOU!?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20:
# 301 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I-I-I'm…\n"
	.string "M-m-my name is V-V-V-Vee…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21:
# 306 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "VVVVEE?\n"
	.string "WHAT A STRANGE NAME!\p"
	.string "WAIT.\n"
	.string "I KNOW WHO YOU ARE.\p"
	.string "TEAM MAGA IS LOOKING FOR YOU!\p"
	.string "BUT IT DOESN'T MATTER TO ME.\n"
	.string "I NEED MORE POWER!\l"
	.string "I NEED TO GET STRONGER!\p"
	.string "MORE AND MORE POWER.\n"
	.string "STRONGER AND STRONGER!\p"
	.string "ONLY THE STRONG RULE THE WORLD.\n"
	.string "THIS IS WHY I TOOK THIS FORM.\p"
	.string "AND YOU…\n"
	.string "YOU'RE WEAK.\p"
	.string "AND THE WEAK GET RULED.\p"
	.string "SO…\n"
	.string "PREPARE TO GET RULED!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_22:
# 337 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We…\n"
	.string "We did it…?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_23:
# 342 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHAT?\n"
	.string "IMPOSSIBLE!\p"
	.string "MUST… GET… MORE… POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_24:
# 358 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "No!\n"
	.string "He's charging up again!\p"
	.string "…Wait.\n"
	.string "I think I have an idea!\p"
	.string "Hey, you dumb knucklehead!\p"
	.string "I bet you're not strong enough to\n"
	.string "absorb all the electricity in this plant!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_25:
# 373 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHAT DID YOU JUST SAY?\n"
	.string "RIDICULOUS!\p"
	.string "I AM… STRONG!\n"
	.string "MORE POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_26:
# 385 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "GRAHHH…\n"
	.string "MORE!\p"
	.string "MORE… POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_27:
# 396 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE… POWER…\n"
	.string "MORE…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_28:
# 419 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "UGH…\n"
	.string "FEEL… FUNNY…\p"
	.string "TOO MUCH… POWER…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_29:
# 444 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Alright, what's the holdup?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_30:
# 448 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "CANNOT…\n"
	.string "CONTROL IT…\p"
	.string "I'M GOING TO…\n"
	.string "GRAAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_31:
# 467 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Gyaaaaaaa!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_32:
# 474 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Stop! Stop!\n"
	.string "We're on your side!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_33:
# 482 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "He's gone insane!\n"
	.string "He's gonna kill us!\p"
	.string "Radio for help!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_34:
# 491 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Mayday, mayday, alert for all units!\p"
	.string "The Guardian's gone rogue!\n"
	.string "Send backup to…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_35:
# 497 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "No, wait!\n"
	.string "He's running away!\p"
	.string "Forget the escapees, we need to get him\n"
	.string "back!\p"
	.string "Everyone, after him!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_36:
# 522 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We…\n"
	.string "Did it?\p"
	.string "We did it!\n"
	.string "We beat the Guardian!\l"
	.string "Kind of.\p"
	.string "I can't believe I came up with that\n"
	.string "plan!\p"
	.string "When I turn into Jolteon, I noticed\n"
	.string "that too much electricity can make me\l"
	.string "feel weird.\p"
	.string "So I thought, maybe it's the same for\n"
	.string "all electric Pokémon!\l"
	.string "And it was!\p"
	.string "Hehe.\p"
	.string "Maybe…\n"
	.string "Maybe we can really do this!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_37:
# 545 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Seel, is that…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_38:
# 557 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This is it…\n"
	.string "This is it!\p"
	.string "The Artifact!\n"
	.string "I think, at least.\p"
	.string "I dunno what it's supposed to look like.\n"
	.string "I've never seen an Artifact.\p"
	.string "But… The Guardian was protecting it!\n"
	.string "It must be it, Seel!\p"
	.string "That means that you can go back to\n"
	.string "being a human again!\p"
	.string "We just need to find the other seven!\p"
	.string "Oh, and we need to tell Fro, too!\n"
	.string "I'm sure he'll believe us, now!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_39:
# 572 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "You gaze upon the Artifact.\n"
	.string "You're filled with a strange power.\p"
	.string "You have no doubts.\n"
	.string "If you collect all the Artifacts…\p"
	.string "You will have the power to transform\n"
	.string "back into a human.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_40:
# 581 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "You obtained the {COLOR RED}first Artifact{COLOR DARK_GRAY}!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_41:
# 588 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Ok!\n"
	.string "Let's get out of here, and then let's\l"
	.string "figure out what to do next!\p"
	.string "I still can't believe we beat a Guardian.\p"
	.string "Maybe… Maybe I can really do it!$"
