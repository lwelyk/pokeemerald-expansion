Route30_MapScripts::
	.byte 0


Route30_MrPokemonHouseSign::
# 6 "data/maps/Route30/scripts.pory"
	lock
# 7 "data/maps/Route30/scripts.pory"
	msgbox Route30_MrPokemonHouseSign_Text_0
# 8 "data/maps/Route30/scripts.pory"
	release
	return


Route30_Youngster::
# 12 "data/maps/Route30/scripts.pory"
	lock
# 13 "data/maps/Route30/scripts.pory"
	faceplayer
# 14 "data/maps/Route30/scripts.pory"
	msgbox Route30_Youngster_Text_0
# 15 "data/maps/Route30/scripts.pory"
	release
	return


Route30_TrainerTips::
# 19 "data/maps/Route30/scripts.pory"
	lock
# 20 "data/maps/Route30/scripts.pory"
	msgbox Route30_TrainerTips_Text_0
# 21 "data/maps/Route30/scripts.pory"
	release
	return


Route30_Route30Sign::
# 25 "data/maps/Route30/scripts.pory"
	lock
# 26 "data/maps/Route30/scripts.pory"
	msgbox Route30_Route30Sign_Text_0
# 27 "data/maps/Route30/scripts.pory"
	release
	return


Route30_RattataTrainer::
# 31 "data/maps/Route30/scripts.pory"
	lock
# 32 "data/maps/Route30/scripts.pory"
	msgbox Route30_RattataTrainer_Text_0
# 33 "data/maps/Route30/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_NORMAL
# 34 "data/maps/Route30/scripts.pory"
	waitmoncry
# 35 "data/maps/Route30/scripts.pory"
	applymovement LOCALID_RATTATA, Route30_Rattata_Movement
# 36 "data/maps/Route30/scripts.pory"
	playse SE_PIN
# 37 "data/maps/Route30/scripts.pory"
	delay 30
# 38 "data/maps/Route30/scripts.pory"
	applymovement LOCALID_RATTATA_TRAINER, Route30_Question
# 39 "data/maps/Route30/scripts.pory"
	delay 30
# 40 "data/maps/Route30/scripts.pory"
	faceplayer
# 41 "data/maps/Route30/scripts.pory"
	msgbox Route30_RattataTrainer_Text_1
# 42 "data/maps/Route30/scripts.pory"
	turnobject LOCALID_RATTATA_TRAINER, DIR_WEST
# 43 "data/maps/Route30/scripts.pory"
	release
	return


Route30_Rattata::
# 47 "data/maps/Route30/scripts.pory"
	lock
# 48 "data/maps/Route30/scripts.pory"
	msgbox Route30_Rattata_Text_0
# 49 "data/maps/Route30/scripts.pory"
	playmoncry SPECIES_RATTATA, CRY_MODE_NORMAL
# 50 "data/maps/Route30/scripts.pory"
	waitmoncry
# 51 "data/maps/Route30/scripts.pory"
	release
	return


Route30_Spearow::
# 55 "data/maps/Route30/scripts.pory"
	lock
# 56 "data/maps/Route30/scripts.pory"
	msgbox Route30_Spearow_Text_0
# 57 "data/maps/Route30/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 58 "data/maps/Route30/scripts.pory"
	waitmoncry
# 59 "data/maps/Route30/scripts.pory"
	release
	return


Route30_SpearowTrainer::
# 64 "data/maps/Route30/scripts.pory"
	lock
# 65 "data/maps/Route30/scripts.pory"
	msgbox Route30_SpearowTrainer_Text_0
# 66 "data/maps/Route30/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 67 "data/maps/Route30/scripts.pory"
	waitmoncry
# 68 "data/maps/Route30/scripts.pory"
	applymovement LOCALID_SPEAROW, Route30_Spearow_Movement
# 69 "data/maps/Route30/scripts.pory"
	playse SE_PIN
# 70 "data/maps/Route30/scripts.pory"
	delay 30
# 71 "data/maps/Route30/scripts.pory"
	applymovement LOCALID_SPEAROW_TRAINER, Route30_Question
# 72 "data/maps/Route30/scripts.pory"
	delay 30
# 73 "data/maps/Route30/scripts.pory"
	faceplayer
# 74 "data/maps/Route30/scripts.pory"
	msgbox Route30_SpearowTrainer_Text_1
# 75 "data/maps/Route30/scripts.pory"
	turnobject LOCALID_SPEAROW_TRAINER, DIR_EAST
# 76 "data/maps/Route30/scripts.pory"
	release
	return


# 79 "data/maps/Route30/scripts.pory"
Route30_Rattata_Movement:
# 80 "data/maps/Route30/scripts.pory"
	jump_in_place_left
	step_end

# 83 "data/maps/Route30/scripts.pory"
Route30_Spearow_Movement:
# 84 "data/maps/Route30/scripts.pory"
	jump_in_place_right
	step_end

# 87 "data/maps/Route30/scripts.pory"
Route30_Question:
# 88 "data/maps/Route30/scripts.pory"
	emote_question_mark
	step_end

Route30_MrPokemonHouseSign_Text_0:
# 7 "data/maps/Route30/scripts.pory"
	.string "MR.POKéMON'S HOUSE$"

Route30_Youngster_Text_0:
# 14 "data/maps/Route30/scripts.pory"
	.string "MR.POKéMON's house? It's a bit farther\n"
	.string "ahead.$"

Route30_TrainerTips_Text_0:
# 20 "data/maps/Route30/scripts.pory"
	.string "TRAINER TIPS\p"
	.string "Only throw POKéBALLs at wild POKéMON!\p"
	.string "POKéBALLs will block you from catching\n"
	.string "POKéMON already registered to another\l"
	.string "trainer's ID!\p"
	.string "POKéMON theft is not tolerated!$"

Route30_Route30Sign_Text_0:
# 26 "data/maps/Route30/scripts.pory"
	.string "ROUTE 30\n"
	.string "VIOLET CITY - CHERRYGROVE CITY$"

Route30_RattataTrainer_Text_0:
# 32 "data/maps/Route30/scripts.pory"
	.string "Go, RATTATA!\p"
	.string "Use TACKLE!$"

Route30_RattataTrainer_Text_1:
# 41 "data/maps/Route30/scripts.pory"
	.string "What? I'm in the middle of a big battle!\p"
	.string "Leave me alone!$"

Route30_Rattata_Text_0:
# 48 "data/maps/Route30/scripts.pory"
	.string "RATTATA: RATTTA!$"

Route30_Spearow_Text_0:
# 56 "data/maps/Route30/scripts.pory"
	.string "SPEAROW: SPRRRRROOWWWW!$"

Route30_SpearowTrainer_Text_0:
# 65 "data/maps/Route30/scripts.pory"
	.string "Go, SPEAROW!\p"
	.string "Use PECK!$"

Route30_SpearowTrainer_Text_1:
# 74 "data/maps/Route30/scripts.pory"
	.string "Hey, we're battling here!\p"
	.string "You gotta wait your turn!$"
