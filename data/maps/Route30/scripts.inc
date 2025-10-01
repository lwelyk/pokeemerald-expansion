Route30_MapScripts::
	.byte 0


Route30_MrPokemonHouseSign::
# 6 "data/maps/Route30/scripts.pory"
	lock
# 7 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonHouseSign_Text_0
# 8 "data/maps/Route30/scripts.pory"
	release
	return


Route30_Youngster::
# 12 "data/maps/Route30/scripts.pory"
	lock
# 13 "data/maps/Route30/scripts.pory"
	faceplayer
# 14 "data/maps/Route30/scripts.pory"
	msgbox Route30_Youngster_Text_0
# 15 "data/maps/Route30/scripts.pory"
	release
	return


Route30_TrainerTips::
# 19 "data/maps/Route30/scripts.pory"
	lock
# 20 "data/maps/Route30/scripts.pory"
	msgbox Route30_TrainerTips_Text_0
# 21 "data/maps/Route30/scripts.pory"
	release
	return


Route30_Route30Sign::
# 25 "data/maps/Route30/scripts.pory"
	lock
# 26 "data/maps/Route30/scripts.pory"
	msgbox Route30_Route30Sign_Text_0
	return


Route30_MrPokemonHouseSign_Text_0:
# 7 "data/maps/Route30/scripts.pory"
	.string "MR.POKéMON'S HOUSE$"

Route30_Youngster_Text_0:
# 14 "data/maps/Route30/scripts.pory"
	.string "MR.POKéMON's house? It's a bit farther\n"
	.string "ahead.$"

Route30_TrainerTips_Text_0:
# 20 "data/maps/Route30/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "ONly throw POKéBALLs at wild POKéMON!\p"
	.string "POKéBALLs will block you from catching\n"
	.string "POKéMON already registered to another\l"
	.string "trainer's ID!\p"
	.string "POKéMON theft is not tolerated!$"

Route30_Route30Sign_Text_0:
# 26 "data/maps/Route30/scripts.pory"
	.string "ROUTE 30\n"
	.string "VIOLET CITY - CHERRYGROVE CITY$"
