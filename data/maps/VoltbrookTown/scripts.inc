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
# 99 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 100 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 101 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 102 "data/maps/VoltbrookTown/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 2
# 103 "data/maps/VoltbrookTown/scripts.pory"
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
# 109 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 110 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 111 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 112 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 113 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 115 "data/maps/VoltbrookTown/scripts.pory"
	case 22, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2
# 141 "data/maps/VoltbrookTown/scripts.pory"
	case 23, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3
# 166 "data/maps/VoltbrookTown/scripts.pory"
	case 24, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4
# 191 "data/maps/VoltbrookTown/scripts.pory"
	case 25, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2:
# 116 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 22, 21
# 117 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 118 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 119 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 120 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 121 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 122 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 123 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 124 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 125 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 126 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 127 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 128 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 129 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 130 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 131 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 132 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 133 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 134 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 135 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 136 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 137 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 138 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 139 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 140 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3:
# 142 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 23, 21
# 143 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 144 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 145 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 146 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 147 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 148 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 149 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 150 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 151 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 152 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 153 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 154 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 155 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 156 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 157 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 158 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 159 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 160 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 161 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 162 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 163 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 164 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 165 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4:
# 167 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 168 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 169 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 170 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 171 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 172 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 173 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 174 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 175 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 176 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 177 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 178 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 179 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 180 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 181 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 182 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 183 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 184 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 185 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 186 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 187 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 188 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 189 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 190 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5:
# 192 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 193 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 194 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 195 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 196 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 197 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 198 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 199 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 200 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 201 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 202 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 203 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 204 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 205 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 206 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 207 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 208 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 209 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 210 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 211 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 212 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 213 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 214 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 215 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return


AfterBattle_Test::
# 222 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 224 "data/maps/VoltbrookTown/scripts.pory"
	case 22, AfterBattle_Test_2
# 304 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 384 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 465 "data/maps/VoltbrookTown/scripts.pory"
	case 25, AfterBattle_Test_5
	return

AfterBattle_Test_2:
# 225 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 226 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 227 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 228 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 229 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 230 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 231 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 232 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 233 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 234 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 235 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 236 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 237 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 238 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 239 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 240 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 241 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 242 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 243 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 244 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 245 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 246 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 247 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 248 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 249 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 250 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 251 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 252 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 253 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 254 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 255 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 256 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 257 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 258 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 259 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 260 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_3
# 261 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 262 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 263 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 264 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 265 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 266 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 267 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 268 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 269 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 270 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 271 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 272 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 273 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 274 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 275 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 276 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 277 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 278 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 279 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 280 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 281 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 282 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 283 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 284 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 285 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 286 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 287 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 288 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 289 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 290 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 291 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 292 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 293 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 294 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 295 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 296 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 297 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 298 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 299 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 300 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 301 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 302 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 305 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 306 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 307 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 308 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 309 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 310 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 311 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 312 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 313 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 314 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 315 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 316 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 317 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 318 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 319 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 320 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 321 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 322 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 323 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 324 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 325 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 326 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 327 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 328 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 329 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 330 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 331 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 332 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 333 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 334 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 335 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 336 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 337 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 338 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 339 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 340 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 341 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 342 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 343 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 344 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 345 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 346 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 347 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 348 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 349 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 350 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 351 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 352 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 353 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 354 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 355 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 356 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 357 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 358 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 359 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 360 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 361 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 362 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 363 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 364 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 365 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 366 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 367 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 368 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 369 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 370 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 371 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 372 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 373 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 374 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 375 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 376 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 377 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 378 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 379 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 380 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 381 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 382 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 385 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 386 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 387 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 388 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 389 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 390 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 391 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 392 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 393 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_9
# 394 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 395 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 396 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 397 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 398 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 399 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 400 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 401 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 402 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 403 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 404 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 405 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 406 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 407 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 408 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 409 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 410 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 411 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 412 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 413 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 414 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 415 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 416 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 417 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 418 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 419 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 420 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 421 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 422 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 423 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 424 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 425 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 426 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 427 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 428 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 429 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 430 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 431 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 432 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 433 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 434 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 435 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 436 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 437 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 438 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 439 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 440 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 441 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 442 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 443 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 444 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 445 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 446 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 447 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 448 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 449 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 450 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 451 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 452 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 453 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 454 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 455 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 456 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 457 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 458 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 459 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 460 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 461 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 462 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 463 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 466 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 467 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 468 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 469 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 470 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 471 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 472 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 473 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 474 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 475 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 476 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_11
# 477 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_11
# 478 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 479 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 480 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 481 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 482 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 483 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 484 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 485 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 486 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 487 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 488 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 489 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 490 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 491 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 492 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 493 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 494 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 495 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 496 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 497 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 498 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 499 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 500 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 501 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_12
# 502 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 503 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 504 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 505 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 506 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 507 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 508 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 509 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 510 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 511 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 512 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 513 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 514 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 515 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 516 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 517 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 518 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 519 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 520 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 521 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 522 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 523 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 524 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 525 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 526 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 527 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 528 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 529 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 530 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 531 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 532 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 533 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 534 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 535 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 536 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 537 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 538 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 539 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 540 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 541 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 542 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 543 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 544 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 552 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 553 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 554 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 555 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 556 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 557 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 558 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 559 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 560 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 561 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 562 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0
# 563 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 564 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 570 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 571 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 572 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 573 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 574 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 575 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 576 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 577 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 578 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 579 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 580 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 581 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 582 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 583 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 584 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 585 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 586 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_9
# 587 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 588 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_DoorsLocked::
# 596 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 597 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_DoorsLocked_Text_0, MSGBOX_SIGN
# 598 "data/maps/VoltbrookTown/scripts.pory"
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

