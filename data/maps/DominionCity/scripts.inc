# 1 "data/maps/DominionCity/scripts.pory"

# 2 "data/maps/DominionCity/scripts.pory"
.set LOCALID_VEE, 1
# 3 "data/maps/DominionCity/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 4 "data/maps/DominionCity/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

DominionCity_MapScripts::
# 9 "data/maps/DominionCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 11 "data/maps/DominionCity/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 7, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0
	.2byte 0

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0:
# 13 "data/maps/DominionCity/scripts.pory"
	lockall
# 14 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 15 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 16 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 17 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 18 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0
# 19 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 20 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 21 "data/maps/DominionCity/scripts.pory"
	waitse
# 22 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2
# 23 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 24 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3
# 25 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 26 "data/maps/DominionCity/scripts.pory"
	delay 40
# 27 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4
# 28 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 29 "data/maps/DominionCity/scripts.pory"
	delay 40
# 30 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5
# 31 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 32 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1
# 33 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 34 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1
# 55 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 56 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 57 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 58 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 8
# 59 "data/maps/DominionCity/scripts.pory"
	setrespawn HEAL_LOCATION_DOMINION_CITY
# 60 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_WhatIsThisPlace::
# 68 "data/maps/DominionCity/scripts.pory"
	lockall
# 69 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 70 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 71 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 72 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_0
# 73 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_1
# 74 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 75 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 76 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_2
# 77 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 78 "data/maps/DominionCity/scripts.pory"
	delay 40
# 79 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_3
# 80 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 81 "data/maps/DominionCity/scripts.pory"
	delay 40
# 82 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_4
# 83 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 84 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 85 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_0
# 92 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 93 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 94 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 95 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_1
# 100 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 101 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 102 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 103 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 9
# 104 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsWestStillLooking::
# 110 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, DominionCity_EventScripts_GruntsWestStillLooking_1
# 135 "data/maps/DominionCity/scripts.pory"
	lockall
# 136 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 137 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_2
# 138 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 139 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 140 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_GruntsWestStillLooking_Movement_3
# 141 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 142 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 143 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_2
# 146 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 147 "data/maps/DominionCity/scripts.pory"
	applymovement 3, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 148 "data/maps/DominionCity/scripts.pory"
	waitmovement 3
# 149 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 150 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_4
# 155 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 156 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 157 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 158 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 159 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_5
# 164 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_4
# 165 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 166 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 167 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 168 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 169 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 170 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 171 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 172 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 173 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 174 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 175 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_6, MSGBOX_NPC
# 185 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 186 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 187 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 188 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 189 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 190 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 191 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsWestStillLooking_1:
# 112 "data/maps/DominionCity/scripts.pory"
	lockall
# 113 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 114 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 115 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 116 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 117 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 118 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 119 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 120 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 121 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 124 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 125 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 126 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 127 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 128 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 129 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 130 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsNorthStillLooking::
# 198 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_2, DominionCity_EventScripts_GruntsNorthStillLooking_1
# 223 "data/maps/DominionCity/scripts.pory"
	lockall
# 224 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 225 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1
# 226 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 227 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 228 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 229 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 230 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 231 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_0
# 234 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 235 "data/maps/DominionCity/scripts.pory"
	applymovement 4, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 236 "data/maps/DominionCity/scripts.pory"
	waitmovement 4
# 237 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 238 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_1
# 241 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 242 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 243 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 244 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 245 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_2
# 248 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2
# 249 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 250 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 251 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 252 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 253 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 254 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 255 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 256 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 257 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 258 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 259 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_3, MSGBOX_NPC
# 264 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 265 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 266 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 267 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 268 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 269 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 270 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsNorthStillLooking_1:
# 200 "data/maps/DominionCity/scripts.pory"
	lockall
# 201 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 202 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 203 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 204 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 205 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 206 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 207 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 208 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 209 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 212 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 213 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 214 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 215 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 216 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 217 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 218 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsSouthStillLooking::
# 277 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_3, DominionCity_EventScripts_GruntsSouthStillLooking_1
# 302 "data/maps/DominionCity/scripts.pory"
	lockall
# 303 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 304 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2
# 305 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 306 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 307 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 308 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 309 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 310 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_0
# 311 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 312 "data/maps/DominionCity/scripts.pory"
	applymovement 7, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 313 "data/maps/DominionCity/scripts.pory"
	waitmovement 7
