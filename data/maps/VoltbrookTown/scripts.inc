# 1 "data/maps/VoltbrookTown/scripts.pory"

# 2 "data/maps/VoltbrookTown/scripts.pory"
.set LOCALID_VEE, 4
# 3 "data/maps/VoltbrookTown/scripts.pory"
.set LOCALID_FRO, 5
# 4 "data/maps/VoltbrookTown/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 5 "data/maps/VoltbrookTown/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4

VoltbrookTown_MapScripts::
# 9 "data/maps/VoltbrookTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 11 "data/maps/VoltbrookTown/scripts.pory"
	setrespawn HEAL_LOCATION_VOLTBROOK_TOWN
# 12 "data/maps/VoltbrookTown/scripts.pory"
	goto_if_set FLAG_HINTED_AT_POWERPLANT, VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD_2
VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 24 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 14 "data/maps/VoltbrookTown/scripts.pory"
	setmetatile 17, 3, 0x3D2, FALSE
	goto VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD_1


Voltbrook_EventScripts_GruntPatrolChat::
# 32 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 33 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 34 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 35 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_2
Voltbrook_EventScripts_GruntPatrolChat_1:
# 40 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_5
Voltbrook_EventScripts_GruntPatrolChat_4:
# 45 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_8
Voltbrook_EventScripts_GruntPatrolChat_7:
# 50 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 51 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_1
# 52 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 53 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 54 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_3
# 55 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 56 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_5
# 57 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 58 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_6
# 59 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 60 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_7
# 61 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 62 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_8
# 63 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 64 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntPatrolChat_Movement_3
# 65 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, Voltbrook_EventScripts_GruntPatrolChat_Movement_4
# 66 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, Voltbrook_EventScripts_GruntPatrolChat_Movement_5
# 67 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 3
# 68 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 1
# 69 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 70 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 71 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, 26, 8
# 72 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, 25, 6
# 73 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 74 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 75 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_11
Voltbrook_EventScripts_GruntPatrolChat_10:
# 80 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_14
Voltbrook_EventScripts_GruntPatrolChat_13:
# 85 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_17
Voltbrook_EventScripts_GruntPatrolChat_16:
# 90 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 91 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 92 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 93 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 94 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 95 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 96 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 97 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 98 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_10
# 107 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 108 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 109 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 110 "data/maps/VoltbrookTown/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 2
# 111 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

Voltbrook_EventScripts_GruntPatrolChat_2:
# 37 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_0
# 38 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_1

Voltbrook_EventScripts_GruntPatrolChat_5:
# 42 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_1
# 43 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_4

Voltbrook_EventScripts_GruntPatrolChat_8:
# 47 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_2
# 48 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_7

Voltbrook_EventScripts_GruntPatrolChat_11:
# 77 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_6
# 78 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_10

Voltbrook_EventScripts_GruntPatrolChat_14:
# 82 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_7
# 83 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_13

Voltbrook_EventScripts_GruntPatrolChat_17:
# 87 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_8
# 88 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_16


Voltbrook_EventScripts_GruntCatchesPlayerLeaving::
# 117 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 118 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 119 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 120 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 121 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 123 "data/maps/VoltbrookTown/scripts.pory"
	case 22, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2
# 164 "data/maps/VoltbrookTown/scripts.pory"
	case 23, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3
# 205 "data/maps/VoltbrookTown/scripts.pory"
	case 24, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4
# 246 "data/maps/VoltbrookTown/scripts.pory"
	case 25, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2:
# 124 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 22, 21
# 125 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 126 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 127 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 128 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 129 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 130 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 131 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 132 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 133 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 134 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 138 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 139 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 140 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 141 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 142 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 143 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 144 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 145 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 157 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 158 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 159 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 160 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 161 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 162 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3:
# 165 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 23, 21
# 166 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 167 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 168 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 169 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 170 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 171 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 172 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 173 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 174 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 175 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 179 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 180 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 181 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 182 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 183 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 184 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 185 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 186 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 198 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 199 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 200 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 201 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 202 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 203 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4:
# 206 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 207 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 208 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 209 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 210 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 211 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 212 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 213 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 214 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 215 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 216 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 220 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 221 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 222 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 223 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 224 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 225 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 226 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 227 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 239 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 240 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 241 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 242 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 243 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 244 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5:
# 247 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 248 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 249 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 250 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 251 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 252 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 253 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 254 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 255 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 256 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 257 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 261 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 262 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 263 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 264 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 265 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 266 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 267 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 268 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 280 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 281 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 282 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 283 "data/maps/VoltbrookTown/scripts.pory"
	speakername NULL
