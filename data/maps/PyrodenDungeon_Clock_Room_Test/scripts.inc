PyrodenDungeon_Clock_Room_Test_MapScripts::
	.byte 0


Clock_Puzzle_Test::
# 5 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	lockall
# 6 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	setflag FLAG_PAUSE_TIME
# 7 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	initclock 16, 0
# 8 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	msgbox Clock_Puzzle_Test_Text_0
# 9 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	fadescreen FADE_TO_BLACK
# 10 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	special Special_ViewWallClock
# 11 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	waitstate
# 12 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	clearflag FLAG_PAUSE_TIME
# 13 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	releaseall
	end


Clock_Puzzle_Test_Text_0:
# 8 "data/maps/PyrodenDungeon_Clock_Room_Test/scripts.pory"
	.string "Follow the hands.$"
