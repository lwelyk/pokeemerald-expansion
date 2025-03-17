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
	msgbox NewBarkTown_Lyra_Text_0, MSGBOX_AUTOCLOSE
# 29 "data/maps/NewBarkTown/scripts.pory"
	applymovement 5, LyraExclamation
# 30 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Lyra_Text_1
# 31 "data/maps/NewBarkTown/scripts.pory"
	release
# 32 "data/maps/NewBarkTown/scripts.pory"
	trainerbattle_no_intro TRAINER_LYRA_OPTIONAL_FIRST_FIGHT, NewBarkTown_LyraDefeated
# 33 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_LyraMarill::
# 38 "data/maps/NewBarkTown/scripts.pory"
	lock
# 39 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 40 "data/maps/NewBarkTown/scripts.pory"
	playmoncry SPECIES_MARILL, CRY_MODE_NORMAL
# 41 "data/maps/NewBarkTown/scripts.pory"
	waitse
# 42 "data/maps/NewBarkTown/scripts.pory"
	applymovement 4, MarillJumpAround
# 43 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 44 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_LyraMarill_Text_0
# 45 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 48 "data/maps/NewBarkTown/scripts.pory"
MarillJumpAround:
# 49 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 50 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up_down
# 51 "data/maps/NewBarkTown/scripts.pory"
	jump_in_place_up_down
# 52 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

NewBarkTown_WomanStopsYouInitial::
# 56 "data/maps/NewBarkTown/scripts.pory"
	lock
# 57 "data/maps/NewBarkTown/scripts.pory"
	playBGM MUS_RG_PALLET, TRUE
# 58 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, Common_Movement_FaceLeft
# 59 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanStopsYouInitial_Text_0
# 60 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 61 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_WomanStopsYouNorth::
# 65 "data/maps/NewBarkTown/scripts.pory"
	call NewBarkTown_WomanStopsYouInitial
# 66 "data/maps/NewBarkTown/scripts.pory"
	lock
# 67 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalkTowardsYouNorth
# 68 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanWhatDoing
# 70 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalksYouBackNorth
# 71 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkedBackNorth
# 72 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanItsDangerousToGoAlone
# 73 "data/maps/NewBarkTown/scripts.pory"
	savebgm MUS_DUMMY
# 74 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 75 "data/maps/NewBarkTown/scripts.pory"
	release
	return


NewBarkTown_WomanStopsYouSouth::
# 79 "data/maps/NewBarkTown/scripts.pory"
	call NewBarkTown_WomanStopsYouInitial
# 80 "data/maps/NewBarkTown/scripts.pory"
	lock
# 81 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalkTowardsYouSouth
# 82 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanWhatDoing
# 84 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, WomanWalksYouBackSouth
# 85 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkedBackSouth
# 86 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_WomanItsDangerousToGoAlone
# 87 "data/maps/NewBarkTown/scripts.pory"
	savebgm MUS_DUMMY
# 88 "data/maps/NewBarkTown/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 100 "data/maps/NewBarkTown/scripts.pory"
WomanWalkTowardsYouNorth:
# 101 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 102 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 105 "data/maps/NewBarkTown/scripts.pory"
WomanWalkTowardsYouSouth:
# 106 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 107 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 108 "data/maps/NewBarkTown/scripts.pory"
	walk_left
	step_end

# 111 "data/maps/NewBarkTown/scripts.pory"
WomanWalksYouBackNorth:
# 112 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 113 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 114 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 117 "data/maps/NewBarkTown/scripts.pory"
PlayerWalkedBackNorth:
# 118 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 119 "data/maps/NewBarkTown/scripts.pory"
	walk_right
	step_end

# 122 "data/maps/NewBarkTown/scripts.pory"
WomanWalksYouBackSouth:
# 123 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 124 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 125 "data/maps/NewBarkTown/scripts.pory"
	walk_up
# 126 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 129 "data/maps/NewBarkTown/scripts.pory"
PlayerWalkedBackSouth:
# 130 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 131 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 132 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 133 "data/maps/NewBarkTown/scripts.pory"
	face_up
	step_end

NewBarkTown_TownSign::
# 137 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 138 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_TownSign_Text_0
# 139 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmHouseSign::
# 143 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 144 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmHouseSign_Text_0
# 145 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_ElmLabSign::
# 149 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 150 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ElmLabSign_Text_0
# 151 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_PlayerHouseSign::
# 155 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 156 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 157 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_LyraHouseSign::
# 161 "data/maps/NewBarkTown/scripts.pory"
	lockall
