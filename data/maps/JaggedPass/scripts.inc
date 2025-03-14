# 1 "data/maps/JaggedPass/scripts.pory"

# 2 "data/maps/JaggedPass/scripts.pory"
.set LOCALID_HIDEOUT_GUARD, 5
# 3 "data/maps/JaggedPass/scripts.pory"

# 4 "data/maps/JaggedPass/scripts.pory"
JaggedPass_MapScripts::
# 5 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
# 6 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
# 7 "data/maps/JaggedPass/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
# 8 "data/maps/JaggedPass/scripts.pory"
	.byte 0
# 9 "data/maps/JaggedPass/scripts.pory"

# 10 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnResume:
# 11 "data/maps/JaggedPass/scripts.pory"
	setstepcallback STEP_CB_ASH
# 12 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
# 13 "data/maps/JaggedPass/scripts.pory"
	end
# 14 "data/maps/JaggedPass/scripts.pory"

# 15 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_CheckHasMagmaEmblem::
# 16 "data/maps/JaggedPass/scripts.pory"
	checkitem ITEM_MAGMA_EMBLEM
# 17 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
# 18 "data/maps/JaggedPass/scripts.pory"
	return
# 19 "data/maps/JaggedPass/scripts.pory"

# 20 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetReadyToOpenHideout::
# 21 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 1
# 22 "data/maps/JaggedPass/scripts.pory"
	return
# 23 "data/maps/JaggedPass/scripts.pory"

# 24 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnTransition:
# 25 "data/maps/JaggedPass/scripts.pory"
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
# 26 "data/maps/JaggedPass/scripts.pory"
	end
# 27 "data/maps/JaggedPass/scripts.pory"

# 28 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_SetWeatherAsh::
# 29 "data/maps/JaggedPass/scripts.pory"
	setweather WEATHER_VOLCANIC_ASH
# 30 "data/maps/JaggedPass/scripts.pory"
	doweather
# 31 "data/maps/JaggedPass/scripts.pory"
	return
# 32 "data/maps/JaggedPass/scripts.pory"

# 33 "data/maps/JaggedPass/scripts.pory"
JaggedPass_OnLoad:
# 34 "data/maps/JaggedPass/scripts.pory"
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
# 35 "data/maps/JaggedPass/scripts.pory"
	end
# 36 "data/maps/JaggedPass/scripts.pory"

# 37 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_ConcealHideoutEntrance::
# 38 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
# 39 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
# 40 "data/maps/JaggedPass/scripts.pory"
	end
# 41 "data/maps/JaggedPass/scripts.pory"

# 42 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_OpenMagmaHideout::
# 43 "data/maps/JaggedPass/scripts.pory"
	lockall
# 44 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 45 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 46 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 47 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 48 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 49 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 50 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
# 51 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 52 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1   @ vertical pan
# 53 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1   @ horizontal pan
# 54 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 16  @ num shakes
# 55 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 3   @ shake delay
# 56 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 57 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 58 "data/maps/JaggedPass/scripts.pory"
	playse SE_EFFECTIVE
# 59 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
# 60 "data/maps/JaggedPass/scripts.pory"
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
# 61 "data/maps/JaggedPass/scripts.pory"
	special DrawWholeMapView
# 62 "data/maps/JaggedPass/scripts.pory"
	delay 30
# 63 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_JAGGED_PASS_STATE, 2
# 64 "data/maps/JaggedPass/scripts.pory"
	waitse
# 65 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 66 "data/maps/JaggedPass/scripts.pory"
	end
# 67 "data/maps/JaggedPass/scripts.pory"

# 68 "data/maps/JaggedPass/scripts.pory"
CommonEventScript_ScreenShake:
# 69 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8004, 1  @ vertical pan
# 70 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8005, 1  @ horizontal pan
# 71 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8006, 8  @ num shakes
# 72 "data/maps/JaggedPass/scripts.pory"
	setvar VAR_0x8007, 5  @ shake delay
# 73 "data/maps/JaggedPass/scripts.pory"
	special ShakeCamera
# 74 "data/maps/JaggedPass/scripts.pory"
	waitstate
# 75 "data/maps/JaggedPass/scripts.pory"
	return
# 76 "data/maps/JaggedPass/scripts.pory"

# 77 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_MagmaHideoutGuard::
# 78 "data/maps/JaggedPass/scripts.pory"
	lockall
