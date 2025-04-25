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
# 35 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 36 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 37 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 38 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 8
# 39 "data/maps/DominionCity/scripts.pory"
	setrespawn HEAL_LOCATION_DOMINION_CITY
# 40 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_WhatIsThisPlace::
# 48 "data/maps/DominionCity/scripts.pory"
	lockall
# 49 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 50 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 51 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 52 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_0
# 53 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_1
# 54 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 55 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 56 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_2
# 57 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 58 "data/maps/DominionCity/scripts.pory"
	delay 40
# 59 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_3
# 60 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 61 "data/maps/DominionCity/scripts.pory"
	delay 40
# 62 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_4
# 63 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 64 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 65 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_0
# 66 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 67 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 68 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 69 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_WhatIsThisPlace_Text_1
# 70 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 71 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 72 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 73 "data/maps/DominionCity/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 9
# 74 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsWestStillLooking::
# 80 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_1, DominionCity_EventScripts_GruntsWestStillLooking_1
# 103 "data/maps/DominionCity/scripts.pory"
	lockall
# 104 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 105 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_2
# 106 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 107 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 108 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_GruntsWestStillLooking_Movement_3
# 109 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 110 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 111 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_2
# 112 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 113 "data/maps/DominionCity/scripts.pory"
	applymovement 3, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 114 "data/maps/DominionCity/scripts.pory"
	waitmovement 3
# 115 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 116 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_4
# 117 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 118 "data/maps/DominionCity/scripts.pory"
	applymovement 2, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 119 "data/maps/DominionCity/scripts.pory"
	waitmovement 2
# 120 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 121 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_5
# 122 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsWestStillLooking_Movement_4
# 123 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 124 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 125 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 126 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 127 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 128 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 129 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 130 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 131 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 132 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 133 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_6, MSGBOX_NPC
# 134 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 135 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 136 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 137 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 138 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 139 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 140 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsWestStillLooking_1:
# 82 "data/maps/DominionCity/scripts.pory"
	lockall
# 83 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 84 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 85 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 86 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 87 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 88 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 89 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 90 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 91 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 92 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 93 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 94 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 95 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_1
# 96 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 97 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_1
# 98 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsNorthStillLooking::
# 147 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_2, DominionCity_EventScripts_GruntsNorthStillLooking_1
# 170 "data/maps/DominionCity/scripts.pory"
	lockall
# 171 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 172 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1
# 173 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 174 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 175 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 176 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 177 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 178 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_0
# 179 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 180 "data/maps/DominionCity/scripts.pory"
	applymovement 4, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 181 "data/maps/DominionCity/scripts.pory"
	waitmovement 4
# 182 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 183 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_1
# 184 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 185 "data/maps/DominionCity/scripts.pory"
	applymovement 5, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 186 "data/maps/DominionCity/scripts.pory"
	waitmovement 5
# 187 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 188 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsNorthStillLooking_Text_2
# 189 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2
# 190 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 191 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 192 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 193 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 194 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 195 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 196 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 197 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 198 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 199 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 200 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_6, MSGBOX_NPC
# 201 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 202 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 203 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 204 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 205 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 206 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 207 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsNorthStillLooking_1:
# 149 "data/maps/DominionCity/scripts.pory"
	lockall
# 150 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 151 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 152 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 153 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerSouth
# 154 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0
# 155 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 156 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 157 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 158 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 159 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerSouth
# 160 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 161 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 162 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_WhatIsThisPlace_Movement_6
# 163 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 164 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_2
# 165 "data/maps/DominionCity/scripts.pory"
	releaseall
	end


DominionCity_EventScripts_GruntsSouthStillLooking::
# 214 "data/maps/DominionCity/scripts.pory"
	goto_if_set FLAG_TEMP_3, DominionCity_EventScripts_GruntsSouthStillLooking_1
# 237 "data/maps/DominionCity/scripts.pory"
	lockall
# 238 "data/maps/DominionCity/scripts.pory"
	special SpawnCameraObject
# 239 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2
# 240 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 241 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 242 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 243 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 244 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 245 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_0
# 246 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 247 "data/maps/DominionCity/scripts.pory"
	applymovement 7, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 248 "data/maps/DominionCity/scripts.pory"
	waitmovement 7
# 249 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_3
# 250 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_1
# 251 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 252 "data/maps/DominionCity/scripts.pory"
	applymovement 6, DominionCity_EventScripts_WhatIsThisPlace_Movement_5
# 253 "data/maps/DominionCity/scripts.pory"
	waitmovement 6
