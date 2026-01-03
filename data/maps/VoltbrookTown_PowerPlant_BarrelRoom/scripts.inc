VoltbrookTown_PowerPlant_BarrelRoom_MapScripts::
# 2 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_BARREL_ROOM_LEFT_TRIGGERED, VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 9 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	goto_if_set FLAG_VOLTBROOK_PLANT_BARREL_ROOM_BOTTOM_TRIGGERED, VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5
VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_BarrelRoom_LeftClear
	goto VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1

VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 11 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_BarrelRoom_BottomClear
	goto VoltbrookTown_PowerPlant_BarrelRoom_MapScripts_MAP_SCRIPT_ON_LOAD_4


VoltbrookTown_PowerPlant_BarrelRoom_Switch1::
# 21 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	lockall
# 22 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_BarrelRoom_Switch1_2
# 29 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_BarrelRoom_LeftSet
# 30 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_BARREL_ROOM_LEFT_TRIGGERED
# 31 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_BarrelRoom_Switch1_1:
# 34 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_BarrelRoom_Switch1_2:
# 23 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_BarrelRoom_LeftClear
# 24 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_BARREL_ROOM_LEFT_TRIGGERED
# 25 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_BarrelRoom_Switch1_1


VoltbrookTown_PowerPlant_BarrelRoom_Switch2::
# 40 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	lockall
# 41 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_2, BOULDER_SWITCH_NO_EVENT
	goto_if_ne VoltbrookTown_PowerPlant_BarrelRoom_Switch2_2
# 48 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_BarrelRoom_BottomSet
# 49 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	clearflag FLAG_VOLTBROOK_PLANT_BARREL_ROOM_BOTTOM_TRIGGERED
# 50 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	playse SE_CLICK
VoltbrookTown_PowerPlant_BarrelRoom_Switch2_1:
# 53 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	releaseall
	end

VoltbrookTown_PowerPlant_BarrelRoom_Switch2_2:
# 42 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	call VoltbrookTown_PowerPlant_BarrelRoom_BottomClear
# 43 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setflag FLAG_VOLTBROOK_PLANT_BARREL_ROOM_BOTTOM_TRIGGERED
# 44 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	playse SE_UNLOCK
	goto VoltbrookTown_PowerPlant_BarrelRoom_Switch2_1


VoltbrookTown_PowerPlant_BarrelRoom_LeftClear::
# 59 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setobjectxyperm 1, 12, 7
# 60 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 7, METATILE_PowerPlant_TopWall, 1
# 61 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 8, METATILE_PowerPlant_BottomWall, 1
# 62 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_TileFloorTopShadow, 0
# 63 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 10, METATILE_PowerPlant_TileFloorNoShadow, 0
# 64 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 11, METATILE_PowerPlant_BackWallTile, 0
# 65 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 12, 7, METATILE_PowerPlant_ButtonPressed, 0
# 66 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_BarrelRoom_LeftSet::
# 72 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setobjectxyperm 1, 16, 6
# 73 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 7, METATILE_PowerPlant_BarrierTopWall, 1
# 74 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 8, METATILE_PowerPlant_BarrierBottomWall, 1
# 75 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 9, METATILE_PowerPlant_BarrierTileFloorTopShadow, 1
# 76 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 10, METATILE_PowerPlant_BarrierTileFloorNoShadow, 1
# 77 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 5, 11, METATILE_PowerPlant_BarrierBackWallTile, 1
# 78 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 12, 7, METATILE_PowerPlant_ButtonUnpressed, 0
# 79 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_BarrelRoom_BottomClear::
# 86 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setobjectxyperm 2, 9, 8
# 87 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 7, 14, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 88 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 8, 14, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 89 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 7, 15, METATILE_PowerPlant_NormalFloorLeftShadow, 0
# 90 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 8, 15, METATILE_PowerPlant_NormalFloorNoShadow, 0
# 91 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 9, 8, METATILE_PowerPlant_ButtonPressed, 0
# 92 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_BarrelRoom_BottomSet::
# 98 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setobjectxyperm 2, 4, 10
# 99 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 7, 14, METATILE_PowerPlant_TopBarrierNormalFloorLeftShadow, 0
# 100 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 8, 14, METATILE_PowerPlant_TopBarrierNormalFloorNoShadow, 0
# 101 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 7, 15, METATILE_PowerPlant_BottomBarrierNormalFloorLeftShadow, 1
# 102 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 8, 15, METATILE_PowerPlant_BottomBarrierNormalFloorNoShadow, 1
# 103 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	setmetatile 9, 8, METATILE_PowerPlant_ButtonUnpressed, 0
# 104 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	special DrawWholeMapView
	return


VoltbrookTown_PowerPlant_BarrelRoom_PlantWorkerNPC::
# 110 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	lockall
# 111 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_BarrelRoom_PlantWorkerNPC_Text_0, MSGBOX_NPC
# 112 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_BarrelRoom_PlantWorker2NPC::
# 118 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	lockall
# 119 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	msgbox VoltbrookTown_PowerPlant_BarrelRoom_PlantWorker2NPC_Text_0, MSGBOX_NPC
# 120 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	releaseall
	end


VoltbrookTown_PowerPlant_BarrelRoom_PlantWorkerNPC_Text_0:
# 111 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	.string "How did a couple of Pokémon like you get\n"
	.string "in here?\p"
	.string "Scram, before Team MAGA finds you.$"

VoltbrookTown_PowerPlant_BarrelRoom_PlantWorker2NPC_Text_0:
# 119 "data/maps/VoltbrookTown_PowerPlant_BarrelRoom/scripts.pory"
	.string "Ever since Team MAGA took over the\n"
	.string "plant, I've had to work doubles AND\l"
	.string "weekends.\p"
	.string "$"