# 79 "data/maps/JaggedPass/scripts.pory"
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
# 80 "data/maps/JaggedPass/scripts.pory"
	waitse
# 81 "data/maps/JaggedPass/scripts.pory"
	playse SE_PIN
# 82 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
# 83 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 84 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
# 85 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 86 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 87 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 88 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
# 89 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 90 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
# 91 "data/maps/JaggedPass/scripts.pory"
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
# 92 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 93 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 94 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 95 "data/maps/JaggedPass/scripts.pory"
	end
# 96 "data/maps/JaggedPass/scripts.pory"

# 97 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_GuardDefeated::
# 98 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
# 99 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 100 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
# 101 "data/maps/JaggedPass/scripts.pory"
	closemessage
# 102 "data/maps/JaggedPass/scripts.pory"
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
# 103 "data/maps/JaggedPass/scripts.pory"
	waitmovement 0
# 104 "data/maps/JaggedPass/scripts.pory"
	releaseall
# 105 "data/maps/JaggedPass/scripts.pory"
	end
# 106 "data/maps/JaggedPass/scripts.pory"

# 107 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Eric::
# 108 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ERIC, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
# 109 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
# 110 "data/maps/JaggedPass/scripts.pory"
	end
# 111 "data/maps/JaggedPass/scripts.pory"

# 112 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Diana::
# 113 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_DIANA_1, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat, JaggedPass_EventScript_RegisterDiana
# 114 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 115 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_DianaRematch
# 116 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
# 117 "data/maps/JaggedPass/scripts.pory"
	release
# 118 "data/maps/JaggedPass/scripts.pory"
	end
# 119 "data/maps/JaggedPass/scripts.pory"

# 120 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterDiana::
# 121 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 122 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
# 123 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_DIANA_1
# 124 "data/maps/JaggedPass/scripts.pory"
	release
# 125 "data/maps/JaggedPass/scripts.pory"
	end
# 126 "data/maps/JaggedPass/scripts.pory"

# 127 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_DianaRematch::
# 128 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
# 129 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
# 130 "data/maps/JaggedPass/scripts.pory"
	end
# 131 "data/maps/JaggedPass/scripts.pory"

# 132 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Ethan::
# 133 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_ETHAN_1, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat, JaggedPass_EventScript_RegisterEthan
# 134 "data/maps/JaggedPass/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 135 "data/maps/JaggedPass/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_EthanRematch
# 136 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
# 137 "data/maps/JaggedPass/scripts.pory"
	release
# 138 "data/maps/JaggedPass/scripts.pory"
	end
# 139 "data/maps/JaggedPass/scripts.pory"

# 140 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_RegisterEthan::
# 141 "data/maps/JaggedPass/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 142 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
# 143 "data/maps/JaggedPass/scripts.pory"
	register_matchcall TRAINER_ETHAN_1
# 144 "data/maps/JaggedPass/scripts.pory"
	release
# 145 "data/maps/JaggedPass/scripts.pory"
	end
# 146 "data/maps/JaggedPass/scripts.pory"

# 147 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_EthanRematch::
# 148 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
# 149 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
# 150 "data/maps/JaggedPass/scripts.pory"
	end
# 151 "data/maps/JaggedPass/scripts.pory"

# 152 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Julio::
# 153 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_JULIO, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
# 154 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
# 155 "data/maps/JaggedPass/scripts.pory"
	end
# 156 "data/maps/JaggedPass/scripts.pory"

# 157 "data/maps/JaggedPass/scripts.pory"
JaggedPass_EventScript_Autumn::
# 158 "data/maps/JaggedPass/scripts.pory"
	trainerbattle_single TRAINER_AUTUMN, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
# 159 "data/maps/JaggedPass/scripts.pory"
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
# 160 "data/maps/JaggedPass/scripts.pory"
	end
# 161 "data/maps/JaggedPass/scripts.pory"

# 162 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricIntro:
# 163 "data/maps/JaggedPass/scripts.pory"
	.string "MT. CHIMNEY's JAGGED PASS…\p"
# 164 "data/maps/JaggedPass/scripts.pory"
	.string "Now this is what I've always wanted\n"
# 165 "data/maps/JaggedPass/scripts.pory"
	.string "in a mountain.\p"
# 166 "data/maps/JaggedPass/scripts.pory"
	.string "This jagged bumpiness…\n"
# 167 "data/maps/JaggedPass/scripts.pory"
	.string "It rocks my soul!$"
