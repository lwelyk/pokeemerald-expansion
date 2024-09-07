NewBarkTown_MapScripts::
	.byte 0


NewBarkTown_TownSign::
# 6 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 7 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_TownSign_Text_0
# 8 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 9 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 10 "data/maps/NewBarkTown/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 20, ITEM_NONE
# 11 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_TownSign_Text_0:
# 7 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\n"
	.string "The Town Where Winds of a New Beginning\l"
	.string "Blow.$"
