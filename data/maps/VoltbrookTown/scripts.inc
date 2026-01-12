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
# 20 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_GruntPatrolChat::
# 28 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 29 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 30 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 31 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_2
Voltbrook_EventScripts_GruntPatrolChat_1:
# 36 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_5
Voltbrook_EventScripts_GruntPatrolChat_4:
# 41 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_8
Voltbrook_EventScripts_GruntPatrolChat_7:
# 46 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 47 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_1
# 48 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 49 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 50 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_3
# 51 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 52 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_5
# 53 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 54 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_6
# 55 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 56 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_7
# 57 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 58 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_8
# 59 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 60 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntPatrolChat_Movement_3
# 61 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, Voltbrook_EventScripts_GruntPatrolChat_Movement_4
# 62 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, Voltbrook_EventScripts_GruntPatrolChat_Movement_5
# 63 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 3
# 64 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 1
# 65 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 66 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 67 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, 26, 8
# 68 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, 25, 6
# 69 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 70 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 71 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_11
Voltbrook_EventScripts_GruntPatrolChat_10:
# 76 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_14
Voltbrook_EventScripts_GruntPatrolChat_13:
# 81 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_17
Voltbrook_EventScripts_GruntPatrolChat_16:
# 86 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 87 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 88 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 89 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 90 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 91 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 92 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 93 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 94 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_10
# 103 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 104 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 105 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 106 "data/maps/VoltbrookTown/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 2
# 107 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

Voltbrook_EventScripts_GruntPatrolChat_2:
# 33 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_0
# 34 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_1

Voltbrook_EventScripts_GruntPatrolChat_5:
# 38 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_1
# 39 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_4

Voltbrook_EventScripts_GruntPatrolChat_8:
# 43 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_2
# 44 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_7

Voltbrook_EventScripts_GruntPatrolChat_11:
# 73 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_6
# 74 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_10

Voltbrook_EventScripts_GruntPatrolChat_14:
# 78 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_7
# 79 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_13

Voltbrook_EventScripts_GruntPatrolChat_17:
# 83 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_8
# 84 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_16


Voltbrook_EventScripts_GruntCatchesPlayerLeaving::
# 113 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 114 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 115 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 116 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 117 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 119 "data/maps/VoltbrookTown/scripts.pory"
	case 22, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2
# 165 "data/maps/VoltbrookTown/scripts.pory"
	case 23, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3
# 211 "data/maps/VoltbrookTown/scripts.pory"
	case 24, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4
# 257 "data/maps/VoltbrookTown/scripts.pory"
	case 25, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2:
# 120 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 22, 21
# 121 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 122 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 123 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 124 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 125 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 126 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 127 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 128 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 129 "data/maps/VoltbrookTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 130 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 131 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 132 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 133 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 134 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 135 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 139 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 140 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 141 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 142 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 143 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 144 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 145 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 146 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 158 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 159 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 160 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 161 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 162 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 163 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3:
# 166 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 23, 21
# 167 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 168 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 169 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 170 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 171 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 172 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 173 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 174 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 175 "data/maps/VoltbrookTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 176 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 177 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 178 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 179 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 180 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 181 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 185 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 186 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 187 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 188 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 189 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 190 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 191 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 192 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 204 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 205 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 206 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 207 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 208 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 209 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4:
# 212 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 213 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 214 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 215 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 216 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 217 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 218 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 219 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 220 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 221 "data/maps/VoltbrookTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 222 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 223 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 224 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 225 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 226 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 227 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 231 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 232 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 233 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 234 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 235 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 236 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 237 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 238 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 250 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 251 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 252 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 253 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 254 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 255 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5:
# 258 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 259 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 260 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 261 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 262 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 263 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 264 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 265 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 266 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 267 "data/maps/VoltbrookTown/scripts.pory"
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
# 268 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_4
# 269 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 270 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 271 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 272 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 273 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 277 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 278 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 279 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 280 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 281 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 282 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 283 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 284 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 296 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 297 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 298 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 299 "data/maps/VoltbrookTown/scripts.pory"
	speakername NULL
# 300 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 301 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 302 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return


AfterBattle_Test::
# 311 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 313 "data/maps/VoltbrookTown/scripts.pory"
	case 22, AfterBattle_Test_2
