# 1 "data/maps/VoltbrookTown/scripts.pory"

# 2 "data/maps/VoltbrookTown/scripts.pory"
.set LOCALID_VEE, 4
# 3 "data/maps/VoltbrookTown/scripts.pory"
.set LOCALID_ACE, 5
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
	goto_if_set FLAG_HINTED_AT_POWERPLANT, VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

VoltbrookTown_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 13 "data/maps/VoltbrookTown/scripts.pory"
	setmetatile 17, 3, 0x3D2, FALSE
# 14 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_GruntPatrolChat::
# 23 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 24 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 25 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 26 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_2
Voltbrook_EventScripts_GruntPatrolChat_1:
# 31 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_5
Voltbrook_EventScripts_GruntPatrolChat_4:
# 36 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_8
Voltbrook_EventScripts_GruntPatrolChat_7:
# 41 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 42 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_1
# 43 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 44 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 45 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_3
# 46 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 47 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_5
# 48 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 49 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_6
# 50 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 51 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_7
# 52 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 53 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_8
# 54 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 55 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntPatrolChat_Movement_3
# 56 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, Voltbrook_EventScripts_GruntPatrolChat_Movement_4
# 57 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, Voltbrook_EventScripts_GruntPatrolChat_Movement_5
# 58 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 3
# 59 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 1
# 60 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 61 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 62 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, 26, 8
# 63 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, 25, 6
# 64 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 65 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 66 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_11
Voltbrook_EventScripts_GruntPatrolChat_10:
# 71 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_14
Voltbrook_EventScripts_GruntPatrolChat_13:
# 76 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_17
Voltbrook_EventScripts_GruntPatrolChat_16:
# 81 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 82 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 83 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 84 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 85 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 86 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 87 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 88 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 89 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_10
# 90 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 91 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 92 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 93 "data/maps/VoltbrookTown/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 2
# 94 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

Voltbrook_EventScripts_GruntPatrolChat_2:
# 28 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_0
# 29 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_1

Voltbrook_EventScripts_GruntPatrolChat_5:
# 33 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_1
# 34 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_4

Voltbrook_EventScripts_GruntPatrolChat_8:
# 38 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_2
# 39 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_7

Voltbrook_EventScripts_GruntPatrolChat_11:
# 68 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_6
# 69 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_10

Voltbrook_EventScripts_GruntPatrolChat_14:
# 73 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_7
# 74 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_13

Voltbrook_EventScripts_GruntPatrolChat_17:
# 78 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_8
# 79 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_16


Voltbrook_EventScripts_GruntCatchesPlayerLeaving::
# 100 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 101 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 102 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 103 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 104 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 106 "data/maps/VoltbrookTown/scripts.pory"
	case 22, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2
# 131 "data/maps/VoltbrookTown/scripts.pory"
	case 23, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3
# 156 "data/maps/VoltbrookTown/scripts.pory"
	case 24, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4
# 181 "data/maps/VoltbrookTown/scripts.pory"
	case 25, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2:
# 107 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 22, 21
# 108 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 109 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 110 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 111 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 112 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 113 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 114 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 115 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 116 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 117 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 118 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 119 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 120 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 121 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 122 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 123 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 124 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 125 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 126 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 127 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 128 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 129 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 130 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3:
# 132 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 23, 21
# 133 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 134 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 135 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 136 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 137 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 138 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 139 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 140 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 141 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 142 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 143 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 144 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 145 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 146 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 147 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 148 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 149 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 150 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 151 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 152 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 153 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 154 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 155 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4:
# 157 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 158 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 159 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 160 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 161 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 162 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 163 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 164 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 165 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 166 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 167 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 168 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 169 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 170 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 171 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 172 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 173 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 174 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 175 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 176 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 177 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 178 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 179 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 180 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5:
# 182 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 183 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 184 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 185 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 186 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 187 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 188 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 189 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 190 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 191 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 192 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 193 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 194 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 195 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 196 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 197 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 198 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 199 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 200 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 201 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 202 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 203 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 204 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 205 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return


