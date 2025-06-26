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
	return


DominionCity_EventScripts_WhatIsThisPlace::
# 73 "data/maps/DominionCity/scripts.pory"
	lockall
# 74 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 75 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 76 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 77 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_0
# 78 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_1
# 79 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 80 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 81 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_2
# 82 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 83 "data/maps/DominionCity/scripts.pory"
	delay 40
# 84 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_3
# 85 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 86 "data/maps/DominionCity/scripts.pory"
	delay 40
# 87 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_4
# 88 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 89 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 90 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_0
# 97 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 98 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 99 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 100 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_1
# 105 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 106 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 107 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 108 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 9
# 109 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsWestStillLooking::
# 115 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, DominionCity_EventScripts_GruntsWestStillLooking_1
# 140 "data/maps/DominionCity/scripts.pory"
	lockall
# 141 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 142 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_2
# 143 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 144 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 145 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_GruntsWestStillLooking_Movement_3
# 146 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 147 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 148 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_2
# 151 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 152 "data/maps/DominionCity/scripts.pory"
	applymovement 3, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 153 "data/maps/DominionCity/scripts.pory"
	waitmovement 3
# 154 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 155 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_4
# 160 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 161 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 162 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 163 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 164 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_5
# 169 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_4
# 170 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 171 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 172 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 173 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 174 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 175 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 176 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 177 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 178 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 179 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 180 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_6, MSGBOX_NPC
# 190 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 191 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 192 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 193 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 194 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 195 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 196 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsWestStillLooking_1:
# 117 "data/maps/DominionCity/scripts.pory"
	lockall
# 118 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 119 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 120 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 121 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 122 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 123 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 124 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 125 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 126 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 129 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 130 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 131 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 132 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 133 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 134 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 135 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsNorthStillLooking::
# 203 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_2, DominionCity_EventScripts_GruntsNorthStillLooking_1
# 228 "data/maps/DominionCity/scripts.pory"
	lockall
# 229 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 230 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1
# 231 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 232 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 233 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 234 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 235 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 236 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_0
# 239 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 240 "data/maps/DominionCity/scripts.pory"
	applymovement 4, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 241 "data/maps/DominionCity/scripts.pory"
	waitmovement 4
# 242 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 243 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_1
# 246 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 247 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 248 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 249 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 250 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_2
# 253 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2
# 254 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 255 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 256 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 257 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 258 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 259 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 260 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 261 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 262 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 263 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 264 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_3, MSGBOX_NPC
# 269 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 270 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 271 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 272 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 273 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 274 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 275 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsNorthStillLooking_1:
# 205 "data/maps/DominionCity/scripts.pory"
	lockall
# 206 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 207 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 208 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 209 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 210 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 211 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 212 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 213 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 214 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 217 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 218 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 219 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 220 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 221 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 222 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 223 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsSouthStillLooking::
# 282 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_3, DominionCity_EventScripts_GruntsSouthStillLooking_1
# 307 "data/maps/DominionCity/scripts.pory"
	lockall
# 308 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 309 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2
# 310 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 311 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 312 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 313 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 314 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 315 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_0
# 316 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 317 "data/maps/DominionCity/scripts.pory"
	applymovement 7, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 318 "data/maps/DominionCity/scripts.pory"
	waitmovement 7
# 319 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 320 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_1
# 322 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 323 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 324 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 325 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 326 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_2
# 327 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1
# 328 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 329 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 330 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 331 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 332 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 333 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 334 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 335 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 336 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 337 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 338 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_3, MSGBOX_NPC
# 343 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 344 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 345 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 346 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 347 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 348 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 349 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsSouthStillLooking_1:
# 284 "data/maps/DominionCity/scripts.pory"
	lockall
# 285 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 286 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 287 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 288 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 289 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 290 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 291 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 292 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 293 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 296 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 297 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 298 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 299 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 300 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 301 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 302 "data/maps/DominionCity/scripts.pory"
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

# 77 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_0:
# 77 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 77 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 77 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 77 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 77 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 77 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 77 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
	step_end

# 78 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_1:
# 78 "data/maps/DominionCity/scripts.pory"
	walk_up
# 78 "data/maps/DominionCity/scripts.pory"
	walk_up
# 78 "data/maps/DominionCity/scripts.pory"
	walk_up
# 78 "data/maps/DominionCity/scripts.pory"
	walk_up
# 78 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 81 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_2:
# 81 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
# 81 "data/maps/DominionCity/scripts.pory"
	walk_left
# 81 "data/maps/DominionCity/scripts.pory"
	walk_left
# 81 "data/maps/DominionCity/scripts.pory"
	walk_left
# 81 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 84 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_3:
# 84 "data/maps/DominionCity/scripts.pory"
	walk_right
# 84 "data/maps/DominionCity/scripts.pory"
	walk_right
# 84 "data/maps/DominionCity/scripts.pory"
	walk_right
