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
	return