AfterBattle_Test::
# 212 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 214 "data/maps/VoltbrookTown/scripts.pory"
	case 22, AfterBattle_Test_2
# 294 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 374 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 455 "data/maps/VoltbrookTown/scripts.pory"
	case 25, AfterBattle_Test_5
	return

AfterBattle_Test_2:
# 215 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 216 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 217 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 218 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 219 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 220 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 221 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 222 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 223 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 224 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 225 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 226 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 227 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 228 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 229 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 230 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 231 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 232 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 233 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 234 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 235 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 236 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 237 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 238 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 239 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 240 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 241 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 242 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 243 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 244 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 245 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 246 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 247 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 248 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 249 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 250 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_3
# 251 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 252 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 253 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 254 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 255 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 256 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 257 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 258 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 259 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 260 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 261 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 262 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 263 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 264 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 265 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 266 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 267 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 268 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 269 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 270 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 271 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 272 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 273 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 274 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 275 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 276 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 277 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 278 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 279 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 280 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 281 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 282 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 283 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 284 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 285 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 286 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 287 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 288 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 289 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 290 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 291 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 292 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 295 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 296 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 297 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 298 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 299 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 300 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 301 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 302 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 303 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 304 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 305 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 306 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 307 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 308 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 309 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 310 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 311 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 312 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 313 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 314 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 315 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 316 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 317 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 318 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 319 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 320 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 321 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 322 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 323 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 324 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 325 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 326 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 327 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 328 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 329 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 330 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 331 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 332 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 333 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 334 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 335 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 336 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 337 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 338 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 339 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 340 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 341 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 342 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 343 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 344 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 345 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 346 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 347 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 348 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 349 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 350 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 351 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 352 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 353 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 354 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 355 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 356 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 357 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 358 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 359 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 360 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 361 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 362 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 363 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 364 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 365 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 366 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 367 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 368 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 369 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 370 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 371 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 372 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 375 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 376 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 377 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 378 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 379 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 380 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 381 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 382 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 383 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_9
# 384 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 385 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 386 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 387 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 388 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 389 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 390 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 391 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 392 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 393 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 394 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 395 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 396 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 397 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 398 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 399 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 400 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 401 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 402 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 403 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 404 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 405 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 406 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 407 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 408 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 409 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 410 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 411 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 412 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 413 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 414 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 415 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 416 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 417 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 418 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 419 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 420 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 421 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 422 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 423 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 424 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 425 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 426 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 427 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 428 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 429 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 430 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 431 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 432 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 433 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 434 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 435 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 436 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 437 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 438 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 439 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 440 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 441 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 442 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 443 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 444 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 445 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 446 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 447 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 448 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 449 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 450 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 451 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 452 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 453 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 456 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 457 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 458 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 459 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 460 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 461 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 462 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 463 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 464 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 465 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 466 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_11
# 467 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_11
# 468 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 469 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 470 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 471 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 472 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 473 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 474 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 475 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 476 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 477 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 478 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 479 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 480 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 481 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 482 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 483 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 484 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 485 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 486 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 487 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 488 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 489 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 490 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 491 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_12
# 492 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 493 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 494 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 495 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 496 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 497 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 498 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 499 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 500 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 501 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 502 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 503 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 504 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 505 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 506 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 507 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 508 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 509 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 510 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 511 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 512 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 513 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 514 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 515 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 516 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 517 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 518 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 519 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 520 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 521 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 522 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 523 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 524 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 525 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 526 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 527 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 528 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 529 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 530 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 531 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 532 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 533 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 534 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 542 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 543 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 544 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 545 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 546 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 547 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 548 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 549 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 550 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 551 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 552 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0
# 553 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 554 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 560 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 561 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 562 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 563 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 564 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 565 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 566 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 567 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 568 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 569 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 570 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 571 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 572 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 573 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 574 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 575 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 576 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_9
# 577 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 578 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


# 28 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_0:
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 28 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 33 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_1:
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
	step_end

# 38 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_2:
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
	step_end

# 55 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_3:
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 55 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 56 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_4:
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 56 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 57 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_5:
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 57 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 68 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_6:
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 68 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 73 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_7:
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
Voltbrook_EventScripts_GruntPatrolChat_Movement_8:
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