# 168 "data/maps/JaggedPass/scripts.pory"

# 169 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricDefeat:
# 170 "data/maps/JaggedPass/scripts.pory"
	.string "Losing left me bitter!$"
# 171 "data/maps/JaggedPass/scripts.pory"

# 172 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EricPostBattle:
# 173 "data/maps/JaggedPass/scripts.pory"
	.string "Yes, I did lose at POKéMON…\p"
# 174 "data/maps/JaggedPass/scripts.pory"
	.string "But, when it comes to the love of\n"
# 175 "data/maps/JaggedPass/scripts.pory"
	.string "the mountains, I have you beat!$"
# 176 "data/maps/JaggedPass/scripts.pory"

# 177 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaIntro:
# 178 "data/maps/JaggedPass/scripts.pory"
	.string "This place isn't your casual hike.\n"
# 179 "data/maps/JaggedPass/scripts.pory"
	.string "It's not suited for a picnic.$"
# 180 "data/maps/JaggedPass/scripts.pory"

# 181 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaDefeat:
# 182 "data/maps/JaggedPass/scripts.pory"
	.string "Ohhh, no!\n"
# 183 "data/maps/JaggedPass/scripts.pory"
	.string "The ground is too bumpy…$"
# 184 "data/maps/JaggedPass/scripts.pory"

# 185 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostBattle:
# 186 "data/maps/JaggedPass/scripts.pory"
	.string "Did you know?\p"
# 187 "data/maps/JaggedPass/scripts.pory"
	.string "Some people cleverly ride their\n"
# 188 "data/maps/JaggedPass/scripts.pory"
	.string "bicycles up this horribly bumpy pass.$"
# 189 "data/maps/JaggedPass/scripts.pory"

# 190 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRegister:
# 191 "data/maps/JaggedPass/scripts.pory"
	.string "Will you ever be back in this area?\n"
# 192 "data/maps/JaggedPass/scripts.pory"
	.string "If you do return, I'd like a rematch.$"
# 193 "data/maps/JaggedPass/scripts.pory"

# 194 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchIntro:
# 195 "data/maps/JaggedPass/scripts.pory"
	.string "Picnics are fun wherever you go.\n"
# 196 "data/maps/JaggedPass/scripts.pory"
	.string "Just like POKéMON!$"
# 197 "data/maps/JaggedPass/scripts.pory"

# 198 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaRematchDefeat:
# 199 "data/maps/JaggedPass/scripts.pory"
	.string "I only lost because the ground is\n"
# 200 "data/maps/JaggedPass/scripts.pory"
	.string "too bumpy!$"
# 201 "data/maps/JaggedPass/scripts.pory"

# 202 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_DianaPostRematch:
# 203 "data/maps/JaggedPass/scripts.pory"
	.string "I'll forget about losing and just\n"
# 204 "data/maps/JaggedPass/scripts.pory"
	.string "enjoy this bumpy hike.$"
# 205 "data/maps/JaggedPass/scripts.pory"

# 206 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanIntro:
# 207 "data/maps/JaggedPass/scripts.pory"
	.string "JAGGED PASS is hard to walk on.\n"
# 208 "data/maps/JaggedPass/scripts.pory"
	.string "It's a good place for training.$"
# 209 "data/maps/JaggedPass/scripts.pory"

# 210 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanDefeat:
# 211 "data/maps/JaggedPass/scripts.pory"
	.string "It was all over while we were still\n"
# 212 "data/maps/JaggedPass/scripts.pory"
	.string "trying to find a good footing…$"
# 213 "data/maps/JaggedPass/scripts.pory"

# 214 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostBattle:
# 215 "data/maps/JaggedPass/scripts.pory"
	.string "If I had an ACRO BIKE, I'd be able to\n"
# 216 "data/maps/JaggedPass/scripts.pory"
	.string "jump ledges.$"
# 217 "data/maps/JaggedPass/scripts.pory"

# 218 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRegister:
# 219 "data/maps/JaggedPass/scripts.pory"
	.string "When I get more used to this bumpiness,\n"
# 220 "data/maps/JaggedPass/scripts.pory"
	.string "I'll be sure to win!\p"
# 221 "data/maps/JaggedPass/scripts.pory"
	.string "Can you register me in your POKéNAV?$"
# 222 "data/maps/JaggedPass/scripts.pory"

# 223 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchIntro:
# 224 "data/maps/JaggedPass/scripts.pory"
	.string "I got used to this bumpiness.\n"
