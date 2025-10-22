Emberglide_House1_MapScripts::
	.byte 0


# 3 "data/maps/Emberglide_House1/scripts.pory"

# 4 "data/maps/Emberglide_House1/scripts.pory"
.set LOCALID_POLIWAG, 2

Emberglide_EventScript_Aipom::
# 9 "data/maps/Emberglide_House1/scripts.pory"
	speakername Emberglide_EventScript_Aipom_Text_0
# 10 "data/maps/Emberglide_House1/scripts.pory"
	msgbox Emberglide_EventScript_Aipom_Text_1, MSGBOX_NPC
	return


Emberglide_EventScript_Poliwag::
# 19 "data/maps/Emberglide_House1/scripts.pory"
	lock
# 20 "data/maps/Emberglide_House1/scripts.pory"
	faceplayer
# 21 "data/maps/Emberglide_House1/scripts.pory"
	speakername Emberglide_EventScript_Poliwag_Text_0
# 22 "data/maps/Emberglide_House1/scripts.pory"
	msgbox Emberglide_EventScript_Poliwag_Text_1, MSGBOX_YESNO
# 26 "data/maps/Emberglide_House1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Emberglide_EventScript_Poliwag_2
# 42 "data/maps/Emberglide_House1/scripts.pory"
	speakername Emberglide_EventScript_Poliwag_Text_0
# 43 "data/maps/Emberglide_House1/scripts.pory"
	msgbox Emberglide_EventScript_Poliwag_Text_4
# 46 "data/maps/Emberglide_House1/scripts.pory"
	closemessage
# 47 "data/maps/Emberglide_House1/scripts.pory"
	applymovement LOCALID_POLIWAG, Emberglide_EventScript_Poliwag_Movement_0
# 48 "data/maps/Emberglide_House1/scripts.pory"
	release
	end

Emberglide_EventScript_Poliwag_2:
# 28 "data/maps/Emberglide_House1/scripts.pory"
	speakername NULL
# 29 "data/maps/Emberglide_House1/scripts.pory"
	msgbox Emberglide_EventScript_Poliwag_Text_2
# 32 "data/maps/Emberglide_House1/scripts.pory"
	speakername Emberglide_EventScript_Poliwag_Text_0
# 33 "data/maps/Emberglide_House1/scripts.pory"
	msgbox Emberglide_EventScript_Poliwag_Text_3
# 37 "data/maps/Emberglide_House1/scripts.pory"
	closemessage
# 38 "data/maps/Emberglide_House1/scripts.pory"
	applymovement LOCALID_POLIWAG, Emberglide_EventScript_Poliwag_Movement_0
# 39 "data/maps/Emberglide_House1/scripts.pory"
	release
	end


# 38 "data/maps/Emberglide_House1/scripts.pory"
Emberglide_EventScript_Poliwag_Movement_0:
# 38 "data/maps/Emberglide_House1/scripts.pory"
	face_up
	step_end

Emberglide_EventScript_Aipom_Text_0:
# 9 "data/maps/Emberglide_House1/scripts.pory"
	.string "Aipom$"

Emberglide_EventScript_Aipom_Text_1:
# 11 "data/maps/Emberglide_House1/scripts.pory"
	.string "What are you doing in my house?\n"
	.string "Please leave.$"

Emberglide_EventScript_Poliwag_Text_0:
# 21 "data/maps/Emberglide_House1/scripts.pory"
	.string "Poliwag$"

Emberglide_EventScript_Poliwag_Text_1:
# 23 "data/maps/Emberglide_House1/scripts.pory"
	.string "This is mmmmmmmy bucket.\n"
	.string "Do you wwwwwwanna add to it?$"

Emberglide_EventScript_Poliwag_Text_2:
# 30 "data/maps/Emberglide_House1/scripts.pory"
	.string "You reluctantly spray some water in the\n"
	.string "bucket.$"

Emberglide_EventScript_Poliwag_Text_3:
# 34 "data/maps/Emberglide_House1/scripts.pory"
	.string "Hmmmm, yes. Sssssplendid.$"

Emberglide_EventScript_Poliwag_Text_4:
# 44 "data/maps/Emberglide_House1/scripts.pory"
	.string "Howwwwww disappointinggggggg.$"
