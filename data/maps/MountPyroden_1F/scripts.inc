MountPyroden_1F_MapScripts::
# 3 "data/maps/MountPyroden_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/MountPyroden_1F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_EAST_FIRE_PIT, MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 12 "data/maps/MountPyroden_1F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_4, MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_7
MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4:
	end

MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/MountPyroden_1F/scripts.pory"
	setmetatile 9, 13, METATILE_MountPyroden_Stairs_Left, FALSE
# 8 "data/maps/MountPyroden_1F/scripts.pory"
	setmetatile 10, 13, METATILE_MountPyroden_Stairs_Right, FALSE
# 9 "data/maps/MountPyroden_1F/scripts.pory"
	special DrawWholeMapView
	goto MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 14 "data/maps/MountPyroden_1F/scripts.pory"
	setmetatile 15, 6, METATILE_MountPyroden_Stairs_Left, FALSE
# 15 "data/maps/MountPyroden_1F/scripts.pory"
	setmetatile 16, 6, METATILE_MountPyroden_Stairs_Right, FALSE
# 16 "data/maps/MountPyroden_1F/scripts.pory"
	special DrawWholeMapView
	goto MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 12 "data/maps/MountPyroden_1F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_6, MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_5
	goto MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 12 "data/maps/MountPyroden_1F/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_NORTH_WEST_FIRE_PIT_5, MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6
	goto MountPyroden_1F_MapScripts_MAP_SCRIPT_ON_LOAD_4

