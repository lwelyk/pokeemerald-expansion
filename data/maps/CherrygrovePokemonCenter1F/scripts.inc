CherrygrovePokemonCenter1F_MapScripts::
	.byte 0


CherrygrovePokemonCenter1F_Fisher::
# 4 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	lock
# 5 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	faceplayer
# 6 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	msgbox CherrygrovePokemonCenter1F_Fisher_Text_0
# 7 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	release
	return


CherrygrovePokemonCenter1F_Gentleman::
# 11 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	lock
# 12 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	faceplayer
# 13 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	msgbox CherrygrovePokemonCenter1F_Gentleman_Text_0
# 14 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	release
	return


CherrygrovePokemonCenter1F_Teacher::
# 18 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	lock
# 19 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	faceplayer
# 20 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	msgbox CherrygrovePokemonCenter1F_Teacher_Text_0
# 21 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	release
	return


CherrygrovePokemonCenter1F_Nurse::
# 25 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	lock
# 26 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 27 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	release
	return


CherrygrovePokemonCenter1F_Fisher_Text_0:
# 6 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	.string "The PC is so great! I can store tons of\n"
	.string "POKéMON in it for free!\p"
	.string "I wonder how they can afford to do\n"
	.string "that?$"

CherrygrovePokemonCenter1F_Gentleman_Text_0:
# 13 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	.string "The PC in the corner is free for anyone\n"
	.string "to use, it just needs your TRAINER ID.\p"
	.string "The healing services are also free to\n"
	.string "use.\p"
	.string "POKéMON CENTERs are so convenient!$"

CherrygrovePokemonCenter1F_Teacher_Text_0:
# 20 "data/maps/CherrygrovePokemonCenter1F/scripts.pory"
	.string "The COMMUNICATION CENTER upstairs is\n"
	.string "still being setup, but you can still rent\l"
	.string "a bed there if you need to take a rest\l"
	.string "while on your journey.\p"
	.string "A good nap always helps time pass more\n"
	.string "quickly.$"