# 284 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 285 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 286 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return


AfterBattle_Test::
# 295 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 297 "data/maps/VoltbrookTown/scripts.pory"
	case 22, AfterBattle_Test_2
# 572 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 847 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 1122 "data/maps/VoltbrookTown/scripts.pory"
	case 25, AfterBattle_Test_5
	return

AfterBattle_Test_2:
# 298 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 299 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 300 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 301 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 302 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 303 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 304 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 305 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 306 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 307 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 308 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 309 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 310 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 311 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 312 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 313 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 314 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 315 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 316 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 319 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 320 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 321 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 322 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 323 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 324 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 325 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 326 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 327 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 328 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 329 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 330 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 331 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 332 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 333 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 334 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 335 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_3
# 336 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 337 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 338 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 339 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 340 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 341 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 342 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 343 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 344 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 345 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 346 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 347 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 348 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 349 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 350 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 351 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_4
# 352 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 353 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 354 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 355 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 356 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 357 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 361 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 362 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 363 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 364 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 369 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 370 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 375 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 376 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 377 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 378 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 379 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 380 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 384 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 385 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 388 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 389 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 390 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 391 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 394 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 395 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 399 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 400 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 401 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 404 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 406 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 412 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 413 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 416 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 417 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 424 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 425 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 429 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 430 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 431 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 434 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 435 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 439 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 440 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 444 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 445 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 446 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 447 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 448 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 449 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 454 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 455 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 456 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 462 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 463 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 469 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 470 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 473 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 484 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 485 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 489 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 490 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 491 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 492 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 493 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 494 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 495 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 496 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 501 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 502 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 510 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 511 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 512 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 513 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 518 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 519 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 522 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 523 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 537 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 538 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 543 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 544 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 549 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 550 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 551 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 552 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 553 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 554 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 555 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 556 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 557 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 558 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 559 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 560 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 561 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 562 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 563 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 567 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 568 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 569 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 570 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 573 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 574 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 575 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 576 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 577 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 578 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 579 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 580 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 581 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 582 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 583 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 584 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 585 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 586 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 587 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 588 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 589 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 590 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 591 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 594 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 595 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 596 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 597 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 598 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 599 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 600 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 601 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 602 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 603 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 604 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 605 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 606 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 607 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 608 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 609 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 610 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_13
# 611 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 612 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 613 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 614 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 615 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 616 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 617 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 618 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 619 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 620 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 621 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 622 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 623 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 624 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 625 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 626 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_4
# 627 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 628 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 629 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 630 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 631 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 632 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 636 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 637 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 638 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 639 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 644 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 645 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 650 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 651 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 652 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 653 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 654 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 655 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 659 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 660 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 663 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 664 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 665 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 666 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 669 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 670 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 674 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 675 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 676 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 679 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 680 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 681 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 687 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 688 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 691 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 692 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 699 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 700 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 704 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 705 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 706 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 709 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 710 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 714 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 715 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 719 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 720 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 721 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 722 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 723 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 724 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 729 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 730 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 731 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 737 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 738 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 744 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 745 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 748 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 759 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 760 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 764 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 765 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 766 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 767 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 768 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 769 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 770 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 771 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 776 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 777 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 785 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 786 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 787 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 788 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 793 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 794 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 797 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 798 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 812 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 813 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 818 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 819 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 824 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 825 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 826 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 827 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 828 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 829 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 830 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 831 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 832 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 833 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 834 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 835 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 836 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 837 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 838 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 842 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 843 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 844 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 845 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 848 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 849 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 850 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 851 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 852 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 853 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 854 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 855 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 856 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_14
# 857 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 858 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 859 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 860 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 861 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 862 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 863 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 864 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 865 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 868 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 869 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 870 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 871 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 872 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 873 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 874 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 875 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 876 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 877 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 878 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 879 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 880 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 881 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 882 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 883 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 884 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_13
# 885 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 886 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 887 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 888 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 889 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 890 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 891 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 892 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 893 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 894 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 895 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 896 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 897 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 898 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 899 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 900 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 901 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_15
# 902 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 903 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 904 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 905 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 906 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 907 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 911 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 912 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 913 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 914 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 919 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 920 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 925 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 926 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 927 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 928 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 929 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 930 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 934 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 935 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 938 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 939 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 940 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 941 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 944 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 945 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 949 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 950 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 951 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 954 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 955 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 956 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 962 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 963 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 966 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 967 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 974 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 975 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 979 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 980 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 981 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 984 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 985 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 989 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 990 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 994 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 995 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 996 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 997 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 998 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 999 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 1004 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1005 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1006 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1012 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1013 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1019 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1020 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1023 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1034 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1035 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1039 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1040 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1041 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1042 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1043 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1044 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1045 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1046 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 1051 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1052 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1060 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1061 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1062 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1063 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1068 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1069 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1072 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1073 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1087 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1088 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1093 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1094 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1099 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1100 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1101 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1102 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1103 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1104 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1105 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1106 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 1107 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1108 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1109 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 1110 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1111 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1112 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1113 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1117 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1118 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1119 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1120 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1124 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1125 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 1126 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 1128 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 1129 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 1130 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 1131 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 1132 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_16
# 1134 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_16
# 1135 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1136 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 1137 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 1138 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1139 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 1140 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 1144 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 1145 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1146 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1147 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1148 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 1150 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 1151 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1152 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1154 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 1155 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 1156 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1157 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 1158 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_17
# 1160 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1161 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1162 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1163 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1164 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1165 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 1166 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1167 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 1168 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1170 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1171 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 1172 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1173 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 1174 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1175 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1176 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_15
# 1177 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 1178 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 1179 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 1180 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1181 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1182 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 1186 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1187 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 1188 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1189 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 1194 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1195 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 1200 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1201 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 1202 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1203 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1204 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1205 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 1209 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1210 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1213 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1214 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1215 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1216 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 1219 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1220 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 1224 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1225 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1226 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 1229 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1230 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1231 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 1237 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1238 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 1241 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1242 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 1249 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1250 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 1254 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1255 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1256 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 1259 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1260 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 1264 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1265 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 1269 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1270 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 1271 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1272 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1273 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1274 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 1279 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1280 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1281 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1287 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1288 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1294 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1295 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1298 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1309 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1310 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1314 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1315 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1316 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1317 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1318 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1319 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1320 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1321 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 1326 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1327 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1335 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1336 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1337 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1338 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1343 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1344 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1347 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1348 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1362 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1363 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1368 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1369 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1374 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1375 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1376 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1377 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1378 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1379 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1380 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1381 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 1382 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1383 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1384 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 1385 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1386 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1387 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1388 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1392 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1393 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1394 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1395 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 1403 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1404 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1405 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1406 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1407 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 1408 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1409 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 1411 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 1412 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1413 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_9
# 1415 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1416 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 1422 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1424 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1425 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 1426 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 1427 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1428 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1429 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 1430 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1431 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 1432 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 1433 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1434 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1435 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 1436 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1437 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 1438 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_14
# 1439 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1440 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_DoorsLocked::
# 1448 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 1449 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_DoorsLocked_Text_0, MSGBOX_SIGN
# 1450 "data/maps/VoltbrookTown/scripts.pory"
	release
	return