# 586 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 859 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 1132 "data/maps/VoltbrookTown/scripts.pory"
	case 25, AfterBattle_Test_5
	return

AfterBattle_Test_2:
# 314 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 315 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 316 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 317 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 318 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 319 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 320 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 321 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 322 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 323 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 324 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 325 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 326 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 327 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 328 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 329 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 330 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 331 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 332 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 335 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 336 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 337 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 338 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 339 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 340 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 341 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 342 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 343 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 344 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 345 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 346 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 347 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 348 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 349 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 350 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 351 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_3
# 352 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 353 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 354 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 355 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 356 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 357 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 358 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 359 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 360 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 361 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 362 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 363 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 364 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 365 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 366 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 367 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_4
# 368 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 369 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 370 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 371 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 372 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 373 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 377 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 378 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 379 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 380 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 385 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 386 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 391 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 392 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 393 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 394 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 395 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 396 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 400 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 401 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 404 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 405 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 406 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 407 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 410 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 411 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 415 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 416 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 417 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 420 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 421 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 422 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 428 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 429 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 432 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 433 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 440 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 441 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 445 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 446 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 449 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 450 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 454 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 455 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 459 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 460 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 461 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 462 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 463 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 464 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 469 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 470 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 476 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 477 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 483 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 484 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 487 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 498 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 499 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 503 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 504 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 505 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 506 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 507 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 508 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 509 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 510 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 515 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 516 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 524 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 525 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 526 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 527 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 532 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 533 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 536 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 537 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 551 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 552 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 557 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 558 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 563 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 564 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 565 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 566 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 567 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 568 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 569 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 570 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 571 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 572 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 573 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_11
# 574 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 575 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 576 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 577 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 581 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 582 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 583 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 584 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 587 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 588 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 589 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 590 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 591 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 592 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 593 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 594 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 595 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 596 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 597 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 598 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 599 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 600 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 601 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 602 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 603 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 604 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 605 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 608 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 609 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 610 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 611 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 612 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 613 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 614 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 615 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 616 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 617 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 618 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 619 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 620 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 621 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 622 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 623 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 624 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_12
# 625 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 626 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 627 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 628 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 629 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 630 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 631 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 632 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 633 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 634 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 635 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 636 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 637 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 638 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 639 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 640 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_4
# 641 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 642 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 643 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 644 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 645 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 646 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 650 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 651 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 652 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 653 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 658 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 659 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 664 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 665 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 666 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 667 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 668 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 669 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 673 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 674 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 677 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 678 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 679 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 680 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 683 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 684 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 688 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 689 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 690 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 693 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 694 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 695 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 701 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 702 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 705 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 706 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 713 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 714 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 718 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 719 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 722 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 723 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 727 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 728 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 732 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 733 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 734 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 735 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 736 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 737 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 742 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 743 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 749 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 750 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 756 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 757 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 760 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 771 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 772 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 776 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 777 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 778 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 779 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 780 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 781 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 782 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 783 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_41
# 788 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 789 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 797 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 798 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 799 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 800 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 805 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 806 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 809 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 810 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 824 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 825 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 830 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 831 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 836 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 837 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 838 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 839 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 840 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 841 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 842 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 843 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 844 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 845 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 846 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_11
# 847 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 848 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 849 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 850 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 854 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 855 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 856 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 857 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 860 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 861 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 862 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 863 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 864 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 865 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 866 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 867 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 868 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_13
# 869 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 870 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 871 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 872 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 873 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 874 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 875 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 876 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 877 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 880 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 881 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 882 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 883 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 884 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 885 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 886 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 887 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 888 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 889 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 890 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 891 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 892 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 893 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 894 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 895 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 896 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_12
# 897 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 898 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 899 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 900 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 901 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 902 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 903 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 904 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 905 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 906 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 907 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 908 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 909 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 910 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 911 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 912 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 913 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_14
# 914 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 915 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 916 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 917 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 918 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 919 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 923 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 924 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 925 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 926 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 931 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 932 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 937 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 938 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 939 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 940 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 941 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 942 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 946 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 947 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 950 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 951 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 952 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 953 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 956 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 957 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 961 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 962 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 963 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 966 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 967 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 968 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 974 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 975 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 978 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 979 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 986 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 987 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 991 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 992 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 995 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 996 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 1000 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1001 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 1005 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1006 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 1007 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1008 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1009 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1010 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 1015 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1016 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1022 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1023 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1029 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1030 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1033 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1044 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1045 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1049 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1050 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 1051 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1052 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1053 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1054 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1055 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1056 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_41
# 1061 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1062 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1070 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1071 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1072 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1073 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1078 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1079 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1082 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1083 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1097 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1098 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1103 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1104 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1109 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1110 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 1111 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1112 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1113 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1114 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1115 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1116 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1117 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1118 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1119 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_11
# 1120 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1121 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1122 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1128 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1129 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1130 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1134 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1135 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 1136 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1137 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 1138 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 1139 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 1140 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 1141 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 1142 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_15
# 1144 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_15
# 1145 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1146 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 1147 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 1148 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 1150 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 1154 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 1155 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1156 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1157 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1158 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 1160 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 1161 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1162 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1163 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1164 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 1165 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 1166 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1167 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 1168 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_16
# 1170 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1171 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1172 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1173 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1174 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1175 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 1176 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1177 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 1178 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 1179 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1180 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1181 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 1182 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1183 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 1184 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1185 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1186 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_14
# 1187 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 1188 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 1189 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 1190 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1191 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1192 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 1196 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1197 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 1198 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1199 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 1204 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1205 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 1210 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1211 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 1212 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1213 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1214 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1215 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 1219 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1220 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 1223 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1224 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1225 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1226 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 1229 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1230 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 1234 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1235 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1236 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1239 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1240 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1241 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 1247 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1248 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 1251 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1252 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 1259 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1260 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 1264 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1265 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 1268 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1269 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 1273 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1274 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 1278 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1279 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 1280 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1281 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1282 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1283 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 1288 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1289 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1295 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1296 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1302 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1303 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1306 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1317 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1318 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1322 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1323 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 1324 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1325 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1326 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1327 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1328 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1329 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_41
# 1334 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1335 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1343 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1344 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1345 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1346 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1351 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1352 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1355 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1356 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1370 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1371 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1376 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1377 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1382 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1383 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 1384 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1385 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1386 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1387 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1388 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1389 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1390 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1391 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1392 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_11
# 1393 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1394 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1395 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1396 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1400 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1401 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1402 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1403 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 1411 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1412 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1413 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1415 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 1416 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1417 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 1419 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 1420 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1421 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1422 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_8
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1424 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 1430 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1431 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1432 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1433 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 1434 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 1435 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1436 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1437 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 1438 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1439 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 1440 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 1441 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1442 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1443 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 1444 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1445 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 1446 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_13
# 1447 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1448 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_DoorsLocked::
# 1456 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 1457 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_DoorsLocked_Text_0, MSGBOX_SIGN
# 1458 "data/maps/VoltbrookTown/scripts.pory"
	release
	return


