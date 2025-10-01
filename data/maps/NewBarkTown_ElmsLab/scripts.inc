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
# 33 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 34 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 35 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_Intro_Text_1
# 42 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CyndaquilBall::
# 47 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_CyndaquilBall_1
# 50 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 51 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 52 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 53 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CyndaquilBall_Text_0, MSGBOX_YESNO
# 54 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_CyndaquilBall_4
# 75 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_CyndaquilBall_1:
# 48 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_CyndaquilBall_4:
# 55 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 56 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 57 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_CYNDAQUIL
# 58 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 59 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 61 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 62 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 63 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 64 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_CyndaquilBall_8
ElmsLab_CyndaquilBall_7:
# 68 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 69 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 2
# 70 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterCyndaquilMovement
# 71 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 72 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 73 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_CyndaquilBall_8:
# 65 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 66 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_CyndaquilBall_7


ElmsLab_ChikoritaBall::
# 81 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_ChikoritaBall_1
# 84 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 85 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 86 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 87 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChikoritaBall_Text_0, MSGBOX_YESNO
# 88 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_ChikoritaBall_4
# 109 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_ChikoritaBall_1:
# 82 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_ChikoritaBall_4:
# 89 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 90 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 91 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_CHIKORITA
# 92 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 93 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 94 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 95 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 96 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 97 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 98 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_ChikoritaBall_8
ElmsLab_ChikoritaBall_7:
# 102 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 103 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 4
# 104 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterChikoritaMovement
# 105 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 106 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 107 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_ChikoritaBall_8:
# 99 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 100 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_ChikoritaBall_7


ElmsLab_TotodileBall::
# 114 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_TotodileBall_1
# 117 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 118 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 119 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 120 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_TotodileBall_Text_0, MSGBOX_YESNO
# 121 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_TotodileBall_4
# 142 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_TotodileBall_1:
# 115 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_TotodileBall_4:
# 122 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 123 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 124 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_TOTODILE
# 125 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 126 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 127 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 128 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 129 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 130 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 131 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_TotodileBall_8
ElmsLab_TotodileBall_7:
# 135 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 136 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 3
# 137 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterTotodileMovement
# 138 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 139 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 140 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_TotodileBall_8:
# 132 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 133 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_TotodileBall_7


ElmsLab_BallAfterChoosing::
# 148 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 149 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_BallAfterChoosing_Text_0
# 150 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


# 153 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterCyndaquilMovement:
# 154 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 155 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 158 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterTotodileMovement:
# 159 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 159 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 160 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 163 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterChikoritaMovement:
# 164 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 164 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 164 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 165 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

ElmsLab_DontWantThatOne::
# 174 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 175 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_DontWantThatOne_Text_0
# 176 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_AfterStarterChoice::
# 180 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 181 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 182 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 183 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 184 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_0
# 193 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_1, MSGBOX_YESNO
ElmsLab_AfterStarterChoice_2:
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne ElmsLab_AfterStarterChoice_3
# 197 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_3
# 198 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 199 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return

ElmsLab_AfterStarterChoice_3:
# 195 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_2, MSGBOX_YESNO
	goto ElmsLab_AfterStarterChoice_2


# 202 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
PlayerWalkToElm:
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 203 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
	step_end

ElmsLab_Aide::
# 207 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 208 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_Aide_Text_0
# 209 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeave::
# 213 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 214 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 215 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 216 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 217 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 218 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 219 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeaveN::
# 223 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 224 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 225 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 226 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 227 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 228 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 229 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 230 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 231 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_ProfElm::
# 235 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 236 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	faceplayer
# 237 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	switch VAR_INTRO_STATE
# 238 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	case 1, ElmsLab_ProfElm_3
# 240 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	case 2, ElmsLab_ProfElm_4
# 243 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_2
ElmsLab_ProfElm_1:
# 246 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return

ElmsLab_ProfElm_3:
# 239 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_0
	goto ElmsLab_ProfElm_1

ElmsLab_ProfElm_4:
# 241 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_1
	goto ElmsLab_ProfElm_1


ElmsLab_TrashcanText::
# 250 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 251 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_TrashcanText_Text_0
# 252 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_PCText::
# 256 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 257 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_PCText_Text_0
# 258 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_HealingMachine::
# 262 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 263 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_eq ElmsLab_HealingMachine_2
# 267 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_HealingMachine_Text_1, MSGBOX_YESNO
# 268 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_HealingMachine_5
ElmsLab_HealingMachine_1:
# 274 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return

ElmsLab_HealingMachine_2:
# 264 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_HealingMachine_Text_0
	goto ElmsLab_HealingMachine_1

ElmsLab_HealingMachine_5:
# 269 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_HEAL
# 270 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 271 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	special HealPlayerParty
	goto ElmsLab_HealingMachine_1


ElmsLab_AideGivesPotionL::
# 278 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 279 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideWalkLeft
# 280 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 281 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AideGivesPotion
# 282 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideReturnsLeft
# 283 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 284 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 285 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_AideGivesPotionR::
# 289 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 290 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideWalkRight
# 291 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 292 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AideGivesPotion
# 293 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideReturnsRight
# 294 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 295 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 296 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_AideGivesPotion::
# 300 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AideGivesPotion_Text_0
# 301 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	giveitem ITEM_POTION
# 302 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 303 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
	return