# 110 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0:
# 110 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_down
	step_end

# 121 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1:
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 121 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 121 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 121 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 181 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2:
# 181 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_left
	step_end

# 197 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3:
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 197 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 197 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 197 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 233 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_0:
# 233 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 235 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_1:
# 235 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 235 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 235 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 235 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 235 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 238 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_2:
# 238 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
# 238 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 260 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_3:
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 260 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 276 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_4:
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 276 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 276 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 277 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_5:
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 277 "data/maps/VoltbrookTown/scripts.pory"
	face_up
	step_end

# 278 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_6:
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 278 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
	step_end

# 293 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_7:
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 293 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 340 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_8:
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 340 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 393 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_9:
# 393 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 437 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 437 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 437 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 476 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 476 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 476 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 501 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 501 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 562 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0:
# 562 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 574 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 574 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 574 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 574 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 574 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 583 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 583 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 583 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 583 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 583 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

Voltbrook_EventScripts_GruntPatrolChat_Text_0:
# 50 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 1$"

Voltbrook_EventScripts_GruntPatrolChat_Text_1:
# 51 "data/maps/VoltbrookTown/scripts.pory"
	.string "I can't believe those lab experiments\n"
	.string "actually escaped; they were nothing\l"
	.string "but failures.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_2:
# 53 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 2$"

Voltbrook_EventScripts_GruntPatrolChat_Text_3:
# 54 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah, they never stand a chance out in\n"
	.string "the real world.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_4:
# 55 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 3$"

Voltbrook_EventScripts_GruntPatrolChat_Text_5:
# 56 "data/maps/VoltbrookTown/scripts.pory"
	.string "We need to split up and ask around town;\n"
	.string "they couldn't have made it far.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_6:
# 58 "data/maps/VoltbrookTown/scripts.pory"
	.string "Exactly, check every alley and market;\n"
	.string "HQ expects us to find them.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_7:
# 60 "data/maps/VoltbrookTown/scripts.pory"
	.string "Let's cover the east and west sides and\n"
	.string "report back immediately.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_8:
# 62 "data/maps/VoltbrookTown/scripts.pory"
	.string "Alright, I'll take the north sector; you\n"
	.string "two handle the rest.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_9:
# 97 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee$"

Voltbrook_EventScripts_GruntPatrolChat_Text_10:
# 98 "data/maps/VoltbrookTown/scripts.pory"
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
# 118 "data/maps/VoltbrookTown/scripts.pory"
	.string "???$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1:
# 119 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hey!\p"
	.string "Where do you think you're off too?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2:
# 126 "data/maps/VoltbrookTown/scripts.pory"
	.string "You're the failed experiments who\n"
	.string "escaped our lab!\p"
	.string "You sure have caused a lot of trouble.\n"
	.string "Better make this easy, I wouldn't want\l"
	.string "to hurt you any more that necessary…$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3:
# 134 "data/maps/VoltbrookTown/scripts.pory"
	.string "N-no… he found us! He's blocking our\n"
	.string "path-we can’t run!\p"
	.string "I-I don’t wanna go back to the lab! I\n"
	.string "can’t! We have to fight.\p"
	.string "Even if we’re scared-we have to! Let’s\n"
	.string "show them we’re not just test subjects\l"
	.string "anymore!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4:
# 140 "data/maps/VoltbrookTown/scripts.pory"
	.string "So you wanna do this the hard when\n"
	.string "then, huh? That's fine, this way is more\l"
	.string "fun for me!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5:
# 140 "data/maps/VoltbrookTown/scripts.pory"
	.string "How could a couple of failed\n"
	.string "experiments best me?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6:
# 140 "data/maps/VoltbrookTown/scripts.pory"
	.string "NULL$"

AfterBattle_Test_Text_0:
# 243 "data/maps/VoltbrookTown/scripts.pory"
	.string "Guess we showed up just in time, huh?\p"
	.string "Relax. We’ll clean this mess up for you.$"

AfterBattle_Test_Text_1:
# 245 "data/maps/VoltbrookTown/scripts.pory"
	.string "Orders are clear: capture them alive. No\n"
	.string "more mistakes.$"

AfterBattle_Test_Text_2:
# 250 "data/maps/VoltbrookTown/scripts.pory"
	.string "They’re not getting away again. Not this\n"
	.string "time!$"

AfterBattle_Test_Text_3:
# 255 "data/maps/VoltbrookTown/scripts.pory"
	.string "There’s three of them now…!$"

AfterBattle_Test_Text_4:
# 256 "data/maps/VoltbrookTown/scripts.pory"
	.string "I-I don’t think we can win this…!$"

AfterBattle_Test_Text_5:
# 265 "data/maps/VoltbrookTown/scripts.pory"
	.string "Cornered already? This is why I work\n"
	.string "alone. Stick close to me if you want to\l"
	.string "live.$"

AfterBattle_Test_Text_6:
# 267 "data/maps/VoltbrookTown/scripts.pory"
	.string "W-Wait what do you me-$"

AfterBattle_Test_Text_7:
# 271 "data/maps/VoltbrookTown/scripts.pory"
	.string "Quickly. This way!$"

AfterBattle_Test_Text_8:
# 273 "data/maps/VoltbrookTown/scripts.pory"
	.string "Okay okay, we're coming!$"

AfterBattle_Test_Text_9:
# 282 "data/maps/VoltbrookTown/scripts.pory"
	.string "That was way too close. I thought we\n"
	.string "were done for.\p"
	.string "Thanks for saving us back there! What's\n"
	.string "your name?$"

AfterBattle_Test_Text_10:
# 284 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don’t bother.$"

AfterBattle_Test_Text_11:
# 286 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… still, that was really brave of\n"
	.string "you.$"

AfterBattle_Test_Text_12:
# 288 "data/maps/VoltbrookTown/scripts.pory"
	.string "Brave? No.\p"
	.string "I just hate seeing Team MAGA capturing\n"
	.string "those too weak to defend themselves.\p"
	.string "This town isn’t safe for you. Team MAGA\n"
	.string "rounds up any wild Pokémon they see.\p"
	.string "You’re lucky I was nearby. Now stay out\n"
	.string "of sight.$"

AfterBattle_Test_Text_13:
# 290 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… but where are we?$"

AfterBattle_Test_Text_14:
# 292 "data/maps/VoltbrookTown/scripts.pory"
	.string "I just brought you to Route 10. It's\n"
	.string "just south of Voltbrook. Team MAGA\l"
	.string "doesn't really come down here, but since\l"
	.string "you two are SO special maybe they'll\l"
	.string "make an exception. Now stay out of my\l"
	.string "way and keep your head low, I won't save\l"
	.string "you again.$"

AfterBattle_Test_Text_15:
# 297 "data/maps/VoltbrookTown/scripts.pory"
	.string "He’s… not very friendly.$"

AfterBattle_Test_Text_16:
# 298 "data/maps/VoltbrookTown/scripts.pory"
	.string "But I think he just saved our lives.\n"
	.string "Let's stay away from Voltbrook for now,\l"
	.string "Maybe we should see where this route\l"
	.string "leads. There has to be someplace safe\l"
	.string "for us around here.$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 558 "data/maps/VoltbrookTown/scripts.pory"
	.string "You heard what that guy said… We need\n"
	.string "to move away from Voltbrook for now…\l"
	.string "let's head the other way. We can figure\l"
	.string "out how to get the artifact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 579 "data/maps/VoltbrookTown/scripts.pory"
	.string "Can't go this way… look at those MAGA\n"
	.string "Grunts up ahead. Let's look somewhere\l"
	.string "else.$"

Voltbrook_EventScripts_DoorsLocked_Text_0:
# 597 "data/maps/VoltbrookTown/scripts.pory"
	.string "The door is locked$"