# 254 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_EventScripts_GruntsWestStillLooking_Text_1
# 255 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsSouthStillLooking_Text_2
# 256 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1
# 257 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 258 "data/maps/DominionCity/scripts.pory"
	special RemoveCameraObject
# 259 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 260 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 261 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 262 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 263 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 264 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 265 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 266 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 267 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_6, MSGBOX_NPC
# 268 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 269 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 270 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 271 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 272 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 273 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 274 "data/maps/DominionCity/scripts.pory"
	releaseall
	end

DominionCity_EventScripts_GruntsSouthStillLooking_1:
# 216 "data/maps/DominionCity/scripts.pory"
	lockall
# 217 "data/maps/DominionCity/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 218 "data/maps/DominionCity/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 219 "data/maps/DominionCity/scripts.pory"
	addobject LOCALID_VEE
# 220 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 221 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsWestStillLooking_Movement_0
# 222 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 223 "data/maps/DominionCity/scripts.pory"
	playse SE_PIN
# 224 "data/maps/DominionCity/scripts.pory"
	speakername DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0
# 225 "data/maps/DominionCity/scripts.pory"
	msgbox DominionCity_EventScripts_GruntsWestStillLooking_Text_0, MSGBOX_NPC
# 226 "data/maps/DominionCity/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 227 "data/maps/DominionCity/scripts.pory"
	waitmovement LOCALID_VEE
# 228 "data/maps/DominionCity/scripts.pory"
	removeobject LOCALID_VEE
# 229 "data/maps/DominionCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0
# 230 "data/maps/DominionCity/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 231 "data/maps/DominionCity/scripts.pory"
	setflag FLAG_TEMP_3
# 232 "data/maps/DominionCity/scripts.pory"
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

# 52 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_0:
# 52 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_fast_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
# 52 "data/maps/DominionCity/scripts.pory"
	walk_faster_up
	step_end

# 53 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_1:
# 53 "data/maps/DominionCity/scripts.pory"
	walk_up
# 53 "data/maps/DominionCity/scripts.pory"
	walk_up
# 53 "data/maps/DominionCity/scripts.pory"
	walk_up
# 53 "data/maps/DominionCity/scripts.pory"
	walk_up
# 53 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 56 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_2:
# 56 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
# 56 "data/maps/DominionCity/scripts.pory"
	walk_left
# 56 "data/maps/DominionCity/scripts.pory"
	walk_left
# 56 "data/maps/DominionCity/scripts.pory"
	walk_left
# 56 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 59 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_3:
# 59 "data/maps/DominionCity/scripts.pory"
	walk_right
# 59 "data/maps/DominionCity/scripts.pory"
	walk_right
# 59 "data/maps/DominionCity/scripts.pory"
	walk_right
# 59 "data/maps/DominionCity/scripts.pory"
	walk_right
# 59 "data/maps/DominionCity/scripts.pory"
	walk_right
# 59 "data/maps/DominionCity/scripts.pory"
	face_up
	step_end

# 62 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_4:
# 62 "data/maps/DominionCity/scripts.pory"
	walk_left
# 62 "data/maps/DominionCity/scripts.pory"
	walk_left
# 62 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 66 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_5:
# 66 "data/maps/DominionCity/scripts.pory"
	emote_exclamation_mark
	step_end

# 70 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_WhatIsThisPlace_Movement_6:
# 70 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_0:
# 87 "data/maps/DominionCity/scripts.pory"
	walk_in_place_up
	step_end

# 95 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_1:
# 95 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 105 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_2:
# 105 "data/maps/DominionCity/scripts.pory"
	walk_left
# 105 "data/maps/DominionCity/scripts.pory"
	walk_left
# 105 "data/maps/DominionCity/scripts.pory"
	walk_left
	step_end

# 108 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_3:
# 108 "data/maps/DominionCity/scripts.pory"
	emote_question_mark
	step_end

# 122 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsWestStillLooking_Movement_4:
# 122 "data/maps/DominionCity/scripts.pory"
	walk_right
# 122 "data/maps/DominionCity/scripts.pory"
	walk_right
# 122 "data/maps/DominionCity/scripts.pory"
	walk_right
	step_end

# 154 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_0:
# 154 "data/maps/DominionCity/scripts.pory"
	walk_in_place_down
	step_end

# 172 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_1:
# 172 "data/maps/DominionCity/scripts.pory"
	walk_up
# 172 "data/maps/DominionCity/scripts.pory"
	walk_up
# 172 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

# 189 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsNorthStillLooking_Movement_2:
# 189 "data/maps/DominionCity/scripts.pory"
	walk_down
