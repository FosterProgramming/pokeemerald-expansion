# 1 "data/maps/MountPyroden_4F/scripts.pory"

# 2 "data/maps/MountPyroden_4F/scripts.pory"
.set LOCALID_VEE, 3
# 3 "data/maps/MountPyroden_4F/scripts.pory"
.set LOCALID_FRO, 2
# 4 "data/maps/MountPyroden_4F/scripts.pory"
.set LOCALID_DOM, 4
# 5 "data/maps/MountPyroden_4F/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 6 "data/maps/MountPyroden_4F/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

MountPyroden_4F_MapScripts::
# 10 "data/maps/MountPyroden_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD
# 40 "data/maps/MountPyroden_4F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/MountPyroden_4F/scripts.pory"
	goto_if_set FLAG_BEATEN_MAGMORTAR, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_2
MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 34 "data/maps/MountPyroden_4F/scripts.pory"
	compare VAR_PYRODEN_LAST_ROOM_STATE, 5
	goto_if_ge MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_5
MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 14 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 4, 17, METATILE_MountPyroden_Lava_TopLeft, TRUE
# 15 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 5, 17, METATILE_MountPyroden_Lava_TopMiddle, TRUE
# 16 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 6, 17, METATILE_MountPyroden_Lava_TopMiddle, TRUE
# 17 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 7, 17, METATILE_MountPyroden_Lava_TopMiddle, TRUE
# 18 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 8, 17, METATILE_MountPyroden_Lava_TopMiddle, TRUE
# 19 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 9, 17, METATILE_MountPyroden_Lava_TopRight, TRUE
# 20 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 4, 18, METATILE_MountPyroden_Lava_MiddleLeft, TRUE
# 21 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 5, 18, METATILE_MountPyroden_Lava_MiddleMiddle, TRUE
# 22 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 6, 18, METATILE_MountPyroden_Lava_MiddleMiddle, TRUE
# 23 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 7, 18, METATILE_MountPyroden_Lava_MiddleMiddle, TRUE
# 24 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 8, 18, METATILE_MountPyroden_Lava_MiddleMiddle, TRUE
# 25 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 9, 18, METATILE_MountPyroden_Lava_MiddleRight, TRUE
# 26 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 4, 19, METATILE_MountPyroden_Lava_BottomLeft, TRUE
# 27 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 5, 19, METATILE_MountPyroden_Lava_BottomMiddle, TRUE
# 28 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 6, 19, METATILE_MountPyroden_Lava_BottomMiddle, TRUE
# 29 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 7, 19, METATILE_MountPyroden_Lava_BottomMiddle, TRUE
# 30 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 8, 19, METATILE_MountPyroden_Lava_BottomMiddle, TRUE
# 31 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 9, 19, METATILE_MountPyroden_Lava_BottomRight, TRUE
# 32 "data/maps/MountPyroden_4F/scripts.pory"
	special DrawWholeMapView
	goto MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 36 "data/maps/MountPyroden_4F/scripts.pory"
	call MountPyroden_4F_EventScript_DrainLava
	goto MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_LOAD_4

MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 42 "data/maps/MountPyroden_4F/scripts.pory"
	map_script_2 VAR_PYRODEN_LAST_ROOM_STATE, 3, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 44 "data/maps/MountPyroden_4F/scripts.pory"
	lock
# 45 "data/maps/MountPyroden_4F/scripts.pory"
	special SpawnCameraObject
# 46 "data/maps/MountPyroden_4F/scripts.pory"
	delay 10
# 47 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 54 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 55 "data/maps/MountPyroden_4F/scripts.pory"
	special RemoveCameraObject
# 56 "data/maps/MountPyroden_4F/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 57 "data/maps/MountPyroden_4F/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 58 "data/maps/MountPyroden_4F/scripts.pory"
	addobject LOCALID_VEE