# 37 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_0:
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 37 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 42 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_1:
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 42 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 47 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_2:
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 64 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_3:
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 65 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_4:
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 65 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 66 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_5:
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 66 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 77 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_6:
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 82 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_7:
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 82 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 87 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_8:
# 87 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 87 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 87 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 87 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 87 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 87 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 87 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 95 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_9:
# 95 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_right
	step_end

# 118 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0:
# 118 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_down
	step_end

# 129 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1:
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 129 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 129 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 129 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 223 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2:
# 223 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_left
	step_end

# 252 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3:
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 252 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 252 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 252 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 306 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_0:
# 306 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 308 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_1:
# 308 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 308 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 308 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 308 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 308 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 311 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_2:
# 311 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
# 311 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 335 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_3:
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 335 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 351 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_4:
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 351 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 352 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_5:
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 352 "data/maps/VoltbrookTown/scripts.pory"
	face_up
	step_end

# 353 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_6:
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 353 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
	step_end

# 376 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_7:
# 376 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 385 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_8:
# 386 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
	step_end

# 401 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_9:
# 402 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 490 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 490 "data/maps/VoltbrookTown/scripts.pory"
	emote_question_mark
	step_end

# 556 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 556 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 559 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 559 "data/maps/VoltbrookTown/scripts.pory"
	face_left
	step_end

