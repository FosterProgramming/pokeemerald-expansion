# 1 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 2 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_MapScripts::
# 3 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.byte 0
# 4 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 5 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CaptSternAide::
# 6 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lock
# 7 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	faceplayer
# 8 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_EXCHANGED_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 9 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	checkitem ITEM_SCANNER
# 10 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner
# 11 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	goto_if_set FLAG_ITEM_ABANDONED_SHIP_HIDDEN_FLOOR_ROOM_2_SCANNER, AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus
# 12 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner, MSGBOX_DEFAULT
# 13 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 14 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 15 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 16 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_CanYouDeliverScanner::
# 17 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner, MSGBOX_DEFAULT
# 18 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 19 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 20 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 21 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_EventScript_ThisIsSSCactus::
# 22 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	msgbox AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus, MSGBOX_DEFAULT
# 23 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	release
# 24 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	end
# 25 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 26 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_NoSuccessFindingScanner:
# 27 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I'm investigating this ship on behalf\n"
# 28 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "of CAPT. STERN.\p"
# 29 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "He also asked me to find a SCANNER,\n"
# 30 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "but I haven't had any success…$"
# 31 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 32 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_OhCanYouDeliverScanner:
# 33 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Oh! That's a SCANNER!\p"
# 34 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "Listen, can I get you to deliver that\n"
# 35 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "to CAPT. STERN?\p"
# 36 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "I want to investigate this ship a\n"
# 37 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "little more.$"
# 38 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"

# 39 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
AbandonedShip_CaptainsOffice_Text_ThisIsSSCactus:
# 40 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "This ship is called S.S. CACTUS.\n"
# 41 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	.string "It seems to be from an earlier era.$"

VictoryRoad_1F_EventScript_FloorSwitch1::
# 46 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lockall
# 47 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_1, 0
	goto_if_ne VictoryRoad_1F_EventScript_FloorSwitch1_2
# 54 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 18, 10, METATILE_General_Grass, 0
# 55 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
VictoryRoad_1F_EventScript_FloorSwitch1_1:
# 57 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitch1_2:
# 49 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 18, 10, METATILE_General_TallGrass, 0
# 50 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
	goto VictoryRoad_1F_EventScript_FloorSwitch1_1


VictoryRoad_1F_EventScript_FloorSwitch2::
# 62 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lockall
# 63 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_2, 0
	goto_if_ne VictoryRoad_1F_EventScript_FloorSwitch2_2
# 70 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 20, 10, METATILE_General_Grass, 0
# 71 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
VictoryRoad_1F_EventScript_FloorSwitch2_1:
# 73 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitch2_2:
# 65 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 20, 10, METATILE_General_TallGrass, 0
# 66 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
	goto VictoryRoad_1F_EventScript_FloorSwitch2_1


VictoryRoad_1F_EventScript_FloorSwitch3::
# 78 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	lockall
# 79 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	compare VAR_TEMP_BOULDER_SWITCH_EVENT_ID_3, 0
	goto_if_ne VictoryRoad_1F_EventScript_FloorSwitch3_2
# 86 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 22, 10, METATILE_General_Grass, 0
# 87 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
VictoryRoad_1F_EventScript_FloorSwitch3_1:
# 89 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	releaseall
	end

VictoryRoad_1F_EventScript_FloorSwitch3_2:
# 81 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	setmetatile 22, 10, METATILE_General_TallGrass, 0
# 82 "data/maps/AbandonedShip_CaptainsOffice/scripts.pory"
	special DrawWholeMapView
	goto VictoryRoad_1F_EventScript_FloorSwitch3_1

