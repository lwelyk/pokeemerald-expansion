NewBarkTown_FriendlyRivalHouse2F_MapScripts::
	.byte 0


NewBarkTown_FriendlyRivalHouse2F_LyraComputer::
# 6 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	lockall
# 7 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_0
# 8 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_1, MSGBOX_YESNO
# 9 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewBarkTown_FriendlyRivalHouse2F_LyraComputer_2
# 24 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_4
NewBarkTown_FriendlyRivalHouse2F_LyraComputer_1:
# 25 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	releaseall
	return

NewBarkTown_FriendlyRivalHouse2F_LyraComputer_2:
# 11 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	special EnterCode
# 12 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	waitstate
# 13 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	special GetCodeFeedback
# 14 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq NewBarkTown_FriendlyRivalHouse2F_LyraComputer_5
# 19 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_3
	goto NewBarkTown_FriendlyRivalHouse2F_LyraComputer_1

NewBarkTown_FriendlyRivalHouse2F_LyraComputer_5:
# 16 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_2
	goto NewBarkTown_FriendlyRivalHouse2F_LyraComputer_1


NewBarkTown_FriendlyRivalHouse2F_N64::
# 29 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	lockall
# 30 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_N64_Text_0
# 31 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	releaseall
	return


NewBarkTown_FriendlyRivalHouse2F_Poster::
# 35 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	lockall
# 36 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_Poster_Text_0
# 37 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	releaseall
	return


NewBarkTown_FriendlyRivalHouse2F_Cabinet::
# 41 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	lockall
# 42 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_Cabinet_Text_0
# 43 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	releaseall
	return


NewBarkTown_FriendlyRivalHouse2F_Flowers::
# 47 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	lockall
# 48 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_Flowers_Text_0
# 49 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	releaseall
	return


NewBarkTown_FriendlyRivalHouse2F_Shelf::
# 53 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	lockall
# 54 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	msgbox NewBarkTown_FriendlyRivalHouse2F_Shelf_Text_0
# 55 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	releaseall
	return


NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_0:
# 7 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "The computer screen says LYRA and is\n"
	.string "asking for a password.$"

NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_1:
# 8 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "Should you try to guess it?$"

NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_2:
# 16 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "Wow, you got the password. It'll do\n"
	.string "something eventually. Probably make a\l"
	.string "special Pokemon appear somewhere. idk.$"

NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_3:
# 19 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "That doesn't seem to be the right\n"
	.string "password.$"

NewBarkTown_FriendlyRivalHouse2F_LyraComputer_Text_4:
# 24 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "That's probably a good idea. She may not\n"
	.string "want you on his computer.$"

NewBarkTown_FriendlyRivalHouse2F_N64_Text_0:
# 30 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "It's LYRA's N64.\p"
	.string "She's still mad at you for beating\n"
	.string "STARFOX 64 before she could.$"

NewBarkTown_FriendlyRivalHouse2F_Poster_Text_0:
# 36 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "LYRA got this poster from a concert of\n"
	.string "an idol she liked.\p"
	.string "The singer uses her POKéMON team as\n"
	.string "backup singers.\p"
	.string "It's amazing how mnay jobs POKéMON can\n"
	.string "do.$"

NewBarkTown_FriendlyRivalHouse2F_Cabinet_Text_0:
# 42 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "It's rude to go through other people's\n"
	.string "things!$"

NewBarkTown_FriendlyRivalHouse2F_Flowers_Text_0:
# 48 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "LYRA used to take care of these\n"
	.string "flowers herself.\p"
	.string "For the sake of the flowers, her mom\n"
	.string "took over.$"

NewBarkTown_FriendlyRivalHouse2F_Shelf_Text_0:
# 54 "data/maps/NewBarkTown_FriendlyRivalHouse2F/scripts.pory"
	.string "LYRA's bookshelf is full of magazines\n"
	.string "and video game strategy guides.\p"
	.string "There's also a strange picture LYRA\n"
	.string "drew of herself next to a bird POKéMON\l"
	.string "that looks to be exactly as big as she\l"
	.string "is.$"