Voltbrook_EventScript_Locked::
# 1465 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_Locked_Text_0, MSGBOX_SIGN
	end


Voltbrook_EventScript_FroJoins::
# 1471 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1472 "data/maps/VoltbrookTown/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_ARTIFACT, Voltbrook_EventScript_FroJoins_2
	return

Voltbrook_EventScript_FroJoins_1:
# 1474 "data/maps/VoltbrookTown/scripts.pory"
	setvar VAR_VOLTBROOK_PLANT_STATE, 5
# 1475 "data/maps/VoltbrookTown/scripts.pory"
	clearflag FLAG_SYS_HIDE_EEVEE_PARTY_MEMBER
# 1476 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1477 "data/maps/VoltbrookTown/scripts.pory"
	clearflag FLAG_SYS_HIDE_FRO_PARTY_MEMBER
# 1478 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 1479 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxy LOCALID_VEE, 24, 6
# 1480 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScript_FroJoins_Movement_0
# 1481 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1482 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxy LOCALID_FRO, 24, 12
# 1483 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, Voltbrook_EventScript_FroJoins_Movement_1
# 1484 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1485 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1486 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_0
# 1494 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1495 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_1
# 1499 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1500 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_2
# 1506 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1507 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_3
# 1511 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1512 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_4
# 1517 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1518 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_5
# 1521 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1522 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_6
# 1530 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1531 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_7
# 1534 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1535 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_8
# 1538 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1539 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_9
# 1542 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1543 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_10
# 1551 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1552 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_11
# 1556 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1557 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_12
# 1572 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1573 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_13
# 1578 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1579 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_14
# 1584 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1585 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_15
# 1588 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1589 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_16
# 1593 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1594 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_17
# 1601 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1602 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_18
# 1608 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1609 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_19
# 1612 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1613 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_20
# 1616 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1617 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_21
# 1620 "data/maps/VoltbrookTown/scripts.pory"
	speakername NULL
