BerryManHouse_MapScripts::
	.byte 0


BerryManHouse_BerryMan::
# 4 "data/maps/BerryManHouse/scripts.pory"
	lock
# 5 "data/maps/BerryManHouse/scripts.pory"
	faceplayer
# 6 "data/maps/BerryManHouse/scripts.pory"
	goto_if_set FLAG_MET_BERRY_MAN, BerryManHouse_BerryMan_2
# 9 "data/maps/BerryManHouse/scripts.pory"
	msgbox BerryManHouse_BerryMan_Text_1
# 10 "data/maps/BerryManHouse/scripts.pory"
	giveitem ITEM_CHERI_BERRY
# 11 "data/maps/BerryManHouse/scripts.pory"
	setflag FLAG_MET_BERRY_MAN
BerryManHouse_BerryMan_1:
# 13 "data/maps/BerryManHouse/scripts.pory"
	release
	return

BerryManHouse_BerryMan_2:
# 7 "data/maps/BerryManHouse/scripts.pory"
	msgbox BerryManHouse_BerryMan_Text_0
	goto BerryManHouse_BerryMan_1


BerryManHouse_BerryMan_Text_0:
# 7 "data/maps/BerryManHouse/scripts.pory"
	.string "Check trees for BERRIES. They just\n"
	.string "drop right off when they're ripe!$"

BerryManHouse_BerryMan_Text_1:
# 9 "data/maps/BerryManHouse/scripts.pory"
	.string "You know, POKéMON eat berries if you\n"
	.string "give them one to hold.\n"
	.string "It makes them healthier and keeps them\l"
	.string "going in battle!\n"
	.string "Here, I'll share one with you!$"
