NewBarkTown_MapScripts::
	.byte 0


NewBarkTown_TownSign::
# 13 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 14 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_TownSign_Text_0
# 15 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmHouseSign::
# 19 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 20 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmHouseSign_Text_0
# 21 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmLabSign::
# 25 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 26 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmLabSign_Text_0
# 27 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_PlayerHouseSign::
# 31 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 32 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 33 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_LyraHouseSign::
# 37 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 38 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 39 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_RivalPush::
# 43 "data/maps/NewBarkTown/scripts.pory"
	lock
# 44 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_0
# 45 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalTurnsMovement
# 46 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 47 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_1
# 48 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerStepsDown
# 49 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalStepsLeft
# 50 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/NewBarkTown/scripts.pory"
	delay 16
# 52 "data/maps/NewBarkTown/scripts.pory"
	playSE SE_LEDGE
# 53 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushedDown
# 54 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 55 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalReturns
# 56 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 57 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 60 "data/maps/NewBarkTown/scripts.pory"
RivalTurnsMovement:
# 61 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 62 "data/maps/NewBarkTown/scripts.pory"
	delay_16
# 63 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 66 "data/maps/NewBarkTown/scripts.pory"
RivalStepsLeft:
# 67 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 68 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 71 "data/maps/NewBarkTown/scripts.pory"
PlayerStepsDown:
# 72 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 73 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 74 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 75 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 78 "data/maps/NewBarkTown/scripts.pory"
PlayerPushedDown:
# 79 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 80 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 81 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 84 "data/maps/NewBarkTown/scripts.pory"
RivalReturns:
# 85 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

NewBarkTown_TownSign_Text_0:
# 14 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\p"
	.string "The Town Where Winds of a New Beginning\n"
	.string "Blow.$"

NewBarkTown_ElmHouseSign_Text_0:
# 20 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM'S HOUSE$"

NewBarkTown_ElmLabSign_Text_0:
# 26 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM POKéMON LAB$"

NewBarkTown_PlayerHouseSign_Text_0:
# 32 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'S HOUSE$"

NewBarkTown_RivalPush_Text_0:
# 44 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pSo this is the famous ELM POKéMON LAB…$"

NewBarkTown_RivalPush_Text_1:
# 47 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pWhat are you staring at?$"