# 162 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_PlayerHouseSign_Text_0
# 163 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	return


NewBarkTown_RivalPush::
# 167 "data/maps/NewBarkTown/scripts.pory"
	lock
# 168 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_0
# 169 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalTurnsMovement
# 170 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 171 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RivalPush_Text_1
# 172 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerStepsDown
# 173 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalStepsLeft
# 174 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 175 "data/maps/NewBarkTown/scripts.pory"
	delay 16
# 176 "data/maps/NewBarkTown/scripts.pory"
	playSE SE_LEDGE
# 177 "data/maps/NewBarkTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerPushedDown
# 178 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 179 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, RivalReturns
# 180 "data/maps/NewBarkTown/scripts.pory"
	waitmovement 0
# 181 "data/maps/NewBarkTown/scripts.pory"
	release
	return


# 188 "data/maps/NewBarkTown/scripts.pory"
LyraExclamation:
# 189 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 190 "data/maps/NewBarkTown/scripts.pory"
	delay_16
	step_end

# 193 "data/maps/NewBarkTown/scripts.pory"
RivalTurnsMovement:
# 194 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 195 "data/maps/NewBarkTown/scripts.pory"
	delay_16
# 196 "data/maps/NewBarkTown/scripts.pory"
	face_left
	step_end

# 199 "data/maps/NewBarkTown/scripts.pory"
RivalStepsLeft:
# 200 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 201 "data/maps/NewBarkTown/scripts.pory"
	face_down
	step_end

# 204 "data/maps/NewBarkTown/scripts.pory"
PlayerStepsDown:
# 205 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 206 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 207 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 208 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 211 "data/maps/NewBarkTown/scripts.pory"
PlayerPushedDown:
# 212 "data/maps/NewBarkTown/scripts.pory"
	lock_facing_direction
# 213 "data/maps/NewBarkTown/scripts.pory"
	jump_2_down
# 214 "data/maps/NewBarkTown/scripts.pory"
	unlock_facing_direction
	step_end

# 217 "data/maps/NewBarkTown/scripts.pory"
RivalReturns:
# 218 "data/maps/NewBarkTown/scripts.pory"
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
	.string "LYRA: Hey {PLAYER}!\p"
	.string "Did you talk to PRO-$"

NewBarkTown_Lyra_Text_1:
# 30 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA: You did!\p"
	.string "You got a POKéMON now! That's so cool!\p"
	.string "Come on, we gotta have a battle now\n"
	.string "that you have one too!$"

NewBarkTown_LyraMarill_Text_0:
# 44 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA's MARILL seems happy to see you!$"

NewBarkTown_WomanStopsYouInitial_Text_0:
# 59 "data/maps/NewBarkTown/scripts.pory"
	.string "Wait, {PLAYER}!$"

NewBarkTown_TownSign_Text_0:
# 138 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\p"
	.string "The Town Where Winds of a New Beginning\n"
	.string "Blow.$"

NewBarkTown_ElmHouseSign_Text_0:
# 144 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM'S HOUSE$"

NewBarkTown_ElmLabSign_Text_0:
# 150 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM POKéMON LAB$"

NewBarkTown_PlayerHouseSign_Text_0:
# 156 "data/maps/NewBarkTown/scripts.pory"
	.string "{PLAYER}'S HOUSE$"

NewBarkTown_RivalPush_Text_0:
# 168 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pSo this is the famous ELM POKéMON LAB…$"

NewBarkTown_RivalPush_Text_1:
# 171 "data/maps/NewBarkTown/scripts.pory"
	.string "…\pWhat are you staring at?$"

NewBarkTown_WomanWhatDoing::
# 92 "data/maps/NewBarkTown/scripts.pory"
	.string "What do you think you're doing?$"

NewBarkTown_WomanItsDangerousToGoAlone::
# 96 "data/maps/NewBarkTown/scripts.pory"
	.string "It's Dangerous to go out without a\n"
	.string "POKéMON!\p"
	.string "Wild POKéMON jump out of the grass on\n"
	.string "the way to the next town.$"

NewBarkTown_LyraDefeated::
# 184 "data/maps/NewBarkTown/scripts.pory"
	.string "Oh no, I guess Marill wasn't strong\n"
	.string "enough!$"