# 610 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_13:
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 610 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 856 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_14:
# 856 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 901 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_15:
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 901 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 901 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1133 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_16:
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1159 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_17:
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 1426 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 1426 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1426 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1426 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1426 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 1435 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 1435 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1435 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1435 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1435 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

Voltbrook_EventScripts_GruntPatrolChat_Text_0:
# 50 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 1$"

Voltbrook_EventScripts_GruntPatrolChat_Text_1:
# 51 "data/maps/VoltbrookTown/scripts.pory"
	.string "I can't believe those failures got away.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_2:
# 53 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 2$"

Voltbrook_EventScripts_GruntPatrolChat_Text_3:
# 54 "data/maps/VoltbrookTown/scripts.pory"
	.string "They might be failures, but they still\n"
	.string "escaped.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_4:
# 55 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 3$"

Voltbrook_EventScripts_GruntPatrolChat_Text_5:
# 56 "data/maps/VoltbrookTown/scripts.pory"
	.string "They couldn't have possibly made it far\n"
	.string "from the lab, right?$"

Voltbrook_EventScripts_GruntPatrolChat_Text_6:
# 58 "data/maps/VoltbrookTown/scripts.pory"
	.string "That sorry bunch?\n"
	.string "Ha! No shot.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_7:
# 60 "data/maps/VoltbrookTown/scripts.pory"
	.string "Talk less and search more.\n"
	.string "HQ is expecting us to return soon.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_8:
# 62 "data/maps/VoltbrookTown/scripts.pory"
	.string "Let's split up and cover the whole town.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_9:
# 97 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee$"

Voltbrook_EventScripts_GruntPatrolChat_Text_10:
# 98 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh no, Seel, they’re everywhere!\p"
	.string "Is there really no place to hide?\p"
	.string "Maybe we should just…\n"
	.string "Give up.\p"
	.string "Maybe if we hand ourselves in, they'll be\n"
	.string "less mean to us…\p"
	.string "… … …\n"
	.string "No, I don't wanna go back in there!\p"
	.string "Let’s stick close and keep our heads\n"
	.string "down, okay?\p"
	.string "We’ll find that artifact. I know we will.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0:
# 126 "data/maps/VoltbrookTown/scripts.pory"
	.string "???$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1:
# 127 "data/maps/VoltbrookTown/scripts.pory"
	.string "Where do you think you're going?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2:
# 134 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hey, you're the lab escapees!\p"
	.string "Easy, now.\n"
	.string "Just come with us, and we won't hurt\l"
	.string "you, alright?\p"
	.string "Not any more than necessary, at least.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3:
# 146 "data/maps/VoltbrookTown/scripts.pory"
	.string "N-no… They found us!\n"
	.string "T-there's no way to run!\p"
	.string "S-seel, I…\n"
	.string "I don't wanna go back in there, but…\p"
	.string "I don't want to fight either!\n"
	.string "I really don't!\p"
	.string "But…\n"
	.string "We need to.\p"
	.string "If it's with you… I can do it!\p"
	.string "Let's show them, Seel!\n"
	.string "We're not just failed experiments!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4:
# 163 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hard way it is, then. Fine by me!\p"
	.string "I get to stop pretending to be nice.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5:
# 163 "data/maps/VoltbrookTown/scripts.pory"
	.string "How… How could a couple of failed\n"
	.string "experiments beat me?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6:
# 163 "data/maps/VoltbrookTown/scripts.pory"
	.string "NULL$"

AfterBattle_Test_Text_0:
# 316 "data/maps/VoltbrookTown/scripts.pory"
	.string "Get a load of this guy.\p"
	.string "What's up with you?\n"
	.string "Having trouble with these freaks?$"

AfterBattle_Test_Text_1:
# 320 "data/maps/VoltbrookTown/scripts.pory"
	.string "Orders are clear: capture them alive.\p"
	.string "No more mistakes.$"

AfterBattle_Test_Text_2:
# 325 "data/maps/VoltbrookTown/scripts.pory"
	.string "You're not getting away this time!$"

