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
# 570 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 843 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 1116 "data/maps/VoltbrookTown/scripts.pory"
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
	speakername AfterBattle_Test_Text_12
# 430 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 433 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 434 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 438 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 439 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 443 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 444 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 445 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 446 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 447 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 448 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 453 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 454 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 460 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 461 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 467 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 468 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 471 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 482 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 483 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 487 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 488 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 489 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 490 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 491 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 492 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 493 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 494 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 499 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 500 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 508 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 509 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 510 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 511 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 516 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 517 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 520 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 521 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 535 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 536 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 541 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 542 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 547 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 548 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 549 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 550 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 551 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 552 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 553 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 554 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 555 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 556 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 557 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 558 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 559 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 560 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 561 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 565 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 566 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 567 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 568 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 571 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 572 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 573 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 574 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 575 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 576 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 577 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 578 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 579 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 580 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 581 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 582 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 583 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 584 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 585 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 586 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 587 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 588 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 589 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 592 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 593 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 594 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 595 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 596 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 597 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 598 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 599 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 600 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 601 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 602 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 603 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 604 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 605 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 606 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 607 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 608 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_13
# 609 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 610 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 611 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 612 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 613 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 614 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 615 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 616 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 617 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 618 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 619 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 620 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 621 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 622 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 623 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 624 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_4
# 625 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 626 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 627 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 628 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 629 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 630 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 634 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 635 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 636 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 637 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 642 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 643 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 648 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 649 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 650 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 651 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 652 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 653 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 657 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 658 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 661 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 662 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 663 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 664 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 667 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 668 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 672 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 673 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 674 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 677 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 679 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 685 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 686 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 689 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 690 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 697 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 698 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 702 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 703 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 706 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 707 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 711 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 712 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 716 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 717 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 718 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 719 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 720 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 721 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 726 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 727 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 733 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 734 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 740 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 741 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 744 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 755 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 756 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 760 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 761 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 762 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 763 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 764 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 765 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 766 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 767 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 772 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 773 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 781 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 782 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 783 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 784 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 789 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 790 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 793 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 794 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 808 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 809 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 814 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 815 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 820 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 821 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 822 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 823 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 824 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 825 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 826 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 827 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 828 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 829 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 830 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 831 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 832 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 833 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 834 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 838 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 839 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 840 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 841 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 844 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 845 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 846 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 847 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 848 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 849 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 850 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 851 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 852 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_14
# 853 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 854 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 855 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 856 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 857 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 858 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 859 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 860 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 861 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 864 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 865 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 866 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 867 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 868 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 869 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 870 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 871 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 872 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 873 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 874 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 875 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 876 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 877 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 878 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 879 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 880 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_13
# 881 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 882 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 883 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 884 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 885 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 886 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 887 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 888 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 889 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 890 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 891 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 892 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 893 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 894 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 895 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 896 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 897 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_15
# 898 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 899 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 900 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 901 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 902 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 903 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 907 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 908 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 909 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 910 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 915 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 916 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 921 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 922 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 923 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 924 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 925 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 926 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 930 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 931 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 934 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 935 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 936 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 937 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 940 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 941 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 945 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 946 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 947 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 950 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 951 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 952 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 958 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 959 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 962 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 963 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 970 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 971 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 975 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 976 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 979 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 980 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 984 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 985 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 989 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 990 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 991 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 992 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 993 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 994 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 999 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1000 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1006 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1007 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1013 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1014 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1017 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1028 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1029 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1033 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1034 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1035 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1036 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1037 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1038 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1039 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1040 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 1045 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1046 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1054 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1055 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1056 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1057 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1062 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1063 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1066 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1067 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1081 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1082 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1087 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1088 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1093 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1094 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1095 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1096 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1097 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1098 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1099 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1100 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 1101 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1102 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1103 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 1104 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1105 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1106 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1107 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1111 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1112 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1113 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1114 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 1117 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1118 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1119 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 1120 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1121 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 1122 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 1124 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 1125 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 1126 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_16
# 1128 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_16
# 1129 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1130 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 1131 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 1132 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 1134 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 1137 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 1138 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 1139 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1140 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1141 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1142 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 1144 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 1145 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1146 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1147 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1148 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 1150 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1151 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 1152 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_17
# 1154 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1155 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1156 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1157 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1158 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 1160 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1161 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 1162 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 1163 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1164 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1165 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 1166 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1167 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 1168 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1170 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_15
# 1171 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 1172 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 1173 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 1174 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1175 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1176 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 1180 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1181 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 1182 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1183 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 1188 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1189 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 1194 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1195 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 1196 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1197 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1198 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1199 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 1203 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1204 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1207 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1208 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1209 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1210 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 1213 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1214 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 1218 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1219 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1220 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 1223 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1224 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1225 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 1231 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1232 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 1235 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1236 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 1243 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1244 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 1248 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1249 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 1252 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1253 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 1257 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1258 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 1262 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1263 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 1264 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1265 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1266 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1267 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 1272 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1273 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1279 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1280 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1286 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1287 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1290 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1301 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1302 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1306 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1307 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1308 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1309 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1310 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1311 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1312 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1313 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 1318 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1319 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1327 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1328 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1329 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1330 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1335 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1336 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1339 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1340 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1354 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1355 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1360 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1361 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1366 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1367 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1368 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1369 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1370 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1371 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1372 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1373 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 1374 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1375 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1376 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 1377 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1378 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1379 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1380 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1384 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1385 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1386 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1387 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 1395 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1396 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1397 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1398 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1399 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 1400 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1401 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 1403 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 1404 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1405 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1406 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_9
# 1407 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1408 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1415 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1416 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1417 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 1418 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 1419 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1420 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1421 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 1422 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 1424 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 1425 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1426 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1427 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 1428 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1429 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 1430 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_14
# 1431 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1432 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_DoorsLocked::
# 1440 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 1441 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_DoorsLocked_Text_0, MSGBOX_SIGN
# 1442 "data/maps/VoltbrookTown/scripts.pory"
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

