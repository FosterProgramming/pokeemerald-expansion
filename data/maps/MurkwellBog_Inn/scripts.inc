# 1 "data/maps/MurkwellBog_Inn/scripts.pory"

# 2 "data/maps/MurkwellBog_Inn/scripts.pory"
.set LOCALID_NURSE, 1
# 3 "data/maps/MurkwellBog_Inn/scripts.pory"

# 4 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_MapScripts::
# 5 "data/maps/MurkwellBog_Inn/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MurkwellBog_Inn_OnTransition
# 6 "data/maps/MurkwellBog_Inn/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 7 "data/maps/MurkwellBog_Inn/scripts.pory"
	.byte 0
# 8 "data/maps/MurkwellBog_Inn/scripts.pory"

# 9 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_OnTransition:
# 10 "data/maps/MurkwellBog_Inn/scripts.pory"
	setrespawn HEAL_LOCATION_MURKWELL_BOG
# 11 "data/maps/MurkwellBog_Inn/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 12 "data/maps/MurkwellBog_Inn/scripts.pory"
	end
# 13 "data/maps/MurkwellBog_Inn/scripts.pory"

# 14 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_Nurse::
# 15 "data/maps/MurkwellBog_Inn/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 16 "data/maps/MurkwellBog_Inn/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/MurkwellBog_Inn/scripts.pory"
	waitmessage
# 18 "data/maps/MurkwellBog_Inn/scripts.pory"
	waitbuttonpress
# 19 "data/maps/MurkwellBog_Inn/scripts.pory"
	release
# 20 "data/maps/MurkwellBog_Inn/scripts.pory"
	end
# 21 "data/maps/MurkwellBog_Inn/scripts.pory"

# 22 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_FatMan::
# 23 "data/maps/MurkwellBog_Inn/scripts.pory"
	msgbox MurkwellBog_Inn_Text_PCStorageSystem, MSGBOX_NPC
# 24 "data/maps/MurkwellBog_Inn/scripts.pory"
	end
# 25 "data/maps/MurkwellBog_Inn/scripts.pory"

# 26 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_Youngster::
# 27 "data/maps/MurkwellBog_Inn/scripts.pory"
	msgbox MurkwellBog_Inn_Text_OranBerryRegainedHP, MSGBOX_NPC
# 28 "data/maps/MurkwellBog_Inn/scripts.pory"
	end
# 29 "data/maps/MurkwellBog_Inn/scripts.pory"

# 30 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_Woman::
# 31 "data/maps/MurkwellBog_Inn/scripts.pory"
	lock
# 32 "data/maps/MurkwellBog_Inn/scripts.pory"
	faceplayer
# 33 "data/maps/MurkwellBog_Inn/scripts.pory"
	msgbox MurkwellBog_Inn_Text_ManyTypesOfPokemon, MSGBOX_DEFAULT
# 34 "data/maps/MurkwellBog_Inn/scripts.pory"
	specialvar VAR_RESULT, IsStarterInParty
# 35 "data/maps/MurkwellBog_Inn/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, MurkwellBog_Inn_EventScript_SayStarterTypeInfo
# 36 "data/maps/MurkwellBog_Inn/scripts.pory"
	release
# 37 "data/maps/MurkwellBog_Inn/scripts.pory"
	end
# 38 "data/maps/MurkwellBog_Inn/scripts.pory"

# 39 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_SayStarterTypeInfo::
# 40 "data/maps/MurkwellBog_Inn/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, MurkwellBog_Inn_EventScript_SayTreeckoType
# 41 "data/maps/MurkwellBog_Inn/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, MurkwellBog_Inn_EventScript_SayTorchicType
# 42 "data/maps/MurkwellBog_Inn/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, MurkwellBog_Inn_EventScript_SayMudkipType
# 43 "data/maps/MurkwellBog_Inn/scripts.pory"
	release
# 44 "data/maps/MurkwellBog_Inn/scripts.pory"
	end
# 45 "data/maps/MurkwellBog_Inn/scripts.pory"

# 46 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_SayTreeckoType::
# 47 "data/maps/MurkwellBog_Inn/scripts.pory"
	msgbox MurkwellBog_Inn_Text_TreeckoIsGrassType, MSGBOX_DEFAULT
# 48 "data/maps/MurkwellBog_Inn/scripts.pory"
	return
# 49 "data/maps/MurkwellBog_Inn/scripts.pory"

# 50 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_SayTorchicType::
# 51 "data/maps/MurkwellBog_Inn/scripts.pory"
	msgbox MurkwellBog_Inn_Text_TorchicIsFireType, MSGBOX_DEFAULT
# 52 "data/maps/MurkwellBog_Inn/scripts.pory"
	return
# 53 "data/maps/MurkwellBog_Inn/scripts.pory"

# 54 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_EventScript_SayMudkipType::
# 55 "data/maps/MurkwellBog_Inn/scripts.pory"
	msgbox MurkwellBog_Inn_Text_MudkipIsWaterType, MSGBOX_DEFAULT
# 56 "data/maps/MurkwellBog_Inn/scripts.pory"
	return
# 57 "data/maps/MurkwellBog_Inn/scripts.pory"

# 58 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_Text_PCStorageSystem:
# 59 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "That PC-based POKéMON Storage\n"
# 60 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "System…\p"
# 61 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "Whoever made it must be some kind\n"
# 62 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "of a scientific wizard!$"
# 63 "data/maps/MurkwellBog_Inn/scripts.pory"

# 64 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_Text_OranBerryRegainedHP:
# 65 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "When my POKéMON ate an\n"
# 66 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "ORAN BERRY, it regained HP!$"
# 67 "data/maps/MurkwellBog_Inn/scripts.pory"

# 68 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_Text_ManyTypesOfPokemon:
# 69 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "There are many types of POKéMON.\p"
# 70 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "All types have their strengths and\n"
# 71 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "weaknesses against other types.\p"
# 72 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "Depending on the types of POKéMON,\n"
# 73 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "a battle could be easy or hard.$"
# 74 "data/maps/MurkwellBog_Inn/scripts.pory"

# 75 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_Text_TreeckoIsGrassType:
# 76 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "For example, your TREECKO\n"
# 77 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "is a GRASS type.\p"
# 78 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "It's strong against the WATER and\n"
# 79 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "GROUND types.\p"
# 80 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "But, it's weak against FIRE-type\n"
# 81 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "POKéMON.$"
# 82 "data/maps/MurkwellBog_Inn/scripts.pory"

# 83 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_Text_TorchicIsFireType:
# 84 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "For example, your TORCHIC\n"
# 85 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "is a FIRE type.\p"
# 86 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "It's strong against the GRASS and\n"
# 87 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "BUG types.\p"
# 88 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "But, it's weak against WATER-type\n"
# 89 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "POKéMON.$"
# 90 "data/maps/MurkwellBog_Inn/scripts.pory"

# 91 "data/maps/MurkwellBog_Inn/scripts.pory"
MurkwellBog_Inn_Text_MudkipIsWaterType:
# 92 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "For example, your MUDKIP\n"
# 93 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "is a WATER type.\p"
# 94 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "It's strong against the FIRE type.\p"
# 95 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "But, it's weak against GRASS-type\n"
# 96 "data/maps/MurkwellBog_Inn/scripts.pory"
	.string "and ELECTRIC-type POKéMON.$"
