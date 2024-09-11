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
# 35 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_MomScript_Text_4
NewBarkTown_PlayersHouse1F_MomScript_1:
# 38 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
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


NewBarkTown_PlayersHouse1F_MomLeft::
# 42 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 43 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_WalkMomLeft
# 44 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 45 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
# 46 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	call NewBarkTown_PlayersHouse1F_MomScript
# 47 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 48 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_ReturnMomLeft
# 49 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 50 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_MomRight::
# 54 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 55 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_WalkMomRight
# 56 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 57 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
# 58 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	call NewBarkTown_PlayersHouse1F_MomScript
# 59 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 60 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	applymovement LOCALID_MOM, NewBarkTown_PlayersHouse1F_ReturnMomRight
# 61 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	waitmovement 0
# 62 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_StoveScript::
# 66 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 67 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_StoveScript_Text_0
# 68 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_SinkScript::
# 72 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 73 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_SinkScript_Text_0
# 74 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return


NewBarkTown_PlayersHouse1F_FridgeScript::
# 78 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	lock
# 79 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_FridgeScript_Text_0
# 80 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	goto_if_set FLAG_GOT_FRIDGE_DRINK, NewBarkTown_PlayersHouse1F_FridgeScript_2
# 83 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	random 3
# 84 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	case 1, NewBarkTown_PlayersHouse1F_FridgeScript_7
# 87 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	case 2, NewBarkTown_PlayersHouse1F_FridgeScript_8
# 90 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	giveitem ITEM_FRESH_WATER
NewBarkTown_PlayersHouse1F_FridgeScript_5:
# 92 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	setflag FLAG_GOT_FRIDGE_DRINK
NewBarkTown_PlayersHouse1F_FridgeScript_1:
# 94 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	release
	return

NewBarkTown_PlayersHouse1F_FridgeScript_2:
# 81 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	msgbox NewBarkTown_PlayersHouse1F_FridgeScript_Text_1
	goto NewBarkTown_PlayersHouse1F_FridgeScript_1

NewBarkTown_PlayersHouse1F_FridgeScript_7:
# 86 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	giveitem ITEM_LEMONADE
	goto NewBarkTown_PlayersHouse1F_FridgeScript_5

NewBarkTown_PlayersHouse1F_FridgeScript_8:
# 88 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	giveitem ITEM_SODA_POP
	goto NewBarkTown_PlayersHouse1F_FridgeScript_5


# 97 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_WalkMomLeft:
# 98 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	emote_question_mark
# 99 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	delay_16
# 100 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	face_right
	step_end

# 103 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_WalkMomRight:
# 104 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	emote_question_mark
# 105 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	delay_16
# 106 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	walk_right
	step_end

# 109 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_ReturnMomLeft:
# 110 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	face_left
	step_end

# 113 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
NewBarkTown_PlayersHouse1F_ReturnMomRight:
# 114 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
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
	.string "Oh, {PLAYER}…!\p"
	.string "Our neighbor, PROF. ELM, was looking for\n"
	.string "you.\p"
	.string "He said he wanted you to do something\n"
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
	.string "What up?$"

NewBarkTown_PlayersHouse1F_StoveScript_Text_0:
# 67 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Mom's specialty!\n"
	.string "CINNABAR VOLCANO BURGER!$"

NewBarkTown_PlayersHouse1F_SinkScript_Text_0:
# 73 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "The sink is spotless! Mom likes it clean.$"

NewBarkTown_PlayersHouse1F_FridgeScript_Text_0:
# 79 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Let's see what's in the fridge...$"

NewBarkTown_PlayersHouse1F_FridgeScript_Text_1:
# 81 "data/maps/NewBarkTown_PlayersHouse1F/scripts.pory"
	.string "Looks like you need more groceries!$"
