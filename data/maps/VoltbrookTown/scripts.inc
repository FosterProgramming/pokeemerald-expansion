# 1 "data/maps/VoltbrookTown/scripts.pory"

# 2 "data/maps/VoltbrookTown/scripts.pory"
.set LOCALID_VEE, 4
# 3 "data/maps/VoltbrookTown/scripts.pory"
.set LOCALID_ACE, 5
# 4 "data/maps/VoltbrookTown/scripts.pory"
.set PlayerXCoordinates, VAR_TEMP_3
# 5 "data/maps/VoltbrookTown/scripts.pory"
.set PlayerYCoordinates, VAR_TEMP_4
# 6 "data/maps/VoltbrookTown/scripts.pory"

# 7 "data/maps/VoltbrookTown/scripts.pory"
VoltbrookTown_MapScripts::
# 8 "data/maps/VoltbrookTown/scripts.pory"
	.byte 0

Voltbrook_EventScripts_GruntPatrolChat::
# 14 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 15 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 16 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 17 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_2
Voltbrook_EventScripts_GruntPatrolChat_1:
# 22 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_5
Voltbrook_EventScripts_GruntPatrolChat_4:
# 27 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_8
Voltbrook_EventScripts_GruntPatrolChat_7:
# 32 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 33 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_1
# 34 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 35 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 36 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_3
# 37 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 38 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_5
# 39 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 40 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_6
# 41 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 42 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_7
# 43 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 44 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_8
# 45 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 46 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntPatrolChat_Movement_3
# 47 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, Voltbrook_EventScripts_GruntPatrolChat_Movement_4
# 48 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, Voltbrook_EventScripts_GruntPatrolChat_Movement_5
# 49 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 3
# 50 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 1
# 51 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 52 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 53 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, 26, 8
# 54 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, 25, 6
# 55 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 56 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 57 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 6
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_11
Voltbrook_EventScripts_GruntPatrolChat_10:
# 62 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 7
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_14
Voltbrook_EventScripts_GruntPatrolChat_13:
# 67 "data/maps/VoltbrookTown/scripts.pory"
	compare PlayerYCoordinates, 8
	goto_if_eq Voltbrook_EventScripts_GruntPatrolChat_17
Voltbrook_EventScripts_GruntPatrolChat_16:
# 72 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 73 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 74 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 75 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 76 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 77 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 78 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 79 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 80 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntPatrolChat_Text_10
# 81 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 82 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 83 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 84 "data/maps/VoltbrookTown/scripts.pory"
	setvar VAR_VOLTBROOK_TOWN_STATE, 2
# 85 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

Voltbrook_EventScripts_GruntPatrolChat_2:
# 19 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_0
# 20 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_1

Voltbrook_EventScripts_GruntPatrolChat_5:
# 24 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_1
# 25 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_4

Voltbrook_EventScripts_GruntPatrolChat_8:
# 29 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_2
# 30 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_7

Voltbrook_EventScripts_GruntPatrolChat_11:
# 59 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_6
# 60 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_10

Voltbrook_EventScripts_GruntPatrolChat_14:
# 64 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_7
# 65 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_13

Voltbrook_EventScripts_GruntPatrolChat_17:
# 69 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntPatrolChat_Movement_8
# 70 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
	goto Voltbrook_EventScripts_GruntPatrolChat_16


Voltbrook_EventScripts_GruntCatchesPlayerLeaving::
# 91 "data/maps/VoltbrookTown/scripts.pory"
	lock
# 92 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 93 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 94 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 95 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 97 "data/maps/VoltbrookTown/scripts.pory"
	case 22, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2
# 122 "data/maps/VoltbrookTown/scripts.pory"
	case 23, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3
# 147 "data/maps/VoltbrookTown/scripts.pory"
	case 24, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4
# 172 "data/maps/VoltbrookTown/scripts.pory"
	case 25, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_2:
# 98 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 22, 21
# 99 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 100 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 101 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 102 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 103 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 104 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 105 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 106 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 107 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 108 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 109 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 110 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 111 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 112 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 113 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 114 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 115 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 116 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 117 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 118 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 119 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 120 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 121 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_3:
# 123 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 23, 21
# 124 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 125 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 126 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 127 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 128 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 129 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 130 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 131 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 132 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 133 "data/maps/VoltbrookTown/scripts.pory"
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
# 142 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 143 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 144 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 145 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 146 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_4:
# 148 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 149 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 150 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 151 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 152 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 153 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1
# 154 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 155 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 156 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 157 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 158 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 159 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 160 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 161 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 162 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 163 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 164 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 165 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 166 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 167 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 168 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 169 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 170 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 171 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_5:
# 173 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 1, 24, 21
# 174 "data/maps/VoltbrookTown/scripts.pory"
	addobject 1