# 306 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideWalkLeft:
# 307 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 307 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 308 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 311 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideReturnsLeft:
# 312 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 312 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 313 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_down
	step_end

# 316 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideWalkRight:
# 317 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 317 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 317 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 318 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 321 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideReturnsRight:
# 322 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 322 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 322 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 323 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_down
	step_end

ElmsLab_OpenWindow::
# 326 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 327 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_OpenWindow_Text_0
# 328 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_Intro_Text_0:
# 22 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "PROFESSOR ELM: There you are,\n"
	.string "{PLAYER}!\p"
	.string "I need to ask you a favor to do with my\n"
	.string "research.\p"
	.string "I'm conducting new POKéMON research\n"
	.string "right now, and I was wondering if you\l"
	.string "could help me with it, {PLAYER}.\p"
	.string "You see... I'm writing a paper that I\n"
	.string "want to present at a conference and I\l"
	.string "need some more data.\p"
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
	.string "I have some theories, but I need more\n"
	.string "data, and as part of that, I want to\l"
	.string "give you a POKéMON of your own.\p"
	.string "I want you to walk beside this POKéMON\n"
	.string "and see if this grows bonds or changes\l"
	.string "how they grow and evolve.\p"
	.string "$"

ElmsLab_Intro_Text_1:
# 37 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "I have three POKéMON you can choose\n"
	.string "from over here.\p"
	.string "They recently hatched and you'll be\n"
	.string "their first partner, {PLAYER}!\p"
	.string "Go on, pick one!$"

ElmsLab_CyndaquilBall_Text_0:
# 53 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take CYNDAQUIL, the fire\n"
	.string "POKéMON?$"

ElmsLab_ChikoritaBall_Text_0:
# 87 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take CHIKORITA, the grass\n"
	.string "POKéMON?$"

ElmsLab_TotodileBall_Text_0:
# 120 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take TOTODILE, the grass\n"
	.string "POKéMON?$"

ElmsLab_BallAfterChoosing_Text_0:
# 149 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "It contains a POKéMON caught by\n"
	.string "PROFESSOR ELM.$"

ElmsLab_DontWantThatOne_Text_0:
# 175 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Think it over carefully. Your\n"
	.string "partner is a very important choice.$"

ElmsLab_AfterStarterChoice_Text_0:
# 186 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "PROFESSOR ELM: I have something that I\n"
	.string "think would be a great way for you to\l"
	.string "start your POKéMON journey!\p"
	.string "I have a colleague called MR. POKéMON\n"
	.string "who keeps finding weird things and\l"
	.string "raving to me about his discoveries.\p"
	.string "I just got an e-mail from him saying\n"
	.string "this time it's real.\p"
	.string "An intriguing message, but we're very\n"
	.string "busy with our research right now.\p"
	.string "He doesn't live too far away, so if you\n"
	.string "go in our place, you'll be doing us a\l"
	.string "great favor and get to explore with\l"
	.string "your new POKéMON friend!$"

ElmsLab_AfterStarterChoice_Text_1:
# 193 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "What do you say, will you help out?$"

ElmsLab_AfterStarterChoice_Text_2:
# 195 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "But we really need your help {PLAYER}!\pWon't you please reconsider?$"

ElmsLab_AfterStarterChoice_Text_3:
# 197 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Great! MR. POKéMON lives a little\n"
	.string "bit beyond CHERRYGROVE, the next city\l"
	.string "over.\p"
	.string "It's almost a direct route there, so you\n"
	.string "can't miss it.\p"
	.string "Just in case, here's my phone number so\n"
	.string "you can call me if anything comes up.$"

ElmsLab_Aide_Text_0:
# 208 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "There are only two of us, so we're\n"
	.string "always busy.$"

ElmsLab_CantLeave_Text_0:
# 216 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Wait! Where are you going?$"

ElmsLab_ProfElm_Text_0:
# 239 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Go on, pick one!$"

ElmsLab_ProfElm_Text_1:
# 241 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: If a wild POKéMON appears in the\n"
	.string "tall grass, be sure to let yours battle\l"
	.string "it!$"

ElmsLab_ProfElm_Text_2:
# 243 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "COMING SOON$"

ElmsLab_TrashcanText_Text_0:
# 251 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "The wrapper from the RAGECANDYBAR\n"
	.string "that PROF. ELMS ate is in there..$"

ElmsLab_PCText_Text_0:
# 257 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "OBSERVATIONS ON POKéMON EGGS AND\n"
	.string "HATCHING IN THE WILD - A\l"
	.string "COMPREHENSIVE REVIEW BY PROFESSOR\l"
	.string "ELM\p"
	.string "...\p"
	.string "...\p"
	.string "This seems like a very complicated\n"
	.string "paper.$"

ElmsLab_HealingMachine_Text_0:
# 264 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "A machine for healing POKéMON.$"

ElmsLab_HealingMachine_Text_1:
# 267 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "Would you like to heal your POKéMON?$"

ElmsLab_AideGivesPotion_Text_0:
# 300 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "{PLAYER}, I want you to have this for\n"
	.string "your errand.$"

ElmsLab_OpenWindow_Text_0:
# 327 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "A pleasant breeze blows in through the\n"
	.string "open window...$"

ElmsLab_ChoseStarterText::
# 169 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: I think that's a great POKéMON\n"
	.string "too!$"
