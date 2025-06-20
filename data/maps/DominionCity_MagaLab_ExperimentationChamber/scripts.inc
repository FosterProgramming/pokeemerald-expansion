# 1 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"

# 2 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
DominionCity_MagaLab_ExperimentationChamber_MapScripts::
# 3 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	.byte 0

DominionCity_MagaLab_ExperimentationChamber_EventScript_DoorRequiresFourDigitCode::
# 7 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	lockall
# 8 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	msgbox DominionCity_MagaLab_ExperimentationChamber_EventScript_DoorRequiresFourDigitCode_Text_0, MSGBOX_SIGN
# 9 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ExperimentationChamber_EventScript_ClassifiedExperiments::
# 15 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	lockall
# 16 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	msgbox DominionCity_MagaLab_ExperimentationChamber_EventScript_ClassifiedExperiments_Text_0, MSGBOX_SIGN
# 17 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ExperimentationChamber_EventScript_ExperimentationTank::
# 23 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	lockall
# 24 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	msgbox DominionCity_MagaLab_ExperimentationChamber_EventScript_ExperimentationTank_Text_0, MSGBOX_SIGN
# 26 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	releaseall
	end


DominionCity_MagaLab_ExperimentationChamber_EventScript_DoorRequiresFourDigitCode_Text_0:
# 8 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	.string "The door requires a 8 digit code to\n"
	.string "unlock.$"

DominionCity_MagaLab_ExperimentationChamber_EventScript_ClassifiedExperiments_Text_0:
# 16 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	.string "CLASSIFIED EXPERIMENTS\n"
	.string "DO NOT ENTER$"

DominionCity_MagaLab_ExperimentationChamber_EventScript_ExperimentationTank_Text_0:
# 24 "data/maps/DominionCity_MagaLab_ExperimentationChamber/scripts.pory"
	.string "There is something inside that looks\n"
	.string "like an egg.\p"
	.string "The terminal displays all kinds of\n"
	.string "numbers and letters.$"