# 59 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 63 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 64 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement LOCALID_VEE
# 65 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 66 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 72 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 73 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 74 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 75 "data/maps/MountPyroden_4F/scripts.pory"
	removeobject LOCALID_VEE
# 76 "data/maps/MountPyroden_4F/scripts.pory"
	setvar VAR_PYRODEN_LAST_ROOM_STATE, 4
	end


MountPyroden_4F_EventScript_Statue::
# 85 "data/maps/MountPyroden_4F/scripts.pory"
	lock
# 86 "data/maps/MountPyroden_4F/scripts.pory"
	goto_if_unset FLAG_BEATEN_MAGMORTAR, MountPyroden_4F_EventScript_Statue_1
# 130 "data/maps/MountPyroden_4F/scripts.pory"
	compare VAR_PYRODEN_LAST_ROOM_STATE, 4
	goto_if_eq MountPyroden_4F_EventScript_Statue_4
# 309 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_0
# 313 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 314 "data/maps/MountPyroden_4F/scripts.pory"
	release
	end

MountPyroden_4F_EventScript_Statue_1:
# 88 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_0
# 92 "data/maps/MountPyroden_4F/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 93 "data/maps/MountPyroden_4F/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 94 "data/maps/MountPyroden_4F/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 95 "data/maps/MountPyroden_4F/scripts.pory"
	addobject LOCALID_FRO
# 96 "data/maps/MountPyroden_4F/scripts.pory"
	addobject LOCALID_VEE
# 97 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_EventScript_Statue_Movement_0
# 98 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_EventScript_Statue_Movement_1
# 99 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyroden_4F_EventScript_Statue_Movement_2
# 100 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement LOCALID_VEE
# 101 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 102 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_2
# 110 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 111 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_3
# 114 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 115 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_4
# 119 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 120 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_EventScript_Statue_Movement_3
# 121 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_EventScript_Statue_Movement_4
# 122 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 123 "data/maps/MountPyroden_4F/scripts.pory"
	removeobject LOCALID_VEE
# 124 "data/maps/MountPyroden_4F/scripts.pory"
	removeobject LOCALID_FRO
# 125 "data/maps/MountPyroden_4F/scripts.pory"
	release
	end

MountPyroden_4F_EventScript_Statue_4:
# 132 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_0
# 136 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 137 "data/maps/MountPyroden_4F/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 138 "data/maps/MountPyroden_4F/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 139 "data/maps/MountPyroden_4F/scripts.pory"
	setobjectxyperm LOCALID_FRO, PlayerXCoordinates, PlayerYCoordinates
# 140 "data/maps/MountPyroden_4F/scripts.pory"
	setobjectxyperm LOCALID_DOM, PlayerXCoordinates, PlayerYCoordinates
# 141 "data/maps/MountPyroden_4F/scripts.pory"
	addobject LOCALID_FRO
# 142 "data/maps/MountPyroden_4F/scripts.pory"
	addobject LOCALID_VEE
# 143 "data/maps/MountPyroden_4F/scripts.pory"
	addobject LOCALID_DOM
# 144 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_EventScript_Statue_Movement_0
# 148 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_EventScript_Statue_Movement_5
# 153 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_EventScript_Statue_Movement_1
# 157 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement LOCALID_VEE
# 158 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 159 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_5
# 164 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_EventScript_Statue_Movement_6
# 165 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 166 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_6
# 167 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_7
# 170 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 171 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_8
# 176 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_6
# 177 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_9
# 180 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 181 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_10
# 184 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 185 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyroden_4F_EventScript_Statue_Movement_7
# 189 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_EventScript_Statue_Movement_3
# 192 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 193 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 194 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_11
# 195 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_6
# 196 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_12
# 197 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 198 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_13
# 206 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_6
# 207 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_14
# 210 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 211 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_15
# 216 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_6
# 217 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_16
# 227 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 228 "data/maps/MountPyroden_4F/scripts.pory"
	playse SE_UNLOCK
