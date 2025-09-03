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
# 160 "data/maps/VoltbrookTown/scripts.pory"
	case 23, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3
# 201 "data/maps/VoltbrookTown/scripts.pory"
	case 24, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4
# 242 "data/maps/VoltbrookTown/scripts.pory"
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
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 126 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 127 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 128 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 129 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 130 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 134 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 135 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 136 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 137 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 138 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 139 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 140 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 141 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 153 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 154 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 155 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 156 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 157 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 158 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3:
# 161 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 23, 21
# 162 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 163 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 164 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 165 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 166 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 167 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 168 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 169 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 170 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 171 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 175 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 176 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 177 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 178 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 179 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 180 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 181 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 182 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 194 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 195 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 196 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 197 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 198 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 199 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4:
# 202 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 203 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 204 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 205 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 206 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 207 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 208 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 209 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 210 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 211 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 212 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 216 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 217 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 218 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 219 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 220 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 221 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 222 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 223 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 235 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 236 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 237 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 238 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 239 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 240 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5:
# 243 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 244 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 245 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 246 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 247 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 248 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 249 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 250 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 251 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 252 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 253 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 257 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 258 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 259 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 260 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 261 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 262 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 263 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 264 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 276 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 277 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 278 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 279 "data/maps/VoltbrookTown/scripts.pory"
	speakername NULL
# 280 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 281 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 282 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return


AfterBattle_Test::
# 291 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 293 "data/maps/VoltbrookTown/scripts.pory"
	case 22, AfterBattle_Test_2
# 566 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 839 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 1112 "data/maps/VoltbrookTown/scripts.pory"
	case 25, AfterBattle_Test_5
	return

AfterBattle_Test_2:
# 294 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 295 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 296 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 297 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 298 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 299 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 300 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 301 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 302 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 303 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 304 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 305 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 306 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 307 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 308 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 309 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 310 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 311 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 312 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 315 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 316 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 317 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 318 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 319 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 320 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 321 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 322 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 323 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 324 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 325 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 326 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 327 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 328 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 329 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 330 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 331 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_3
# 332 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 333 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 334 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 335 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 336 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 337 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 338 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 339 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 340 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 341 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 342 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 343 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 344 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 345 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 346 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 347 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_4
# 348 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 349 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 350 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 351 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 352 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 353 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 357 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 358 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 359 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 360 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 365 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 366 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 371 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 372 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 373 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 375 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 376 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 380 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 381 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 384 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 385 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 386 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 387 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 390 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 391 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 395 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 396 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 397 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 400 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 401 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 402 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 408 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 409 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 412 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 413 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 420 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 421 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 425 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 426 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 429 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 430 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 434 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 435 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 439 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 440 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 441 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 442 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 443 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 444 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 449 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 450 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 456 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 457 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 463 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 464 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 467 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 478 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 479 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 483 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 484 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 485 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 486 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 487 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 488 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 489 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 490 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 495 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 496 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 504 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 505 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 506 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 507 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 512 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 513 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 516 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 517 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 531 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 532 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 537 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 538 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 543 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 544 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 545 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 546 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 547 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 548 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 549 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 550 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 551 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 552 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 553 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 554 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 555 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 556 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 557 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 561 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 562 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 563 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 564 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 567 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 568 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 569 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 570 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 571 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 572 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 573 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 574 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 575 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 576 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 577 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 578 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 579 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 580 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 581 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 582 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 583 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 584 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 585 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 588 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 589 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 590 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 591 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 592 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 593 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 594 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 595 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 596 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 597 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 598 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 599 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 600 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 601 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 602 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 603 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 604 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_13
# 605 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 606 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 607 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 608 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 609 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 610 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 611 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 612 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 613 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 614 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 615 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 616 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 617 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 618 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 619 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 620 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_4
# 621 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 622 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 623 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 624 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 625 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 626 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 630 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 631 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 632 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 633 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 638 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 639 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 644 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 645 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 646 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 647 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 648 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 649 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 653 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 654 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 657 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 658 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 659 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 660 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 663 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 664 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 668 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 669 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 670 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 673 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 674 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 675 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 681 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 682 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 685 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 686 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 693 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 694 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 698 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 699 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 702 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 703 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 707 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 708 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 712 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 713 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 714 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 715 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 716 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 717 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 722 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 723 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 729 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 730 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 736 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 737 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 740 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 751 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 752 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 756 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 757 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 758 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 759 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 760 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 761 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 762 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 763 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 768 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 769 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 777 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 778 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 779 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 780 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 785 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 786 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 789 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 790 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 804 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 805 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 810 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 811 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 816 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 817 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 818 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 819 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 820 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 821 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 822 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 823 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 824 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 825 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 826 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 827 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 828 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 829 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 830 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 834 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 835 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 836 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 837 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 840 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 841 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 842 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 843 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 844 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 845 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 846 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 847 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 848 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_14
# 849 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 850 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 851 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 852 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 853 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 854 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 855 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 856 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 857 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 860 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 861 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 862 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 863 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 864 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 865 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 866 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 867 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 868 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 869 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 870 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 871 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 872 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 873 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 874 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 875 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 876 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_13
# 877 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 878 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 879 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 880 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 881 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 882 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 883 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 884 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 885 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 886 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 887 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 888 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 889 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 890 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 891 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 892 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 893 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_15
# 894 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 895 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 896 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 897 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 898 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 899 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 903 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 904 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 905 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 906 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 911 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 912 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 917 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 918 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 919 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 920 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 921 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 922 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 926 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 927 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 930 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 931 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 932 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 933 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 936 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 937 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 941 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 942 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 943 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 946 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 947 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 948 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 954 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 955 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 958 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 959 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 966 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 967 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 971 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 972 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 975 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 976 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 980 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 981 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 985 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 986 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 987 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 988 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 989 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 990 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 995 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 996 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1002 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1003 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1009 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1010 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1013 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1024 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1025 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1029 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1030 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1031 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1032 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1033 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1034 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1035 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1036 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 1041 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1042 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1050 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1051 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1052 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1053 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1058 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1059 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1062 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1063 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1077 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1078 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1083 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1084 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1089 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1090 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1091 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1092 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1093 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1094 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1095 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1096 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 1097 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1098 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1099 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 1100 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1101 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1102 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1103 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1107 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1108 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1109 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1110 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 1113 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1114 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1115 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 1116 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 1117 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 1118 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 1119 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 1120 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 1121 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 1122 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_16
# 1124 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_16
# 1125 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 1126 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 1127 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 1128 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1129 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 1130 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 1133 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 1134 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 1135 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1136 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 1137 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1138 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 1139 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 1140 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 1141 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1142 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1143 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1144 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 1145 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 1146 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1147 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_FRO, 29, 22
# 1148 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_FRO
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_17
# 1150 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1151 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1152 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1153 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1154 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1155 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 1156 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1157 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 1158 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 1159 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 1160 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1161 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 1162 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1163 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 1164 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1165 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 1166 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_15
# 1167 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 1168 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 1169 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 1170 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 1171 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1172 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 1176 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 1177 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 1178 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1179 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 1184 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1185 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 1190 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1191 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_7
# 1192 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1193 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1194 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1195 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 1199 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1200 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1203 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1204 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1205 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1206 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 1209 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1210 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 1214 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1215 "data/maps/VoltbrookTown/scripts.pory"
	delay 120
