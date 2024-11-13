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
	applymovement 1, Common_Movement_FaceDown
# 172 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 173 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_0
# 181 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_1, MSGBOX_YESNO
ElmsLab_AfterStarterChoice_2:
# 182 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne ElmsLab_AfterStarterChoice_3
# 185 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_3
# 186 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 187 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return

ElmsLab_AfterStarterChoice_3:
# 183 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_2, MSGBOX_YESNO
	goto ElmsLab_AfterStarterChoice_2


# 190 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
PlayerWalkToElm:
# 191 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 191 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 191 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 191 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 191 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 191 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
	step_end

ElmsLab_Aide::
# 195 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 196 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_Aide_Text_0
# 197 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeave::
# 201 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 202 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 204 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 205 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 206 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 207 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeaveN::
# 211 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 212 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 213 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 214 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 215 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 216 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 217 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 218 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 219 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_ProfElm::
# 223 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 224 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	faceplayer
# 225 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	switch VAR_INTRO_STATE
# 226 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	case 1, ElmsLab_ProfElm_3
# 228 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	case 2, ElmsLab_ProfElm_4
# 231 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_2
ElmsLab_ProfElm_1:
# 234 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return

ElmsLab_ProfElm_3:
# 227 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_0
	goto ElmsLab_ProfElm_1

ElmsLab_ProfElm_4:
# 229 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_1
	goto ElmsLab_ProfElm_1


ElmsLab_TrashcanText::
# 238 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 239 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_TrashcanText_Text_0
# 240 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_PCText::
# 244 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 245 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_PCText_Text_0
# 246 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_HealingMachine::
# 250 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 251 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_eq ElmsLab_HealingMachine_2
# 255 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_HealingMachine_Text_1, MSGBOX_YESNO
# 256 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_HealingMachine_5
ElmsLab_HealingMachine_1:
# 262 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return

ElmsLab_HealingMachine_2:
# 252 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_HealingMachine_Text_0
	goto ElmsLab_HealingMachine_1

ElmsLab_HealingMachine_5:
# 257 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_HEAL
# 258 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 259 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	special HealPlayerParty
	goto ElmsLab_HealingMachine_1


ElmsLab_AideGivesPotionL::
# 266 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 267 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideWalkLeft
# 268 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 269 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AideGivesPotion
# 270 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideReturnsLeft
# 271 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 272 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 273 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_AideGivesPotionR::
# 277 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 278 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideWalkRight
# 279 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 280 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AideGivesPotion
# 281 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideReturnsRight
# 282 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 283 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 284 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_AideGivesPotion::
# 288 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AideGivesPotion_Text_0
# 289 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 290 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 291 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	giveitem ITEM_POTION
	return


# 294 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideWalkLeft:
# 295 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 295 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 296 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 299 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideReturnsLeft:
# 300 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 300 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 301 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_down
	step_end

# 304 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideWalkRight:
# 305 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 305 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 305 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 306 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 309 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideReturnsRight:
# 310 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 310 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 310 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 311 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_down
	step_end

ElmsLab_OpenWindow::
# 314 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 315 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_OpenWindow_Text_0
# 316 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
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
# 175 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
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
# 181 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "What do you say, will you help out?$"

ElmsLab_AfterStarterChoice_Text_2:
# 183 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "But we really need your help {PLAYER}!\pWon't you please reconsider?$"

ElmsLab_AfterStarterChoice_Text_3:
# 185 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Great! MR. POKéMON lives a little\n"
	.string "bit beyond CHERRYGROVE, the next city\l"
	.string "over.\p"
	.string "It's almost a direct route there, so you\n"
	.string "can't miss it.\p"
	.string "Just in case, here's my phone number so\n"
	.string "you can call me if anything comes up.$"

ElmsLab_Aide_Text_0:
# 196 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "There are only two of us, so we're\n"
	.string "always busy.$"

ElmsLab_CantLeave_Text_0:
# 204 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Wait! Where are you going?$"

ElmsLab_ProfElm_Text_0:
# 227 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Go on, pick one!$"

ElmsLab_ProfElm_Text_1:
# 229 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: If a wild POKéMON appears in the\n"
	.string "tall grass, be sure to let yours battle\l"
	.string "it!$"

ElmsLab_ProfElm_Text_2:
# 231 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "COMING SOON$"

ElmsLab_TrashcanText_Text_0:
# 239 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "The wrapper from the RAGECANDYBAR\n"
	.string "that PROF. ELMS ate is in there..$"

ElmsLab_PCText_Text_0:
# 245 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "OBSERVATIONS ON POKéMON EVOLUTION\n"
	.string "AND GROWTH - A COMPREHENSIVE REVIEW\l"
	.string "BY PROFESSOR ELM\p"
	.string "...\p"
	.string "...\p"
	.string "This seems like a very complicated\n"
	.string "paper.$"

ElmsLab_HealingMachine_Text_0:
# 252 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "A machine for healing POKéMON.$"

ElmsLab_HealingMachine_Text_1:
# 255 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "Would you like to heal your POKéMON?$"

ElmsLab_AideGivesPotion_Text_0:
# 288 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "{PLAYER}, I want you to have this for\n"
	.string "your errand.$"

ElmsLab_OpenWindow_Text_0:
# 315 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "A pleasant breeze blows in through the\n"
	.string "open window...$"

ElmsLab_ChoseStarterText::
# 158 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: I think that's a great POKéMON\n"
	.string "too!$"
