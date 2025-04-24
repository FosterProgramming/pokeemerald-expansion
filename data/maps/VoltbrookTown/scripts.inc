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
# 140 "data/maps/VoltbrookTown/scripts.pory"
	case 23, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3
# 165 "data/maps/VoltbrookTown/scripts.pory"
	case 24, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4
# 190 "data/maps/VoltbrookTown/scripts.pory"
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
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3:
# 141 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 23, 21
# 142 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 143 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 144 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 145 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 146 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 147 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 148 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 149 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 150 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 151 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 152 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 153 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 154 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 155 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 156 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 157 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 158 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 159 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 160 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 161 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 162 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 163 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 164 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4:
# 166 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 167 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 168 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 169 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 170 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 171 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 172 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 173 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 174 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 175 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 176 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 177 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 178 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 179 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 180 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 181 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 182 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 183 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 184 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 185 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 186 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 187 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 188 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 189 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5:
# 191 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 192 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 193 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 194 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 195 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 196 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 197 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 198 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 199 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 200 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 201 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 202 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 203 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 204 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 205 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 206 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 207 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 208 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 209 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 210 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 211 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 212 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 213 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 214 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return


AfterBattle_Test::
# 221 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 223 "data/maps/VoltbrookTown/scripts.pory"
	case 22, AfterBattle_Test_2
# 303 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 383 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 464 "data/maps/VoltbrookTown/scripts.pory"
	case 25, AfterBattle_Test_5
	return

AfterBattle_Test_2:
# 224 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 225 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 226 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 227 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 228 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 229 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 230 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 231 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 232 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 233 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 234 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 235 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 236 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 237 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 238 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 239 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 240 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 241 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 242 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 243 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 244 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 245 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 246 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 247 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 248 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 249 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 250 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 251 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 252 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 253 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 254 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 255 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 256 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 257 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 258 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 259 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_3
# 260 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 261 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 262 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 263 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 264 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 265 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 266 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 267 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 268 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 269 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 270 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 271 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 272 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 273 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 274 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 275 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 276 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 277 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 278 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 279 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 280 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 281 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 282 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 283 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 284 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 285 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 286 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 287 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 288 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 289 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 290 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 291 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 292 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 293 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 294 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 295 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 296 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 297 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 298 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 299 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 300 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 301 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 304 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 305 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 306 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 307 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 308 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 309 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 310 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 311 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 312 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 313 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 314 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 315 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 316 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 317 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 318 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 319 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 320 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 321 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 322 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 323 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 324 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 325 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 326 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 327 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 328 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 329 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 330 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 331 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 332 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 333 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 334 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 335 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 336 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 337 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 338 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 339 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 340 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 341 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 342 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 343 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 344 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 345 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 346 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 347 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 348 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 349 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 350 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 351 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 352 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 353 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 354 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 355 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 356 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 357 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 358 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 359 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 360 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 361 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 362 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 363 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 364 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 365 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 366 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 367 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 368 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 369 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 370 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 371 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 372 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 373 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 374 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 375 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 376 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 377 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 378 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 379 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 380 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 381 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 384 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 385 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 386 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 387 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 388 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 389 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 390 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 391 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 392 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_9
# 393 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 394 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 395 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 396 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 397 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 398 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 399 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 400 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 401 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 402 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 403 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 404 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 405 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 406 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 407 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 408 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 409 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 410 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 411 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 412 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 413 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 414 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 415 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 416 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 417 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 418 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 419 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 420 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 421 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 422 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 423 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 424 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 425 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 426 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 427 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 428 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 429 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 430 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 431 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 432 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 433 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 434 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 435 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 436 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 437 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 438 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 439 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 440 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 441 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 442 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 443 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 444 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 445 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 446 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 447 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 448 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 449 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 450 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 451 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 452 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 453 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 454 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 455 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 456 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 457 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 458 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 459 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 460 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 461 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 462 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 465 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 466 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 467 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 468 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 469 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 470 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 471 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 472 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 473 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 474 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 475 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_11
# 476 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_11
# 477 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 478 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 479 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 480 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 481 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 482 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 483 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 484 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 485 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 486 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 487 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 488 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 489 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 490 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 491 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 492 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 493 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 494 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 495 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 496 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 497 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 498 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 499 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 500 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_12
# 501 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 502 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 503 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 504 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 505 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 506 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 507 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 508 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 509 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 510 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 511 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 512 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 513 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 514 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 515 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 516 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 517 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 518 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 519 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 520 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 521 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 522 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 523 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 524 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 525 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 526 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 527 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 528 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 529 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 530 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 531 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 532 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 533 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 534 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 535 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 536 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 537 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 538 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 539 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 540 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 541 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 542 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 543 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 551 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 552 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 553 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 554 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 555 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 556 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 557 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 558 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 559 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 560 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 561 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0
# 562 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 563 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 569 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 570 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 571 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 572 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 573 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 574 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 575 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 576 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 577 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 578 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 579 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 580 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 581 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 582 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 583 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 584 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 585 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_9
# 586 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 587 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_DoorsLocked::
# 595 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 596 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_DoorsLocked_Text_0, MSGBOX_SIGN
# 597 "data/maps/VoltbrookTown/scripts.pory"
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

# 180 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2:
# 180 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_left
	step_end