# 1621 "data/maps/VoltbrookTown/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 1622 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_22
# 1623 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1624 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_23
# 1629 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1630 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_24
# 1635 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1636 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_25
# 1644 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1645 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_26
# 1649 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1650 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_FroJoins_Text_27
# 1656 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1657 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_13
# 1658 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 1659 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1660 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1661 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1662 "data/maps/VoltbrookTown/scripts.pory"
	setvar VAR_DOMINION_CITY_LAB_INTRO_STATE, 10
# 1663 "data/maps/VoltbrookTown/scripts.pory"
	callnative ScrCmd_getpartyaveragelevel
# 1664 "data/maps/VoltbrookTown/scripts.pory"
	givemon SPECIES_SNORLAX, VAR_TEMP_0, ITEM_LEFTOVERS, ITEM_DUSK_BALL, NATURE_HARDY, 0, MON_MALE, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_THIEF, MOVE_STOCKPILE, MOVE_ROCK_TOMB, MOVE_BODY_SLAM
# 1665 "data/maps/VoltbrookTown/scripts.pory"
	setflag FLAG_SYS_EXP_SHARE
# 1666 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end

Voltbrook_EventScript_FroJoins_2:
# 1472 "data/maps/VoltbrookTown/scripts.pory"
	compare VAR_VOLTBROOK_PLANT_STATE, 5
	goto_if_lt Voltbrook_EventScript_FroJoins_1
	return


# 33 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_0:
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 33 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 38 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_1:
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 38 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 43 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_2:
# 43 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 43 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 43 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 43 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 43 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 43 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 43 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 60 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_3:
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 60 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 61 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_4:
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 61 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 62 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_5:
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 62 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 73 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_6:
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 73 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 78 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_7:
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 78 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 83 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_8:
# 83 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 83 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 83 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 83 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 83 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 83 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 83 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 91 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_9:
# 91 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_right
	step_end

# 114 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0:
# 114 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_down
	step_end

# 125 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1:
# 125 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 130 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2:
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 130 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 130 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 130 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 234 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3:
# 234 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_left
	step_end

# 268 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_4:
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 268 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 268 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 322 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_0:
# 322 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 324 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_1:
# 324 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 324 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 324 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 324 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 324 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 327 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_2:
# 327 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
# 327 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 351 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_3:
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
	walk_faster_left
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 351 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 367 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_4:
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 367 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 367 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 368 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_5:
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 368 "data/maps/VoltbrookTown/scripts.pory"
	face_up
	step_end

# 369 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_6:
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 369 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
	step_end

# 401 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_7:
# 402 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
	step_end

# 417 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_8:
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 504 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_9:
# 504 "data/maps/VoltbrookTown/scripts.pory"
	emote_question_mark
	step_end

# 570 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 570 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 573 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 573 "data/maps/VoltbrookTown/scripts.pory"
	face_left
	step_end

# 624 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 624 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 868 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_13:
# 868 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 913 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_14:
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 913 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 913 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1143 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_15:
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1169 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_16:
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 1434 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 1434 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1434 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1434 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1434 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 1443 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 1443 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1443 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1443 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1443 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 1480 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScript_FroJoins_Movement_0:
# 1480 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1480 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1483 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScript_FroJoins_Movement_1:
# 1483 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 1483 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 1483 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 1483 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 1483 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
	step_end

Voltbrook_EventScripts_GruntPatrolChat_Text_0:
# 46 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 1$"

Voltbrook_EventScripts_GruntPatrolChat_Text_1:
# 47 "data/maps/VoltbrookTown/scripts.pory"
	.string "I can't believe those failures got away.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_2:
# 49 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 2$"

Voltbrook_EventScripts_GruntPatrolChat_Text_3:
# 50 "data/maps/VoltbrookTown/scripts.pory"
	.string "They might be failures, but they still\n"
	.string "escaped.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_4:
# 51 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 3$"

