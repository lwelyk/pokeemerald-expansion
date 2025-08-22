NewBarkTown_MapScripts::
	.byte 0


NewBarkTown_Woman::
# 12 "data/maps/NewBarkTown/scripts.pory"
	lock
# 13 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 14 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Woman_Text_0
# 15 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_FatMan::
# 19 "data/maps/NewBarkTown/scripts.pory"
	lock
# 20 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 21 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_FatMan_Text_0
# 22 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_Lyra::
# 26 "data/maps/NewBarkTown/scripts.pory"
	compare VAR_INTRO_STATE, 2
	goto_if_eq NewBarkTown_Lyra_1
# 37 "data/maps/NewBarkTown/scripts.pory"
	lock
# 38 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 39 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Lyra_Text_3
# 40 "data/maps/NewBarkTown/scripts.pory"
	release
	return

NewBarkTown_Lyra_1:
# 27 "data/maps/NewBarkTown/scripts.pory"
	lock
# 28 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 29 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Lyra_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/NewBarkTown/scripts.pory"
	applymovement 5, LyraExclamation
# 31 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Lyra_Text_1
# 32 "data/maps/NewBarkTown/scripts.pory"
	release
# 33 "data/maps/NewBarkTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LYRA_OPTIONAL_FIRST_FIGHT, NewBarkTown_LyraDefeated
# 34 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Lyra_Text_2
# 35 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_LyraMarill::
# 45 "data/maps/NewBarkTown/scripts.pory"
	lock
# 46 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 47 "data/maps/NewBarkTown/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 48 "data/maps/NewBarkTown/scripts.pory"
	waitse
# 49 "data/maps/NewBarkTown/scripts.pory"
	applymovement 4, MarillJumpAround
# 50 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 51 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_LyraMarill_Text_0
# 52 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 55 "data/maps/NewBarkTown/scripts.pory"
MarillJumpAround:
# 56 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 57 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up_down
# 58 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up_down
# 59 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

NewBarkTown_WomanStopsYouInitial::
# 63 "data/maps/NewBarkTown/scripts.pory"
	lock
# 64 "data/maps/NewBarkTown/scripts.pory"
	playBGM MUS_RG_PALLET, TRUE
# 65 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 66 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanStopsYouInitial_Text_0
# 67 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 68 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_WomanStopsYouNorth::
# 72 "data/maps/NewBarkTown/scripts.pory"
	call NewBarkTown_WomanStopsYouInitial
# 73 "data/maps/NewBarkTown/scripts.pory"
	lock
# 74 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalkTowardsYouNorth
# 75 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 76 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanWhatDoing
# 77 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalksYouBackNorth
# 78 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkedBackNorth
# 79 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanItsDangerousToGoAlone
# 80 "data/maps/NewBarkTown/scripts.pory"
	savebgm MUS_DUMMY
# 81 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 82 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_WomanStopsYouSouth::
# 86 "data/maps/NewBarkTown/scripts.pory"
	call NewBarkTown_WomanStopsYouInitial
# 87 "data/maps/NewBarkTown/scripts.pory"
	lock
# 88 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalkTowardsYouSouth
# 89 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 90 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanWhatDoing
# 91 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalksYouBackSouth
# 92 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkedBackSouth
# 93 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanItsDangerousToGoAlone
# 94 "data/maps/NewBarkTown/scripts.pory"
	savebgm MUS_DUMMY
# 95 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 96 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 107 "data/maps/NewBarkTown/scripts.pory"
WomanWalkTowardsYouNorth:
# 108 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 109 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 112 "data/maps/NewBarkTown/scripts.pory"
WomanWalkTowardsYouSouth:
# 113 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 114 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 115 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 118 "data/maps/NewBarkTown/scripts.pory"
WomanWalksYouBackNorth:
# 119 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 120 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 121 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 124 "data/maps/NewBarkTown/scripts.pory"
PlayerWalkedBackNorth:
# 125 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 126 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

# 129 "data/maps/NewBarkTown/scripts.pory"
WomanWalksYouBackSouth:
# 130 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 131 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 132 "data/maps/NewBarkTown/scripts.pory"
	walk_up
# 133 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 136 "data/maps/NewBarkTown/scripts.pory"
PlayerWalkedBackSouth:
# 137 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 138 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 139 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 140 "data/maps/NewBarkTown/scripts.pory"
	face_up
	step_end