# 196 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3:
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 196 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 196 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 196 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 232 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_0:
# 232 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 234 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_1:
# 234 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 234 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 234 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 234 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 234 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 237 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_2:
# 237 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
# 237 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 259 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_3:
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 275 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_4:
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 275 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 275 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 276 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_5:
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
	walk_faster_down
# 276 "data/maps/VoltbrookTown/scripts.pory"
	face_up
	step_end

# 277 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_6:
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
	walk_in_place_up
	step_end

# 292 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_7:
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 292 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 339 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_8:
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 339 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 392 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_9:
# 392 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 436 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 436 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 436 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 475 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 475 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 475 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 500 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 500 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 561 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0:
# 561 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 573 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 573 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 582 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 582 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 582 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 582 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 582 "data/maps/VoltbrookTown/scripts.pory"
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
# 139 "data/maps/VoltbrookTown/scripts.pory"
	.string "So you wanna do this the hard when\n"
	.string "then, huh? That's fine, this way is more\l"
	.string "fun for me!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5:
# 139 "data/maps/VoltbrookTown/scripts.pory"
	.string "How could a couple of failed\n"
	.string "experiments best me?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6:
# 139 "data/maps/VoltbrookTown/scripts.pory"
	.string "NULL$"

AfterBattle_Test_Text_0:
# 242 "data/maps/VoltbrookTown/scripts.pory"
	.string "Guess we showed up just in time, huh?\p"
	.string "Relax. We’ll clean this mess up for you.$"

AfterBattle_Test_Text_1:
# 244 "data/maps/VoltbrookTown/scripts.pory"
	.string "Orders are clear: capture them alive. No\n"
	.string "more mistakes.$"

AfterBattle_Test_Text_2:
# 249 "data/maps/VoltbrookTown/scripts.pory"
	.string "They’re not getting away again. Not this\n"
	.string "time!$"

AfterBattle_Test_Text_3:
# 254 "data/maps/VoltbrookTown/scripts.pory"
	.string "There’s three of them now…!$"

AfterBattle_Test_Text_4:
# 255 "data/maps/VoltbrookTown/scripts.pory"
	.string "I-I don’t think we can win this…!$"

AfterBattle_Test_Text_5:
# 264 "data/maps/VoltbrookTown/scripts.pory"
	.string "Cornered already? This is why I work\n"
	.string "alone. Stick close to me if you want to\l"
	.string "live.$"

AfterBattle_Test_Text_6:
# 266 "data/maps/VoltbrookTown/scripts.pory"
	.string "W-Wait what do you me-$"

AfterBattle_Test_Text_7:
# 270 "data/maps/VoltbrookTown/scripts.pory"
	.string "Quickly. This way!$"

AfterBattle_Test_Text_8:
# 272 "data/maps/VoltbrookTown/scripts.pory"
	.string "Okay okay, we're coming!$"

AfterBattle_Test_Text_9:
# 281 "data/maps/VoltbrookTown/scripts.pory"
	.string "That was way too close. I thought we\n"
	.string "were done for.\p"
	.string "Thanks for saving us back there! What's\n"
	.string "your name?$"

AfterBattle_Test_Text_10:
# 283 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don’t bother.$"

AfterBattle_Test_Text_11:
# 285 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… still, that was really brave of\n"
	.string "you.$"

AfterBattle_Test_Text_12:
# 287 "data/maps/VoltbrookTown/scripts.pory"
	.string "Brave? No.\p"
	.string "I just hate seeing Team MAGA capturing\n"
	.string "those too weak to defend themselves.\p"
	.string "This town isn’t safe for you. Team MAGA\n"
	.string "rounds up any wild Pokémon they see.\p"
	.string "You’re lucky I was nearby. Now stay out\n"
	.string "of sight.$"

AfterBattle_Test_Text_13:
# 289 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… but where are we?$"

AfterBattle_Test_Text_14:
# 291 "data/maps/VoltbrookTown/scripts.pory"
	.string "I just brought you to Route 10. It's\n"
	.string "just south of Voltbrook. Team MAGA\l"
	.string "doesn't really come down here, but since\l"
	.string "you two are SO special maybe they'll\l"
	.string "make an exception. Now stay out of my\l"
	.string "way and keep your head low, I won't save\l"
	.string "you again.$"

AfterBattle_Test_Text_15:
# 296 "data/maps/VoltbrookTown/scripts.pory"
	.string "He’s… not very friendly.$"

AfterBattle_Test_Text_16:
# 297 "data/maps/VoltbrookTown/scripts.pory"
	.string "But I think he just saved our lives.\n"
	.string "Let's stay away from Voltbrook for now,\l"
	.string "Maybe we should see where this route\l"
	.string "leads. There has to be someplace safe\l"
	.string "for us around here.$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 557 "data/maps/VoltbrookTown/scripts.pory"
	.string "You heard what that guy said… We need\n"
	.string "to move away from Voltbrook for now…\l"
	.string "let's head the other way. We can figure\l"
	.string "out how to get the artifact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 578 "data/maps/VoltbrookTown/scripts.pory"
	.string "Can't go this way… look at those MAGA\n"
	.string "Grunts up ahead. Let's look somewhere\l"
	.string "else.$"

Voltbrook_EventScripts_DoorsLocked_Text_0:
# 596 "data/maps/VoltbrookTown/scripts.pory"
	.string "The door is locked$"
