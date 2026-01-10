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
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 15 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_VEE
# 16 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0
# 20 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 23 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 24 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 25 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1
# 30 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 31 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8004, 1
# 32 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8005, 1
# 33 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8006, 8
# 34 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8007, 5
# 35 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special ShakeCamera
# 36 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitstate
# 37 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 16
# 38 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 39 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2
# 44 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3
# 49 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 50 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 51 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4
# 54 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 55 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 56 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3
# 61 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 63 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 64 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 65 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 66 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5
# 72 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 73 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 74 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4
# 79 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 80 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 81 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 82 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 83 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6
# 85 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 86 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 87 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7
# 90 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 93 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5
# 100 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 101 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_HIDE_VOLTBROOK_MAGA
# 102 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_F
# 103 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_M
# 104 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8
# 108 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 109 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 112 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 115 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 116 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 117 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 123 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 124 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 125 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6
# 129 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 130 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11
# 131 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 132 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 133 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8
# 138 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 139 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10
# 148 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 149 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11
# 152 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 153 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12
# 159 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 162 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 165 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 170 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 175 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 176 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 177 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13
# 184 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 185 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14
# 190 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 191 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 194 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 197 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14
# 204 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 209 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 210 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 213 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 214 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15
# 229 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 230 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 233 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 236 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 237 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_16
# 241 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 242 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17
# 250 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 251 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 252 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 253 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 254 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16
# 259 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17
# 262 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 263 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 264 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18
# 269 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 273 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 274 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 275 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18
# 283 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 284 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 285 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19
# 288 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 289 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20
# 293 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 294 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21
# 313 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_IRON_FIST
# 314 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOTOR_DRIVE
# 315 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_STATIC
# 316 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_4, ABILITY_VALOR
# 317 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 400
# 318 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_FORCE_DOUBLE_WILD_BATTLE
# 319 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_ELECTIVIRE
# 321 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playmoncry SPECIES_ELECTIVIRE, 2
# 322 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setwildbossbattle SPECIES_ELECTIVIRE, 7, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_BULLDOZE, MOVE_LOW_KICK, 6, 252, 0, 0, 0, 252
# 323 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 324 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	dowildbattle
# 325 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 326 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_22
# 330 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 331 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_23
# 336 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 337 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_19
# 341 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 342 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 343 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 344 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 345 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 346 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 347 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_24
# 355 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 356 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 357 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 360 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 361 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 362 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_25
# 368 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 369 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 370 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 371 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 372 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 373 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 374 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_26
# 379 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 380 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 381 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 382 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 383 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 384 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 385 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_27
# 389 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 390 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 391 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 392 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 393 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 394 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 395 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 396 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 397 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 398 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 399 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 400 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_20
# 406 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 407 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 408 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_28
# 413 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 414 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 417 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 418 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_21
# 423 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_22
# 428 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 429 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 430 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_23
# 431 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 432 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 433 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_29
# 436 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 437 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_30
# 443 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 444 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_24
# 448 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_25
# 451 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_ELECTIVIRE
# 452 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 453 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_EXPLOSION
# 454 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 455 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 456 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_31
# 459 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 460 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_BRICK_BREAK
# 461 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 462 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 463 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_32
# 467 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 468 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_HYPER_BEAM
# 469 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 470 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 471 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_33
# 476 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 477 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_EXPLOSION
# 478 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 479 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 480 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_34
# 485 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 486 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_35
# 492 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 493 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 16
# 494 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_EXIT
# 495 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 496 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_MAGA_F
# 497 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_MAGA_M
# 498 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_ELECTIVIRE
# 499 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 500 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 501 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 502 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 503 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26
# 506 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27
# 509 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 510 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 511 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_36
# 525 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 526 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 527 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3
# 532 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 533 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 534 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_37
# 537 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 538 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28
# 541 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28
# 544 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 545 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 546 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_38
# 560 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername NULL
# 561 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_39
# 568 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_BALL
# 569 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_HIDE_VOLTBROOK_ARTIFACT
# 570 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 571 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_40
# 572 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitfanfare
# 573 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_29
# 574 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27
# 575 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 576 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 577 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_41
# 583 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26
# 584 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 585 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_VEE
# 586 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_VOLTBROOK_PLANT_STATE, 2
# 587 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	releaseall
	end


# 16 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0:
# 17 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 18 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 20 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1:
# 21 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_right
	step_end

# 39 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2:
# 40 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 41 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 42 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 44 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3:
# 45 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 46 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 47 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 51 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4:
# 52 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 52 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 52 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 52 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 66 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5:
# 67 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 68 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 68 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 69 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 70 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 70 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6:
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7:
# 88 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 104 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8:
# 105 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 106 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_faster_left
	step_end

# 109 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9:
# 110 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 110 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 110 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 110 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
	step_end

# 117 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10:
# 118 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
	step_end

# 130 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11:
# 130 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 130 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 159 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12:
# 160 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 165 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13:
# 166 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 167 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 168 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
	step_end

# 197 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14:
# 198 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 199 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 200 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
# 201 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 202 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 210 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15:
# 211 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 211 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 254 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16:
# 255 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 255 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 255 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 255 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 255 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 255 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 256 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 257 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 259 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17:
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 275 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18:
# 276 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 277 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 278 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 279 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 280 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_down
# 281 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 337 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_19:
# 338 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 339 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 400 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_20:
# 401 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 402 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 403 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_down
# 404 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 418 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_21:
# 419 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 419 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 419 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 420 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 421 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 421 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 421 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 423 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_22:
# 424 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 424 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 424 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 424 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 425 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 426 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 426 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 430 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_23:
# 430 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 444 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_24:
# 445 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_left
# 446 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_right
	step_end

