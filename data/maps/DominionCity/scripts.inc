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
# 63 "data/maps/DominionCity/scripts.pory"
	map_script_2 VAR_DOMINION_CITY_LAB_INTRO_STATE, 10, DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1
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

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_1:
# 65 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_HIDE_DOMINION_GRUNTS
# 66 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 11
	end


DominionCity_EventScripts_WhatIsThisPlace::
# 75 "data/maps/DominionCity/scripts.pory"
	lockall
# 76 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 77 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 78 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 79 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_0
# 80 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_1
# 81 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 82 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 83 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_2
# 84 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 85 "data/maps/DominionCity/scripts.pory"
	delay 40
# 86 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_3
# 87 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 88 "data/maps/DominionCity/scripts.pory"
	delay 40
# 89 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_4
# 90 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 91 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 92 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_0
# 99 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 100 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 101 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 102 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_1
# 107 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 108 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 109 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 110 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 9
# 111 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsWestStillLooking::
# 117 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, DominionCity_EventScripts_GruntsWestStillLooking_1
# 142 "data/maps/DominionCity/scripts.pory"
	lockall
# 143 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 144 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_2
# 145 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 146 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 147 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_GruntsWestStillLooking_Movement_3
# 148 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 149 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 150 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_2
# 153 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 154 "data/maps/DominionCity/scripts.pory"
	applymovement 3, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 155 "data/maps/DominionCity/scripts.pory"
	waitmovement 3
# 156 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 157 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_4
# 162 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 163 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 164 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 165 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 166 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_5
# 171 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_4
# 172 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 173 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 174 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 175 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 176 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 177 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 178 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 179 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 180 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 181 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 182 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_6, MSGBOX_NPC
# 192 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 193 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 194 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 195 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 196 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 197 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 198 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsWestStillLooking_1:
# 119 "data/maps/DominionCity/scripts.pory"
	lockall
# 120 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 121 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 122 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 123 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 124 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 125 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 126 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 127 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 128 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 131 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 132 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 133 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 134 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 135 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 136 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 137 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsNorthStillLooking::
# 205 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_2, DominionCity_EventScripts_GruntsNorthStillLooking_1
# 230 "data/maps/DominionCity/scripts.pory"
	lockall
# 231 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 232 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1
# 233 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 234 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 235 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 236 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 237 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 238 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_0
# 241 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 242 "data/maps/DominionCity/scripts.pory"
	applymovement 4, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 243 "data/maps/DominionCity/scripts.pory"
	waitmovement 4
# 244 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 245 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_1
# 248 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 249 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 250 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 251 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 252 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_2
# 255 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2
# 256 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 257 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 258 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 259 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 260 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 261 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 262 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 263 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 264 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 265 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 266 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_3, MSGBOX_NPC
# 271 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 272 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 273 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 274 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 275 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 276 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 277 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsNorthStillLooking_1:
# 207 "data/maps/DominionCity/scripts.pory"
	lockall
# 208 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 209 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 210 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 211 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 212 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 213 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 214 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 215 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 216 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 219 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 220 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 221 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 222 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 223 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 224 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 225 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsSouthStillLooking::
# 284 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_3, DominionCity_EventScripts_GruntsSouthStillLooking_1
# 309 "data/maps/DominionCity/scripts.pory"
	lockall
# 310 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 311 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_1
# 312 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 313 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 314 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 315 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 316 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 317 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_0
# 318 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 319 "data/maps/DominionCity/scripts.pory"
	applymovement 7, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 320 "data/maps/DominionCity/scripts.pory"
	waitmovement 7
# 321 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 322 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_1
# 324 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 325 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 326 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 327 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 328 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_2
# 329 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_2
# 330 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 331 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 332 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 333 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 334 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 335 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 336 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 337 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 338 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 339 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 340 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_3, MSGBOX_NPC
# 345 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 346 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 347 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 348 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 349 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 350 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 351 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsSouthStillLooking_1:
# 286 "data/maps/DominionCity/scripts.pory"
	lockall