AfterBattle_Test_Text_3:
# 330 "data/maps/VoltbrookTown/scripts.pory"
	.string "There’s three of them now…!$"

AfterBattle_Test_Text_4:
# 331 "data/maps/VoltbrookTown/scripts.pory"
	.string "I-I don’t think we can win this…!$"

AfterBattle_Test_Text_5:
# 340 "data/maps/VoltbrookTown/scripts.pory"
	.string "Out of the pan, into the fire.\p"
	.string "Stick close to me if you want to live.$"

AfterBattle_Test_Text_6:
# 342 "data/maps/VoltbrookTown/scripts.pory"
	.string "W-Wait what do you me-$"

AfterBattle_Test_Text_7:
# 346 "data/maps/VoltbrookTown/scripts.pory"
	.string "Quickly. This way!$"

AfterBattle_Test_Text_8:
# 348 "data/maps/VoltbrookTown/scripts.pory"
	.string "Okay okay, we're coming!$"

AfterBattle_Test_Text_9:
# 357 "data/maps/VoltbrookTown/scripts.pory"
	.string "Geez, that was close!\n"
	.string "I thought we were done for.\p"
	.string "Thank you so much for saving us!\n"
	.string "What's your name?$"

AfterBattle_Test_Text_10:
# 362 "data/maps/VoltbrookTown/scripts.pory"
	.string "I'm Fro.$"

AfterBattle_Test_Text_11:
# 365 "data/maps/VoltbrookTown/scripts.pory"
	.string "Nice to meet you, Fro!\p"
	.string "I'm Vee!\n"
	.string "And this is Seel!$"

AfterBattle_Test_Text_12:
# 369 "data/maps/VoltbrookTown/scripts.pory"
	.string "Fro$"

AfterBattle_Test_Text_13:
# 371 "data/maps/VoltbrookTown/scripts.pory"
	.string "Seel?\n"
	.string "That's funny.\p"
	.string "Wait, aren't you…$"

AfterBattle_Test_Text_14:
# 381 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hold on for a moment.\n"
	.string "I need to think.$"

AfterBattle_Test_Text_15:
# 392 "data/maps/VoltbrookTown/scripts.pory"
	.string "Can we…$"

AfterBattle_Test_Text_16:
# 396 "data/maps/VoltbrookTown/scripts.pory"
	.string "Shh!\n"
	.string "I'm thinking.$"

AfterBattle_Test_Text_17:
# 407 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ok.\p"
	.string "It's YOU, isn't it, Seel?\p"
	.string "And that Dewgong I fought back then…\n"
	.string "That was you as well.$"

AfterBattle_Test_Text_18:
# 414 "data/maps/VoltbrookTown/scripts.pory"
	.string "You two KNOW each other?$"

AfterBattle_Test_Text_19:
# 418 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh, yes, we do.\p"
	.string "I was looking for him, in fact.\n"
	.string "He went missing for a while.\p"
	.string "And now…\n"
	.string "I guess I found him.$"

AfterBattle_Test_Text_20:
# 426 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yippee!\n"
	.string "Mission complete!$"

AfterBattle_Test_Text_21:
# 432 "data/maps/VoltbrookTown/scripts.pory"
	.string "…And you said you were…?$"

AfterBattle_Test_Text_22:
# 436 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee the Eevee!\n"
	.string "From the lab!$"

AfterBattle_Test_Text_23:
# 441 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hmm…\n"
	.string "So, you aren't a human.$"

AfterBattle_Test_Text_24:
# 450 "data/maps/VoltbrookTown/scripts.pory"
	.string "Wait.\n"
	.string "Ohmygosh.\p"
	.string "Are you a human too?$"

AfterBattle_Test_Text_25:
# 457 "data/maps/VoltbrookTown/scripts.pory"
	.string "Me?\n"
	.string "Sure am.\l"
	.string "Or rather, was.\p"
	.string "You're speaking to the former Champion\n"
	.string "of the region, in fact.$"

AfterBattle_Test_Text_26:
# 464 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ohmygosh.\n"
	.string "No way! That's so cool!\p"
	.string "…What's a Champion?\n"
	.string "Is it like a Guardian?$"

AfterBattle_Test_Text_27:
# 471 "data/maps/VoltbrookTown/scripts.pory"
	.string "I have no idea what you're talking\n"
	.string "about.$"

