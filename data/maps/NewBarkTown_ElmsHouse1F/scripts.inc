NewBarkTown_ElmsHouse1F_MapScripts::
	.byte 0


ElmsHouse1F_ElmsWife::
# 11 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 12 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	faceplayer
# 13 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_ElmsWife_Text_0
# 14 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_ElmsSon::
# 18 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 19 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	faceplayer
# 20 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_ElmsSon_Text_0
# 21 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_Computer::
# 25 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 26 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_0
# 27 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_1, MSGBOX_YESNO
# 28 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsHouse1F_Computer_2
# 43 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_4
ElmsHouse1F_Computer_1:
# 45 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return

ElmsHouse1F_Computer_2:
# 30 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	special EnterCode
# 31 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	waitstate
# 32 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	special GetCodeFeedback
# 33 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ElmsHouse1F_Computer_5
# 38 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_3
	goto ElmsHouse1F_Computer_1

ElmsHouse1F_Computer_5:
# 35 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_2
	goto ElmsHouse1F_Computer_1


ElmsHouse1F_Trash::
# 49 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 50 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Trash_Text_0
# 51 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_Shelf::
# 54 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 55 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Shelf_Text_0
# 56 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_N64::
# 60 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 61 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_N64_Text_0
	return


ElmsHouse1F_ElmsWife_Text_0:
# 13 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Hi, {PLAYER}!\p"
	.string "My husband's always so busy at his\n"
	.string "lab--I hope he's OK.\p"
	.string "Sometimes when he's caught up in his\n"
	.string "research, he even forgets to eat.$"

ElmsHouse1F_ElmsSon_Text_0:
# 20 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "My mom says that if I wanna be a\n"
	.string "POKéMON Professor when I grow up, I'm\l"
	.string "going to need to study more.\p"
	.string "But I also want to play games.\p"
	.string "Life is full of decisions, that's why my\n"
	.string "dad always says.$"

ElmsHouse1F_Computer_Text_0:
# 26 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "The computer screen says ADRIAN ELM\n"
	.string "and is asking for a password.$"

ElmsHouse1F_Computer_Text_1:
# 27 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Should you try to guess it?$"

ElmsHouse1F_Computer_Text_2:
# 35 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Wow, you got the password. It'll do\n"
	.string "something eventually.$"

ElmsHouse1F_Computer_Text_3:
# 38 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "That doesn't seem to be the right\n"
	.string "password.$"

ElmsHouse1F_Computer_Text_4:
# 43 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "THat's probably a good idea. He may not\n"
	.string "want you on his computer.$"

ElmsHouse1F_Trash_Text_0:
# 50 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Full of papers with complicated\n"
	.string "scientific terms on them.\p"
	.string "There are also several poorly-drawn\n"
	.string "pictures of some sort of flowering bush\l"
	.string "labeled Deutzia.$"

ElmsHouse1F_Shelf_Text_0:
# 55 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "This shelf is full of difficult-looking\n"
	.string "scientific books.\p"
	.string "POKéMON EGGs - Fiction No More\p"
	.string "Who's that POKéMON? - A Guide to\n"
	.string "Identifying and Classifying New\l"
	.string "Species.\p"
	.string "On the Origin of Species by Means of\n"
	.string "Eeveelution\p"
	.string "Has PROFESSOR ELM even read all of\n"
	.string "these?$"

ElmsHouse1F_N64_Text_0:
# 61 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "PROFESSOR ELM's son is playing the\n"
	.string "latest MARIO game on his NINTENDO 64.$"
