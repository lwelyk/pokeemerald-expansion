NewBarkTown_ElmsLab_MapScripts::
	.byte 0


ElmsLabIntroLeft::
# 12 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 13 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 14 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_Intro
	return


ElmsLab_Intro::
# 17 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_eq ElmsLab_Intro_1
	return

ElmsLab_Intro_1:
# 18 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 19 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PlayerWalkToElm
# 20 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 21 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_Intro_Text_0
# 31 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 32 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 33 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_Intro_Text_1
# 34 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CyndaquilBall::
# 39 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_CyndaquilBall_1
# 42 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 43 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 44 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CyndaquilBall_Text_0, MSGBOX_YESNO
# 45 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_CyndaquilBall_4
# 66 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_CyndaquilBall_1:
# 40 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_CyndaquilBall_4:
# 46 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 47 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 48 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_CYNDAQUIL
# 49 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 50 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 52 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 53 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 54 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 55 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_CyndaquilBall_8
ElmsLab_CyndaquilBall_7:
# 59 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 60 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 2
# 61 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterCyndaquilMovement
# 62 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 63 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 64 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_CyndaquilBall_8:
# 56 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 57 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_CyndaquilBall_7


ElmsLab_ChikoritaBall::
# 72 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_ChikoritaBall_1
# 75 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 76 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 77 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChikoritaBall_Text_0, MSGBOX_YESNO
# 78 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_ChikoritaBall_4
# 99 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_ChikoritaBall_1:
# 73 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_ChikoritaBall_4:
# 79 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 80 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 81 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_CHIKORITA
# 82 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 83 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 84 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 85 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 86 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 87 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 88 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_ChikoritaBall_8
ElmsLab_ChikoritaBall_7:
# 92 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 93 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 4
# 94 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterChikoritaMovement
# 95 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 96 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 97 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_ChikoritaBall_8:
# 89 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 90 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_ChikoritaBall_7


ElmsLab_TotodileBall::
# 104 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_TotodileBall_1
# 107 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 108 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 109 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_TotodileBall_Text_0, MSGBOX_YESNO
# 110 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_TotodileBall_4
# 131 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_TotodileBall_1:
# 105 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_TotodileBall_4:
# 111 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 112 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 113 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_TOTODILE
# 114 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 115 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 116 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 117 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 118 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 119 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 120 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_TotodileBall_8
ElmsLab_TotodileBall_7:
# 124 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 125 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 3
# 126 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterTotodileMovement
# 127 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 128 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 129 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_TotodileBall_8:
# 121 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 122 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_TotodileBall_7


ElmsLab_BallAfterChoosing::
# 137 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 138 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_BallAfterChoosing_Text_0
# 139 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


# 142 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterCyndaquilMovement:
# 143 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 144 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 147 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterTotodileMovement:
# 148 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 148 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 149 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 152 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterChikoritaMovement:
# 153 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 153 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 153 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 154 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

ElmsLab_DontWantThatOne::
# 163 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 164 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_DontWantThatOne_Text_0
# 165 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_AfterStarterChoice::
# 169 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 170 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 171 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_0
# 179 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_1, MSGBOX_YESNO
ElmsLab_AfterStarterChoice_2:
# 180 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne ElmsLab_AfterStarterChoice_3
# 183 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_3
# 184 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return

ElmsLab_AfterStarterChoice_3:
# 181 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_2, MSGBOX_YESNO
	goto ElmsLab_AfterStarterChoice_2


# 187 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
PlayerWalkToElm:
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
	step_end

ElmsLab_Aide::
# 192 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 193 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_Aide_Text_0
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeave::
# 198 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 199 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 200 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 201 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 202 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 204 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeaveN::
# 208 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 209 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 210 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 211 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 212 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 213 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 214 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 215 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 216 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_Intro_Text_0:
# 22 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "PROFESSOR ELM: There you are,\n"
	.string "{PLAYER}!\p"
	.string "I need to ask you a favor to do with my\n"
	.string "research.\p"
	.string "As you know, POKéMON are carried in\n"
	.string "POKéBALLs nowadays, but before they\l"
	.string "were invented we used simpler devices\l"
	.string "and even walked around with POKéMON.\p"
	.string "I'm sure you've noticed your friend\n"
	.string "LYRA running around with her MARILL.\p"
	.string "While POKéBALLs are still needed to\n"
	.string "catch POKéMON, I wonder what benefits\l"
	.string "can be had from traveling with POKéMON\l"
	.string "in this way?\p"
	.string "THAT is what I want to find out, and as\n"
	.string "part of that, I want to give you a\l"
	.string "POKéMON of your own.\p"
	.string "I want you to walk beside this POKéMON\n"
	.string "and see if this grows bonds or changes\l"
	.string "how they grow and evolve.\p"
	.string "$"

ElmsLab_Intro_Text_1:
# 33 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "I have three POKéMON you can choose\n"
	.string "from over here.\p"
	.string "I just caught them and you'll be their\n"
	.string "first partner, {PLAYER}!\p"
	.string "Go on, pick one!$"

ElmsLab_CyndaquilBall_Text_0:
# 44 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take CYNDAQUIL, the fire\n"
	.string "POKéMON?$"

ElmsLab_ChikoritaBall_Text_0:
# 77 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take CHIKORITA, the grass\n"
	.string "POKéMON?$"

ElmsLab_TotodileBall_Text_0:
# 109 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take TOTODILE, the grass\n"
	.string "POKéMON?$"

ElmsLab_BallAfterChoosing_Text_0:
# 138 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "It contains a POKéMON caught by\n"
	.string "PROFESSOR ELM.$"

ElmsLab_DontWantThatOne_Text_0:
# 164 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Think it over carefully. Your\n"
	.string "partner is a very important choice.$"

ElmsLab_AfterStarterChoice_Text_0:
# 173 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "PROFESSOR ELM: I have something that I\n"
	.string "think would be a great way for you to\l"
	.string "start your POKéMON journey!\p"
	.string "I have a colleague called MR. POKéMON\n"
	.string "who keeps finding weird things and\l"
	.string "raving to me about his discoveries.\p"
	.string "I just got an e-mail from him saying\n"
	.string "this time it's real.\p"
	.string "An intriguing message, but we're very\n"
	.string "busy with our research right now. He\l"
	.string "doesn't live too far away, so if you go\l"
	.string "in our place, you'll be doing us a great\l"
	.string "favor and get to explore with your new\l"
	.string "POKéMON friend!$"

ElmsLab_AfterStarterChoice_Text_1:
# 179 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "What do you say, will you help out?$"

ElmsLab_AfterStarterChoice_Text_2:
# 181 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "But we really need your help {PLAYER}!\pWon't you please reconsider?$"

ElmsLab_AfterStarterChoice_Text_3:
# 183 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Great! MR. POKéMON lives a little\n"
	.string "bit beyond CHERRYGROVE, the next city\l"
	.string "over.\p"
	.string "It's almost a direct route there, so you\n"
	.string "can't miss it.\n"
	.string "Just in case, here's my phone number so\l"
	.string "you can call me if anything comes up.$"

ElmsLab_Aide_Text_0:
# 193 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "There are only two of us, so we're\n"
	.string "always busy.$"

ElmsLab_CantLeave_Text_0:
# 201 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Wait! Where are you going?$"

ElmsLab_ChoseStarterText::
# 158 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: I think that's a great POKéMON\n"
	.string "too!$"
