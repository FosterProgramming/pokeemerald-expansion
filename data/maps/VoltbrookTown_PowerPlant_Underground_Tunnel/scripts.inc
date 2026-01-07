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
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_4, ABILITY_VALOR
# 18 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 400
# 20 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_ELECTIVIRE
# 22 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playmoncry SPECIES_ELECTIVIRE, 2
# 23 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setwildbossbattle SPECIES_ELECTIVIRE, 7, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_BULLDOZE, MOVE_LOW_KICK, 6, 0, 0, 0, 0, 0
# 24 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 25 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	dowildbattle
# 26 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 27 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_VEE
# 28 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0
# 32 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 35 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 36 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 37 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1
# 42 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 43 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8004, 1
# 44 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8005, 1
# 45 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8006, 8
# 46 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8007, 5
# 47 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special ShakeCamera
# 48 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitstate
# 49 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 16
# 50 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 51 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2
# 56 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3
# 61 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 63 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4
# 66 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 67 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 68 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3
# 73 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 74 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 75 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 76 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 77 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 78 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 85 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 86 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4
# 91 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 92 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 93 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6
# 97 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 98 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 99 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7
# 102 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 105 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 106 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5
# 112 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 113 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_HIDE_VOLTBROOK_MAGA
# 114 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_F
# 115 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_M
# 116 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8
# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 121 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 124 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 127 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 128 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 129 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 132 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 135 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 136 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 137 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6
# 141 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 142 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11
# 143 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 144 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 145 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8
# 150 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 151 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10
# 160 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 161 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11
# 164 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 165 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12
# 171 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 174 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 177 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 182 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 187 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 188 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 189 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13
# 196 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 197 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14
# 202 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 203 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 206 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 209 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14
# 216 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 221 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 222 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 225 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 226 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15
# 241 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 242 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 245 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 248 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 249 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_16
# 253 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 254 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17
# 262 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 263 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 264 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16
# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17
# 274 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 275 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 276 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 277 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18
# 281 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 282 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 283 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 284 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 285 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 286 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 287 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18
# 295 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 296 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 297 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19
# 300 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 301 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20
# 305 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 306 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21
# 325 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_IRON_FIST
# 326 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOTOR_DRIVE
# 327 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_STATIC
# 328 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 100
# 330 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_BOSS_BRAVE_AI_ID, BRAVE_BOSS_ELECTIVIRE
# 332 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playmoncry SPECIES_ELECTIVIRE, 2
# 333 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setwildbossbattle SPECIES_ELECTIVIRE, 7, ITEM_NONE, NATURE_ADAMANT, MOVE_THUNDER_PUNCH, MOVE_FIRE_PUNCH, MOVE_BULLDOZE, MOVE_LOW_KICK, 6, 252, 0, 0, 0, 252
# 334 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_SYS_CTRL_OBJ_DELETE
# 335 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	dowildbattle
# 336 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 337 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_22
# 341 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 342 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_23
# 347 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 348 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_19
# 352 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 353 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 354 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 355 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 356 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 357 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 358 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_24
# 366 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 367 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 368 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 371 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 372 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 373 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_25
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
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_26
# 390 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 391 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 392 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 393 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 394 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 395 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 396 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_27
# 400 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 401 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 402 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 403 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 404 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 405 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 406 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 407 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 408 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 409 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 410 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 411 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_20
# 417 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 418 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 419 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_28
# 424 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 425 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 428 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 429 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_21
# 434 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_22
# 439 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 440 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 441 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_23
# 442 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 443 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 444 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_29
# 447 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 448 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_30
# 454 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 455 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_24
# 459 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_25
# 462 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_ELECTIVIRE
# 463 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 464 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_EXPLOSION
# 465 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 466 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 467 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_31
# 470 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 471 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_BRICK_BREAK
# 472 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 473 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 474 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_32
# 478 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 479 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_HYPER_BEAM
# 480 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 481 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 482 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_33
# 487 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 488 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_EXPLOSION
# 489 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 490 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 491 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_34
# 496 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 497 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_35
# 503 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 504 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 16
# 505 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_EXIT
# 506 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 507 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_MAGA_F
# 508 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_MAGA_M
# 509 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_ELECTIVIRE
# 510 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 511 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 512 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 513 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 514 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26
# 517 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27
# 520 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 521 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 522 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_36
# 536 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 537 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 538 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3
# 543 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 544 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 545 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_37
# 548 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 549 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28
# 552 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28
# 555 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 556 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 557 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_38
# 571 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername NULL
# 572 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_39
# 579 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_BALL
# 580 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_HIDE_VOLTBROOK_ARTIFACT
# 581 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 582 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_40
# 583 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitfanfare
# 584 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_29
# 585 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27
# 586 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 587 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 588 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_41
# 594 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26
# 595 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 596 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_VEE
# 597 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_VOLTBROOK_PLANT_STATE, 2
# 598 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	releaseall
	end


# 28 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0:
# 29 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 30 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 32 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1:
# 33 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_right
	step_end

# 51 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2:
# 52 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 53 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 54 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 56 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3:
# 57 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 58 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 59 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 63 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4:
# 64 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 64 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 64 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 64 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 78 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5:
# 79 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 80 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 80 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 81 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 82 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 82 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6:
# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 99 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7:
# 100 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 116 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8:
# 117 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 118 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_faster_left
	step_end

# 121 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9:
# 122 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 122 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 122 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 122 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
	step_end

# 129 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10:
# 130 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
	step_end

# 142 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11:
# 142 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 142 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 171 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12:
# 172 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 177 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13:
# 178 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 179 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 180 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
	step_end