# 175 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 176 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1
# 177 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 178 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 1, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3
# 179 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 1
# 180 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 181 "data/maps/VoltbrookTown/scripts.pory"
	waitse
# 182 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 183 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2
# 184 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 185 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 186 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerWest
# 187 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 188 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 189 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 190 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 191 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3
# 192 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 193 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 194 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 195 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 196 "data/maps/VoltbrookTown/scripts.pory"
	trainerbattle_double TRAINER_MAGA_GRUNT_VOLTBROOK_TOWN, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6, AfterBattle_Test
	return


AfterBattle_Test::
# 203 "data/maps/VoltbrookTown/scripts.pory"
	switch PlayerXCoordinates
# 205 "data/maps/VoltbrookTown/scripts.pory"
	case 22, AfterBattle_Test_2
# 285 "data/maps/VoltbrookTown/scripts.pory"
	case 23, AfterBattle_Test_3
# 365 "data/maps/VoltbrookTown/scripts.pory"
	case 24, AfterBattle_Test_4
# 446 "data/maps/VoltbrookTown/scripts.pory"
	case 25, AfterBattle_Test_5
	return

AfterBattle_Test_2:
# 206 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 207 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 208 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 209 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 210 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 211 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 212 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 213 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 214 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 215 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 216 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 217 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 218 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 219 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 220 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 221 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 222 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 223 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 224 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 225 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 226 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 227 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 228 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 229 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 230 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 231 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 232 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 233 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 234 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 235 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 236 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 237 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 238 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 239 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 240 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 241 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_3
# 242 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 243 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 244 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 245 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 246 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 247 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 248 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 249 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 250 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 251 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 252 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 253 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 254 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 255 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 256 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 257 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 258 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 259 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 260 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 261 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 262 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 263 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 264 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 265 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 266 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 267 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 268 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 269 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 270 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 271 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 272 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 273 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 274 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 275 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 276 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 277 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 278 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 279 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 280 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 281 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 282 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 283 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_3:
# 286 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 287 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 288 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 289 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 290 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 291 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 292 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 293 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 294 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 295 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 296 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 297 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 298 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 299 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 300 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 301 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 302 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 303 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 304 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 305 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 306 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 307 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 308 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 309 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 310 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 311 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 312 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 313 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 314 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 315 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 316 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 317 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 318 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 319 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 320 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 321 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 322 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 323 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 324 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 325 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 326 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 327 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 328 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 329 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 330 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 331 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 332 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 333 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 334 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 335 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 336 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 337 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_4
# 338 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 339 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 340 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 341 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 342 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 343 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 344 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 345 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 346 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 347 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 348 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 349 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 350 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 351 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 352 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 353 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 354 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 355 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 356 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 357 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 358 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 359 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 360 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 361 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 362 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 363 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_4:
# 366 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 367 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 368 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 369 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 370 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 371 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 372 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 373 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 374 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_9
# 375 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 376 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_1
# 377 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_1
# 378 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 379 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 380 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 381 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 382 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 383 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 384 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 385 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 386 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 387 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 388 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 389 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 390 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 391 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 392 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 393 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 394 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 395 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 396 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 397 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 398 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 399 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 400 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 401 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_8
# 402 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 403 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 404 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 405 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 406 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 407 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 408 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 409 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 410 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 411 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 412 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 413 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 414 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 415 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 416 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 417 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 418 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 419 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 420 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 421 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 422 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 423 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 424 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 425 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 426 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 427 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 428 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 429 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 430 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 431 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 432 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 433 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 434 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 435 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 436 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 437 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 438 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 439 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 440 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 441 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 442 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 443 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 444 "data/maps/VoltbrookTown/scripts.pory"
	release
	end

AfterBattle_Test_5:
# 447 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 448 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 449 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 3
# 450 "data/maps/VoltbrookTown/scripts.pory"
	removeobject 2
# 451 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 3, PlayerXCoordinates, 21
# 452 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm 2, PlayerXCoordinates, 21
# 453 "data/maps/VoltbrookTown/scripts.pory"
	addobject 2
# 454 "data/maps/VoltbrookTown/scripts.pory"
	addobject 3
# 455 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_0
# 456 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 457 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 2, AfterBattle_Test_Movement_11
# 458 "data/maps/VoltbrookTown/scripts.pory"
	applymovement 3, AfterBattle_Test_Movement_11