NewBarkTown_TownSign::
# 144 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 145 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_TownSign_Text_0
# 146 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmHouseSign::
# 150 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 151 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmHouseSign_Text_0
# 152 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmLabSign::
# 156 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 157 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmLabSign_Text_0
# 158 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_PlayerHouseSign::
# 162 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 163 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 164 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_LyraHouseSign::
# 168 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 169 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 170 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_RivalPush::
# 174 "data/maps/NewBarkTown/scripts.pory"
	lock
# 175 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_0
# 176 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalTurnsMovement
# 177 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 178 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_1
# 179 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerStepsDown
# 180 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalStepsLeft
# 181 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 182 "data/maps/NewBarkTown/scripts.pory"
	delay 16
# 183 "data/maps/NewBarkTown/scripts.pory"
	playSE SE_LEDGE
# 184 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushedDown
# 185 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 186 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalReturns
# 187 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 188 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 195 "data/maps/NewBarkTown/scripts.pory"
LyraExclamation:
# 196 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 197 "data/maps/NewBarkTown/scripts.pory"
	delay_16
	step_end

# 200 "data/maps/NewBarkTown/scripts.pory"
RivalTurnsMovement:
# 201 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 202 "data/maps/NewBarkTown/scripts.pory"
	delay_16
# 203 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 206 "data/maps/NewBarkTown/scripts.pory"
RivalStepsLeft:
# 207 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 208 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 211 "data/maps/NewBarkTown/scripts.pory"
PlayerStepsDown:
# 212 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 213 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 214 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 215 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 218 "data/maps/NewBarkTown/scripts.pory"
PlayerPushedDown:
# 219 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 220 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 221 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 224 "data/maps/NewBarkTown/scripts.pory"
RivalReturns:
# 225 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

NewBarkTown_Woman_Text_0:
# 14 "data/maps/NewBarkTown/scripts.pory"
	.string "Wow, that's a cool POKéGEAR!\p"
	.string "I can't believe you're already old\n"
	.string "enough to have one of your own!$"

NewBarkTown_FatMan_Text_0:
# 21 "data/maps/NewBarkTown/scripts.pory"
	.string "Yo, {PLAYER}!\p"
	.string "I hear PROF. ELM discovered some new\n"
	.string "POKéMON species.$"

NewBarkTown_Lyra_Text_0:
# 29 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA: Hey {PLAYER}!\p"
	.string "Did you talk to PRO-$"

NewBarkTown_Lyra_Text_1:
# 31 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA: You did!\p"
	.string "You got a POKéMON now! That's so cool!\p"
	.string "Come on, we gotta have a battle now\n"
	.string "that you have one too!$"

NewBarkTown_Lyra_Text_2:
# 34 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA: Wow!$"

NewBarkTown_Lyra_Text_3:
# 39 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA: Hey {PLAYER}!\p"
	.string "MARILL and I were looking for you\n"
	.string "earlier!\p"
	.string "PROF. ELM wanted to talk to you about\n"
	.string "something, you should go see him!$"

NewBarkTown_LyraMarill_Text_0:
# 51 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA's MARILL seems happy to see you!$"

NewBarkTown_WomanStopsYouInitial_Text_0:
# 66 "data/maps/NewBarkTown/scripts.pory"
	.string "Wait, {PLAYER}!$"

NewBarkTown_TownSign_Text_0:
# 145 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\p"
	.string "The Town Where Winds of a New Beginning\n"
	.string "Blow.$"

NewBarkTown_ElmHouseSign_Text_0:
# 151 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM'S HOUSE$"

NewBarkTown_ElmLabSign_Text_0:
# 157 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM POKéMON LAB$"

NewBarkTown_PlayerHouseSign_Text_0:
# 163 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'S HOUSE$"

NewBarkTown_RivalPush_Text_0:
# 175 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pSo this is the famous ELM POKéMON LAB…$"

NewBarkTown_RivalPush_Text_1:
# 178 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pWhat are you staring at?$"

NewBarkTown_WomanWhatDoing::
# 99 "data/maps/NewBarkTown/scripts.pory"
	.string "What do you think you're doing?$"

NewBarkTown_WomanItsDangerousToGoAlone::
# 103 "data/maps/NewBarkTown/scripts.pory"
	.string "It's Dangerous to go out without a\n"
	.string "POKéMON!\p"
	.string "Wild POKéMON jump out of the grass on\n"
	.string "the way to the next town.$"

NewBarkTown_LyraDefeated::
# 191 "data/maps/NewBarkTown/scripts.pory"
	.string "Oh no, I guess Marill wasn't strong\n"
	.string "enough!$"