# 229 "data/maps/MountPyroden_4F/scripts.pory"
	call MountPyroden_4F_EventScript_DrainLava
# 230 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_EventScript_Statue_Movement_8
# 231 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_EventScript_Statue_Movement_8
# 232 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_EventScript_Statue_Movement_8
# 233 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 234 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 235 "data/maps/MountPyroden_4F/scripts.pory"
	waitse
# 236 "data/maps/MountPyroden_4F/scripts.pory"
	delay 16
# 237 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_1
# 238 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_17
# 241 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 242 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_FRO, MountPyroden_4F_EventScript_Statue_Movement_9
# 248 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 249 "data/maps/MountPyroden_4F/scripts.pory"
	playse SE_EXIT
# 250 "data/maps/MountPyroden_4F/scripts.pory"
	removeobject LOCALID_FRO
# 251 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 252 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_18
# 256 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 257 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_VEE, MountPyroden_4F_EventScript_Statue_Movement_10
# 263 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 264 "data/maps/MountPyroden_4F/scripts.pory"
	playse SE_EXIT
# 265 "data/maps/MountPyroden_4F/scripts.pory"
	removeobject LOCALID_VEE
# 266 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_EventScript_Statue_Movement_11
# 267 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MountPyroden_4F_EventScript_Statue_Movement_12
# 268 "data/maps/MountPyroden_4F/scripts.pory"
	speakername MountPyroden_4F_EventScript_Statue_Text_6
# 269 "data/maps/MountPyroden_4F/scripts.pory"
	msgbox MountPyroden_4F_EventScript_Statue_Text_19
# 293 "data/maps/MountPyroden_4F/scripts.pory"
	closemessage
# 294 "data/maps/MountPyroden_4F/scripts.pory"
	applymovement LOCALID_DOM, MountPyroden_4F_EventScript_Statue_Movement_13
# 300 "data/maps/MountPyroden_4F/scripts.pory"
	waitmovement 0
# 301 "data/maps/MountPyroden_4F/scripts.pory"
	playse SE_EXIT
# 302 "data/maps/MountPyroden_4F/scripts.pory"
	removeobject LOCALID_DOM
# 303 "data/maps/MountPyroden_4F/scripts.pory"
	setvar VAR_PYRODEN_LAST_ROOM_STATE, 5
# 304 "data/maps/MountPyroden_4F/scripts.pory"
	release
	end


MountPyroden_4F_EventScript_DrainLava::
# 322 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 21, 10, METATILE_MountPyroden_Lava_BottomLeft, TRUE
# 323 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 22, 10, METATILE_MountPyroden_Lava_BottomRight, TRUE
# 324 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 21, 11, METATILE_MountPyroden_Floor, FALSE
# 325 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 22, 11, METATILE_MountPyroden_Floor, FALSE
# 326 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 21, 12, METATILE_MountPyroden_Floor, FALSE
# 327 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 22, 12, METATILE_MountPyroden_Floor, FALSE
# 328 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 21, 13, METATILE_MountPyroden_Lava_TopLeft, TRUE
# 329 "data/maps/MountPyroden_4F/scripts.pory"
	setmetatile 22, 13, METATILE_MountPyroden_Lava_TopRight, TRUE
# 330 "data/maps/MountPyroden_4F/scripts.pory"
	special DrawWholeMapView
	return


# 47 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 48 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_down
# 49 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_left
# 49 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_left
# 49 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_left
# 49 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_left
# 50 "data/maps/MountPyroden_4F/scripts.pory"
	delay_16
# 50 "data/maps/MountPyroden_4F/scripts.pory"
	delay_16
# 50 "data/maps/MountPyroden_4F/scripts.pory"
	delay_16
# 51 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 51 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 51 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 51 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 52 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
	step_end

# 59 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 60 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 61 "data/maps/MountPyroden_4F/scripts.pory"
	face_left
	step_end

# 63 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 63 "data/maps/MountPyroden_4F/scripts.pory"
	walk_in_place_right
	step_end

