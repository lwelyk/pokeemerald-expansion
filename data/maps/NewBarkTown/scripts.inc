NewBarkTown_MapScripts::
	.byte 0


NewBarkTown_TownSign::
# 6 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 7 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_TownSign_Text_0
# 8 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_TownSign_Text_0:
# 7 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\n"
	.string "The Town Where Winds of a New Beginning\l"
	.string "Blow.$"
