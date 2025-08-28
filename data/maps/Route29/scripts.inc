Route29_MapScripts::
	.byte 0


Route29_CherrygroveSign::
# 6 "data/maps/Route29/scripts.pory"
	lock
# 7 "data/maps/Route29/scripts.pory"
	msgbox Route29_CherrygroveSign_Text_0
# 8 "data/maps/Route29/scripts.pory"
	release
	return


Route29_NewBarkSign::
# 12 "data/maps/Route29/scripts.pory"
	lock
# 13 "data/maps/Route29/scripts.pory"
	msgbox Route29_NewBarkSign_Text_0
# 14 "data/maps/Route29/scripts.pory"
	release
	return


Route29_CherrygroveSign_Text_0:
# 7 "data/maps/Route29/scripts.pory"
	.string "West to CHERRYGROVE CITY$"

Route29_NewBarkSign_Text_0:
# 13 "data/maps/Route29/scripts.pory"
	.string "East to NEW BARK TOWN$"
