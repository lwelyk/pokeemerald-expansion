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
	playmoncry SPECIES_CYNDAQUIL, CRY_MODE_NORMAL
# 45 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CyndaquilBall_Text_0, MSGBOX_YESNO
# 46 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_CyndaquilBall_4
# 67 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_CyndaquilBall_1:
# 40 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_CyndaquilBall_4:
# 47 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 48 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 49 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_CYNDAQUIL
# 50 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 51 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 52 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 53 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_ORAN_BERRY
# 54 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CYNDAQUIL
# 55 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 56 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_CyndaquilBall_8
ElmsLab_CyndaquilBall_7:
# 60 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 61 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 2
# 62 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterCyndaquilMovement
# 63 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 64 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 65 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_CyndaquilBall_8:
# 57 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 58 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_CyndaquilBall_7


ElmsLab_ChikoritaBall::
# 73 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_ChikoritaBall_1
# 76 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 77 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 78 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playmoncry SPECIES_CHIKORITA, CRY_MODE_NORMAL
# 79 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChikoritaBall_Text_0, MSGBOX_YESNO
# 80 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_ChikoritaBall_4
# 101 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_ChikoritaBall_1:
# 74 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_ChikoritaBall_4:
# 81 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 82 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 83 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_CHIKORITA
# 84 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 85 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 87 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_ORAN_BERRY
# 88 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_CHIKORITA
# 89 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 90 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_ChikoritaBall_8
ElmsLab_ChikoritaBall_7:
# 94 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 95 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 4
# 96 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterChikoritaMovement
# 97 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 98 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 99 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_ChikoritaBall_8:
# 91 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 92 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_ChikoritaBall_7


ElmsLab_TotodileBall::
# 106 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_gt ElmsLab_TotodileBall_1
# 109 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 110 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 111 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playmoncry SPECIES_TOTODILE, CRY_MODE_NORMAL
# 112 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_TotodileBall_Text_0, MSGBOX_YESNO
# 113 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_TotodileBall_4
# 134 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_DontWantThatOne
	return

ElmsLab_TotodileBall_1:
# 107 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_BallAfterChoosing
	return

ElmsLab_TotodileBall_4:
# 114 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 115 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ChoseStarterText
# 116 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_CHOSE_TOTODILE
# 117 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 118 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 119 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 120 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_ORAN_BERRY
# 121 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_TOTODILE
# 122 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 123 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_TotodileBall_8
ElmsLab_TotodileBall_7:
# 127 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 128 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	removeobject 3
# 129 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, AfterTotodileMovement
# 130 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 131 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
# 132 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AfterStarterChoice
	return

ElmsLab_TotodileBall_8:
# 124 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 125 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto ElmsLab_TotodileBall_7


ElmsLab_BallAfterChoosing::
# 140 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 141 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_BallAfterChoosing_Text_0
# 142 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


# 145 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterCyndaquilMovement:
# 146 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 147 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 150 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterTotodileMovement:
# 151 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 151 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 152 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 155 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AfterChikoritaMovement:
# 156 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 156 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 156 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 157 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

ElmsLab_DontWantThatOne::
# 166 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	hidemonpic
# 167 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_DontWantThatOne_Text_0
# 168 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_AfterStarterChoice::
# 172 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 173 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_INTRO_STATE, 2
# 174 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 175 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 176 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_0
# 184 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_1, MSGBOX_YESNO
ElmsLab_AfterStarterChoice_2:
# 185 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_ne ElmsLab_AfterStarterChoice_3
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_3
# 189 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 190 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return

ElmsLab_AfterStarterChoice_3:
# 186 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AfterStarterChoice_Text_2, MSGBOX_YESNO
	goto ElmsLab_AfterStarterChoice_2


# 193 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
PlayerWalkToElm:
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
# 194 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_up
	step_end

ElmsLab_Aide::
# 198 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 199 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_Aide_Text_0
# 200 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeave::
# 204 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 205 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 206 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 207 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 208 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkUp
# 209 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 210 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_CantLeaveN::
# 214 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lock
# 215 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 216 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 217 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_CantLeave_Text_0
# 218 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 219 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 220 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 221 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 222 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	release
	return


ElmsLab_ProfElm::
# 226 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 227 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	faceplayer
# 228 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	switch VAR_INTRO_STATE
# 229 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	case 1, ElmsLab_ProfElm_3
# 231 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	case 2, ElmsLab_ProfElm_4
# 234 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_2
ElmsLab_ProfElm_1:
# 237 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return

ElmsLab_ProfElm_3:
# 230 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_0
	goto ElmsLab_ProfElm_1

ElmsLab_ProfElm_4:
# 232 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_ProfElm_Text_1
	goto ElmsLab_ProfElm_1


ElmsLab_TrashcanText::
# 241 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 242 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_TrashcanText_Text_0
# 243 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_PCText::
# 247 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 248 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_PCText_Text_0
# 249 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_HealingMachine::
# 253 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 254 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_INTRO_STATE, 1
	goto_if_eq ElmsLab_HealingMachine_2
# 258 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_HealingMachine_Text_1, MSGBOX_YESNO
# 259 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq ElmsLab_HealingMachine_5
ElmsLab_HealingMachine_1:
# 265 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return