Voltbrook_EventScripts_GruntPatrolChat_Text_5:
# 52 "data/maps/VoltbrookTown/scripts.pory"
	.string "They couldn't have possibly made it far\n"
	.string "from the lab, right?$"

Voltbrook_EventScripts_GruntPatrolChat_Text_6:
# 54 "data/maps/VoltbrookTown/scripts.pory"
	.string "That sorry bunch?\n"
	.string "Ha! No shot.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_7:
# 56 "data/maps/VoltbrookTown/scripts.pory"
	.string "Talk less and search more.\n"
	.string "HQ is expecting us to return soon.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_8:
# 58 "data/maps/VoltbrookTown/scripts.pory"
	.string "Let's split up and cover the whole town.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_9:
# 93 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee$"

Voltbrook_EventScripts_GruntPatrolChat_Text_10:
# 94 "data/maps/VoltbrookTown/scripts.pory"
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
# 122 "data/maps/VoltbrookTown/scripts.pory"
	.string "???$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1:
# 123 "data/maps/VoltbrookTown/scripts.pory"
	.string "Where do you think you're going?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2:
# 135 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hey, you're the lab escapees!\p"
	.string "Easy, now.\n"
	.string "Just come with us, and we won't hurt\l"
	.string "you, alright?\p"
	.string "Not any more than necessary, at least.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3:
# 147 "data/maps/VoltbrookTown/scripts.pory"
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
# 164 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hard way it is, then. Fine by me!\p"
	.string "I get to stop pretending to be nice.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5:
# 164 "data/maps/VoltbrookTown/scripts.pory"
	.string "How… How could a couple of failed\n"
	.string "experiments beat me?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6:
# 164 "data/maps/VoltbrookTown/scripts.pory"
	.string "NULL$"

AfterBattle_Test_Text_0:
# 332 "data/maps/VoltbrookTown/scripts.pory"
	.string "Get a load of this guy.\p"
	.string "What's up with you?\n"
	.string "Having trouble with these freaks?$"

AfterBattle_Test_Text_1:
# 336 "data/maps/VoltbrookTown/scripts.pory"
	.string "Orders are clear: capture them alive.\p"
	.string "No more mistakes.$"

AfterBattle_Test_Text_2:
# 341 "data/maps/VoltbrookTown/scripts.pory"
	.string "You're not getting away this time!$"

AfterBattle_Test_Text_3:
# 346 "data/maps/VoltbrookTown/scripts.pory"
	.string "There’s three of them now…!$"

AfterBattle_Test_Text_4:
# 347 "data/maps/VoltbrookTown/scripts.pory"
	.string "I-I don’t think we can win this…!$"

AfterBattle_Test_Text_5:
# 356 "data/maps/VoltbrookTown/scripts.pory"
	.string "Out of the pan, into the fire.\p"
	.string "Stick close to me if you want to live.$"

AfterBattle_Test_Text_6:
# 358 "data/maps/VoltbrookTown/scripts.pory"
	.string "W-Wait what do you me-$"

AfterBattle_Test_Text_7:
# 362 "data/maps/VoltbrookTown/scripts.pory"
	.string "Quickly. This way!$"

AfterBattle_Test_Text_8:
# 364 "data/maps/VoltbrookTown/scripts.pory"
	.string "Okay okay, we're coming!$"

AfterBattle_Test_Text_9:
# 373 "data/maps/VoltbrookTown/scripts.pory"
	.string "Geez, that was close!\n"
	.string "I thought we were done for.\p"
	.string "Thank you so much for saving us!\n"
	.string "What's your name?$"

AfterBattle_Test_Text_10:
# 378 "data/maps/VoltbrookTown/scripts.pory"
	.string "I'm Fro.$"

AfterBattle_Test_Text_11:
# 381 "data/maps/VoltbrookTown/scripts.pory"
	.string "Nice to meet you, Fro!\p"
	.string "I'm Vee!\n"
	.string "And this is Seel!$"

AfterBattle_Test_Text_12:
# 385 "data/maps/VoltbrookTown/scripts.pory"
	.string "Fro$"

AfterBattle_Test_Text_13:
# 387 "data/maps/VoltbrookTown/scripts.pory"
	.string "Seel?\n"
	.string "That's funny.\p"
	.string "Wait, aren't you…$"