AfterBattle_Test_Text_28:
# 474 "data/maps/VoltbrookTown/scripts.pory"
	.string "Anyway, Seel.\n"
	.string "They got us both, in the end.\p"
	.string "I was investigating the rumors of\n"
	.string "trainers being kidnapped, but this…\p"
	.string "This project Team MAGA is pursuing is\n"
	.string "beyond anything I imagined.\p"
	.string "I could not protect you, Seel.\n"
	.string "I could not even protect myself.\p"
	.string "And now…\n"
	.string "We are all going to be stuck like this.\p"
	.string "At least, you managed to escape.$"

AfterBattle_Test_Text_29:
# 486 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don't be sad!\n"
	.string "We know of a way to turn you back!$"

AfterBattle_Test_Text_30:
# 494 "data/maps/VoltbrookTown/scripts.pory"
	.string "Do you, now?$"

AfterBattle_Test_Text_31:
# 497 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah!\n"
	.string "We gotta find the eight artifacts!\p"
	.string "There should be one in Voltrbook Town,\n"
	.string "actually!$"

AfterBattle_Test_Text_32:
# 503 "data/maps/VoltbrookTown/scripts.pory"
	.string "Right.\n"
	.string "The eight magical artifacts.\p"
	.string "Then we're gonna hold hands and sing\n"
	.string "and turn back to humans.\p"
	.string "Listen, Seel, I'm very happy to see you\n"
	.string "again.\p"
	.string "But you need to stop playing fantasy\n"
	.string "games, and hide.\p"
	.string "I, meanwhile, need to go back to work.$"

AfterBattle_Test_Text_33:
# 511 "data/maps/VoltbrookTown/scripts.pory"
	.string "Work?$"

AfterBattle_Test_Text_34:
# 514 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yes.\p"
	.string "They tried to get me to fight for them,\n"
	.string "but I refused their commands.\p"
	.string "So, now…$"

AfterBattle_Test_Text_35:
# 520 "data/maps/VoltbrookTown/scripts.pory"
	.string "They're forcing you to run in a big wheel\n"
	.string "to generate electricity?$"

AfterBattle_Test_Text_36:
# 524 "data/maps/VoltbrookTown/scripts.pory"
	.string "They…\n"
	.string "Tried that.\p"
	.string "But I don't run very far.\p"
	.string "But, I have found a new calling.\p"
	.string "Thanks to my transformation, my senses\n"
	.string "of taste and smell have magnified.\p"
	.string "So now, I am a chef.\n"
	.string "And I'm also late for work.\p"
	.string "So let me give you a piece of cake.\n"
	.string "A mean, of advice.\p"
	.string "South of here, there is a town called\n"
	.string "Moonthistle.\p"
	.string "It's a town where Pokémon fleeing from\n"
	.string "Team MAGA take refuge.\p"
	.string "You will be safe there.$"

AfterBattle_Test_Text_37:
# 539 "data/maps/VoltbrookTown/scripts.pory"
	.string "Thank you, Fro.\p"
	.string "But… What about you?\p"
	.string "Won't they be mad because you've helped\n"
	.string "us?$"

AfterBattle_Test_Text_38:
# 545 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh, they will.\n"
	.string "But they won't be doing anything to me.\p"
	.string "Because…$"

AfterBattle_Test_Text_39:
# 554 "data/maps/VoltbrookTown/scripts.pory"
	.string "…They like my cooking too much.$"

AfterBattle_Test_Text_40:
# 563 "data/maps/VoltbrookTown/scripts.pory"
	.string "He seems nice!\n"
	.string "I hope we meet him again.\p"
	.string "For now, though, we should be away from\n"
	.string "Voltbrook.\p"
	.string "Let's check out Moonthistle!$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 1409 "data/maps/VoltbrookTown/scripts.pory"
	.string "We need to stay away from Voltbrook for\n"
	.string "now, Seel!\n"
	.string "Let's worry about the artefact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 1431 "data/maps/VoltbrookTown/scripts.pory"
	.string "We can't go this way…\n"
	.string "There's MAGA grunts up ahead.\p"
	.string "Let's looks somewhere else.$"

Voltbrook_EventScripts_DoorsLocked_Text_0:
# 1449 "data/maps/VoltbrookTown/scripts.pory"
	.string "The door is locked$"
