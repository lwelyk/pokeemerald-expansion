NewBarkTown_MapScripts::
	.byte 0


NewBarkTown_TownSign::
# 13 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 14 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_TownSign_Text_0
# 15 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 16 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 17 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 18 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 19 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 20 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 21 "data/maps/NewBarkTown/scripts.pory"
	special SetUnlockedPokedexFlags
# 22 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 23 "data/maps/NewBarkTown/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 20, ITEM_NONE
# 24 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmHouseSign::
# 28 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 29 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmHouseSign_Text_0
# 30 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmLabSign::
# 34 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 35 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmLabSign_Text_0
# 36 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_PlayerHouseSign::
# 40 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 41 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 42 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_LyraHouseSign::
# 46 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 47 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 48 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_RivalPush::
# 52 "data/maps/NewBarkTown/scripts.pory"
	lock
# 53 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_0
# 54 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalTurnsMovement
# 55 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 56 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_1
# 57 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerStepsDown
# 58 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalStepsLeft
# 59 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 60 "data/maps/NewBarkTown/scripts.pory"
	delay 16
# 61 "data/maps/NewBarkTown/scripts.pory"
	playSE SE_LEDGE
# 62 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushedDown
# 63 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalReturns
# 65 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 66 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 69 "data/maps/NewBarkTown/scripts.pory"
RivalTurnsMovement:
# 70 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 71 "data/maps/NewBarkTown/scripts.pory"
	delay_16
# 72 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 75 "data/maps/NewBarkTown/scripts.pory"
RivalStepsLeft:
# 76 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 77 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 80 "data/maps/NewBarkTown/scripts.pory"
PlayerStepsDown:
# 81 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 82 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 83 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 84 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 87 "data/maps/NewBarkTown/scripts.pory"
PlayerPushedDown:
# 88 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 89 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 90 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 93 "data/maps/NewBarkTown/scripts.pory"
RivalReturns:
# 94 "data/maps/NewBarkTown/scripts.pory"
	walk_up
# 95 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

NewBarkTown_TownSign_Text_0:
# 14 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\p"
	.string "The Town Where Winds of a New Beginning\n"
	.string "Blow.$"

NewBarkTown_ElmHouseSign_Text_0:
# 29 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM'S HOUSE$"

NewBarkTown_ElmLabSign_Text_0:
# 35 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM POKéMON LAB$"

NewBarkTown_PlayerHouseSign_Text_0:
# 41 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'S HOUSE$"

NewBarkTown_RivalPush_Text_0:
# 53 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pSo this is the famous ELM POKéMON LAB…$"

NewBarkTown_RivalPush_Text_1:
# 56 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pWhat are you staring at?$"