# 1216 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_9
# 1219 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1220 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1221 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_17
# 1227 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1228 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_18
# 1231 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1232 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_19
# 1239 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1240 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_20
# 1244 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1245 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_21
# 1248 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1249 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_22
# 1253 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1254 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_23
# 1258 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1259 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_7
# 1260 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1261 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1262 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1263 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_24
# 1268 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1269 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_25
# 1275 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1276 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_26
# 1282 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1283 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_27
# 1286 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_28
# 1297 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1298 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_29
# 1302 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 1303 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_10
# 1304 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1305 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 1306 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1307 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_30
# 1308 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1309 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_31
# 1314 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1315 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_32
# 1323 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1324 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_33
# 1325 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1326 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_34
# 1331 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1332 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_35
# 1335 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1336 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_36
# 1350 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1351 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_37
# 1356 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1357 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_38
# 1362 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1363 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_8
# 1364 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1365 "data/maps/VoltbrookTown/scripts.pory"
	delay 30
# 1366 "data/maps/VoltbrookTown/scripts.pory"
	speakername AfterBattle_Test_Text_12
# 1367 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_39
# 1368 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 1369 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_FRO, AfterBattle_Test_Movement_11
# 1370 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_FRO
# 1371 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_FRO
# 1372 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_12
# 1373 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 1374 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 0
# 1375 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 1376 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_40
# 1380 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 1381 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1382 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1383 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 1391 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1392 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1393 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1394 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1395 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 1396 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1397 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 1399 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 1400 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1401 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1402 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_9
# 1403 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1404 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 1410 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 1411 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 1412 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 1413 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 1415 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1416 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 1417 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 1418 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1419 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 1420 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 1421 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 1422 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 1424 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 1425 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 1426 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_14
# 1427 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 1428 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_DoorsLocked::
# 1436 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 1437 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_DoorsLocked_Text_0, MSGBOX_SIGN
# 1438 "data/maps/VoltbrookTown/scripts.pory"
	release
	return


Voltbrook_EventScript_Locked::
# 1445 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScript_Locked_Text_0, MSGBOX_SIGN
	end


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
	walk_faster_down
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 125 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 125 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 125 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 219 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2:
# 219 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_left
	step_end