AfterBattle_Test_Text_14:
# 397 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hold on for a moment.\n"
	.string "I need to think.$"

AfterBattle_Test_Text_15:
# 408 "data/maps/VoltbrookTown/scripts.pory"
	.string "Can we…$"

AfterBattle_Test_Text_16:
# 412 "data/maps/VoltbrookTown/scripts.pory"
	.string "Shh!\n"
	.string "I'm thinking.$"

AfterBattle_Test_Text_17:
# 423 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ok.\p"
	.string "It's YOU, isn't it, Seel?\p"
	.string "And that Dewgong I fought back then…\n"
	.string "That was you as well.$"

AfterBattle_Test_Text_18:
# 430 "data/maps/VoltbrookTown/scripts.pory"
	.string "You two KNOW each other?$"

AfterBattle_Test_Text_19:
# 434 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh, yes, we do.\p"
	.string "I was looking for him, in fact.\n"
	.string "He went missing for a while.\p"
	.string "And now…\n"
	.string "I guess I found him.$"

AfterBattle_Test_Text_20:
# 442 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yippee!\n"
	.string "Mission complete!$"

AfterBattle_Test_Text_21:
# 447 "data/maps/VoltbrookTown/scripts.pory"
	.string "…And you said you were…?$"

AfterBattle_Test_Text_22:
# 451 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee the Eevee!\n"
	.string "From the lab!$"

AfterBattle_Test_Text_23:
# 456 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hmm…\n"
	.string "So, you aren't a human.$"

AfterBattle_Test_Text_24:
# 465 "data/maps/VoltbrookTown/scripts.pory"
	.string "Wait.\n"
	.string "Ohmygosh.\p"
	.string "Are you a human too?$"

AfterBattle_Test_Text_25:
# 471 "data/maps/VoltbrookTown/scripts.pory"
	.string "Me?\n"
	.string "Sure am.\l"
	.string "Or rather, was.\p"
	.string "You're speaking to the former Champion\n"
	.string "of the region, in fact.$"

AfterBattle_Test_Text_26:
# 478 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ohmygosh.\n"
	.string "No way! That's so cool!\p"
	.string "…What's a Champion?\n"
	.string "Is it like a Guardian?$"

AfterBattle_Test_Text_27:
# 485 "data/maps/VoltbrookTown/scripts.pory"
	.string "I have no idea what you're talking\n"
	.string "about.$"

AfterBattle_Test_Text_28:
# 488 "data/maps/VoltbrookTown/scripts.pory"
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
# 500 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don't be sad!\n"
	.string "We know of a way to turn you back!$"

AfterBattle_Test_Text_30:
# 508 "data/maps/VoltbrookTown/scripts.pory"
	.string "Do you, now?$"

AfterBattle_Test_Text_31:
# 511 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah!\n"
	.string "We gotta find the eight Artifacts!\p"
	.string "There should be one in Voltbrook Town,\n"
	.string "actually!$"

AfterBattle_Test_Text_32:
# 517 "data/maps/VoltbrookTown/scripts.pory"
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
# 525 "data/maps/VoltbrookTown/scripts.pory"
	.string "Work?$"

AfterBattle_Test_Text_34:
# 528 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yes.\p"
	.string "They tried to get me to fight for them,\n"
	.string "but I refused their commands.\p"
	.string "So, now…$"

AfterBattle_Test_Text_35:
# 534 "data/maps/VoltbrookTown/scripts.pory"
	.string "They're forcing you to run in a big wheel\n"
	.string "to generate electricity?$"

AfterBattle_Test_Text_36:
# 538 "data/maps/VoltbrookTown/scripts.pory"
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
# 553 "data/maps/VoltbrookTown/scripts.pory"
	.string "Thank you, Fro.\p"
	.string "But… What about you?\p"
	.string "Won't they be mad because you've helped\n"
	.string "us?$"

AfterBattle_Test_Text_38:
# 559 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh, they will.\n"
	.string "But they won't be doing anything to me.\p"
	.string "Because…$"

AfterBattle_Test_Text_39:
# 568 "data/maps/VoltbrookTown/scripts.pory"
	.string "…They like my cooking too much.$"

AfterBattle_Test_Text_40:
# 577 "data/maps/VoltbrookTown/scripts.pory"
	.string "He seems nice!\n"
	.string "I hope we meet him again.\p"
	.string "For now, though, we should be away from\n"
	.string "Voltbrook.\p"
	.string "Let's check out Moonthistle!$"