# 459 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement 2
# 460 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_2
# 461 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_2
# 462 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_PIN
# 463 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 464 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_2
# 465 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_0
# 466 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_4
# 467 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_1
# 468 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 469 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0
# 470 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 471 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_0
# 472 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_2
# 473 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2
# 474 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 475 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 476 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 477 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_3
# 478 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_4
# 479 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 480 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_ACE, 29, 22
# 481 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_ACE
# 482 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_12
# 483 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 484 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 485 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_GruntPatrolChat_Movement_9
# 486 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 487 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 488 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_5
# 489 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 490 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_6
# 491 "data/maps/VoltbrookTown/scripts.pory"
	playse SE_M_SURF
# 492 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_TO_WHITE
# 493 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 494 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_7
# 495 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 496 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_8
# 497 "data/maps/VoltbrookTown/scripts.pory"
	closemessage
# 498 "data/maps/VoltbrookTown/scripts.pory"
	delay 40
# 499 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_10
# 500 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, AfterBattle_Test_Movement_5
# 501 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_6
# 502 "data/maps/VoltbrookTown/scripts.pory"
	delay 80
# 503 "data/maps/VoltbrookTown/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 504 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 505 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_9
# 506 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 507 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_10
# 508 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 509 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_11
# 510 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 511 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_12
# 512 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 513 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_13
# 514 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_0
# 515 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_14
# 516 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_ACE, AfterBattle_Test_Movement_7
# 517 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_ACE
# 518 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_ACE
# 519 "data/maps/VoltbrookTown/scripts.pory"
	speakername Voltbrook_EventScripts_GruntPatrolChat_Text_9
# 520 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_15
# 521 "data/maps/VoltbrookTown/scripts.pory"
	msgbox AfterBattle_Test_Text_16
# 522 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerWest
# 523 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 524 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 525 "data/maps/VoltbrookTown/scripts.pory"
	release
	end


Voltbrook_EventScripts_PreventPlayerFromReentering::
# 533 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 534 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 535 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 536 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 537 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerNorth
# 538 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 539 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0
# 540 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerNorth
# 541 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 542 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 543 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0
# 544 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 545 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


Voltbrook_EventScripts_GruntsBlockingNorthExit::
# 551 "data/maps/VoltbrookTown/scripts.pory"
	lockall
# 552 "data/maps/VoltbrookTown/scripts.pory"
	getplayerxy PlayerXCoordinates, PlayerYCoordinates
# 553 "data/maps/VoltbrookTown/scripts.pory"
	setobjectxyperm LOCALID_VEE, PlayerXCoordinates, PlayerYCoordinates
# 554 "data/maps/VoltbrookTown/scripts.pory"
	special SpawnCameraObject
# 555 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0
# 556 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 557 "data/maps/VoltbrookTown/scripts.pory"
	addobject LOCALID_VEE
# 558 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberTalksToPlayerEast
# 559 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 560 "data/maps/VoltbrookTown/scripts.pory"
	msgbox Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0
# 561 "data/maps/VoltbrookTown/scripts.pory"
	applymovement LOCALID_VEE, Common_Movement_PartyMemberReturnsToPlayerEast
# 562 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement LOCALID_VEE
# 563 "data/maps/VoltbrookTown/scripts.pory"
	removeobject LOCALID_VEE
# 564 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1
# 565 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_CAMERA
# 566 "data/maps/VoltbrookTown/scripts.pory"
	special RemoveCameraObject
# 567 "data/maps/VoltbrookTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterBattle_Test_Movement_9
# 568 "data/maps/VoltbrookTown/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 569 "data/maps/VoltbrookTown/scripts.pory"
	releaseall
	end


# 19 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_0:
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 19 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 24 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_1:
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 24 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 29 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_2:
# 29 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 29 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 29 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 29 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 29 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 29 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 29 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 46 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_3:
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 46 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 47 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_4:
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 47 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 48 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_5:
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 48 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 59 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_6:
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 59 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 64 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_7:
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 64 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 69 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_8:
# 69 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 69 "data/maps/VoltbrookTown/scripts.pory"
	walk_up
# 69 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 69 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 69 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 69 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 69 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 77 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntPatrolChat_Movement_9:
# 77 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_right
	step_end

# 92 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_0:
# 92 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_down
	step_end

# 103 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_1:
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 103 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 103 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 103 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 162 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_2:
# 162 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_left
	step_end

# 178 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Movement_3:
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 178 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_right
# 178 "data/maps/VoltbrookTown/scripts.pory"
	face_up
