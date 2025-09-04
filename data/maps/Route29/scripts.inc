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


Route29_ManNearGate::
# 18 "data/maps/Route29/scripts.pory"
	lock
# 19 "data/maps/Route29/scripts.pory"
	msgbox Route29_ManNearGate_Text_0
# 20 "data/maps/Route29/scripts.pory"
	release
	return


Route29_WomanNearCherrygrove::
# 24 "data/maps/Route29/scripts.pory"
	lock
# 25 "data/maps/Route29/scripts.pory"
	msgbox Route29_WomanNearCherrygrove_Text_0
# 26 "data/maps/Route29/scripts.pory"
	gettimeofday
# 0 "data/maps/Route29/scripts.pory"
	switch VAR_0x8000
# 27 "data/maps/Route29/scripts.pory"
	case TIME_MORNING, Route29_WomanNearCherrygrove_3
# 29 "data/maps/Route29/scripts.pory"
	case TIME_DAY, Route29_WomanNearCherrygrove_4
# 31 "data/maps/Route29/scripts.pory"
	case TIME_NIGHT, Route29_WomanNearCherrygrove_5
# 32 "data/maps/Route29/scripts.pory"
	case TIME_EVENING, Route29_WomanNearCherrygrove_5
# 35 "data/maps/Route29/scripts.pory"
	msgbox Route29_WomanNearCherrygrove_Text_4
Route29_WomanNearCherrygrove_1:
# 37 "data/maps/Route29/scripts.pory"
	release
	return

Route29_WomanNearCherrygrove_3:
# 28 "data/maps/Route29/scripts.pory"
	msgbox Route29_WomanNearCherrygrove_Text_1
	goto Route29_WomanNearCherrygrove_1

Route29_WomanNearCherrygrove_4:
# 30 "data/maps/Route29/scripts.pory"
	msgbox Route29_WomanNearCherrygrove_Text_2
	goto Route29_WomanNearCherrygrove_1

Route29_WomanNearCherrygrove_5:
# 33 "data/maps/Route29/scripts.pory"
	msgbox Route29_WomanNearCherrygrove_Text_3
	goto Route29_WomanNearCherrygrove_1


Route29_MiddleBoy::
# 41 "data/maps/Route29/scripts.pory"
	lock
# 42 "data/maps/Route29/scripts.pory"
	msgbox Route29_MiddleBoy_Text_0
# 43 "data/maps/Route29/scripts.pory"
	release
	return


Route29_CherrygroveSign_Text_0:
# 7 "data/maps/Route29/scripts.pory"
	.string "West to CHERRYGROVE CITY$"

Route29_NewBarkSign_Text_0:
# 13 "data/maps/Route29/scripts.pory"
	.string "East to NEW BARK TOWN$"

Route29_ManNearGate_Text_0:
# 19 "data/maps/Route29/scripts.pory"
	.string "Hello there!\p"
	.string "I wanted to take a break, so I saved to\n"
	.string "record my progress.\p"
	.string "I'm not as young as I meant to and this\n"
	.string "road is all overgrown!$"

Route29_WomanNearCherrygrove_Text_0:
# 25 "data/maps/Route29/scripts.pory"
	.string "Hi, I'm always looking out for new\n"
	.string "POKéMON.$"

Route29_WomanNearCherrygrove_Text_1:
# 28 "data/maps/Route29/scripts.pory"
	.string "I'm looking for POKéMON that are only\n"
	.string "found in the morning.\p"
	.string "I heard you can find LEDYBA here in the\n"
	.string "morning!$"

Route29_WomanNearCherrygrove_Text_2:
# 30 "data/maps/Route29/scripts.pory"
	.string "Some POKéMON are easier to find during\n"
	.string "different times.\p"
	.string "I heard it's easier to find HOPPIP here\n"
	.string "during the day!$"

Route29_WomanNearCherrygrove_Text_3:
# 33 "data/maps/Route29/scripts.pory"
	.string "I'm looking for POKéMON that are only\n"
	.string "found at night.\p"
	.string "I heard you can find SPINARAK here at\n"
	.string "night!$"

Route29_WomanNearCherrygrove_Text_4:
# 35 "data/maps/Route29/scripts.pory"
	.string "You can find different POKéMON at different time of day.\pBut it's not Morning, Day, Evening, or Night right now!\pWhat time does that mean it is?$"

Route29_MiddleBoy_Text_0:
# 42 "data/maps/Route29/scripts.pory"
	.string "That's a cool POKéMON!\p"
	.string "Be sure to stay out of the tall grass if\n"
	.string "it's too injured or weak.\p"
	.string "That's where all the wild POKéMON are.$"