AfterBattle_Test_Text_41:
# 784 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah!\n"
	.string "We gotta find the eight artifacts!\p"
	.string "There should be one in Voltbrook Town,\n"
	.string "actually!$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 1417 "data/maps/VoltbrookTown/scripts.pory"
	.string "We need to stay away from Voltbrook for\n"
	.string "now, Seel!\n"
	.string "Let's worry about the artefact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 1439 "data/maps/VoltbrookTown/scripts.pory"
	.string "We can't go this way…\n"
	.string "There's MAGA grunts up ahead.\p"
	.string "Let's looks somewhere else.$"

Voltbrook_EventScripts_DoorsLocked_Text_0:
# 1457 "data/maps/VoltbrookTown/scripts.pory"
	.string "The door is locked$"

Voltbrook_EventScript_Locked_Text_0:
# 1465 "data/maps/VoltbrookTown/scripts.pory"
	.string "Locked.$"

Voltbrook_EventScript_FroJoins_Text_0:
# 1487 "data/maps/VoltbrookTown/scripts.pory"
	.string "Are you two insane?\p"
	.string "No, don't answer.\n"
	.string "I got a headache.\p"
	.string "I saw an Electivire wrecking houses,\n"
	.string "and Team MAGA running after it.\p"
	.string "And now I find you sneaking out of the\n"
	.string "power plant.\p"
	.string "Did you have something to do with that?$"

Voltbrook_EventScript_FroJoins_Text_1:
# 1496 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yup!\n"
	.string "We defeated the Guardian!$"

Voltbrook_EventScript_FroJoins_Text_2:
# 1501 "data/maps/VoltbrookTown/scripts.pory"
	.string "Peachy.\n"
	.string "Very happy for you guys.\p"
	.string "Except, with Team MAGA gone from the\n"
	.string "town…\l"
	.string "I'm out of a job.$"

Voltbrook_EventScript_FroJoins_Text_3:
# 1508 "data/maps/VoltbrookTown/scripts.pory"
	.string "You could join me and Seel!\n"
	.string "We're going on a quest!$"

Voltbrook_EventScript_FroJoins_Text_4:
# 1513 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ah, yes.\n"
	.string "The quest for the magical artifacts.\p"
	.string "How's that panning out?$"

Voltbrook_EventScript_FroJoins_Text_5:
# 1519 "data/maps/VoltbrookTown/scripts.pory"
	.string "We found one!$"

Voltbrook_EventScript_FroJoins_Text_6:
# 1523 "data/maps/VoltbrookTown/scripts.pory"
	.string "You fo-\n"
	.string "Let me take a look.\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "This…\n"
	.string "It's certainly very artifact-shaped, I\l"
	.string "will give you that.$"

Voltbrook_EventScript_FroJoins_Text_7:
# 1532 "data/maps/VoltbrookTown/scripts.pory"
	.string "I know, right?$"

Voltbrook_EventScript_FroJoins_Text_8:
# 1536 "data/maps/VoltbrookTown/scripts.pory"
	.string "But you don't actually know how this is\n"
	.string "supposed to work, do you?$"

Voltbrook_EventScript_FroJoins_Text_9:
# 1540 "data/maps/VoltbrookTown/scripts.pory"
	.string "Not really…$"

Voltbrook_EventScript_FroJoins_Text_10:
# 1544 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah.\p"
	.string "You don't know if it works, or how, just\n"
	.string "that you need eight of them.\p"
	.string "It's not that I don't trust you, Seel,\n"
	.string "but…\p"
	.string "I don't want to get my hopes up for\n"
	.string "nothing.\p"
	.string "I've been doing some thinking.\p"
	.string "I dunno about you, Seel, but I don't\n"
	.string "mind being stuck as a Pokémon.$"

Voltbrook_EventScript_FroJoins_Text_11:
# 1553 "data/maps/VoltbrookTown/scripts.pory"
	.string "How can you say that!\n"
	.string "Humans are so cool!$"