# 189 "data/maps/DominionCity/scripts.pory"
	walk_down
# 189 "data/maps/DominionCity/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/DominionCity/scripts.pory"
DominionCity_EventScripts_GruntsSouthStillLooking_Movement_0:
# 229 "data/maps/DominionCity/scripts.pory"
	walk_up
	step_end

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_0:
# 33 "data/maps/DominionCity/scripts.pory"
	.string "Vee$"

DominionCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE_0_Text_1:
# 34 "data/maps/DominionCity/scripts.pory"
	.string "Whoa-- This is… THIS IS OUTSIDE?! The\n"
	.string "sky--it's HUGE! And the air--it's all…\l"
	.string "fresh and stuff! I thought fresh air\l"
	.string "was just a myth!\p"
	.string "Okaaay, okay, focus! We're not safe yet!\n"
	.string "Still fences… still gotta find a way out\l"
	.string "before--\p"
	.string "Wait, do you hear that? No alarms. No\n"
	.string "buzzing doors. No heavy boots stomping\l"
	.string "around… Just… wind. And… birds? Huh.\p"
	.string "Okay, no time to get distracted--gotta\n"
	.string "keep moving before Team MAGA figures\l"
	.string "out we're gone! C'mon, let's find a way\l"
	.string "outta here--fast!$"

DominionCity_EventScripts_WhatIsThisPlace_Text_0:
# 65 "data/maps/DominionCity/scripts.pory"
	.string "Huh? What is this place?\p"
	.string "It's like a town, but… where is\n"
	.string "everyone?\p"
	.string "Every building looks empty…\p"
	.string "This is really weird, {PLAYER}.\p"
	.string "Wait a second… why would Team MAGA\n"
	.string "have a whole lab here?\p"
	.string "In a town with no people? That makes no\n"
	.string "sense.$"

DominionCity_EventScripts_WhatIsThisPlace_Text_1:
# 69 "data/maps/DominionCity/scripts.pory"
	.string "…Oh. Yeah. I guess if you were gonna do\n"
	.string "a bunch of creepy experiments, you'd\l"
	.string "wanna do it somewhere private.\p"
	.string "Still, this place gives me the creeps.\n"
	.string "Let's get out of here.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_0:
# 91 "data/maps/DominionCity/scripts.pory"
	.string "There has to be another way around.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_1:
# 110 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 1$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_2:
# 111 "data/maps/DominionCity/scripts.pory"
	.string "You hear the alert? Those two test\n"
	.string "subjects escaped.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_3:
# 115 "data/maps/DominionCity/scripts.pory"
	.string "Grunt 2$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_4:
# 116 "data/maps/DominionCity/scripts.pory"
	.string "One of 'em’s a Dewgong-lookin' thing. The\n"
	.string "other’s some runaway fox.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_5:
# 121 "data/maps/DominionCity/scripts.pory"
	.string "Heh. Shouldn’t be hard to spot. Bet\n"
	.string "they’re hiding like scared Rattata.$"

DominionCity_EventScripts_GruntsWestStillLooking_Text_6:
# 133 "data/maps/DominionCity/scripts.pory"
	.string "Those grunts are everywhere…\n"
	.string "We can’t let them see us. If they catch\l"
	.string "us again…\p"
	.string "I-I’m not going back to that lab. No way.\n"
	.string "No matter what. There has to be another\l"
	.string "way around.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_0:
# 178 "data/maps/DominionCity/scripts.pory"
	.string "HQ is losing it.\n"
	.string "Said if we don’t find them soon, heads\l"
	.string "will roll.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_1:
# 183 "data/maps/DominionCity/scripts.pory"
	.string "What kind of Pokémon breaks out of\n"
	.string "Sector 7?!\n"
	.string "This is bad… really bad.$"

DominionCity_EventScripts_GruntsNorthStillLooking_Text_2:
# 188 "data/maps/DominionCity/scripts.pory"
	.string "If you see anything weird… anything…\n"
	.string "report it.\n"
	.string "I’m not taking the fall for this.$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_0:
# 245 "data/maps/DominionCity/scripts.pory"
	.string "Can’t believe we’re cleaning up after\n"
	.string "another lab failure.$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_1:
# 250 "data/maps/DominionCity/scripts.pory"
	.string "They said Sector 7 was secure.\n"
	.string "They always say that…$"

DominionCity_EventScripts_GruntsSouthStillLooking_Text_2:
# 255 "data/maps/DominionCity/scripts.pory"
	.string "I didn’t sign up to chase mutated test\n"
	.string "subjects…$"