# 86 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_9:
# 86 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_right
	step_end

# 101 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0:
# 101 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_down
	step_end

# 112 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1:
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 112 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 112 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 112 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 171 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2:
# 171 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_left
	step_end

# 187 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3:
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 187 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 187 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 187 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 223 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_0:
# 223 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 225 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_1:
# 225 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 225 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 225 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 225 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 225 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 228 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_2:
# 228 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
# 228 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 250 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_3:
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 250 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 266 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_4:
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 266 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 266 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 267 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_5:
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 267 "data/maps/VoltbrookTown/scripts.pory"
	face_up
	step_end

# 268 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_6:
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
	walk_faster_down
# 268 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
	step_end

# 283 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_7:
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 283 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 330 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_8:
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 330 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 383 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_9:
# 383 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 427 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 427 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 427 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 466 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 466 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 466 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 491 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 491 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 552 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0:
# 552 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 564 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 573 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

Voltbrook_EventScripts_GruntPatrolChat_Text_0:
# 41 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 1$"

Voltbrook_EventScripts_GruntPatrolChat_Text_1:
# 42 "data/maps/VoltbrookTown/scripts.pory"
	.string "I can't believe those lab experiments\n"
	.string "actually escaped; they were nothing\l"
	.string "but failures.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_2:
# 44 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 2$"

Voltbrook_EventScripts_GruntPatrolChat_Text_3:
# 45 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah, they never stand a chance out in\n"
	.string "the real world.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_4:
# 46 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 3$"

Voltbrook_EventScripts_GruntPatrolChat_Text_5:
# 47 "data/maps/VoltbrookTown/scripts.pory"
	.string "We need to split up and ask around town;\n"
	.string "they couldn't have made it far.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_6:
# 49 "data/maps/VoltbrookTown/scripts.pory"
	.string "Exactly, check every alley and market;\n"
	.string "HQ expects us to find them.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_7:
# 51 "data/maps/VoltbrookTown/scripts.pory"
	.string "Let's cover the east and west sides and\n"
	.string "report back immediately.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_8:
# 53 "data/maps/VoltbrookTown/scripts.pory"
	.string "Alright, I'll take the north sector; you\n"
	.string "two handle the rest.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_9:
# 88 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee$"

Voltbrook_EventScripts_GruntPatrolChat_Text_10:
# 89 "data/maps/VoltbrookTown/scripts.pory"
	.string "They’re everywhere… I can’t take two\n"
	.string "steps without spotting a MAGA grunt.\p"
	.string "This place isn’t safe. Not even close.\p"
	.string "I thought maybe we could just… sneak\n"
	.string "around, figure things out, but…\p"
	.string "We have to be careful. Really careful.\p"
	.string "Let’s stick close and keep our heads\n"
	.string "down, okay? We’ll find that artifact. I\l"
	.string "know we will.$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0:
# 109 "data/maps/VoltbrookTown/scripts.pory"
	.string "???$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1:
# 110 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hey!\p"
	.string "Where do you think you're off too?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2:
# 117 "data/maps/VoltbrookTown/scripts.pory"
	.string "You're the failed experiments who\n"
	.string "escaped our lab!\p"
	.string "You sure have caused a lot of trouble.\n"
	.string "Better make this easy, I wouldn't want\l"
	.string "to hurt you any more that necessary…$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3:
# 125 "data/maps/VoltbrookTown/scripts.pory"
	.string "N-no… he found us! He's blocking our\n"
	.string "path-we can’t run!\p"
	.string "I-I don’t wanna go back to the lab! I\n"
	.string "can’t! We have to fight.\p"
	.string "Even if we’re scared-we have to! Let’s\n"
	.string "show them we’re not just test subjects\l"
	.string "anymore!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4:
# 130 "data/maps/VoltbrookTown/scripts.pory"
	.string "So you wanna do this the hard when\n"
	.string "then, huh? That's fine, this way is more\l"
	.string "fun for me!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5:
# 130 "data/maps/VoltbrookTown/scripts.pory"
	.string "How could a couple of failed\n"
	.string "experiments best me?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6:
# 130 "data/maps/VoltbrookTown/scripts.pory"
	.string "NULL$"

AfterBattle_Test_Text_0:
# 233 "data/maps/VoltbrookTown/scripts.pory"
	.string "Guess we showed up just in time, huh?\p"
	.string "Relax. We’ll clean this mess up for you.$"

AfterBattle_Test_Text_1:
# 235 "data/maps/VoltbrookTown/scripts.pory"
	.string "Orders are clear: capture them alive. No\n"
	.string "more mistakes.$"

AfterBattle_Test_Text_2:
# 240 "data/maps/VoltbrookTown/scripts.pory"
	.string "They’re not getting away again. Not this\n"
	.string "time!$"

AfterBattle_Test_Text_3:
# 245 "data/maps/VoltbrookTown/scripts.pory"
	.string "There’s three of them now…!$"

AfterBattle_Test_Text_4:
# 246 "data/maps/VoltbrookTown/scripts.pory"
	.string "I-I don’t think we can win this…!$"

AfterBattle_Test_Text_5:
# 255 "data/maps/VoltbrookTown/scripts.pory"
	.string "Cornered already? This is why I work\n"
	.string "alone. Stick close to me if you want to\l"
	.string "live.$"

AfterBattle_Test_Text_6:
# 257 "data/maps/VoltbrookTown/scripts.pory"
	.string "W-Wait what do you me-$"

AfterBattle_Test_Text_7:
# 261 "data/maps/VoltbrookTown/scripts.pory"
	.string "Quickly. This way!$"

AfterBattle_Test_Text_8:
# 263 "data/maps/VoltbrookTown/scripts.pory"
	.string "Okay okay, we're coming!$"

AfterBattle_Test_Text_9:
# 272 "data/maps/VoltbrookTown/scripts.pory"
	.string "That was way too close. I thought we\n"
	.string "were done for.\p"
	.string "Thanks for saving us back there! What's\n"
	.string "your name?$"

AfterBattle_Test_Text_10:
# 274 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don’t bother.$"

AfterBattle_Test_Text_11:
# 276 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… still, that was really brave of\n"
	.string "you.$"

AfterBattle_Test_Text_12:
# 278 "data/maps/VoltbrookTown/scripts.pory"
	.string "Brave? No.\p"
	.string "I just hate seeing Team MAGA capturing\n"
	.string "those too weak to defend themselves.\p"
	.string "This town isn’t safe for you. Team MAGA\n"
	.string "rounds up any wild Pokémon they see.\p"
	.string "You’re lucky I was nearby. Now stay out\n"
	.string "of sight.$"

AfterBattle_Test_Text_13:
# 280 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… but where are we?$"

AfterBattle_Test_Text_14:
# 282 "data/maps/VoltbrookTown/scripts.pory"
	.string "I just brought you to Route 10. It's\n"
	.string "just south of Voltbrook. Team MAGA\l"
	.string "doesn't really come down here, but since\l"
	.string "you two are SO special maybe they'll\l"
	.string "make an exception. Now stay out of my\l"
	.string "way and keep your head low, I won't save\l"
	.string "you again.$"

AfterBattle_Test_Text_15:
# 287 "data/maps/VoltbrookTown/scripts.pory"
	.string "He’s… not very friendly.$"

AfterBattle_Test_Text_16:
# 288 "data/maps/VoltbrookTown/scripts.pory"
	.string "But I think he just saved our lives.\n"
	.string "Let's stay away from Voltbrook for now,\l"
	.string "Maybe we should see where this route\l"
	.string "leads. There has to be someplace safe\l"
	.string "for us around here.$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 548 "data/maps/VoltbrookTown/scripts.pory"
	.string "You heard what that guy said… We need\n"
	.string "to move away from Voltbrook for now…\l"
	.string "let's head the other way. We can figure\l"
	.string "out how to get the artifact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 569 "data/maps/VoltbrookTown/scripts.pory"
	.string "Can't go this way… look at those MAGA\n"
	.string "Grunts up ahead. Let's look somewhere\l"
	.string "else.$"
