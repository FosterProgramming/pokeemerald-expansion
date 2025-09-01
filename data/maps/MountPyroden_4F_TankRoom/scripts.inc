# 1 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"

# 2 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
.set LOCALID_TANK, 1
# 3 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
.set LOCALID_DOM, 2
# 4 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
.set LOCALID_VEE, 3
# 5 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
.set LOCALID_FRO, 4

MountPyroden_4F_TankRoom_MapScripts::
# 9 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_LOAD
# 22 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	compare VAR_PYRODEN_LAST_ROOM_STATE, 5
	goto_if_eq MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 13 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	clearflag FLAG_SYS_HIDE_DOM_PARTY_MEMBER
# 14 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 15 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	clearflag FLAG_SYS_HIDE_FRO_PARTY_MEMBER
# 16 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	addobject LOCALID_DOM
# 17 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	addobject LOCALID_FRO
# 18 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	addobject LOCALID_VEE
	goto MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	map_script_2 VAR_PYRODEN_LAST_ROOM_STATE, 5, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 26 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	lock
# 27 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay 10
# 28 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 29 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 33 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	closemessage
# 34 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 37 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 38 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	special SpawnCameraObject
# 39 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 40 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 41 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2
# 42 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3
# 45 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 46 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5
# 50 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 51 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7
# 56 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	closemessage
# 57 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 60 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 61 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 65 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 66 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 67 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 68 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 69 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8
# 73 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 74 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 75 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 76 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9
# 80 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 81 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6
# 82 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 83 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 84 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10
# 87 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 88 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11
# 94 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 95 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 96 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12
# 101 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 102 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13
# 105 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 106 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14
# 112 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 113 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15
# 116 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 117 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16
# 120 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 121 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17
# 124 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 125 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18
# 131 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 132 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19
# 139 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	closemessage
# 140 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7
# 144 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 145 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	playse SE_PIN
# 146 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8
# 147 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 148 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitse
# 149 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 150 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20
# 155 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	closemessage
# 156 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay 16
# 157 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	playse SE_INTRO_BLAST
# 158 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	fadescreen FADE_TO_WHITE
# 159 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	removeobject LOCALID_TANK
# 160 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitse
# 161 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 162 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay 16
# 163 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	playse SE_PIN
# 164 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9
# 173 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 174 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 175 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_21
# 179 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 180 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_22
# 183 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	closemessage
# 184 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay 64
# 185 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10
# 193 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 194 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	playse SE_PIN
# 195 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11
# 199 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 200 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 201 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_23
# 207 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 208 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_24
# 216 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	closemessage
# 217 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12
# 222 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 223 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 224 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_25
# 229 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 230 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_26
# 231 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 232 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_27
# 238 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_28
# 239 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_29
# 242 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 243 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_30
# 247 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername NULL
# 248 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 249 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_31
# 250 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitfanfare
# 251 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 252 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_32
# 256 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 257 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement 0
# 258 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 259 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_33
# 263 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 264 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_34
# 268 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 269 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_35
# 273 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 274 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_36
# 278 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 279 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_37
# 283 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 284 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_38
# 290 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6
# 291 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_39
# 294 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	speakername MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4
# 295 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	msgbox MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_40
# 302 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	closemessage
# 303 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14
# 306 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 307 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13
# 310 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_15
# 314 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	waitmovement LOCALID_DOM
# 315 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	removeobject LOCALID_DOM
# 316 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	removeobject LOCALID_FRO
# 317 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	removeobject LOCALID_VEE
# 318 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	special RemoveCameraObject
# 319 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	setvar VAR_PYRODEN_LAST_ROOM_STATE, 6
# 320 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	release
	end


# 34 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 35 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 35 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
	step_end

# 39 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 39 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 39 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 39 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 39 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 39 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
	step_end

# 61 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 62 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 62 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 62 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 62 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_up
# 63 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_in_place_right
	step_end

# 66 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 66 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_left
	step_end

# 73 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 73 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_down
	step_end

# 80 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 80 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_up
	step_end

# 81 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_6:
# 81 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_in_place_up
	step_end

# 140 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_7:
# 141 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_up
# 142 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
	step_end

# 146 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_8:
# 146 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	emote_exclamation_mark
	step_end

# 164 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_9:
# 165 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	emote_exclamation_mark
# 166 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 166 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 167 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_right
# 168 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 168 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 169 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_left
# 170 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 170 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 171 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_down
	step_end

# 185 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_10:
# 186 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_left
# 187 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 187 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 188 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_right
# 189 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 189 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 190 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_down
# 191 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 191 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
	step_end

# 195 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_11:
# 196 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	emote_exclamation_mark
# 197 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
# 197 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	delay_16
	step_end

# 217 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_12:
# 218 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_down
# 219 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_right
# 219 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_right
# 220 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	face_down
	step_end

# 256 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_13:
# 256 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_down
	step_end

# 303 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_14:
# 304 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_left
	step_end

