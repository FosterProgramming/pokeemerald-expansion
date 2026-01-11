VoltbrookTown_PowerPlant_Underground_Tunnel_MapScripts::
# 3 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_Underground_Tunnel_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_Underground_Tunnel_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setrespawn HEAL_LOCATION_VOLTBROOK_TOWN_POWER_PLANT
# 6 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	release
	end


# 11 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"

# 12 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_VEE, 2
# 13 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_ELECTIVIRE, 1
# 14 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_BALL, 3
# 15 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_MAGA_F, 4
# 16 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set LOCALID_MAGA_M, 5
# 17 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 18 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

VoltbrookTown_PowerPlant_Underground_Tunnel_Event::
# 23 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lockall
# 24 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 25 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_VEE
# 26 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0
# 30 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 33 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 34 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 35 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1
# 40 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 41 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8004, 1
# 42 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8005, 1
# 43 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8006, 8
# 44 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_0x8007, 5
# 45 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special ShakeCamera
# 46 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitstate
# 47 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 16
# 48 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 49 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2
# 54 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3
# 59 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 60 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 61 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4
# 64 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 65 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 66 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3
# 71 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 72 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 73 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 74 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 75 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 76 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5
# 82 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 83 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 84 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4
# 89 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 90 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 91 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 92 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 93 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6
# 95 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 96 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 97 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7
# 100 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1
# 103 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 104 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5
# 110 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 111 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_HIDE_VOLTBROOK_MAGA
# 112 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_F
# 113 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_MAGA_M
# 114 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8
# 118 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 119 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 122 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9
# 125 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 126 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 127 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 130 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10
# 133 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 134 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 135 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6
# 139 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special SpawnCameraObject
# 140 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11
# 141 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 142 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 143 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8
# 148 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 149 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10
# 158 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 159 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11
# 162 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 163 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12
# 169 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 172 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 175 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 180 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 185 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 186 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 187 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13
# 194 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7
# 195 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14
# 200 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 201 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 204 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 207 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14
# 214 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13
# 219 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 220 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 223 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 224 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15
# 239 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 240 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_F, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 243 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_MAGA_M, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12
# 246 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9
# 247 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_16
# 251 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 252 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17
# 260 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 261 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15
# 262 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 263 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	special RemoveCameraObject
# 264 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16
# 269 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17
# 272 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 273 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 274 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 275 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18
# 279 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	closemessage
# 280 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_M_THUNDERBOLT
# 281 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_TO_WHITE
# 282 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitse
# 283 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 284 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	playse SE_PIN
# 285 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_ELECTIVIRE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18
# 293 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement 0
# 294 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 295 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19
# 298 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 299 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20
# 303 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2
# 304 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21
# 323 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_1, ABILITY_IRON_FIST
# 324 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_2, ABILITY_MOTOR_DRIVE
# 325 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_3, ABILITY_STATIC
# 326 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_ABILITY_OVERWRITE_4, ABILITY_VALOR
# 327 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_ENEMY_1_CUSTOM_MAX_HP, 400
# 328 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setflag FLAG_FORCE_DOUBLE_WILD_BATTLE
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
	goto_if_unset FLAG_SYS_SKIP_MARIO_STAGE, VoltbrookTown_PowerPlant_Underground_Tunnel_Event_2
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_1:
# 602 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_2:
# 599 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setmetatile 10, 24, 0x3AA, TRUE
# 600 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setmetatile 10, 23, 0x3A2, FALSE
	goto VoltbrookTown_PowerPlant_Underground_Tunnel_Event_1


VoltbrookTown_PowerPlant_Underground_Tunnel_Trapped::
# 608 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lockall
# 609 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 610 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 611 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 612 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	addobject LOCALID_VEE
# 613 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 614 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_0
# 615 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_Trapped_Text_0
# 620 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 621 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	waitmovement LOCALID_VEE
# 622 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	removeobject LOCALID_VEE
# 623 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	setvar VAR_VOLTBROOK_PLANT_STATE, 3
# 624 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_Underground_Tunnel_PC::
# 630 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock
# 631 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	goto_if_unset FLAG_SYS_SKIP_MARIO_STAGE, VoltbrookTown_PowerPlant_Underground_Tunnel_PC_4
VoltbrookTown_PowerPlant_Underground_Tunnel_PC_3:
# 637 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	warpsilent MAP_VOLTBROOK_TOWN_POWER_PLANT_EXIT_CODE, 7, 4
# 638 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay 40
# 639 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lockall
VoltbrookTown_PowerPlant_Underground_Tunnel_PC_1:
# 641 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	release
	end

VoltbrookTown_PowerPlant_Underground_Tunnel_PC_2:
# 633 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Underground_Tunnel_PC_Text_0, MSGBOX_AUTOCLOSE
	goto VoltbrookTown_PowerPlant_Underground_Tunnel_PC_1