# 248 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3:
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 248 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 248 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 248 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 302 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_0:
# 302 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 304 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_1:
# 304 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 304 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 304 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 304 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 304 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 307 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_2:
# 307 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
# 307 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 331 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_3:
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 331 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 347 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_4:
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 347 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 347 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 348 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_5:
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 348 "data/maps/VoltbrookTown/scripts.pory"
	face_up
	step_end

# 349 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_6:
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 349 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
	step_end

# 372 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_7:
# 372 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 381 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_8:
# 382 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
	step_end

# 397 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_9:
# 398 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 484 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 484 "data/maps/VoltbrookTown/scripts.pory"
	emote_question_mark
	step_end

# 550 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 550 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 553 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 553 "data/maps/VoltbrookTown/scripts.pory"
	face_left
	step_end

# 604 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_13:
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 604 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 848 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_14:
# 848 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 893 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_15:
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 893 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 893 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1123 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_16:
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1123 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 1149 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_17:
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 1149 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 1414 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 1414 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 1423 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 1423 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
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
# 130 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hey, you're the lab escapees!\p"
	.string "Easy, now.\n"
	.string "Just come with us, and we won't hurt\l"
	.string "you, alright?\p"
	.string "Not any more than necessary, at least.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3:
# 142 "data/maps/VoltbrookTown/scripts.pory"
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
# 159 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hard way it is, then. Fine by me!\p"
	.string "I get to stop pretending to be nice.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5:
# 159 "data/maps/VoltbrookTown/scripts.pory"
	.string "How… How could a couple of failed\n"
	.string "experiments beat me?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6:
# 159 "data/maps/VoltbrookTown/scripts.pory"
	.string "NULL$"

AfterBattle_Test_Text_0:
# 312 "data/maps/VoltbrookTown/scripts.pory"
	.string "Get a load of this guy.\p"
	.string "What's up with you?\n"
	.string "Having trouble with these freaks?$"

AfterBattle_Test_Text_1:
# 316 "data/maps/VoltbrookTown/scripts.pory"
	.string "Orders are clear: capture them alive.\p"
	.string "No more mistakes.$"

AfterBattle_Test_Text_2:
# 321 "data/maps/VoltbrookTown/scripts.pory"
	.string "You're not getting away this time!$"

AfterBattle_Test_Text_3:
# 326 "data/maps/VoltbrookTown/scripts.pory"
	.string "There’s three of them now…!$"

AfterBattle_Test_Text_4:
# 327 "data/maps/VoltbrookTown/scripts.pory"
	.string "I-I don’t think we can win this…!$"

AfterBattle_Test_Text_5:
# 336 "data/maps/VoltbrookTown/scripts.pory"
	.string "Out of the pan, into the fire.\p"
	.string "Stick close to me if you want to live.$"

AfterBattle_Test_Text_6:
# 338 "data/maps/VoltbrookTown/scripts.pory"
	.string "W-Wait what do you me-$"

AfterBattle_Test_Text_7:
# 342 "data/maps/VoltbrookTown/scripts.pory"
	.string "Quickly. This way!$"

AfterBattle_Test_Text_8:
# 344 "data/maps/VoltbrookTown/scripts.pory"
	.string "Okay okay, we're coming!$"

AfterBattle_Test_Text_9:
# 353 "data/maps/VoltbrookTown/scripts.pory"
	.string "Geez, that was close!\n"
	.string "I thought we were done for.\p"
	.string "Thank you so much for saving us!\n"
	.string "What's your name?$"

AfterBattle_Test_Text_10:
# 358 "data/maps/VoltbrookTown/scripts.pory"
	.string "I'm Fro.$"

AfterBattle_Test_Text_11:
# 361 "data/maps/VoltbrookTown/scripts.pory"
	.string "Nice to meet you, Fro!\p"
	.string "I'm Vee!\n"
	.string "And this is Seel!$"

AfterBattle_Test_Text_12:
# 365 "data/maps/VoltbrookTown/scripts.pory"
	.string "Fro$"

AfterBattle_Test_Text_13:
# 367 "data/maps/VoltbrookTown/scripts.pory"
	.string "Seel?\n"
	.string "That's funny.\p"
	.string "Wait, aren't you…$"

AfterBattle_Test_Text_14:
# 377 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hold on for a moment.\n"
	.string "I need to think.$"

AfterBattle_Test_Text_15:
# 388 "data/maps/VoltbrookTown/scripts.pory"
	.string "Can we…$"

AfterBattle_Test_Text_16:
# 392 "data/maps/VoltbrookTown/scripts.pory"
	.string "Shh!\n"
	.string "I'm thinking.$"

AfterBattle_Test_Text_17:
# 403 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ok.\p"
	.string "It's YOU, isn't it, Seel?\p"
	.string "And that Dewgong I fought back then…\n"
	.string "That was you as well.$"