# 209 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14:
# 210 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 211 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 212 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
# 213 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 214 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 222 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15:
# 223 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 223 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16:
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 268 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 269 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 271 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17:
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 287 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18:
# 288 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 289 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 290 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 291 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 292 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_down
# 293 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 348 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_19:
# 349 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 350 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 411 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_20:
# 412 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 413 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 414 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_down
# 415 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 429 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_21:
# 430 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 430 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 430 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 431 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 432 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 432 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 432 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 434 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_22:
# 435 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 435 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 435 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 435 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 436 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 437 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 437 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 441 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_23:
# 441 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 455 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_24:
# 456 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_left
# 457 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_right
	step_end

# 459 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_25:
# 460 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 460 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
	step_end

# 514 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_26:
# 515 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
	step_end

# 517 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_27:
# 518 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_left
	step_end

# 549 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_28:
# 550 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 550 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 550 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 584 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_29:
# 584 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_right
	step_end

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0:
# 36 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Vee$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1:
# 38 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I think we're getting close to the\n"
	.string "Artifact.\p"
	.string "I can feel it!\n"
	.string "Just a bit more and…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2:
# 67 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Electivire$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3:
# 69 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!\p"
	.string "GRAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4:
# 87 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MUST… GET… STRONGER!\n"
	.string "MUST… ABSORB… MORE!\p"
	.string "GRAAAAAAAAAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5:
# 107 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "N-no…!\n"
	.string "It's the Guardian!\p"
	.string "There's no way we can beat him, Seel!\n"
	.string "Let's run away!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6:
# 138 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Team MAGA?\n"
	.string "No…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7:
# 144 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 1$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8:
# 146 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Well, well, well.\n"
	.string "Look who we have here.\p"
	.string "We've been searching all over for you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9:
# 150 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 2$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10:
# 152 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This area is off limits, don't you know?\p"
	.string "But…\n"
	.string "You've seen it now.\p"
	.string "The crown jewel of Team MAGA's efforts.\p"
	.string "A Guardian.\p"
	.string "Strong like a Pokémon…\n"
	.string "Intelligent like a human…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11:
# 162 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Maybe this one isn't the best example\n"
	.string "of intelligence.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12:
# 166 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Perhaps not.\p"
	.string "But even the dumbest human, fused with\n"
	.string "a Pokémon, can become a one-man army.\p"
	.string "In fact…\n"
	.string "Why don't you give it a try?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13:
# 190 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Come on…\n"
	.string "It'll be fun.\p"
	.string "They've been talking about getting rid\n"
	.string "of you, anywyay.\p"
	.string "But I think this idea is more\n"
	.string "entertaining.\p"
	.string "Let's see how you do against Electivire.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14:
# 198 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Oh, you have the BEST ideas.\n"
	.string "Now I really wanna see this.\l"
	.string "Gyahaha!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15:
# 227 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 250 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This is getting old.\p"
	.string "Quit dawdling, or you're going back in a\n"
	.string "ball.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17:
# 255 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We have no choice, don't we…?\p"
	.string "Gulp…\n"
	.string "O-ok, then…\p"
	.string "Seel, I…\n"
	.string "If the guardian beats us…\p"
	.string "I'm really happy that I got to know you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18:
# 278 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19:
# 298 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHO ARE YOU!?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20:
# 302 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I-I-I'm…\n"
	.string "M-m-my name is V-V-V-Vee…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21:
# 307 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 338 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We…\n"
	.string "We did it…?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_23:
# 343 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHAT?\n"
	.string "IMPOSSIBLE!\p"
	.string "MUST… GET… MORE… POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_24:
# 359 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "No!\n"
	.string "He's charging up again!\p"
	.string "…Wait.\n"
	.string "I think I have an idea!\p"
	.string "Hey, you dumb knucklehead!\p"
	.string "I bet you're not strong enough to\n"
	.string "absorb all the electricity in this plant!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_25:
# 374 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHAT DID YOU JUST SAY?\n"
	.string "RIDICULOUS!\p"
	.string "I AM… STRONG!\n"
	.string "MORE POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_26:
# 386 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "GRAHHH…\n"
	.string "MORE!\p"
	.string "MORE… POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_27:
# 397 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE… POWER…\n"
	.string "MORE…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_28:
# 420 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "UGH…\n"
	.string "FEEL… FUNNY…\p"
	.string "TOO MUCH… POWER…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_29:
# 445 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Alright, what's the holdup?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_30:
# 449 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "CANNOT…\n"
	.string "CONTROL IT…\p"
	.string "I'M GOING TO…\n"
	.string "GRAAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_31:
# 468 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Gyaaaaaaa!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_32:
# 475 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Stop! Stop!\n"
	.string "We're on your side!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_33:
# 483 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "He's gone insane!\n"
	.string "He's gonna kill us!\p"
	.string "Radio for help!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_34:
# 492 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Mayday, mayday, alert for all units!\p"
	.string "The Guardian's gone rogue!\n"
	.string "Send backup to…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_35:
# 498 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "No, wait!\n"
	.string "He's running away!\p"
	.string "Forget the escapees, we need to get him\n"
	.string "back!\p"
	.string "Everyone, after him!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_36:
# 523 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 546 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Seel, is that…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_38:
# 558 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 573 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "You gaze upon the Artifact.\n"
	.string "You're filled with a strange power.\p"
	.string "You have no doubts.\n"
	.string "If you collect all the Artifacts…\p"
	.string "You will have the power to transform\n"
	.string "back into a human.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_40:
# 582 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "You obtained the {COLOR RED}first Artifact{COLOR DARK_GRAY}!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_41:
# 589 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Ok!\n"
	.string "Let's get out of here, and then let's\l"
	.string "figure out what to do next!\p"
	.string "I still can't believe we beat a Guardian.\p"
	.string "Maybe… Maybe I can really do it!$"