# 310 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_15:
# 311 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_down
# 312 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	walk_left
	step_end

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 28 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Vee$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 30 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Woahhhh!\n"
	.string "What IS that?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_2:
# 41 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Narrator$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_3:
# 43 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "For the time being, please pretend that\n"
	.string "this object is a tank.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_4:
# 45 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Fro$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_5:
# 47 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "It looks like a…\n"
	.string "A tank…?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_6:
# 50 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Dom$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_7:
# 52 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "It's so…\n"
	.string "It's so…\p"
	.string "Beautiful…$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_8:
# 70 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "It appears that we've found a hidden\n"
	.string "tank.\p"
	.string "I'm not entirely sure what this\n"
	.string "signifies.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_9:
# 77 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Oh, I know about this!\p"
	.string "Ya see, before getting involved in\n"
	.string "genetic experiments, Team MAGA was in\l"
	.string "the military research industry.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_10:
# 85 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "And they made this tank?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_11:
# 89 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Looks like it.\p"
	.string "But I guess after pivoting field, they\n"
	.string "decided to store it here.\p"
	.string "Good of a place as any other, I reckon!\n"
	.string "Who would look for a tank in a volcano,\l"
	.string "am I right?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_12:
# 97 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Guuuuys!\n"
	.string "Can we keep it?\l"
	.string "It's so cool!$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_13:
# 103 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "I think we better-$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_14:
# 107 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Hold on just a second, you feisty bear!\p"
	.string "I have something I need to tell you.\p"
	.string "I can…\n"
	.string "I can pilot this.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_15:
# 114 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "You can pilot it.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_16:
# 118 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Tank-piloting and money laundering are\n"
	.string "two surprisingly adjacent skills.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_17:
# 122 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "I imagine.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_18:
# 126 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "But listen!\n"
	.string "This is how I can make myself useful!\p"
	.string "I can get in the tank, and run over our\n"
	.string "enemies!\p"
	.string "Please, let me join your team!$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_19:
# 133 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Hmm…\n"
	.string "You make a compelling point.\p"
	.string "But…\n"
	.string "Even if we were to agree…\p"
	.string "How are we getting this tank out of\n"
	.string "here…?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_20:
# 151 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Hey!\n"
	.string "There's a button here!\p"
	.string "It says, “Press here to shrink.”$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_21:
# 176 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Where did it go?\n"
	.string "Did someone eat it?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_22:
# 181 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Don't look at me.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_23:
# 202 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Wait, everyone!\n"
	.string "I found it!\p"
	.string "It's…\n"
	.string "In my pocket!$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_24:
# 209 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "So…\n"
	.string "It really could shrink.\p"
	.string "And you said you could pilot it…\p"
	.string "Hmm…\p"
	.string "Alright, fine.\n"
	.string "You can join our team.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_25:
# 225 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Oh, thank you so very much, Mr. Fro Bear!\p"
	.string "You won't regret it, I promise that!\n"
	.string "I'll make you rich!$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_26:
# 230 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "That's not what we're after.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_27:
# 233 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Ah, of course, of course!\n"
	.string "Silly me!\p"
	.string "We're after revenge.\n"
	.string "And revenge…$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_28:
# 238 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Fro & Dom$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_29:
# 240 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "…Is a dish best served cold.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_30:
# 244 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Heh.\n"
	.string "Maybe you're not so bad, after all.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_31:
# 249 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "{COLOR RED}Dom{COLOR DARK_GRAY} has joined your team!$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_32:
# 253 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Ok, ok, enough of the triumphant\n"
	.string "celebrations.\p"
	.string "Let's figure out what's next.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_33:
# 260 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "So, this Guardian…\p"
	.string "He was another one of the bad guys\n"
	.string "that transformed into a Pokémon,\l"
	.string "right?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_34:
# 265 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Oh, yes, yes!\n"
	.string "He was definitely a human, before!$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_35:
# 270 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "So, I think, that…\p"
	.string "All Guardians might turn out to be\n"
	.string "transformed humans!$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_36:
# 275 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "That's definitely possible.\n"
	.string "Good job, Vee.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_37:
# 280 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Tee hee.\p"
	.string "Are you starting to believe in the story\n"
	.string "of the Guardians and the Artifacts,\l"
	.string "now?$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_38:
# 285 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Hmm…\p"
	.string "I'm still not entirely convinced that\n"
	.string "the Artifacts will turn me and Seel back\l"
	.string "into humans…\p"
	.string "…But it does seem like there's\n"
	.string "something to the story.\p"
	.string "So, we might as well check out the other\n"
	.string "locations.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_39:
# 292 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "I heard rumors of something happening\n"
	.string "in Stratoscape.$"

MountPyroden_4F_TankRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_40:
# 296 "data/maps/MountPyroden_4F_TankRoom/scripts.pory"
	.string "Stratoscape…\p"
	.string "Yes, I think Vee and Seel mentioned\n"
	.string "that there's supposed to be a Guardian\l"
	.string "there.\p"
	.string "And it's the closest to here as well.\p"
	.string "…Ok.\n"
	.string "Let's check out Stratoscape, everyone.$"
