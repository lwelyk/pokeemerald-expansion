NewBarkTown_PlayersHouse1F_MapScripts::
	.byte 0


NewBarkTown_PlayersHouse1F_NeighborScript::
# 6 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 7 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	faceplayer
# 8 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_NeighborScript_Text_0
# 9 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_MomScript::
# 13 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 14 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	faceplayer
# 15 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	switch VAR_INTRO_STATE
# 16 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	case 0, NewBarkTown_PlayersHouse1F_MomScript_3
# 32 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	case 1, NewBarkTown_PlayersHouse1F_MomScript_4
# 34 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	case 2, NewBarkTown_PlayersHouse1F_MomScript_5
# 37 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_5
NewBarkTown_PlayersHouse1F_MomScript_1:
# 40 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return

NewBarkTown_PlayersHouse1F_MomScript_3:
# 17 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_0
# 18 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 19 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 20 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 21 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 22 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_1
# 23 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitfanfare
# 24 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitbuttonpress
# 25 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_2
# 26 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 27 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	special StartWallClock
# 28 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitstate
# 29 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 30 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	setvar VAR_INTRO_STATE, 1
# 31 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_3
	goto NewBarkTown_PlayersHouse1F_MomScript_1

NewBarkTown_PlayersHouse1F_MomScript_4:
# 33 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_3
	goto NewBarkTown_PlayersHouse1F_MomScript_1

NewBarkTown_PlayersHouse1F_MomScript_5:
# 35 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_4
	goto NewBarkTown_PlayersHouse1F_MomScript_1


NewBarkTown_PlayersHouse1F_MomLeft::
# 44 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 45 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_WalkMomLeft
# 46 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 47 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
# 48 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	call NewBarkTown_PlayersHouse1F_MomScript
# 49 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 50 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_ReturnMomLeft
# 51 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 52 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_MomRight::
# 56 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 57 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_WalkMomRight
# 58 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 59 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
# 60 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	call NewBarkTown_PlayersHouse1F_MomScript
# 61 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 62 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_ReturnMomRight
# 63 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 64 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_StoveScript::
# 68 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 69 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_StoveScript_Text_0
# 70 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_SinkScript::
# 74 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 75 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_SinkScript_Text_0
# 76 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_FridgeScript::
# 80 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 81 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_FridgeScript_Text_0
# 82 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	goto_if_set FLAG_GOT_FRIDGE_DRINK, NewBarkTown_PlayersHouse1F_FridgeScript_2
# 85 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitfanfare
# 87 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	random 3
# 88 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	switch VAR_RESULT
# 89 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	case 1, NewBarkTown_PlayersHouse1F_FridgeScript_7
# 91 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	case 2, NewBarkTown_PlayersHouse1F_FridgeScript_8
# 94 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
NewBarkTown_PlayersHouse1F_FridgeScript_5:
# 96 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	setflag FLAG_GOT_FRIDGE_DRINK
NewBarkTown_PlayersHouse1F_FridgeScript_1:
# 98 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return

NewBarkTown_PlayersHouse1F_FridgeScript_2:
# 83 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_FridgeScript_Text_1
	goto NewBarkTown_PlayersHouse1F_FridgeScript_1

NewBarkTown_PlayersHouse1F_FridgeScript_7:
# 90 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	giveitem ITEM_LEMONADE
	goto NewBarkTown_PlayersHouse1F_FridgeScript_5

NewBarkTown_PlayersHouse1F_FridgeScript_8:
# 92 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	giveitem ITEM_SODA_POP
	goto NewBarkTown_PlayersHouse1F_FridgeScript_5


# 101 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_WalkMomLeft:
# 102 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	emote_question_mark
# 103 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	delay_16
# 104 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	face_right
	step_end

# 107 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_WalkMomRight:
# 108 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	emote_question_mark
# 109 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	delay_16
# 110 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	walk_right
	step_end

# 113 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_ReturnMomLeft:
# 114 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	face_left
	step_end

# 117 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_ReturnMomRight:
# 118 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	walk_left
	step_end

NewBarkTown_PlayersHouse1F_NeighborScript_Text_0:
# 8 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "{PLAYER}, have you heard?\n"
	.string "My daughter is adamant about becoming\l"
	.string "PROF. ELM's assistant.\l"
	.string "She really loves POKéMON!$"

NewBarkTown_PlayersHouse1F_MomScript_Text_0:
# 17 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Oh, {PLAYER}, you're up!\p"
	.string "Your friend Lyra was just here, and she\n"
	.string "said PROF. ELM, was looking for you.\p"
	.string "She said he wanted you to do something\n"
	.string "for him.\p"
	.string "Oh! I almost forgot!\p"
	.string "Your POKéGEAR is back from the repair\n"
	.string "shop.\p"
	.string "Here you go!$"

NewBarkTown_PlayersHouse1F_MomScript_Text_1:
# 22 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "You received the POKéGEAR!$"

NewBarkTown_PlayersHouse1F_MomScript_Text_2:
# 25 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Oh, the time isn't set!\n"
	.string "You musn't forget that!$"

NewBarkTown_PlayersHouse1F_MomScript_Text_3:
# 31 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "PROF. ELM is waiting for you.\n"
	.string "Hurry up, baby!$"

NewBarkTown_PlayersHouse1F_MomScript_Text_4:
# 35 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Oh! {PLAYER}! That's such a cute\n"
	.string "POKéMON you have. PROFESSOR ELM must\l"
	.string "have given it to you?\p"
	.string "Oh, PROFESSOR ELM has a task for you,\n"
	.string "you say?\p"
	.string "...\p"
	.string "I see. That sounds a little difficult,\n"
	.string "but it also sounds important and you\l"
	.string "should be proud someone like PROFESSOR\l"
	.string "ELM is able to rely on you!$"

NewBarkTown_PlayersHouse1F_MomScript_Text_5:
# 37 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "What up?$"

NewBarkTown_PlayersHouse1F_StoveScript_Text_0:
# 69 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Mom's specialty!\n"
	.string "CINNABAR VOLCANO BURGER!$"

NewBarkTown_PlayersHouse1F_SinkScript_Text_0:
# 75 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "The sink is spotless! Mom likes it clean.$"

NewBarkTown_PlayersHouse1F_FridgeScript_Text_0:
# 81 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Let's see what's in the fridge...$"

NewBarkTown_PlayersHouse1F_FridgeScript_Text_1:
# 83 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Looks like you need more groceries!$"