# 225 "data/maps/JaggedPass/scripts.pory"
	.string "I sing while I climb now.$"
# 226 "data/maps/JaggedPass/scripts.pory"

# 227 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanRematchDefeat:
# 228 "data/maps/JaggedPass/scripts.pory"
	.string "It's still not easy to battle on this\n"
# 229 "data/maps/JaggedPass/scripts.pory"
	.string "bumpy ground…$"
# 230 "data/maps/JaggedPass/scripts.pory"

# 231 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_EthanPostRematch:
# 232 "data/maps/JaggedPass/scripts.pory"
	.string "I should get an ACRO BIKE from RYDEL\n"
# 233 "data/maps/JaggedPass/scripts.pory"
	.string "in MAUVILLE CITY…$"
# 234 "data/maps/JaggedPass/scripts.pory"

# 235 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntIntro:
# 236 "data/maps/JaggedPass/scripts.pory"
	.string "Wah!\n"
# 237 "data/maps/JaggedPass/scripts.pory"
	.string "What are you doing here?\p"
# 238 "data/maps/JaggedPass/scripts.pory"
	.string "What am I doing in a place like this?\p"
# 239 "data/maps/JaggedPass/scripts.pory"
	.string "What business is it of yours?$"
# 240 "data/maps/JaggedPass/scripts.pory"

# 241 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GruntDefeat:
# 242 "data/maps/JaggedPass/scripts.pory"
	.string "Urrrgh…\p"
# 243 "data/maps/JaggedPass/scripts.pory"
	.string "I should've ducked into our HIDEOUT\n"
# 244 "data/maps/JaggedPass/scripts.pory"
	.string "right away…$"
# 245 "data/maps/JaggedPass/scripts.pory"

# 246 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_GoWhereverYouWant:
# 247 "data/maps/JaggedPass/scripts.pory"
	.string "Okay, oh-kay!\n"
# 248 "data/maps/JaggedPass/scripts.pory"
	.string "I admit it--you're strong!\p"
# 249 "data/maps/JaggedPass/scripts.pory"
	.string "Don't worry about me.\n"
# 250 "data/maps/JaggedPass/scripts.pory"
	.string "Go wherever you want!$"
# 251 "data/maps/JaggedPass/scripts.pory"

# 252 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_BoulderShakingInResponseToEmblem:
# 253 "data/maps/JaggedPass/scripts.pory"
	.string "Oh! This boulder is shaking in response\n"
# 254 "data/maps/JaggedPass/scripts.pory"
	.string "to the MAGMA EMBLEM!$"
# 255 "data/maps/JaggedPass/scripts.pory"

# 256 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioIntro:
# 257 "data/maps/JaggedPass/scripts.pory"
	.string "Aiyeeh! It's awfully scary to shoot\n"
# 258 "data/maps/JaggedPass/scripts.pory"
	.string "down the mountain in one go!$"
# 259 "data/maps/JaggedPass/scripts.pory"

# 260 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioDefeat:
# 261 "data/maps/JaggedPass/scripts.pory"
	.string "I feel like I'm falling apart…$"
# 262 "data/maps/JaggedPass/scripts.pory"

# 263 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_JulioPostBattle:
# 264 "data/maps/JaggedPass/scripts.pory"
	.string "My bicycle bounced around so much,\n"
# 265 "data/maps/JaggedPass/scripts.pory"
	.string "my rear end's sore…$"
# 266 "data/maps/JaggedPass/scripts.pory"

# 267 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnIntro:
# 268 "data/maps/JaggedPass/scripts.pory"
	.string "I climb this hill every day.\n"
# 269 "data/maps/JaggedPass/scripts.pory"
	.string "I have confidence in my strength!$"
# 270 "data/maps/JaggedPass/scripts.pory"

# 271 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnDefeat:
# 272 "data/maps/JaggedPass/scripts.pory"
	.string "Hmm…\n"
# 273 "data/maps/JaggedPass/scripts.pory"
	.string "What went wrong?$"
# 274 "data/maps/JaggedPass/scripts.pory"

# 275 "data/maps/JaggedPass/scripts.pory"
JaggedPass_Text_AutumnPostBattle:
# 276 "data/maps/JaggedPass/scripts.pory"
	.string "What is that odd rock protrusion\n"
# 277 "data/maps/JaggedPass/scripts.pory"
	.string "a little up the hill from here?$"