# 314 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 315 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_1
# 317 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 318 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 319 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 320 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 321 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_2
# 322 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1
# 323 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 324 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 325 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 326 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 327 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 328 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 329 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 330 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 331 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 332 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 333 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_3, MSGBOX_NPC
# 338 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 339 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 340 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 341 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 342 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 343 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 344 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsSouthStillLooking_1:
# 279 "data/maps/DominionCity/scripts.pory"
	lockall
# 280 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 281 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 282 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 283 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 284 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 285 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 286 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 287 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 288 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 291 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 292 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 293 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 294 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 295 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 296 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 297 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


# 18 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_0:
# 18 "data/maps/DominionCity/scripts.pory"
	walk_left
# 18 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 19 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_1:
# 19 "data/maps/DominionCity/scripts.pory"
	walk_in_place_left
# 19 "data/maps/DominionCity/scripts.pory"
	walk_in_place_left
	step_end

# 22 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_2:
# 22 "data/maps/DominionCity/scripts.pory"
	walk_left
# 22 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_3:
# 24 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 27 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_4:
# 27 "data/maps/DominionCity/scripts.pory"
	face_right
# 27 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 30 "data/maps/DominionCity/scripts.pory"
DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Movement_5:
# 30 "data/maps/DominionCity/scripts.pory"
	walk_up
# 30 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 72 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_0:
# 72 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 72 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 72 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 72 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 72 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 72 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 72 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
	step_end

# 73 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_1:
# 73 "data/maps/DominionCity/scripts.pory"
	walk_up
# 73 "data/maps/DominionCity/scripts.pory"
	walk_up
# 73 "data/maps/DominionCity/scripts.pory"
	walk_up
# 73 "data/maps/DominionCity/scripts.pory"
	walk_up
# 73 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 76 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_2:
# 76 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
# 76 "data/maps/DominionCity/scripts.pory"
	walk_left
# 76 "data/maps/DominionCity/scripts.pory"
	walk_left
# 76 "data/maps/DominionCity/scripts.pory"
	walk_left
# 76 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 79 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_3:
# 79 "data/maps/DominionCity/scripts.pory"
	walk_right
# 79 "data/maps/DominionCity/scripts.pory"
	walk_right
# 79 "data/maps/DominionCity/scripts.pory"
	walk_right
# 79 "data/maps/DominionCity/scripts.pory"
	walk_right
# 79 "data/maps/DominionCity/scripts.pory"
	walk_right
# 79 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 82 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_4:
# 82 "data/maps/DominionCity/scripts.pory"
	walk_left
# 82 "data/maps/DominionCity/scripts.pory"
	walk_left
# 82 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 92 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_5:
# 92 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 100 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_6:
# 100 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 117 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_0:
# 117 "data/maps/DominionCity/scripts.pory"
	walk_in_place_up
	step_end

# 127 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_1:
# 127 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 137 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_2:
# 137 "data/maps/DominionCity/scripts.pory"
	walk_left
# 137 "data/maps/DominionCity/scripts.pory"
	walk_left
# 137 "data/maps/DominionCity/scripts.pory"
	walk_left
	step_end

# 140 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_3:
# 140 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
	step_end

# 164 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_4:
# 164 "data/maps/DominionCity/scripts.pory"
	walk_right
# 164 "data/maps/DominionCity/scripts.pory"
	walk_right
# 164 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 205 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0:
# 205 "data/maps/DominionCity/scripts.pory"
	walk_in_place_down
	step_end

# 225 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1:
# 225 "data/maps/DominionCity/scripts.pory"
	walk_up
# 225 "data/maps/DominionCity/scripts.pory"
	walk_up
# 225 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 248 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2:
# 248 "data/maps/DominionCity/scripts.pory"
	walk_down
# 248 "data/maps/DominionCity/scripts.pory"
	walk_down
