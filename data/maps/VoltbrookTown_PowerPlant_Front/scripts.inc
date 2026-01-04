VoltbrookTown_PowerPlant_Front_MapScripts::
# 2 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_TOWN_PLANT_FRONT_TRIGGERED, VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

VoltbrookTown_PowerPlant_Front_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 6 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_UnlockDoor
	return


VoltbrookTown_PowerPlant_Front_Switch::
# 13 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	lockall
# 14 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_Front_Switch_2
# 21 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	clearflag FLAG_VOLTBROOK_TOWN_PLANT_FRONT_TRIGGERED
# 22 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_LockDoor
# 23 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_Front_Switch_1:
# 26 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_Front_Switch_2:
# 15 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setflag FLAG_VOLTBROOK_TOWN_PLANT_FRONT_TRIGGERED
# 16 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	call VoltbrookTown_PowerPlant_Front_UnlockDoor
# 17 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_Front_Switch_1


VoltbrookTown_PowerPlant_Front_UnlockDoor::
# 33 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 4, METATILE_PowerPlant_NormalFloorTopLeftShadow, 0
# 34 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 35 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 36 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 4, METATILE_PowerPlant_NormalFloorTopShadow, 0
# 37 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 5, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 38 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 39 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 40 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 5, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 41 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 7, METATILE_PowerPlant_ButtonPressed, 0
# 42 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setobjectxyperm 1, 14, 7
# 43 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_LockDoor::
# 49 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 4, METATILE_PowerPlant_BarrierNormalFloorTopLeftShadow, 0
# 50 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 0
# 51 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 0
# 52 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 4, METATILE_PowerPlant_BarrierNormalFloorTopShadow, 0
# 53 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 12, 5, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 54 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 13, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 55 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 56 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 15, 5, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 57 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setmetatile 14, 7, METATILE_PowerPlant_ButtonUnpressed, 0
# 58 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	setobjectxyperm 1, 6, 12
# 59 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_Front_TeamMagaNPC::
# 65 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_WEATHER_INST_3, VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_0, VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_1, VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_2, VoltbrookTown_PowerPlant_Front_PostGruntBattle
# 67 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_3
# 68 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_4
# 70 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_Front_PostGruntBattle::
# 76 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_3
# 77 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_4
# 79 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_Front_TeamMagaNPC2::
# 85 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	trainerbattle_double TRAINER_GRUNT_MUSEUM_1, VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_0, VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_1, VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_2, VoltbrookTown_PowerPlant_Front_PostGruntBattle2
# 87 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_3
# 88 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_4
# 90 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_Front_PostGruntBattle2::
# 96 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	speakername VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_3
# 97 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_4
# 99 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_Front_PlantWorkerNPC::
# 105 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	lockall
# 106 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_Front_PlantWorkerNPC_Text_0, MSGBOX_NPC
# 109 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_0:
# 65 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	.string "MAGA Dialogue Intro$"

VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_1:
# 66 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	.string "MAGA Dialogue Outro$"

VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_2:
# 66 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	.string "INULL$"

VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_3:
# 67 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	.string "Grunt$"

VoltbrookTown_PowerPlant_Front_TeamMagaNPC_Text_4:
# 68 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	.string "MAGA Dialogue Post Battle$"

VoltbrookTown_PowerPlant_Front_PlantWorkerNPC_Text_0:
# 106 "data/maps/VoltbrookTown_PowerPlant_Front/scripts.pory"
	.string "Team MAGA acts like they're doing us a\n"
	.string "favor.\p"
	.string "Ever since they took over our town the\n"
	.string "people and Pokémon have been living in\l"
	.string "fear.$"
