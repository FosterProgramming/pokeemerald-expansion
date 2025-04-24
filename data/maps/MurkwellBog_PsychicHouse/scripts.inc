# 1 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"

# 2 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_FULL_PARTY, 15
# 3 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_ACE_TALON_NYX_PARTY, 14
# 4 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_DRAKE_TALON_NYX_PARTY, 13
# 5 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_DRAKE_ACE_NYX_PARTY, 12
# 6 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_DRAKE_ACE_TALON_PARTY, 11
# 7 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_TALON_NYX_PARTY, 10
# 8 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_ACE_NYX_PARTY, 9
# 9 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_ACE_TALON_PARTY, 8
# 10 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_DRAKE_NYX_PARTY, 7
# 11 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_DRAKE_TALON_PARTY, 6
# 12 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_DRAKE_ACE_PARTY, 5
# 13 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_DRAKE_PARTY, 4
# 14 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_ACE_PARTY, 3
# 15 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_TALON_PARTY, 2
# 16 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_NYX_PARTY, 1
# 17 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
.set VAR_NO_PARTY, 0

MurkwellBog_PsychicHouse_MapScripts::
	.byte 0


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC::
# 28 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	call CommonEventScript_DetermineParty
# 29 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_TEMP_F
# 31 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_FULL_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_2
# 33 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_ACE_TALON_NYX_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_3
# 35 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_DRAKE_TALON_NYX_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_4
# 37 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_DRAKE_ACE_NYX_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_5
# 39 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_DRAKE_ACE_TALON_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_6
# 41 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_TALON_NYX_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_7
# 43 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_ACE_NYX_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_8
# 45 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_ACE_TALON_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_9
# 47 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_DRAKE_NYX_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_10
# 49 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_DRAKE_TALON_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_11
# 51 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_DRAKE_ACE_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_12
# 53 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_DRAKE_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_13
# 55 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_ACE_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_14
# 57 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_TALON_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_15
# 59 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_NYX_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_16
# 61 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case VAR_NO_PARTY, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_17
# 64 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NoParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_2:
# 32 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_3:
# 34 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_4:
# 36 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_5:
# 38 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_6:
# 40 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_7:
# 42 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_8:
# 44 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_9:
# 46 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_10:
# 48 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_11:
# 50 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_12:
# 52 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_13:
# 54 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_14:
# 56 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_15:
# 58 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_16:
# 60 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty
	return

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_17:
# 62 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NoParty
	return


CommonEventScript_DetermineParty::
# 70 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_60
CommonEventScript_DetermineParty_56:
# 74 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_55
CommonEventScript_DetermineParty_51:
# 78 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_50
CommonEventScript_DetermineParty_46:
# 82 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_45
CommonEventScript_DetermineParty_41:
# 86 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_40
CommonEventScript_DetermineParty_37:
# 90 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_36
CommonEventScript_DetermineParty_34:
# 94 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_33
CommonEventScript_DetermineParty_31:
# 98 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_30
CommonEventScript_DetermineParty_28:
# 102 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_27
CommonEventScript_DetermineParty_25:
# 106 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_24
CommonEventScript_DetermineParty_22:
# 110 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_21
CommonEventScript_DetermineParty_20:
# 114 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_STRATOSCAPE_DRAKE, CommonEventScript_DetermineParty_12
# 118 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_13
# 122 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_14
# 126 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_15
# 132 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_NO_PARTY
	return

CommonEventScript_DetermineParty_1:
# 72 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_FULL_PARTY
	return

CommonEventScript_DetermineParty_2:
# 76 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_ACE_TALON_NYX_PARTY
	return

CommonEventScript_DetermineParty_3:
# 80 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_DRAKE_TALON_NYX_PARTY
	return

CommonEventScript_DetermineParty_4:
# 84 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_DRAKE_ACE_NYX_PARTY
	return

CommonEventScript_DetermineParty_5:
# 88 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_DRAKE_ACE_TALON_PARTY
	return

CommonEventScript_DetermineParty_6:
# 92 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_TALON_NYX_PARTY
	return

CommonEventScript_DetermineParty_7:
# 96 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_ACE_NYX_PARTY
	return

CommonEventScript_DetermineParty_8:
# 100 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_ACE_TALON_PARTY
	return

CommonEventScript_DetermineParty_9:
# 104 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_DRAKE_NYX_PARTY
	return

CommonEventScript_DetermineParty_10:
# 108 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_DRAKE_TALON_PARTY
	return

CommonEventScript_DetermineParty_11:
# 112 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_DRAKE_ACE_PARTY
	return

CommonEventScript_DetermineParty_12:
# 116 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_DRAKE_PARTY
	return

CommonEventScript_DetermineParty_13:
# 120 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_ACE_PARTY
	return