ElmsLab_HealingMachine_2:
# 255 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_HealingMachine_Text_0
	goto ElmsLab_HealingMachine_1

ElmsLab_HealingMachine_5:
# 260 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_HEAL
# 261 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
# 262 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	special HealPlayerParty
	goto ElmsLab_HealingMachine_1


ElmsLab_AideGivesPotionL::
# 269 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 270 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideWalkLeft
# 271 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 272 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AideGivesPotion
# 273 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideReturnsLeft
# 274 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 275 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 276 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_AideGivesPotionR::
# 280 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 281 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideWalkRight
# 282 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 283 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	call ElmsLab_AideGivesPotion
# 284 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	applymovement 5, AideReturnsRight
# 285 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitmovement 0
# 286 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 287 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	releaseall
	return


ElmsLab_AideGivesPotion::
# 291 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_AideGivesPotion_Text_0
# 292 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	giveitem ITEM_POTION
# 293 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 294 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	waitfanfare
	return


# 297 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideWalkLeft:
# 298 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 298 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 299 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 302 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideReturnsLeft:
# 303 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 303 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 304 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_down
	step_end

# 307 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideWalkRight:
# 308 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 308 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 308 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_right
# 309 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_up
	step_end

# 312 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
AideReturnsRight:
# 313 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 313 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 313 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	walk_left
# 314 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	face_down
	step_end

ElmsLab_OpenWindow::
# 317 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	lockall
# 318 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	msgbox ElmsLab_OpenWindow_Text_0
# 319 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
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
	.string "I have some theories, but I need more\n"
	.string "data, and as part of that, I want to\l"
	.string "give you a POKéMON of your own.\p"
	.string "I want you to walk beside this POKéMON\n"
	.string "and see if this grows bonds or changes\l"
	.string "how they grow and evolve.\p"
	.string "$"

ElmsLab_Intro_Text_1:
# 33 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "I have three POKéMON you can choose\n"
	.string "from over here.\p"
	.string "They recently hatched and you'll be\n"
	.string "their first partner, {PLAYER}!\p"
	.string "Go on, pick one!$"

ElmsLab_CyndaquilBall_Text_0:
# 45 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take CYNDAQUIL, the fire\n"
	.string "POKéMON?$"

ElmsLab_ChikoritaBall_Text_0:
# 79 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take CHIKORITA, the grass\n"
	.string "POKéMON?$"

ElmsLab_TotodileBall_Text_0:
# 112 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: You'll take TOTODILE, the grass\n"
	.string "POKéMON?$"

ElmsLab_BallAfterChoosing_Text_0:
# 141 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "It contains a POKéMON caught by\n"
	.string "PROFESSOR ELM.$"

ElmsLab_DontWantThatOne_Text_0:
# 167 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Think it over carefully. Your\n"
	.string "partner is a very important choice.$"

ElmsLab_AfterStarterChoice_Text_0:
# 178 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
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
# 184 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "What do you say, will you help out?$"

ElmsLab_AfterStarterChoice_Text_2:
# 186 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "But we really need your help {PLAYER}!\pWon't you please reconsider?$"

ElmsLab_AfterStarterChoice_Text_3:
# 188 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Great! MR. POKéMON lives a little\n"
	.string "bit beyond CHERRYGROVE, the next city\l"
	.string "over.\p"
	.string "It's almost a direct route there, so you\n"
	.string "can't miss it.\p"
	.string "Just in case, here's my phone number so\n"
	.string "you can call me if anything comes up.$"

ElmsLab_Aide_Text_0:
# 199 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "There are only two of us, so we're\n"
	.string "always busy.$"

ElmsLab_CantLeave_Text_0:
# 207 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Wait! Where are you going?$"

ElmsLab_ProfElm_Text_0:
# 230 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: Go on, pick one!$"

ElmsLab_ProfElm_Text_1:
# 232 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: If a wild POKéMON appears in the\n"
	.string "tall grass, be sure to let yours battle\l"
	.string "it!$"

ElmsLab_ProfElm_Text_2:
# 234 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "COMING SOON$"

ElmsLab_TrashcanText_Text_0:
# 242 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "The wrapper from the RAGECANDYBAR\n"
	.string "that PROF. ELMS ate is in there..$"

ElmsLab_PCText_Text_0:
# 248 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "OBSERVATIONS ON POKéMON EVOLUTION\n"
	.string "AND GROWTH - A COMPREHENSIVE REVIEW\l"
	.string "BY PROFESSOR ELM\p"
	.string "...\p"
	.string "...\p"
	.string "This seems like a very complicated\n"
	.string "paper.$"

ElmsLab_HealingMachine_Text_0:
# 255 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "A machine for healing POKéMON.$"

ElmsLab_HealingMachine_Text_1:
# 258 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "Would you like to heal your POKéMON?$"

ElmsLab_AideGivesPotion_Text_0:
# 291 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "{PLAYER}, I want you to have this for\n"
	.string "your errand.$"

ElmsLab_OpenWindow_Text_0:
# 318 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "A pleasant breeze blows in through the\n"
	.string "open window...$"

ElmsLab_ChoseStarterText::
# 161 "data/maps/NewBarkTown_ElmsLab/scripts.pory"
	.string "ELM: I think that's a great POKéMON\n"
	.string "too!$"