# 84 "data/maps/DominionCity/scripts.pory"
	walk_right
# 84 "data/maps/DominionCity/scripts.pory"
	walk_right
# 84 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 87 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_4:
# 87 "data/maps/DominionCity/scripts.pory"
	walk_left
# 87 "data/maps/DominionCity/scripts.pory"
	walk_left
# 87 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 97 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_5:
# 97 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 105 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_6:
# 105 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 122 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_0:
# 122 "data/maps/DominionCity/scripts.pory"
	walk_in_place_up
	step_end

# 132 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_1:
# 132 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 142 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_2:
# 142 "data/maps/DominionCity/scripts.pory"
	walk_left
# 142 "data/maps/DominionCity/scripts.pory"
	walk_left
# 142 "data/maps/DominionCity/scripts.pory"
	walk_left
	step_end

# 145 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_3:
# 145 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
	step_end

# 169 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_4:
# 169 "data/maps/DominionCity/scripts.pory"
	walk_right
# 169 "data/maps/DominionCity/scripts.pory"
	walk_right
# 169 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 210 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0:
# 210 "data/maps/DominionCity/scripts.pory"
	walk_in_place_down
	step_end

# 230 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1:
# 230 "data/maps/DominionCity/scripts.pory"
	walk_up
# 230 "data/maps/DominionCity/scripts.pory"
	walk_up
# 230 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 253 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2:
# 253 "data/maps/DominionCity/scripts.pory"
	walk_down
# 253 "data/maps/DominionCity/scripts.pory"
	walk_down
# 253 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 299 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0:
# 299 "data/maps/DominionCity/scripts.pory"
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
# 90 "data/maps/DominionCity/scripts.pory"
	.string "Huh? What is this place?\n"
	.string "Is it a town?\p"
	.string "I've never seen a town before.\n"
	.string "But from what I've heard…\p"
	.string "You'd think there'd be more, you know,\n"
	.string "townspeople in here…\p"
	.string "This is very strange, isn't it,\n"
	.string "{PLAYER}?$"

DominionCity_EventScripts_WhatIsThisPlace_Text_1:
# 100 "data/maps/DominionCity/scripts.pory"
	.string "…Oh. Yeah.\p"
	.string "I guess if you were gonna do a bunch of\n"
	.string "creepy experiments, you'd wanna do it\l"
	.string "somewhere private.\p"
	.string "Still, this place gives me the creeps.\p"
	.string "Let's get out of here!$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_0:
# 126 "data/maps/DominionCity/scripts.pory"
	.string "Hmm…\n"
	.string "There's gotta be another way around.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_1:
# 147 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 1$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_2:
# 148 "data/maps/DominionCity/scripts.pory"
	.string "Those test subjects really had to go\n"
	.string "and escape.\p"
	.string "You know what they look like?$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_3:
# 154 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 2$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_4:
# 155 "data/maps/DominionCity/scripts.pory"
	.string "Ye, ye.\p"
	.string "It's that ugly-lookin's Dewgong thing\n"
	.string "and that…\l"
	.string "Fox-like creature, aye?\p"
	.string "Heard they were plannin' on gettin' rid\n"
	.string "of her, the poor sod.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_5:
# 164 "data/maps/DominionCity/scripts.pory"
	.string "That's hardly our business.\p"
	.string "We were just ordered to find them, and\n"
	.string "find them we will.\p"
	.string "Shouldn't be too hard of a job, anyway.\p"
	.string "Bet they’re hiding like scared Rattata.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_6:
# 180 "data/maps/DominionCity/scripts.pory"
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
# 236 "data/maps/DominionCity/scripts.pory"
	.string "HQ is losing it, man.\n"
	.string "Said if we don’t find them soon, heads\l"
	.string "will roll.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_1:
# 243 "data/maps/DominionCity/scripts.pory"
	.string "What kind of Pokémon breaks out of\n"
	.string "Sector 7, anyway?!\n"
	.string "This is bad… Really bad.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_2:
# 250 "data/maps/DominionCity/scripts.pory"
	.string "Listen, if you spot anything weird, and\n"
	.string "I mean ANYTHING, report it.\p"
	.string "No way I'm taking the fall for this one.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_3:
# 264 "data/maps/DominionCity/scripts.pory"
	.string "Those grunts are everywhere…\n"
	.string "{PLAYER}, we can't let them catch us.\p"
	.string "I'm not going back in there.\n"
	.string "Nuh-huh. No chance.\p"
	.string "C'mon, there has to be a way around!$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_0:
# 315 "data/maps/DominionCity/scripts.pory"
	.string "Cleaning up after another lab failure…\n"
	.string "Again.$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_1:
# 320 "data/maps/DominionCity/scripts.pory"
	.string "They said Sector 7 was secure.\n"
	.string "They always say that…$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_2:
# 326 "data/maps/DominionCity/scripts.pory"
	.string "This was not what they advertised in\n"
	.string "the job description…$"