# 287 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 288 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 289 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 290 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 291 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 292 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 293 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 294 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 295 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 298 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 299 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 300 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 301 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 302 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 303 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 304 "data/maps/DominionCity/scripts.pory"
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

# 79 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_0:
# 79 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 79 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 79 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 79 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 79 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 79 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 79 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
	step_end

# 80 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_1:
# 80 "data/maps/DominionCity/scripts.pory"
	walk_up
# 80 "data/maps/DominionCity/scripts.pory"
	walk_up
# 80 "data/maps/DominionCity/scripts.pory"
	walk_up
# 80 "data/maps/DominionCity/scripts.pory"
	walk_up
# 80 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 83 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_2:
# 83 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
# 83 "data/maps/DominionCity/scripts.pory"
	walk_left
# 83 "data/maps/DominionCity/scripts.pory"
	walk_left
# 83 "data/maps/DominionCity/scripts.pory"
	walk_left
# 83 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 86 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_3:
# 86 "data/maps/DominionCity/scripts.pory"
	walk_right
# 86 "data/maps/DominionCity/scripts.pory"
	walk_right
# 86 "data/maps/DominionCity/scripts.pory"
	walk_right
# 86 "data/maps/DominionCity/scripts.pory"
	walk_right
# 86 "data/maps/DominionCity/scripts.pory"
	walk_right
# 86 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 89 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_4:
# 89 "data/maps/DominionCity/scripts.pory"
	walk_left
# 89 "data/maps/DominionCity/scripts.pory"
	walk_left
# 89 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 99 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_5:
# 99 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 107 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_6:
# 107 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 124 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_0:
# 124 "data/maps/DominionCity/scripts.pory"
	walk_in_place_up
	step_end

# 134 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_1:
# 134 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 144 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_2:
# 144 "data/maps/DominionCity/scripts.pory"
	walk_left
# 144 "data/maps/DominionCity/scripts.pory"
	walk_left
# 144 "data/maps/DominionCity/scripts.pory"
	walk_left
	step_end

# 147 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_3:
# 147 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
	step_end

# 171 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_4:
# 171 "data/maps/DominionCity/scripts.pory"
	walk_right
# 171 "data/maps/DominionCity/scripts.pory"
	walk_right
# 171 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 212 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0:
# 212 "data/maps/DominionCity/scripts.pory"
	walk_in_place_down
	step_end

# 232 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1:
# 232 "data/maps/DominionCity/scripts.pory"
	walk_up
# 232 "data/maps/DominionCity/scripts.pory"
	walk_up
# 232 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 255 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2:
# 255 "data/maps/DominionCity/scripts.pory"
	walk_down
# 255 "data/maps/DominionCity/scripts.pory"
	walk_down
# 255 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 301 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0:
# 301 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 311 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsSouthStillLooking_Movement_1:
# 311 "data/maps/DominionCity/scripts.pory"
	walk_down
# 311 "data/maps/DominionCity/scripts.pory"
	walk_down
# 311 "data/maps/DominionCity/scripts.pory"
	walk_down
# 311 "data/maps/DominionCity/scripts.pory"
	walk_down
# 311 "data/maps/DominionCity/scripts.pory"
	walk_down
# 311 "data/maps/DominionCity/scripts.pory"
	walk_down
# 311 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 329 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsSouthStillLooking_Movement_2:
# 329 "data/maps/DominionCity/scripts.pory"
	walk_up
# 329 "data/maps/DominionCity/scripts.pory"
	walk_up
# 329 "data/maps/DominionCity/scripts.pory"
	walk_up
# 329 "data/maps/DominionCity/scripts.pory"
	walk_up
# 329 "data/maps/DominionCity/scripts.pory"
	walk_up
# 329 "data/maps/DominionCity/scripts.pory"
	walk_up