# 73 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 73 "data/maps/MountPyroden_4F/scripts.pory"
	walk_left
	step_end

# 97 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_0:
# 97 "data/maps/MountPyroden_4F/scripts.pory"
	walk_down
# 97 "data/maps/MountPyroden_4F/scripts.pory"
	face_up
	step_end

# 98 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_1:
# 98 "data/maps/MountPyroden_4F/scripts.pory"
	walk_left
# 98 "data/maps/MountPyroden_4F/scripts.pory"
	face_right
	step_end

# 99 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_2:
# 99 "data/maps/MountPyroden_4F/scripts.pory"
	walk_in_place_down
	step_end

# 120 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_3:
# 120 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
	step_end

# 121 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_4:
# 121 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
	step_end

# 148 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_5:
# 149 "data/maps/MountPyroden_4F/scripts.pory"
	walk_left
# 150 "data/maps/MountPyroden_4F/scripts.pory"
	walk_down
# 151 "data/maps/MountPyroden_4F/scripts.pory"
	face_right
	step_end

# 164 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_6:
# 164 "data/maps/MountPyroden_4F/scripts.pory"
	face_left
	step_end

# 185 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_7:
# 186 "data/maps/MountPyroden_4F/scripts.pory"
	walk_down
# 187 "data/maps/MountPyroden_4F/scripts.pory"
	walk_in_place_up
	step_end

# 230 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_8:
# 230 "data/maps/MountPyroden_4F/scripts.pory"
	face_right
	step_end

# 242 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_9:
# 243 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 243 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 243 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 243 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 243 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 243 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 244 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 244 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 245 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 245 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 245 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 246 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 246 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 246 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
	step_end

# 257 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_10:
# 258 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 258 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 258 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 258 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 258 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 258 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 259 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 259 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 260 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 260 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 260 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_right
# 261 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 261 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
# 261 "data/maps/MountPyroden_4F/scripts.pory"
	walk_fast_up
	step_end

# 266 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_11:
# 266 "data/maps/MountPyroden_4F/scripts.pory"
	face_down
	step_end

# 267 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_12:
# 267 "data/maps/MountPyroden_4F/scripts.pory"
	walk_in_place_up
	step_end

# 294 "data/maps/MountPyroden_4F/scripts.pory"
MountPyroden_4F_EventScript_Statue_Movement_13:
# 295 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 295 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 295 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 295 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 295 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 296 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 296 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 297 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 297 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 297 "data/maps/MountPyroden_4F/scripts.pory"
	walk_right
# 298 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 298 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
# 298 "data/maps/MountPyroden_4F/scripts.pory"
	walk_up
	step_end

MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 65 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Vee$"

MountPyroden_4F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 67 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Oh, no!\n"
	.string "The exit is covered by lava!\p"
	.string "What do we do, now?\n"
	.string "We need to find another way out, Seel!$"

MountPyroden_4F_EventScript_Statue_Text_0:
# 89 "data/maps/MountPyroden_4F/scripts.pory"
	.string "A strange statue.\n"
	.string "There's a dial on it.$"

MountPyroden_4F_EventScript_Statue_Text_1:
# 101 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Fro$"

MountPyroden_4F_EventScript_Statue_Text_2:
# 103 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Well, I'll be.\n"
	.string "This is a bit of a pickle.\p"
	.string "I bet that this dial makes the lava\n"
	.string "disappear, or something of the sort.\p"
	.string "But…\n"
	.string "We're missing something important.\p"
	.string "Something that will prevent us from\n"
	.string "turning the dial.$"

MountPyroden_4F_EventScript_Statue_Text_3:
# 112 "data/maps/MountPyroden_4F/scripts.pory"
	.string "A key, maybe?$"

MountPyroden_4F_EventScript_Statue_Text_4:
# 116 "data/maps/MountPyroden_4F/scripts.pory"
	.string "No.\p"
	.string "Opposable thumbs.$"