CommonEventScript_DetermineParty_14:
# 124 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_TALON_PARTY
	return

CommonEventScript_DetermineParty_15:
# 128 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	setvar VAR_TEMP_F, VAR_NYX_PARTY
	return

CommonEventScript_DetermineParty_21:
# 110 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_11
	goto CommonEventScript_DetermineParty_20

CommonEventScript_DetermineParty_24:
# 106 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_10
	goto CommonEventScript_DetermineParty_22

CommonEventScript_DetermineParty_27:
# 102 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_9
	goto CommonEventScript_DetermineParty_25

CommonEventScript_DetermineParty_30:
# 98 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_8
	goto CommonEventScript_DetermineParty_28

CommonEventScript_DetermineParty_33:
# 94 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_7
	goto CommonEventScript_DetermineParty_31

CommonEventScript_DetermineParty_36:
# 90 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_6
	goto CommonEventScript_DetermineParty_34

CommonEventScript_DetermineParty_39:
# 86 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_5
	goto CommonEventScript_DetermineParty_37

CommonEventScript_DetermineParty_40:
# 86 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_39
	goto CommonEventScript_DetermineParty_37

CommonEventScript_DetermineParty_44:
# 82 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_4
	goto CommonEventScript_DetermineParty_41

CommonEventScript_DetermineParty_45:
# 82 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_44
	goto CommonEventScript_DetermineParty_41

CommonEventScript_DetermineParty_49:
# 78 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_3
	goto CommonEventScript_DetermineParty_46

CommonEventScript_DetermineParty_50:
# 78 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_49
	goto CommonEventScript_DetermineParty_46

CommonEventScript_DetermineParty_54:
# 74 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_2
	goto CommonEventScript_DetermineParty_51

CommonEventScript_DetermineParty_55:
# 74 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_54
	goto CommonEventScript_DetermineParty_51

CommonEventScript_DetermineParty_59:
# 70 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VERDANT_HALLOW_TALON, CommonEventScript_DetermineParty_63
	goto CommonEventScript_DetermineParty_56

CommonEventScript_DetermineParty_60:
# 70 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_VOLTBROOK_TOWN_ACE, CommonEventScript_DetermineParty_59
	goto CommonEventScript_DetermineParty_56

CommonEventScript_DetermineParty_63:
# 70 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	goto_if_set FLAG_HIDE_MURKWELL_BOG_NYX, CommonEventScript_DetermineParty_1
	goto CommonEventScript_DetermineParty_56


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty::
# 139 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 140 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 141 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 6, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 142 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 144 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_3
# 146 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_4
# 148 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_5
# 150 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_6
# 152 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_7
# 154 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 5, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_8
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_1:
# 157 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_3:
# 145 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_4:
# 147 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_5:
# 149 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_6:
# 151 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_7:
# 153 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_8:
# 155 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty::
# 163 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 164 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 165 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 166 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 168 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_3
# 170 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_4
# 172 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_5
# 174 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_6
# 176 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_7
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_1:
# 179 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_3:
# 169 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_4:
# 171 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_5:
# 173 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_6:
# 175 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_7:
# 177 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonNyxParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty::
# 185 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 186 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 187 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5
# 188 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 190 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_3
# 192 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_4
# 194 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_5
# 196 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_6
# 198 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_7
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_1:
# 201 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_3:
# 191 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_4:
# 193 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_5:
# 195 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_6:
# 197 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_7:
# 199 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonNyxParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty::
# 207 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 208 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 209 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 210 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 212 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_3
# 214 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_4
# 216 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_5
# 218 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_6
# 220 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_7
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_1:
# 223 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_3:
# 213 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_4:
# 215 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_5:
# 217 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_6:
# 219 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_7:
# 221 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceNyxParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty::
# 229 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 230 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 231 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 5, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 232 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 234 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_3
# 236 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_4
# 238 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_5
# 240 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_6
# 242 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_7
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_1:
# 245 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_3:
# 235 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_4:
# 237 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_5:
# 239 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_6:
# 241 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_7:
# 243 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceTalonParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty::
# 251 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 252 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 253 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5
# 254 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 256 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_3
# 258 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_4
# 260 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_5
# 262 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_6
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_1:
# 265 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_3:
# 257 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_4:
# 259 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_5:
# 261 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_6:
# 263 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonNyxParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty::
# 271 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 272 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 273 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 274 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 276 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_3
# 278 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_4
# 280 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_5
# 282 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_6
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_1:
# 285 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_3:
# 277 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_4:
# 279 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_5:
# 281 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_6:
# 283 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceNyxParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty::
# 291 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 292 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 293 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 294 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 296 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_3
# 298 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_4
# 300 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_5
# 302 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_6
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_1:
# 305 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_3:
# 297 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_4:
# 299 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_5:
# 301 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_6:
# 303 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceTalonParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty::
# 311 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 312 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 313 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4
# 314 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 316 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_3
# 318 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_4
# 320 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_5
# 322 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_6
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_1:
# 325 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_3:
# 317 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_4:
# 319 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_5:
# 321 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_6:
# 323 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeNyxParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty::
# 331 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 332 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 333 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5
# 334 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 336 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_3
# 338 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_4
# 340 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_5
# 342 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_6
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_1:
# 345 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_3:
# 337 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_4:
# 339 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_5:
# 341 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_6:
# 343 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeTalonParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty::
# 351 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 352 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 353 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 4, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 354 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 356 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_3
# 358 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_4
# 360 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_5
# 362 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 3, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_6
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_1:
# 365 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_3:
# 357 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_4:
# 359 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_5:
# 361 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_6:
# 363 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeAceParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty::
# 371 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 372 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 373 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3
# 374 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 376 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_3
# 378 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_4
# 380 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_5
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_1:
# 383 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_3:
# 377 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_4:
# 379 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_5:
# 381 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_DrakeParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty::
# 389 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 390 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 391 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6
# 392 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 394 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_3
# 396 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_4
# 398 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_5
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_1:
# 401 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_3:
# 395 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_4:
# 397 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_5:
# 399 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_AceParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty::
# 407 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 408 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 409 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5
# 410 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 412 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_3
# 414 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_4
# 416 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_5
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_1:
# 419 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_3:
# 413 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_4:
# 415 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_5:
# 417 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_TalonParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty::
# 425 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 426 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 427 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 3, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4
# 428 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	switch VAR_RESULT
# 430 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 0, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_3
# 432 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_4
# 434 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	case 2, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_5
MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_1:
# 437 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_3:
# 431 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_4:
# 433 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_1

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_5:
# 435 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10
	goto MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NyxParty_1


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_NoParty::
# 443 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	lock
# 444 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	msgbox MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0
# 445 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	dynmultichoice 0, 0, FALSE, 2, 0, DYN_MULTICHOICE_CB_NONE, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1, MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2
# 447 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	release
	end


MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_0:
# 140 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "The winds shift, the stars murmur…\p"
	.string "Shadows of fate coil around you.\p"
	.string "I see many paths, many truths… and yet\n"
	.string "only one destiny.\p"
	.string "Tell me, traveler… whose soul do you\n"
	.string "wish for me to peer into?$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_1:
# 141 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "Seel$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_2:
# 141 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "Vee$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_3:
# 141 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "Drake$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_4:
# 141 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "Nyx$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_5:
# 141 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "Talon$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_6:
# 141 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "Ace$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_7:
# 145 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "A frozen tide, bound by the will of the\n"
	.string "past…\p"
	.string "I see a veil of frost, an eternal barrier\n"
	.string "between pain and peace.\p"
	.string "The guardian of the deep must embrace\n"
	.string "the stillness of time to reclaim what\l"
	.string "was lost.$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_8:
# 147 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "A soul untethered, a fate unwritten…\p"
	.string "I see shifting forms, flickering like\n"
	.string "candlelight in the wind.\p"
	.string "To awaken the slumbering heart, you\n"
	.string "must embrace the many paths before\l"
	.string "you. Only then will you find your true\l"
	.string "self.$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_9:
# 149 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "A dragon unbowed, wings weighed by\n"
	.string "duty…\p"
	.string "I see the storm’s fury, a kingdom lost to\n"
	.string "the sky.\p"
	.string "Only through fire and thunder shall the\n"
	.string "true ruler ascend once more.$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_10:
# 151 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "A whisper in the dark, unseen but ever\n"
	.string "present… I see a web of fate, woven in\l"
	.string "moonlight and deceit. The path forward\l"
	.string "is veiled in illusions--only those who\l"
	.string "embrace the unknown shall emerge\l"
	.string "reborn.$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_11:
# 153 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "A hunter with three eyes, yet only one\n"
	.string "vision…\p"
	.string "I see a piercing force, striking faster\n"
	.string "than the mind can comprehend.\p"
	.string "To shatter the sky, you must abandon\n"
	.string "hesitation--your greatest weapon is\l"
	.string "not speed, but intent.$"

MurkwellBog_PsychicHouse_EventScripts_PsychicNPC_FullParty_Text_12:
# 155 "data/maps/MurkwellBog_PsychicHouse/scripts.pory"
	.string "A rogue’s heart beats beneath golden\n"
	.string "chains… I see a trickster’s grin, a hand\l"
	.string "reaching for fortune yet bound by fate.\l"
	.string "Wealth and power lie within your\l"
	.string "grasp--but only those who give without\l"
	.string "taking shall claim the ultimate prize.$"