VoltbrookTown_PowerPlant_Underground_Tunnel_PC_4:
# 631 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	compare VAR_VOLTBROOK_PLANT_STATE, 3
	goto_if_ne VoltbrookTown_PowerPlant_Underground_Tunnel_PC_2
	goto VoltbrookTown_PowerPlant_Underground_Tunnel_PC_3


# 26 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_0:
# 27 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 28 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 30 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_1:
# 31 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_right
	step_end

# 49 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_2:
# 50 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 51 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 52 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 54 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_3:
# 55 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 56 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 57 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 61 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_4:
# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 62 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 76 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_5:
# 77 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 78 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 78 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 79 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 80 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 80 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
	step_end

# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_6:
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 94 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 97 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_7:
# 98 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_left
	step_end

# 114 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_8:
# 115 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 116 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_faster_left
	step_end

# 119 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_9:
# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
# 120 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_fast_down
	step_end

# 127 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_10:
# 128 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
	step_end

# 140 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_11:
# 140 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
# 140 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_down
	step_end

# 169 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_12:
# 170 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 175 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_13:
# 176 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 177 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 178 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
	step_end

# 207 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_14:
# 208 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	lock_facing_direction
# 209 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 210 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	unlock_facing_direction
# 211 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 212 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_up
	step_end

# 220 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_15:
# 221 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 221 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 264 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_16:
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 265 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 266 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_right
# 267 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_in_place_up
	step_end

# 269 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_17:
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
# 270 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_up
	step_end

# 285 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Movement_18:
# 286 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	emote_exclamation_mark
# 287 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 288 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	walk_left
# 289 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	delay_16
# 290 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	face_down
# 291 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 34 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Vee$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_1:
# 36 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I think we're getting close to the\n"
	.string "Artifact.\p"
	.string "I can feel it!\n"
	.string "Just a bit more and…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_2:
# 65 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Electivire$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_3:
# 67 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!\p"
	.string "GRAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_4:
# 85 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MUST… GET… STRONGER!\n"
	.string "MUST… ABSORB… MORE!\p"
	.string "GRAAAAAAAAAAAAAAH!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_5:
# 105 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "N-no…!\n"
	.string "It's the Guardian!\p"
	.string "There's no way we can beat him, Seel!\n"
	.string "Let's run away!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_6:
# 136 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Team MAGA?\n"
	.string "No…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_7:
# 142 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 1$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_8:
# 144 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Well, well, well.\n"
	.string "Look who we have here.\p"
	.string "We've been searching all over for you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_9:
# 148 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Grunt 2$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_10:
# 150 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This area is off limits, don't you know?\p"
	.string "But…\n"
	.string "You've seen it now.\p"
	.string "The crown jewel of Team MAGA's efforts.\p"
	.string "A Guardian.\p"
	.string "Strong like a Pokémon…\n"
	.string "Intelligent like a human…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_11:
# 160 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Maybe this one isn't the best example\n"
	.string "of intelligence.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_12:
# 164 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Perhaps not.\p"
	.string "But even the dumbest human, fused with\n"
	.string "a Pokémon, can become a one-man army.\p"
	.string "In fact…\n"
	.string "Why don't you give it a try?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_13:
# 188 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Come on…\n"
	.string "It'll be fun.\p"
	.string "They've been talking about getting rid\n"
	.string "of you, anywyay.\p"
	.string "But I think this idea is more\n"
	.string "entertaining.\p"
	.string "Let's see how you do against Electivire.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_14:
# 196 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Oh, you have the BEST ideas.\n"
	.string "Now I really wanna see this.\l"
	.string "Gyahaha!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_15:
# 225 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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
# 248 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "This is getting old.\p"
	.string "Quit dawdling, or you're going back in a\n"
	.string "ball.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_17:
# 253 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "We have no choice, don't we…?\p"
	.string "Gulp…\n"
	.string "O-ok, then…\p"
	.string "Seel, I…\n"
	.string "If the guardian beats us…\p"
	.string "I'm really happy that I got to know you.$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_18:
# 276 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "MORE POWER!\n"
	.string "MORE POWER!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_19:
# 296 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "WHO ARE YOU!?$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_20:
# 300 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "I-I-I'm…\n"
	.string "M-m-my name is V-V-V-Vee…$"

VoltbrookTown_PowerPlant_Underground_Tunnel_Event_Text_21:
# 305 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
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

VoltbrookTown_PowerPlant_Underground_Tunnel_Trapped_Text_0:
# 616 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "Oh no!\n"
	.string "We're Trapped!\p"
	.string "Hurry! let's see if we can find another\n"
	.string "way out before they come back!$"

VoltbrookTown_PowerPlant_Underground_Tunnel_PC_Text_0:
# 633 "data/maps/VoltbrookTown_PowerPlant_Underground_Tunnel/scripts.pory"
	.string "A status monitor is displayed on the PC.$"