MountPyroden_4F_EventScript_Statue_Text_5:
# 160 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Hmm.\p"
	.string "Say…\n"
	.string "Dim, right?$"

MountPyroden_4F_EventScript_Statue_Text_6:
# 166 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Dom$"

MountPyroden_4F_EventScript_Statue_Text_7:
# 168 "data/maps/MountPyroden_4F/scripts.pory"
	.string "It's Dom.\n"
	.string "Dom Colangelo, at your service.$"

MountPyroden_4F_EventScript_Statue_Text_8:
# 172 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Ok.\p"
	.string "Dim, it looks like you could actually be\n"
	.string "somewhat useful.\p"
	.string "You happen to have something that none\n"
	.string "of us here possess.$"

MountPyroden_4F_EventScript_Statue_Text_9:
# 178 "data/maps/MountPyroden_4F/scripts.pory"
	.string "A heart of gold?$"

MountPyroden_4F_EventScript_Statue_Text_10:
# 182 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Opposable thumbs and fine motor skills.$"

MountPyroden_4F_EventScript_Statue_Text_11:
# 194 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Now, Dim.$"

MountPyroden_4F_EventScript_Statue_Text_12:
# 196 "data/maps/MountPyroden_4F/scripts.pory"
	.string "It's Dom.$"

MountPyroden_4F_EventScript_Statue_Text_13:
# 199 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Ok.\p"
	.string "Now, Dim.\n"
	.string "There is a dial in front of you.\p"
	.string "I think that the dial controls the flow\n"
	.string "of the lava.\p"
	.string "But there must be a trick to it.\p"
	.string "It would probably be like opening a\n"
	.string "safe.$"

MountPyroden_4F_EventScript_Statue_Text_14:
# 208 "data/maps/MountPyroden_4F/scripts.pory"
	.string "I know how to open sa-$"

MountPyroden_4F_EventScript_Statue_Text_15:
# 212 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Yes, you know how to open safes.\n"
	.string "I never doubted otherwise.\p"
	.string "Now. Try to see if you can make\n"
	.string "something happen.$"

MountPyroden_4F_EventScript_Statue_Text_16:
# 218 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Hmm…\n"
	.string "Let's see…\p"
	.string "A bit to the left…\n"
	.string "A bit to the right…\p"
	.string "Thirty degrees…\n"
	.string "And a half…\l"
	.string "And a quarter left…\p"
	.string "And…$"

MountPyroden_4F_EventScript_Statue_Text_17:
# 239 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Well, I'm going.$"

MountPyroden_4F_EventScript_Statue_Text_18:
# 253 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Uhm!\n"
	.string "Wait for me!$"

MountPyroden_4F_EventScript_Statue_Text_19:
# 270 "data/maps/MountPyroden_4F/scripts.pory"
	.string "Uhm, Seel?\n"
	.string "Can I talk to you one-to-one for a sec?\p"
	.string "Look, I get it.\n"
	.string "You're mad at me.\p"
	.string "You're mad at me 'cause I laundered\n"
	.string "money for the company that turned you\l"
	.string "into a Pokémon.\p"
	.string "And look-\n"
	.string "Who wouldn't be, right?\p"
	.string "But you're killing me here, man.\n"
	.string "You're killing me.\p"
	.string "You gotta understand.\p"
	.string "They took away my job.\n"
	.string "They took away my wife!\p"
	.string "…Well, the wife thing was a separate\n"
	.string "incident.\l"
	.string "But still!\p"
	.string "I got nowhere to go, man.\n"
	.string "You gotta let me in your little group,\l"
	.string "here.\p"
	.string "Hell, we even all have a name with\n"
	.string "exactly three letters in it!\p"
	.string "That's fate!\n"
	.string "We're just meant to be!\p"
	.string "…You're as talkative as ever, aren't\n"
	.string "you?\p"
	.string "Well, I've said what I had to say.\p"
	.string "Please think about it.$"
