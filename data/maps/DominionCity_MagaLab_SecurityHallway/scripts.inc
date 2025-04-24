# 1 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
DominionCity_MagaLab_SecurityHallway_MapScripts::
# 3 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	.byte 0

DominionCity_MagaLab_SecurityHallway_EventScript_FindSitrusBerry::
# 7 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	lockall
# 8 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	finditem ITEM_SITRUS_BERRY, 1
# 9 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_SecurityHallway_EventScript_FindPersimBerry::
# 15 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	lockall
# 16 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	finditem ITEM_PERSIM_BERRY, 1
# 17 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_SecurityHallway_EventScript_FindAspearBerry::
# 23 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	lockall
# 24 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	finditem ITEM_ASPEAR_BERRY, 1
# 25 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_SecurityHallway_IntruderCaught::
# 31 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	msgbox DominionCity_MagaLab_SecurityHallway_IntruderCaught_Text_0
# 32 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	warpsilent MAP_DOMINION_CITY_MAGA_LAB_HOLDING_CELLS, 6, 3
	return


DominionCity_MagaLab_SecurityHallway_IntruderCaught_Text_0:
# 31 "data/maps/DominionCity_MagaLab_SecurityHallway/scripts.pory"
	.string "What the-- how did you get out?! The\n"
	.string "cells were locked!\p"
	.string "Come with me, back to your cell!$"
