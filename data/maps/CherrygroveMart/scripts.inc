CherrygroveMart_MapScripts::
	.byte 0


CherrygroveMartClerk::
# 4 "data/maps/CherrygroveMart/scripts.pory"
	lock
# 5 "data/maps/CherrygroveMart/scripts.pory"
	faceplayer
# 6 "data/maps/CherrygroveMart/scripts.pory"
	msgbox gText_HowMayIServeYou
# 7 "data/maps/CherrygroveMart/scripts.pory"
	goto_if_set FLAG_HAVE_NOT_REPORTED_SILVER, CherrygroveMartClerk_2
# 10 "data/maps/CherrygroveMart/scripts.pory"
	pokemart 0
CherrygroveMartClerk_1:
# 12 "data/maps/CherrygroveMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 13 "data/maps/CherrygroveMart/scripts.pory"
	release
	return

CherrygroveMartClerk_2:
# 8 "data/maps/CherrygroveMart/scripts.pory"
	pokemart CherryGroveMartPreDex
	goto CherrygroveMartClerk_1


CherrygroveMartClerk2::
# 17 "data/maps/CherrygroveMart/scripts.pory"
	lock
# 18 "data/maps/CherrygroveMart/scripts.pory"
	faceplayer
# 19 "data/maps/CherrygroveMart/scripts.pory"
	msgbox gText_HowMayIServeYou
# 20 "data/maps/CherrygroveMart/scripts.pory"
	pokemart CherryGroveMartSpecialItems
# 21 "data/maps/CherrygroveMart/scripts.pory"
	msgbox gText_PleaseComeAgain
# 22 "data/maps/CherrygroveMart/scripts.pory"
	release
	return


	.align 2
# 25 "data/maps/CherrygroveMart/scripts.pory"
CherryGroveMartPreDex:
# 26 "data/maps/CherrygroveMart/scripts.pory"
	.2byte ITEM_POTION
# 27 "data/maps/CherrygroveMart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 28 "data/maps/CherrygroveMart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_NONE

	.align 2
# 31 "data/maps/CherrygroveMart/scripts.pory"
CherryGroveMartSpecialItems:
# 32 "data/maps/CherrygroveMart/scripts.pory"
	.2byte ITEM_HEAL_BALL
# 33 "data/maps/CherrygroveMart/scripts.pory"
	.2byte ITEM_FAB_MAIL
	.2byte ITEM_NONE

CherrygroveMart_AceTrainerM::
# 37 "data/maps/CherrygroveMart/scripts.pory"
	lock
# 38 "data/maps/CherrygroveMart/scripts.pory"
	faceplayer
# 39 "data/maps/CherrygroveMart/scripts.pory"
	goto_if_set FLAG_HAVE_NOT_REPORTED_SILVER, CherrygroveMart_AceTrainerM_2
# 42 "data/maps/CherrygroveMart/scripts.pory"
	msgbox CherrygroveMart_AceTrainerM_Text_1
CherrygroveMart_AceTrainerM_1:
# 44 "data/maps/CherrygroveMart/scripts.pory"
	release
	return

CherrygroveMart_AceTrainerM_2:
# 40 "data/maps/CherrygroveMart/scripts.pory"
	msgbox CherrygroveMart_AceTrainerM_Text_0
	goto CherrygroveMart_AceTrainerM_1


CherrygroveMart_Youngster::
# 48 "data/maps/CherrygroveMart/scripts.pory"
	lock
# 49 "data/maps/CherrygroveMart/scripts.pory"
	faceplayer
# 50 "data/maps/CherrygroveMart/scripts.pory"
	msgbox CherrygroveMart_Youngster_Text_0
# 51 "data/maps/CherrygroveMart/scripts.pory"
	release
	return


CherrygroveMart_AceTrainerM_Text_0:
# 40 "data/maps/CherrygroveMart/scripts.pory"
	.string "They're all out of POKé BALLS here!\p"
	.string "When will they get more of them? I got\n"
	.string "new POKéMOn to catch!$"

CherrygroveMart_AceTrainerM_Text_1:
# 42 "data/maps/CherrygroveMart/scripts.pory"
	.string "POKé BALLS are back in stock!\n"
	.string "Now I can catch more POKéMON!$"

CherrygroveMart_Youngster_Text_0:
# 50 "data/maps/CherrygroveMart/scripts.pory"
	.string "I was walking in the tall grass, when a\n"
	.string "spider POKéMON bit my PIDGEY!\p"
	.string "My PIDGEY was poisoned and I kept\n"
	.string "going, but my PIDGEY kept getting\l"
	.string "weaker and weaker.\p"
	.string "He didn't feint, but with only 1 HP left,\n"
	.string "even a SENTRET was able to knock it\l"
	.string "out.\p"
	.string "I'm keeping an ANTIDOTE with me from\n"
	.string "now on.$"
