NewBarkTown_ElmsHouse1F_MapScripts::
	.byte 0


ElmsHouse1F_ElmsWife::
# 7 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 8 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	faceplayer
# 9 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_ElmsWife_Text_0
# 10 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_ElmsSon::
# 14 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 15 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	faceplayer
# 16 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_ElmsSon_Text_0
# 17 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_Computer::
# 21 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 22 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_0
# 23 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_1, MSGBOX_YESNO
# 24 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsHouse1F_Computer_2
# 39 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_4
ElmsHouse1F_Computer_1:
# 41 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return

ElmsHouse1F_Computer_2:
# 26 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	special EnterCode
# 27 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	waitstate
# 28 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	special GetCodeFeedback
# 29 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq ElmsHouse1F_Computer_5
# 34 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_3
	goto ElmsHouse1F_Computer_1

ElmsHouse1F_Computer_5:
# 31 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Computer_Text_2
	goto ElmsHouse1F_Computer_1


ElmsHouse1F_Trash::
# 45 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 46 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Trash_Text_0
# 47 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_Shelf::
# 50 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 51 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_Shelf_Text_0
# 52 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	release
	return


ElmsHouse1F_N64::
# 56 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	lock
# 57 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	msgbox ElmsHouse1F_N64_Text_0
	return


ElmsHouse1F_ElmsWife_Text_0:
# 9 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Hi, {PLAYER}!\p"
	.string "My husband's always so busy at his\n"
	.string "lab--I hope he's OK.\p"
	.string "Sometimes when he's caught up in his\n"
	.string "research, he even forgets to eat.$"

ElmsHouse1F_ElmsSon_Text_0:
# 16 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "My mom says that if I wanna be a\n"
	.string "POKéMON Professor when I grow up, I'm\l"
	.string "going to need to study more.\p"
	.string "But I also want to play games.\p"
	.string "Life is full of decisions, that's why my\n"
	.string "dad always says.$"

ElmsHouse1F_Computer_Text_0:
# 22 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "The computer screen says ADRIAN ELM\n"
	.string "and is asking for a password.$"

ElmsHouse1F_Computer_Text_1:
# 23 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Should you try to guess it?$"

ElmsHouse1F_Computer_Text_2:
# 31 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Wow, you got the password. It'll do\n"
	.string "something eventually. Probably make a\l"
	.string "special Pokemon appear somewhere. idk.$"

ElmsHouse1F_Computer_Text_3:
# 34 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "That doesn't seem to be the right\n"
	.string "password.$"

ElmsHouse1F_Computer_Text_4:
# 39 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "That's probably a good idea. He may not\n"
	.string "want you on his computer.$"

ElmsHouse1F_Trash_Text_0:
# 46 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "Full of papers with complicated\n"
	.string "scientific terms on them.\p"
	.string "There are also several poorly-drawn\n"
	.string "pictures of some sort of flowering bush\l"
	.string "labeled Deutzia.$"

ElmsHouse1F_Shelf_Text_0:
# 51 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
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
# 57 "data/maps/NewBarkTown_ElmsHouse1F/scripts.pory"
	.string "PROFESSOR ELM's son is playing the\n"
	.string "latest MARIO game on his NINTENDO 64.$"