# 448 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_25:
# 449 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 449 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
	step_end

# 503 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26:
# 504 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
	step_end

# 506 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27:
# 507 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_left
	step_end

# 538 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28:
# 539 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 539 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 539 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 573 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_29:
# 573 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_right
	step_end

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0:
# 24 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Vee$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1:
# 26 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I think we're getting close to the\n"
	.string "Artifact.\p"
	.string "I can feel it!\n"
	.string "Just a bit more and…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2:
# 55 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Electivire$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3:
# 57 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!\p"
	.string "GRAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4:
# 75 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MUST… GET… STRONGER!\n"
	.string "MUST… ABSORB… MORE!\p"
	.string "GRAAAAAAAAAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5:
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "N-no…!\n"
	.string "It's the Guardian!\p"
	.string "There's no way we can beat him, Seel!\n"
	.string "Let's run away!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6:
# 126 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Team MAGA?\n"
	.string "No…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7:
# 132 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 1$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8:
# 134 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Well, well, well.\n"
	.string "Look who we have here.\p"
	.string "We've been searching all over for you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9:
# 138 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 2$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10:
# 140 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This area is off limits, don't you know?\p"
	.string "But…\n"
	.string "You've seen it now.\p"
	.string "The crown jewel of Team MAGA's efforts.\p"
	.string "A Guardian.\p"
	.string "Strong like a Pokémon…\n"
	.string "Intelligent like a human…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11:
# 150 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Maybe this one isn't the best example\n"
	.string "of intelligence.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12:
# 154 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Perhaps not.\p"
	.string "But even the dumbest human, fused with\n"
	.string "a Pokémon, can become a one-man army.\p"
	.string "In fact…\n"
	.string "Why don't you give it a try?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13:
# 178 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Come on…\n"
	.string "It'll be fun.\p"
	.string "They've been talking about getting rid\n"
	.string "of you, anywyay.\p"
	.string "But I think this idea is more\n"
	.string "entertaining.\p"
	.string "Let's see how you do against Electivire.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14:
# 186 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Oh, you have the BEST ideas.\n"
	.string "Now I really wanna see this.\l"
	.string "Gyahaha!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15:
# 215 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 238 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This is getting old.\p"
	.string "Quit dawdling, or you're going back in a\n"
	.string "ball.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17:
# 243 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We have no choice, don't we…?\p"
	.string "Gulp…\n"
	.string "O-ok, then…\p"
	.string "Seel, I…\n"
	.string "If the guardian beats us…\p"
	.string "I'm really happy that I got to know you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18:
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19:
# 286 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHO ARE YOU!?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20:
# 290 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I-I-I'm…\n"
	.string "M-m-my name is V-V-V-Vee…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21:
# 295 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 327 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We…\n"
	.string "We did it…?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_23:
# 332 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHAT?\n"
	.string "IMPOSSIBLE!\p"
	.string "MUST… GET… MORE… POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_24:
# 348 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "No!\n"
	.string "He's charging up again!\p"
	.string "…Wait.\n"
	.string "I think I have an idea!\p"
	.string "Hey, you dumb knucklehead!\p"
	.string "I bet you're not strong enough to\n"
	.string "absorb all the electricity in this plant!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_25:
# 363 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHAT DID YOU JUST SAY?\n"
	.string "RIDICULOUS!\p"
	.string "I AM… STRONG!\n"
	.string "MORE POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_26:
# 375 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "GRAHHH…\n"
	.string "MORE!\p"
	.string "MORE… POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_27:
# 386 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE… POWER…\n"
	.string "MORE…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_28:
# 409 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "UGH…\n"
	.string "FEEL… FUNNY…\p"
	.string "TOO MUCH… POWER…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_29:
# 434 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Alright, what's the holdup?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_30:
# 438 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "CANNOT…\n"
	.string "CONTROL IT…\p"
	.string "I'M GOING TO…\n"
	.string "GRAAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_31:
# 457 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Gyaaaaaaa!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_32:
# 464 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Stop! Stop!\n"
	.string "We're on your side!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_33:
# 472 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "He's gone insane!\n"
	.string "He's gonna kill us!\p"
	.string "Radio for help!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_34:
# 481 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Mayday, mayday, alert for all units!\p"
	.string "The Guardian's gone rogue!\n"
	.string "Send backup to…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_35:
# 487 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "No, wait!\n"
	.string "He's running away!\p"
	.string "Forget the escapees, we need to get him\n"
	.string "back!\p"
	.string "Everyone, after him!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_36:
# 512 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 535 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Seel, is that…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_38:
# 547 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 562 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "You gaze upon the Artifact.\n"
	.string "You're filled with a strange power.\p"
	.string "You have no doubts.\n"
	.string "If you collect all the Artifacts…\p"
	.string "You will have the power to transform\n"
	.string "back into a human.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_40:
# 571 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "You obtained the {COLOR RED}first Artifact{COLOR DARK_GRAY}!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_41:
# 578 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Ok!\n"
	.string "Let's get out of here, and then let's\l"
	.string "figure out what to do next!\p"
	.string "I still can't believe we beat a Guardian.\p"
	.string "Maybe… Maybe I can really do it!$"