# 178 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 214 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_0:
# 214 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 216 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_1:
# 216 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 216 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 216 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 216 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 216 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_2:
# 219 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
# 219 "data/maps/VoltbrookTown/scripts.pory"
	emote_exclamation_mark
	step_end

# 241 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_3:
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 241 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 257 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_4:
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 257 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 257 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 258 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_5:
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 258 "data/maps/VoltbrookTown/scripts.pory"
	face_up
	step_end

# 259 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_6:
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
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 259 "data/maps/VoltbrookTown/scripts.pory"
	walk_in_place_up
	step_end

# 274 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_7:
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
# 274 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_up
	step_end

# 321 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_8:
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 321 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 374 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_9:
# 374 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

# 418 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_10:
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 418 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 418 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 457 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_11:
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
# 457 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 457 "data/maps/VoltbrookTown/scripts.pory"
	face_down
	step_end

# 482 "data/maps/VoltbrookTown/scripts.pory"
AfterBattle_Test_Movement_12:
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_down
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
# 482 "data/maps/VoltbrookTown/scripts.pory"
	walk_faster_left
	step_end

# 543 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_PreventPlayerFromReentering_Movement_0:
# 543 "data/maps/VoltbrookTown/scripts.pory"
	walk_down
	step_end

# 555 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_0:
# 555 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 555 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 555 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
# 555 "data/maps/VoltbrookTown/scripts.pory"
	walk_right
	step_end

# 564 "data/maps/VoltbrookTown/scripts.pory"
Voltbrook_EventScripts_GruntsBlockingNorthExit_Movement_1:
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
# 564 "data/maps/VoltbrookTown/scripts.pory"
	walk_left
	step_end

Voltbrook_EventScripts_GruntPatrolChat_Text_0:
# 32 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 1$"

Voltbrook_EventScripts_GruntPatrolChat_Text_1:
# 33 "data/maps/VoltbrookTown/scripts.pory"
	.string "I can't believe those lab experiments\n"
	.string "actually escaped; they were nothing\l"
	.string "but failures.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_2:
# 35 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 2$"

Voltbrook_EventScripts_GruntPatrolChat_Text_3:
# 36 "data/maps/VoltbrookTown/scripts.pory"
	.string "Yeah, they never stand a chance out in\n"
	.string "the real world.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_4:
# 37 "data/maps/VoltbrookTown/scripts.pory"
	.string "Grunt 3$"

Voltbrook_EventScripts_GruntPatrolChat_Text_5:
# 38 "data/maps/VoltbrookTown/scripts.pory"
	.string "We need to split up and ask around town;\n"
	.string "they couldn't have made it far.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_6:
# 40 "data/maps/VoltbrookTown/scripts.pory"
	.string "Exactly, check every alley and market;\n"
	.string "HQ expects us to find them.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_7:
# 42 "data/maps/VoltbrookTown/scripts.pory"
	.string "Let's cover the east and west sides and\n"
	.string "report back immediately.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_8:
# 44 "data/maps/VoltbrookTown/scripts.pory"
	.string "Alright, I'll take the north sector; you\n"
	.string "two handle the rest.$"

Voltbrook_EventScripts_GruntPatrolChat_Text_9:
# 79 "data/maps/VoltbrookTown/scripts.pory"
	.string "Vee$"

Voltbrook_EventScripts_GruntPatrolChat_Text_10:
# 80 "data/maps/VoltbrookTown/scripts.pory"
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
# 100 "data/maps/VoltbrookTown/scripts.pory"
	.string "???$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_1:
# 101 "data/maps/VoltbrookTown/scripts.pory"
	.string "Hey!\p"
	.string "Where do you think you're off too?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_2:
# 108 "data/maps/VoltbrookTown/scripts.pory"
	.string "You're the failed experiments who\n"
	.string "escaped our lab!\p"
	.string "You sure have caused a lot of trouble.\n"
	.string "Better make this easy, I wouldn't want\l"
	.string "to hurt you any more that necessary…$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_3:
# 116 "data/maps/VoltbrookTown/scripts.pory"
	.string "N-no… he found us! He's blocking our\n"
	.string "path-we can’t run!\p"
	.string "I-I don’t wanna go back to the lab! I\n"
	.string "can’t! We have to fight.\p"
	.string "Even if we’re scared-we have to! Let’s\n"
	.string "show them we’re not just test subjects\l"
	.string "anymore!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_4:
# 121 "data/maps/VoltbrookTown/scripts.pory"
	.string "So you wanna do this the hard when\n"
	.string "then, huh? That's fine, this way is more\l"
	.string "fun for me!$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_5:
# 121 "data/maps/VoltbrookTown/scripts.pory"
	.string "How could a couple of failed\n"
	.string "experiments best me?$"

Voltbrook_EventScripts_GruntCatchesPlayerLeaving_Text_6:
# 121 "data/maps/VoltbrookTown/scripts.pory"
	.string "NULL$"

AfterBattle_Test_Text_0:
# 224 "data/maps/VoltbrookTown/scripts.pory"
	.string "Guess we showed up just in time, huh?\p"
	.string "Relax. We’ll clean this mess up for you.$"

AfterBattle_Test_Text_1:
# 226 "data/maps/VoltbrookTown/scripts.pory"
	.string "Orders are clear: capture them alive. No\n"
	.string "more mistakes.$"

AfterBattle_Test_Text_2:
# 231 "data/maps/VoltbrookTown/scripts.pory"
	.string "They’re not getting away again. Not this\n"
	.string "time!$"

AfterBattle_Test_Text_3:
# 236 "data/maps/VoltbrookTown/scripts.pory"
	.string "There’s three of them now…!$"

AfterBattle_Test_Text_4:
# 237 "data/maps/VoltbrookTown/scripts.pory"
	.string "I-I don’t think we can win this…!$"

AfterBattle_Test_Text_5:
# 246 "data/maps/VoltbrookTown/scripts.pory"
	.string "Cornered already? This is why I work\n"
	.string "alone. Stick close to me if you want to\l"
	.string "live.$"

AfterBattle_Test_Text_6:
# 248 "data/maps/VoltbrookTown/scripts.pory"
	.string "W-Wait what do you me-$"

AfterBattle_Test_Text_7:
# 252 "data/maps/VoltbrookTown/scripts.pory"
	.string "Quickly. This way!$"

AfterBattle_Test_Text_8:
# 254 "data/maps/VoltbrookTown/scripts.pory"
	.string "Okay okay, we're coming!$"

AfterBattle_Test_Text_9:
# 263 "data/maps/VoltbrookTown/scripts.pory"
	.string "That was way too close. I thought we\n"
	.string "were done for.\p"
	.string "Thanks for saving us back there! What's\n"
	.string "your name?$"

AfterBattle_Test_Text_10:
# 265 "data/maps/VoltbrookTown/scripts.pory"
	.string "Don’t bother.$"

AfterBattle_Test_Text_11:
# 267 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… still, that was really brave of\n"
	.string "you.$"

AfterBattle_Test_Text_12:
# 269 "data/maps/VoltbrookTown/scripts.pory"
	.string "Brave? No.\p"
	.string "I just hate seeing Team MAGA capturing\n"
	.string "those too weak to defend themselves.\p"
	.string "This town isn’t safe for you. Team MAGA\n"
	.string "rounds up any wild Pokémon they see.\p"
	.string "You’re lucky I was nearby. Now stay out\n"
	.string "of sight.$"

AfterBattle_Test_Text_13:
# 271 "data/maps/VoltbrookTown/scripts.pory"
	.string "O-Okay… but where are we?$"

AfterBattle_Test_Text_14:
# 273 "data/maps/VoltbrookTown/scripts.pory"
	.string "I just brought you to Route 10. It's\n"
	.string "just south of Voltbrook. Team MAGA\l"
	.string "doesn't really come down here, but since\l"
	.string "you two are SO special maybe they'll\l"
	.string "make an exception. Now stay out of my\l"
	.string "way and keep your head low, I won't save\l"
	.string "you again.$"

AfterBattle_Test_Text_15:
# 278 "data/maps/VoltbrookTown/scripts.pory"
	.string "He’s… not very friendly.$"

AfterBattle_Test_Text_16:
# 279 "data/maps/VoltbrookTown/scripts.pory"
	.string "But I think he just saved our lives.\n"
	.string "Let's stay away from Voltbrook for now,\l"
	.string "Maybe we should see where this route\l"
	.string "leads. There has to be someplace safe\l"
	.string "for us around here.$"

Voltbrook_EventScripts_PreventPlayerFromReentering_Text_0:
# 539 "data/maps/VoltbrookTown/scripts.pory"
	.string "You heard what that guy said… We need\n"
	.string "to move away from Voltbrook for now…\l"
	.string "let's head the other way. We can figure\l"
	.string "out how to get the artifact later.$"

Voltbrook_EventScripts_GruntsBlockingNorthExit_Text_0:
# 560 "data/maps/VoltbrookTown/scripts.pory"
	.string "Can't go this way… look at those MAGA\n"
	.string "Grunts up ahead. Let's look somewhere\l"
	.string "else.$"
