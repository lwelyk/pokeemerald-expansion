NewBarkTown_FriendlyRivalHouse1F_MapScripts::
	.byte 0


FriendlyRivalHouse1F_LyrasMom::
# 6 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq FriendlyRivalHouse1F_LyrasMom_1
# 12 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	lock
# 13 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	faceplayer
# 14 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	msgbox FriendlyRivalHouse1F_LyrasMom_Text_1
# 15 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	release
	return

FriendlyRivalHouse1F_LyrasMom_1:
# 7 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	lock
# 8 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	faceplayer
# 9 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	msgbox FriendlyRivalHouse1F_LyrasMom_Text_0
# 10 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	release
	return


FriendlyRivalHouse1F_LyrasMom_Text_0:
# 9 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	.string "Hi, {PLAYER}! Lyra is out playing and\n"
	.string "helping the Professor as usual.\p"
	.string "I think she's even busier than I am!$"

FriendlyRivalHouse1F_LyrasMom_Text_1:
# 14 "data/maps/NewBarkTown_FriendlyRivalHouse1F/scripts.pory"
	.string "Hi, {PLAYER}!\p"
	.string "Lyra is outside playing games with her\n"
	.string "POKéMON as usual.\p"
	.string "You didn't bring your POKéMON?\p"
	.string "...Oh, right.\p"
	.string "You don't have your own POKéMON yet.\n"
	.string "Well, I hope I didn't hurt your feelings\l"
	.string "{PLAYER}.$"