# 248 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 294 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0:
# 294 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 33 "data/maps/DominionCity/scripts.pory"
	.string "Vee$"

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 34 "data/maps/DominionCity/scripts.pory"
	.string "Whoa…\n"
	.string "This is… THE OUTSIDE?!\p"
	.string "I knew it wasn't a made up thing!\n"
	.string "I knew it!\p"
	.string "There's like…\n"
	.string "A giant blue blanket over everything!\p"
	.string "And what's that!\n"
	.string "A huge ball in the sky\p"
	.string "Does it bounce?\n"
	.string "Can I play with it??\p"
	.string "Okay, okay…\n"
	.string "Focus, Vee.\p"
	.string "We may be outside, but we still gotta\n"
	.string "find a way around these fences.\p"
	.string "Wait… Do you hear anything?\p"
	.string "… … …\n"
	.string "Yeah, me neither.\p"
	.string "But that's strange, isn't it?\p"
	.string "Where's the alarms?\n"
	.string "Where's the footsteps coming after us?\p"
	.string "Weird.\n"
	.string "Well, can't really complain about that!\p"
	.string "Let's find a way outta here, and fast!$"

DominionCity_EventScripts_WhatIsThisPlace_Text_0:
# 85 "data/maps/DominionCity/scripts.pory"
	.string "Huh? What is this place?\n"
	.string "Is it a town?\p"
	.string "I've never seen a town before.\n"
	.string "But from what I've heard…\p"
	.string "You'd think there'd be more, you know,\n"
	.string "townspeople in here…\p"
	.string "This is very strange, isn't it,\n"
	.string "{PLAYER}?$"

DominionCity_EventScripts_WhatIsThisPlace_Text_1:
# 95 "data/maps/DominionCity/scripts.pory"
	.string "…Oh. Yeah.\p"
	.string "I guess if you were gonna do a bunch of\n"
	.string "creepy experiments, you'd wanna do it\l"
	.string "somewhere private.\p"
	.string "Still, this place gives me the creeps.\p"
	.string "Let's get out of here!$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_0:
# 121 "data/maps/DominionCity/scripts.pory"
	.string "Hmm…\n"
	.string "There's gotta be another way around.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_1:
# 142 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 1$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_2:
# 143 "data/maps/DominionCity/scripts.pory"
	.string "Those test subjects really had to go\n"
	.string "and escape, didn't they.\p"
	.string "You know what they look like?$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_3:
# 149 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 2$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_4:
# 150 "data/maps/DominionCity/scripts.pory"
	.string "Ye, ye.\p"
	.string "It's that ugly-lookin's Dewgong thing\n"
	.string "and that…\n"
	.string "Fox-like creature, aye?\p"
	.string "Heard they were plannin' on gettin' rid\n"
	.string "of her, the poor sod.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_5:
# 159 "data/maps/DominionCity/scripts.pory"
	.string "That's hardly our business.\p"
	.string "We were just ordered to find them, and\n"
	.string "find them we will. Shouldn't be too hard\l"
	.string "of a job, anyway. Bet they’re hiding like\l"
	.string "scared Rattata.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_6:
# 175 "data/maps/DominionCity/scripts.pory"
	.string "Those grunts are everywhere…\p"
	.string "W-what did they say about…\n"
	.string "Getting rid of me…?\p"
	.string "Surely they don't mean…\p"
	.string "… … …\p"
	.string "{PLAYER}, we can't let them catch us.\p"
	.string "I'm not going back in there.\n"
	.string "Nuh-huh. No chance.\p"
	.string "C'mon, there has to be a way around!$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_0:
# 231 "data/maps/DominionCity/scripts.pory"
	.string "HQ is losing it, man.\n"
	.string "Said if we don’t find them soon, heads\l"
	.string "will roll.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_1:
# 238 "data/maps/DominionCity/scripts.pory"
	.string "What kind of Pokémon breaks out of\n"
	.string "Sector 7, anyway?!\n"
	.string "This is bad… Really bad.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_2:
# 245 "data/maps/DominionCity/scripts.pory"
	.string "Listen, if you spot anything weird, and\n"
	.string "I mean ANYTHING, report it.\p"
	.string "No way I'm taking the fall for this one.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_3:
# 259 "data/maps/DominionCity/scripts.pory"
	.string "Those grunts are everywhere…\n"
	.string "{PLAYER}, we can't let them catch us.\p"
	.string "I'm not going back in there.\n"
	.string "Nuh-huh. No chance.\p"
	.string "C'mon, there has to be a way around!$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_0:
# 310 "data/maps/DominionCity/scripts.pory"
	.string "Cleaning up after another lab failure…\n"
	.string "Again.$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_1:
# 315 "data/maps/DominionCity/scripts.pory"
	.string "They said Sector 7 was secure.\n"
	.string "They always say that…$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_2:
# 321 "data/maps/DominionCity/scripts.pory"
	.string "This was not what they advertised in\n"
	.string "the job description…$"