AfterBattle_Test_Text_18:
# 410 "data/maps/VoltbrookTown/scripts.pory"
	.string "You two KNOW each other?$"

AfterBattle_Test_Text_19:
# 414 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh, yes, we do.\p"
	.string "I was looking for him, in fact.\n"
	.string "He went missing for a while.\p"
	.string "And now…\n"
	.string "I guess I found him.$"

AfterBattle_Test_Text_20:
# 422 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yippee!\n"
	.string "Mission complete!$"

AfterBattle_Test_Text_21:
# 427 "data/maps/VoltbrookTown/scripts.pory"
	.string "…And you said you were…?$"

AfterBattle_Test_Text_22:
# 431 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee the Eevee!\n"
	.string "From the lab!$"

AfterBattle_Test_Text_23:
# 436 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hmm…\n"
	.string "So, you aren't a human.$"

AfterBattle_Test_Text_24:
# 445 "data/maps/VoltbrookTown/scripts.pory"
	.string "Wait.\n"
	.string "Ohmygosh.\p"
	.string "Are you a human too?$"

AfterBattle_Test_Text_25:
# 451 "data/maps/VoltbrookTown/scripts.pory"
	.string "Me?\n"
	.string "Sure am.\l"
	.string "Or rather, was.\p"
	.string "You're speaking to the former Champion\n"
	.string "of the region, in fact.$"

AfterBattle_Test_Text_26:
# 458 "data/maps/VoltbrookTown/scripts.pory"
	.string "Ohmygosh.\n"
	.string "No way! That's so cool!\p"
	.string "…What's a Champion?\n"
	.string "Is it like a Guardian?$"

AfterBattle_Test_Text_27:
# 465 "data/maps/VoltbrookTown/scripts.pory"
	.string "I have no idea what you're talking\n"
	.string "about.$"

AfterBattle_Test_Text_28:
# 468 "data/maps/VoltbrookTown/scripts.pory"
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
# 480 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don't be sad!\n"
	.string "We know of a way to turn you back!$"

AfterBattle_Test_Text_30:
# 488 "data/maps/VoltbrookTown/scripts.pory"
	.string "Do you, now?$"

AfterBattle_Test_Text_31:
# 491 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah!\n"
	.string "We gotta find the eight artifacts!\p"
	.string "There should be one in Voltbrook Town,\n"
	.string "actually!$"

AfterBattle_Test_Text_32:
# 497 "data/maps/VoltbrookTown/scripts.pory"
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
# 505 "data/maps/VoltbrookTown/scripts.pory"
	.string "Work?$"

AfterBattle_Test_Text_34:
# 508 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yes.\p"
	.string "They tried to get me to fight for them,\n"
	.string "but I refused their commands.\p"
	.string "So, now…$"

AfterBattle_Test_Text_35:
# 514 "data/maps/VoltbrookTown/scripts.pory"
	.string "They're forcing you to run in a big wheel\n"
	.string "to generate electricity?$"

AfterBattle_Test_Text_36:
# 518 "data/maps/VoltbrookTown/scripts.pory"
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
# 533 "data/maps/VoltbrookTown/scripts.pory"
	.string "Thank you, Fro.\p"
	.string "But… What about you?\p"
	.string "Won't they be mad because you've helped\n"
	.string "us?$"

AfterBattle_Test_Text_38:
# 539 "data/maps/VoltbrookTown/scripts.pory"
	.string "Oh, they will.\n"
	.string "But they won't be doing anything to me.\p"
	.string "Because…$"

AfterBattle_Test_Text_39:
# 548 "data/maps/VoltbrookTown/scripts.pory"
	.string "…They like my cooking too much.$"

AfterBattle_Test_Text_40:
# 557 "data/maps/VoltbrookTown/scripts.pory"
	.string "He seems nice!\n"
	.string "I hope we meet him again.\p"
	.string "For now, though, we should be away from\n"
	.string "Voltbrook.\p"
	.string "Let's check out Moonthistle!$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 1397 "data/maps/VoltbrookTown/scripts.pory"
	.string "We need to stay away from Voltbrook for\n"
	.string "now, Seel!\n"
	.string "Let's worry about the artefact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 1419 "data/maps/VoltbrookTown/scripts.pory"
	.string "We can't go this way…\n"
	.string "There's MAGA grunts up ahead.\p"
	.string "Let's looks somewhere else.$"

Voltbrook_EventScripts_DoorsLocked_Text_0:
# 1437 "data/maps/VoltbrookTown/scripts.pory"
	.string "The door is locked$"

Voltbrook_EventScript_Locked_Text_0:
# 1445 "data/maps/VoltbrookTown/scripts.pory"
	.string "Locked.$"