# 329 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 33 "data/maps/DominionCity/scripts.pory"
	.string "Vee$"

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 34 "data/maps/DominionCity/scripts.pory"
	.string "Whoa… {PLAYER}…\n"
	.string "This is… THE OUTSIDE?!\p"
	.string "I knew it wasn't a made up thing!\n"
	.string "I knew it!\p"
	.string "There's like…\n"
	.string "A giant blue blanket over everything!\p"
	.string "And what's that!\n"
	.string "A huge ball in the sky!\p"
	.string "Does it bounce?\n"
	.string "Can I play with it?\p"
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
# 92 "data/maps/DominionCity/scripts.pory"
	.string "Huh? What is this place?\n"
	.string "Is it a town?\p"
	.string "I've never seen a town before.\n"
	.string "But from what I've heard…\p"
	.string "You'd think there'd be more, you know,\n"
	.string "townspeople in here…\p"
	.string "This is very strange, isn't it,\n"
	.string "{PLAYER}?$"

DominionCity_EventScripts_WhatIsThisPlace_Text_1:
# 102 "data/maps/DominionCity/scripts.pory"
	.string "…Oh. Yeah.\p"
	.string "I guess if you were gonna do a bunch of\n"
	.string "creepy experiments, you'd wanna do it\l"
	.string "somewhere private.\p"
	.string "Still, this place gives me the creeps.\p"
	.string "Let's get out of here!$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_0:
# 128 "data/maps/DominionCity/scripts.pory"
	.string "Hmm…\n"
	.string "There's gotta be another way around.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_1:
# 149 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 1$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_2:
# 150 "data/maps/DominionCity/scripts.pory"
	.string "Those test subjects really had to go\n"
	.string "and escape.\p"
	.string "You know what they look like?$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_3:
# 156 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 2$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_4:
# 157 "data/maps/DominionCity/scripts.pory"
	.string "Ye, ye.\p"
	.string "It's that ugly-lookin's Dewgong thing\n"
	.string "and that…\l"
	.string "Fox-like creature, aye?\p"
	.string "Heard they were plannin' on gettin' rid\n"
	.string "of her, the poor sod.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_5:
# 166 "data/maps/DominionCity/scripts.pory"
	.string "That's hardly our business.\p"
	.string "We were just ordered to find them, and\n"
	.string "find them we will.\p"
	.string "Shouldn't be too hard of a job, anyway.\p"
	.string "Bet they’re hiding like scared Rattata.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_6:
# 182 "data/maps/DominionCity/scripts.pory"
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
# 238 "data/maps/DominionCity/scripts.pory"
	.string "HQ is losing it, man.\n"
	.string "Said if we don’t find them soon, heads\l"
	.string "will roll.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_1:
# 245 "data/maps/DominionCity/scripts.pory"
	.string "What kind of Pokémon breaks out of\n"
	.string "Sector 7, anyway?!\n"
	.string "This is bad… Really bad.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_2:
# 252 "data/maps/DominionCity/scripts.pory"
	.string "Listen, if you spot anything weird, and\n"
	.string "I mean ANYTHING, report it.\p"
	.string "No way I'm taking the fall for this one.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_3:
# 266 "data/maps/DominionCity/scripts.pory"
	.string "Those grunts are everywhere…\n"
	.string "{PLAYER}, we can't let them catch us.\p"
	.string "I'm not going back in there.\n"
	.string "Nuh-huh. No chance.\p"
	.string "C'mon, there has to be a way around!$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_0:
# 317 "data/maps/DominionCity/scripts.pory"
	.string "Cleaning up after another lab failure…\n"
	.string "Again.$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_1:
# 322 "data/maps/DominionCity/scripts.pory"
	.string "They said Sector 7 was secure.\n"
	.string "They always say that…$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_2:
# 328 "data/maps/DominionCity/scripts.pory"
	.string "This was not what they advertised in\n"
	.string "the job description…$"
