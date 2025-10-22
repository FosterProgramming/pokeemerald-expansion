MountPyroden_1F_SideRoom_MapScripts::
# 2 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MountPyroden_1F_SideRoom_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MountPyroden_1F_SideRoom_MapScripts_MAP_SCRIPT_ON_LOAD:
# 4 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	goto_if_set FLAG_PYRODEN_MT_1F_SIDE_FIRE_PIT, MountPyroden_1F_SideRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2
MountPyroden_1F_SideRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	end

MountPyroden_1F_SideRoom_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 6 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	call MountPyroden_1F_SideRoom_SpawnStairs
	goto MountPyroden_1F_SideRoom_MapScripts_MAP_SCRIPT_ON_LOAD_1


MountPyroden_1F_SideRoom_EventScript_FirePit::
# 15 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	lock
# 16 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	goto_if_set FLAG_WILLOWISP_ACTIVE, MountPyroden_1F_SideRoom_EventScript_FirePit_2
# 28 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 29 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_1F_SideRoom_EventScript_FirePit_5
MountPyroden_1F_SideRoom_EventScript_FirePit_1:
# 34 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	release
	end

MountPyroden_1F_SideRoom_EventScript_FirePit_2:
# 18 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	lock
# 19 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	playse SE_UNLOCK
# 20 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	call MountPyroden_1F_SideRoom_SpawnStairs
# 21 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	waitse
# 22 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	clearflag FLAG_WILLOWISP_ACTIVE
# 23 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	release
	end

MountPyroden_1F_SideRoom_EventScript_FirePit_5:
# 31 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_1F_SideRoom_EventScript_FirePit_1


MountPyroden_1F_SideRoom_SpawnStairs::
# 40 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	setmetatile 6, 9, METATILE_MountPyroden_Stairs_Left, FALSE
# 41 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	setmetatile 7, 9, METATILE_MountPyroden_Stairs_Middle, FALSE
# 42 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	setmetatile 8, 9, METATILE_MountPyroden_Stairs_Right, FALSE
# 43 "data/maps/MountPyroden_1F_SideRoom/scripts.pory"
	special DrawWholeMapView
	return

