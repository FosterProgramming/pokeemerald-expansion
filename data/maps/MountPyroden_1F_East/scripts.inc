MountPyroden_1F_East_MapScripts::
	.byte 0


MountPyroden_1F_East_EventScript_FirePit::
# 9 "data/maps/MountPyroden_1F_East/scripts.pory"
	lock
# 10 "data/maps/MountPyroden_1F_East/scripts.pory"
	goto_if_set FLAG_WILL_O_WISP, MountPyroden_1F_East_EventScript_FirePit_2
# 25 "data/maps/MountPyroden_1F_East/scripts.pory"
	checkitem ITEM_STRENGTH_TOOL
# 26 "data/maps/MountPyroden_1F_East/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq MountPyroden_1F_East_EventScript_FirePit_5
MountPyroden_1F_East_EventScript_FirePit_1:
# 31 "data/maps/MountPyroden_1F_East/scripts.pory"
	release
	end

MountPyroden_1F_East_EventScript_FirePit_2:
# 12 "data/maps/MountPyroden_1F_East/scripts.pory"
	lockall
# 13 "data/maps/MountPyroden_1F_East/scripts.pory"
	setvar VAR_0x8004, 1
# 14 "data/maps/MountPyroden_1F_East/scripts.pory"
	setvar VAR_0x8005, 1
# 15 "data/maps/MountPyroden_1F_East/scripts.pory"
	setvar VAR_0x8006, 8
# 16 "data/maps/MountPyroden_1F_East/scripts.pory"
	setvar VAR_0x8007, 5
# 17 "data/maps/MountPyroden_1F_East/scripts.pory"
	special ShakeCamera
# 18 "data/maps/MountPyroden_1F_East/scripts.pory"
	waitstate
# 19 "data/maps/MountPyroden_1F_East/scripts.pory"
	msgbox MountPyroden_1F_East_EventScript_FirePit_Text_0
# 20 "data/maps/MountPyroden_1F_East/scripts.pory"
	releaseall
	end

MountPyroden_1F_East_EventScript_FirePit_5:
# 28 "data/maps/MountPyroden_1F_East/scripts.pory"
	goto EventScript_StrengthBoulder
	goto MountPyroden_1F_East_EventScript_FirePit_1


MountPyroden_1F_East_EventScript_FirePit_Text_0:
# 19 "data/maps/MountPyroden_1F_East/scripts.pory"
	.string "Something changed in the main room.$"
