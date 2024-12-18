NewBarkTown_PlayersHouse_2F_MapScripts::
	.byte 0


TestingScript::
# 6 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 7 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_RESCUED_BIRCH
# 8 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 9 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 10 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 11 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 12 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	special SetUnlockedPokedexFlags
# 13 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 14 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 20, ITEM_NONE
# 15 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	givemon SPECIES_MEWTWO, 20, ITEM_NONE
	return


BattleTestScript::
# 19 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	trainerbattle_single TRAINER_MATTHEW, Route108_Text_MatthewIntro, Route108_Text_MatthewDefeated
# 20 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	msgbox Route108_Text_MatthewPostBattle, MSGBOX_AUTOCLOSE
	return


DoubleBattleTestScript::
# 25 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	trainerbattle_double TRAINER_DEZ_AND_LUKE, MtPyre_2F_Text_LukeIntro, MtPyre_2F_Text_LukeDefeat, MtPyre_2F_Text_LukeNotEnoughMons
# 26 "data/maps/NewBarkTown_PlayersHouse_2F/scripts.pory"
	msgbox MtPyre_2F_Text_LukePostBattle, MSGBOX_AUTOCLOSE
	return