Voltbrook_EventScript_FroJoins_Text_12:
# 1558 "data/maps/VoltbrookTown/scripts.pory"
	.string "There's some things I miss, that's true.\p"
	.string "But…\p"
	.string "I failed my responsibilites as a\n"
	.string "Champion.\l"
	.string "I couldn't protect anyone.\p"
	.string "This life as a chef…\n"
	.string "Is really not so bad.\p"
	.string "If things were like this forever, I\n"
	.string "would not mind.\p"
	.string "… … …\n"
	.string "But they won't, will they.\p"
	.string "I had it good here, but it was never\n"
	.string "going to last.\p"
	.string "And Team MAGA's still up to something.\p"
	.string "And you two…\n"
	.string "I can't just sit around and watch\l"
	.string "someone get themselves killed.$"

Voltbrook_EventScript_FroJoins_Text_13:
# 1574 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hey!\n"
	.string "We can handle our own!\l"
	.string "We defeated a Guardian!$"

Voltbrook_EventScript_FroJoins_Text_14:
# 1580 "data/maps/VoltbrookTown/scripts.pory"
	.string "Sure. Once.\n"
	.string "Can you do it again?\p"
	.string "And again, and again, and again, seven\n"
	.string "more times?$"

Voltbrook_EventScript_FroJoins_Text_15:
# 1586 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah!$"

Voltbrook_EventScript_FroJoins_Text_16:
# 1590 "data/maps/VoltbrookTown/scripts.pory"
	.string "… … …\p"
	.string "Ok, guess you don't need my help, then.$"

Voltbrook_EventScript_FroJoins_Text_17:
# 1595 "data/maps/VoltbrookTown/scripts.pory"
	.string "No!\n"
	.string "I mean, yes!\l"
	.string "It's not what I meant!\p"
	.string "I really want you on our side, Fro!\n"
	.string "You're really cool!$"

Voltbrook_EventScript_FroJoins_Text_18:
# 1603 "data/maps/VoltbrookTown/scripts.pory"
	.string "Heh.\n"
	.string "Was just messing with you.\l"
	.string "Don't worry, I'll join.\p"
	.string "I'm still not sure about the artifact\n"
	.string "business, but if my friend Seel needs\l"
	.string "help, I can't just say no.$"

Voltbrook_EventScript_FroJoins_Text_19:
# 1610 "data/maps/VoltbrookTown/scripts.pory"
	.string "And your friend Vee!$"

Voltbrook_EventScript_FroJoins_Text_20:
# 1614 "data/maps/VoltbrookTown/scripts.pory"
	.string "…Yes, and my friend Vee.$"

Voltbrook_EventScript_FroJoins_Text_21:
# 1618 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yayyy!$"

Voltbrook_EventScript_FroJoins_Text_22:
# 1622 "data/maps/VoltbrookTown/scripts.pory"
	.string "{COLOR RED}Fro{COLOR DARK_GRAY} has joined your team!$"

Voltbrook_EventScript_FroJoins_Text_23:
# 1625 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ok.\n"
	.string "Team MAGA's out of town for now, but\l"
	.string "there's no guarantee they won't be\l"
	.string "back.\p"
	.string "Where are we headed?$"

Voltbrook_EventScript_FroJoins_Text_24:
# 1631 "data/maps/VoltbrookTown/scripts.pory"
	.string "Well…\n"
	.string "There were a bunch of places on the list\l"
	.string "we saw…\p"
	.string "I think the next one was\n"
	.string "Pyro-something.$"

Voltbrook_EventScript_FroJoins_Text_25:
# 1637 "data/maps/VoltbrookTown/scripts.pory"
	.string "Pyroden?\n"
	.string "It's north of Dominion City.\p"
	.string "I've heard there's some nice hot\n"
	.string "springs.\l"
	.string "I vote to go there.\p"
	.string "Since I'm larger than you two combined,\n"
	.string "my vote counts for three.\l"
	.string "Ah, I can't wait to relax in the warm\l"
	.string "water.$"

Voltbrook_EventScript_FroJoins_Text_26:
# 1646 "data/maps/VoltbrookTown/scripts.pory"
	.string "We're not going there to relax!\n"
	.string "We're going there to find the Artifact!$"

Voltbrook_EventScript_FroJoins_Text_27:
# 1651 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yes, yes.\n"
	.string "We can do both.\p"
	.string "In fact, the sooner we get there, the\n"
	.string "more spare time we'll have to relax.\p"
	.string "Lead the way, Seel.$"