# 488 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 488 "data/maps/VoltbrookTown/scripts.pory"
	emote_question_mark
	step_end

# 554 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 554 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 557 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 557 "data/maps/VoltbrookTown/scripts.pory"
	face_left
	step_end

# 608 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_13:
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 608 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 852 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_14:
# 852 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 897 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_15:
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 897 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 897 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1127 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_16:
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1153 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_17:
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 1418 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 1418 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1418 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1418 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1418 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 1427 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 1427 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1427 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1427 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1427 "data/maps/VoltbrookTown/scripts.pory"
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
# 431 "data/maps/VoltbrookTown/scripts.pory"
	.string "…And you said you were…?$"

AfterBattle_Test_Text_22:
# 435 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee the Eevee!\n"
	.string "From the lab!$"

AfterBattle_Test_Text_23:
# 440 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hmm…\n"
	.string "So, you aren't a human.$"

AfterBattle_Test_Text_24:
# 449 "data/maps/VoltbrookTown/scripts.pory"
	.string "Wait.\n"
	.string "Ohmygosh.\p"
	.string "Are you a human too?$"

AfterBattle_Test_Text_25:
# 455 "data/maps/VoltbrookTown/scripts.pory"
	.string "Me?\n"
	.string "Sure am.\l"
	.string "Or rather, was.\p"
	.string "You're speaking to the former Champion\n"
	.string "of the region, in fact.$"

AfterBattle_Test_Text_26:
# 462 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ohmygosh.\n"
	.string "No way! That's so cool!\p"
	.string "…What's a Champion?\n"
	.string "Is it like a Guardian?$"

AfterBattle_Test_Text_27:
# 469 "data/maps/VoltbrookTown/scripts.pory"
	.string "I have no idea what you're talking\n"
	.string "about.$"

AfterBattle_Test_Text_28:
# 472 "data/maps/VoltbrookTown/scripts.pory"
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
# 484 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don't be sad!\n"
	.string "We know of a way to turn you back!$"

AfterBattle_Test_Text_30:
# 492 "data/maps/VoltbrookTown/scripts.pory"
	.string "Do you, now?$"

AfterBattle_Test_Text_31:
# 495 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah!\n"
	.string "We gotta find the eight artifacts!\p"
	.string "There should be one in Voltbrook Town,\n"
	.string "actually!$"

AfterBattle_Test_Text_32:
# 501 "data/maps/VoltbrookTown/scripts.pory"
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
# 509 "data/maps/VoltbrookTown/scripts.pory"
	.string "Work?$"

AfterBattle_Test_Text_34:
# 512 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yes.\p"
	.string "They tried to get me to fight for them,\n"
	.string "but I refused their commands.\p"
	.string "So, now…$"

AfterBattle_Test_Text_35:
# 518 "data/maps/VoltbrookTown/scripts.pory"
	.string "They're forcing you to run in a big wheel\n"
	.string "to generate electricity?$"

AfterBattle_Test_Text_36:
# 522 "data/maps/VoltbrookTown/scripts.pory"
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
# 537 "data/maps/VoltbrookTown/scripts.pory"
	.string "Thank you, Fro.\p"
	.string "But… What about you?\p"
	.string "Won't they be mad because you've helped\n"
	.string "us?$"

AfterBattle_Test_Text_38:
# 543 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh, they will.\n"
	.string "But they won't be doing anything to me.\p"
	.string "Because…$"

AfterBattle_Test_Text_39:
# 552 "data/maps/VoltbrookTown/scripts.pory"
	.string "…They like my cooking too much.$"

AfterBattle_Test_Text_40:
# 561 "data/maps/VoltbrookTown/scripts.pory"
	.string "He seems nice!\n"
	.string "I hope we meet him again.\p"
	.string "For now, though, we should be away from\n"
	.string "Voltbrook.\p"
	.string "Let's check out Moonthistle!$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 1401 "data/maps/VoltbrookTown/scripts.pory"
	.string "We need to stay away from Voltbrook for\n"
	.string "now, Seel!\n"
	.string "Let's worry about the artefact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	.string "We can't go this way…\n"
	.string "There's MAGA grunts up ahead.\p"
	.string "Let's looks somewhere else.$"

Voltbrook_EventScripts_DoorsLocked_Text_0:
# 1441 "data/maps/VoltbrookTown/scripts.pory"
	.string "The door is locked$"
