GateRoute29Route46_MapScripts::
	.byte 0


GateRoute29Route46KidM::
# 4 "data/maps/GateRoute29Route46/scripts.pory"
	lock
# 5 "data/maps/GateRoute29Route46/scripts.pory"
	faceplayer
# 6 "data/maps/GateRoute29Route46/scripts.pory"
	msgbox GateRoute29Route46KidM_Text_0
# 7 "data/maps/GateRoute29Route46/scripts.pory"
	release
	return


GateRoute29Route46Guard::
# 11 "data/maps/GateRoute29Route46/scripts.pory"
	lock
# 12 "data/maps/GateRoute29Route46/scripts.pory"
	faceplayer
# 13 "data/maps/GateRoute29Route46/scripts.pory"
	msgbox GateRoute29Route46Guard_Text_0
# 14 "data/maps/GateRoute29Route46/scripts.pory"
	release
	return


GateRoute29Route46KidM_Text_0:
# 6 "data/maps/GateRoute29Route46/scripts.pory"
	.string "You can find some rarer POKéMON north\n"
	.string "of here.\p"
	.string "They come down the ledges from the\n"
	.string "north. Some of them can be a lot\l"
	.string "tougher so you gotta be careful!\p"
	.string "It's a lot of work if you wanna catch 'em\n"
	.string "all.$"

GateRoute29Route46Guard_Text_0:
# 13 "data/maps/GateRoute29Route46/scripts.pory"
	.string "You can hop down ledges for a shortcut,\n"
	.string "but you can't climb back up them.\p"
	.string "It's a convenient shortcut as long as\n"
	.string "you didn't forget anything up the\l"
	.string "ledge.$"
