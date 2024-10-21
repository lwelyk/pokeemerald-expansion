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
	lock
# 27 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 28 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Lyra_Text_0
# 29 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_LyraMarill::
# 33 "data/maps/NewBarkTown/scripts.pory"
	lock
# 34 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 35 "data/maps/NewBarkTown/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 36 "data/maps/NewBarkTown/scripts.pory"
	waitse
# 37 "data/maps/NewBarkTown/scripts.pory"
	applymovement 4, MarillJumpAround
# 38 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 39 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_LyraMarill_Text_0
# 40 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 43 "data/maps/NewBarkTown/scripts.pory"
MarillJumpAround:
# 44 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 45 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up_down
# 46 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up_down
# 47 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

NewBarkTown_WomanStopsYouInitial::
# 51 "data/maps/NewBarkTown/scripts.pory"
	lock
# 52 "data/maps/NewBarkTown/scripts.pory"
	playBGM MUS_RG_PALLET, TRUE
# 53 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 54 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanStopsYouInitial_Text_0
# 55 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 56 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_WomanStopsYouNorth::
# 60 "data/maps/NewBarkTown/scripts.pory"
	call NewBarkTown_WomanStopsYouInitial
# 61 "data/maps/NewBarkTown/scripts.pory"
	lock
# 62 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalkTowardsYouNorth
# 63 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanWhatDoing
# 65 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalksYouBackNorth
# 66 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkedBackNorth
# 67 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanItsDangerousToGoAlone
# 68 "data/maps/NewBarkTown/scripts.pory"
	savebgm MUS_DUMMY
# 69 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_WomanStopsYouSouth::
# 74 "data/maps/NewBarkTown/scripts.pory"
	call NewBarkTown_WomanStopsYouInitial
# 75 "data/maps/NewBarkTown/scripts.pory"
	lock
# 76 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalkTowardsYouSouth
# 77 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 78 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanWhatDoing
# 79 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalksYouBackSouth
# 80 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkedBackSouth
# 81 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanItsDangerousToGoAlone
# 82 "data/maps/NewBarkTown/scripts.pory"
	savebgm MUS_DUMMY
# 83 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 84 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 95 "data/maps/NewBarkTown/scripts.pory"
WomanWalkTowardsYouNorth:
# 96 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 97 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 100 "data/maps/NewBarkTown/scripts.pory"
WomanWalkTowardsYouSouth:
# 101 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 102 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 103 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 106 "data/maps/NewBarkTown/scripts.pory"
WomanWalksYouBackNorth:
# 107 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 108 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 109 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 112 "data/maps/NewBarkTown/scripts.pory"
PlayerWalkedBackNorth:
# 113 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 114 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

# 117 "data/maps/NewBarkTown/scripts.pory"
WomanWalksYouBackSouth:
# 118 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 119 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 120 "data/maps/NewBarkTown/scripts.pory"
	walk_up
# 121 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 124 "data/maps/NewBarkTown/scripts.pory"
PlayerWalkedBackSouth:
# 125 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 126 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 127 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 128 "data/maps/NewBarkTown/scripts.pory"
	face_up
	step_end

NewBarkTown_TownSign::
# 132 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 133 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_TownSign_Text_0
# 134 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmHouseSign::
# 138 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 139 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmHouseSign_Text_0
# 140 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmLabSign::
# 144 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 145 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmLabSign_Text_0
# 146 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_PlayerHouseSign::
# 150 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 151 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 152 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_LyraHouseSign::
# 156 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 157 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 158 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_RivalPush::
# 162 "data/maps/NewBarkTown/scripts.pory"
	lock
# 163 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_0
# 164 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalTurnsMovement
# 165 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_1
# 167 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerStepsDown
# 168 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalStepsLeft
# 169 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/NewBarkTown/scripts.pory"
	delay 16
# 171 "data/maps/NewBarkTown/scripts.pory"
	playSE SE_LEDGE
# 172 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushedDown
# 173 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 174 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalReturns
# 175 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 176 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 179 "data/maps/NewBarkTown/scripts.pory"
RivalTurnsMovement:
# 180 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 181 "data/maps/NewBarkTown/scripts.pory"
	delay_16
# 182 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 185 "data/maps/NewBarkTown/scripts.pory"
RivalStepsLeft:
# 186 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 187 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 190 "data/maps/NewBarkTown/scripts.pory"
PlayerStepsDown:
# 191 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 192 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 193 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 194 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 197 "data/maps/NewBarkTown/scripts.pory"
PlayerPushedDown:
# 198 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 199 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 200 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 203 "data/maps/NewBarkTown/scripts.pory"
RivalReturns:
# 204 "data/maps/NewBarkTown/scripts.pory"
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
# 28 "data/maps/NewBarkTown/scripts.pory"
	.string "Hey {PLAYER}!\p"
	.string "MARILL and I were looking for you\n"
	.string "earlier!\p"
	.string "PROF. ELM wanted to talk to you about\n"
	.string "something, you should go see him!$"

NewBarkTown_LyraMarill_Text_0:
# 39 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA's MARILL seems happy to see you!$"

NewBarkTown_WomanStopsYouInitial_Text_0:
# 54 "data/maps/NewBarkTown/scripts.pory"
	.string "Wait, {PLAYER}!$"

NewBarkTown_TownSign_Text_0:
# 133 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\p"
	.string "The Town Where Winds of a New Beginning\n"
	.string "Blow.$"

NewBarkTown_ElmHouseSign_Text_0:
# 139 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM'S HOUSE$"

NewBarkTown_ElmLabSign_Text_0:
# 145 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM POKéMON LAB$"

NewBarkTown_PlayerHouseSign_Text_0:
# 151 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'S HOUSE$"

NewBarkTown_RivalPush_Text_0:
# 163 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pSo this is the famous ELM POKéMON LAB…$"

NewBarkTown_RivalPush_Text_1:
# 166 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pWhat are you staring at?$"

NewBarkTown_WomanWhatDoing::
# 87 "data/maps/NewBarkTown/scripts.pory"
	.string "What do you think you're doing?$"

NewBarkTown_WomanItsDangerousToGoAlone::
# 91 "data/maps/NewBarkTown/scripts.pory"
	.string "It's Dangerous to go out without a\n"
	.string "POKéMON!\p"
	.string "Wild POKéMON jump out of the grass on\n"
	.string "the way to the next town.$"
