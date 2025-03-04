/*
===========================================================================
Copyright (C) 2006 Dmn_clown (aka: Bob Isaac (rjisaac@gmail.com))

This file is part of Open Arena and is based upon Mr. Elusive's fuzzy logic
system found in Quake 3 Arena.

Open Arena is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Open Arena is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

#include "chars.h"


skill 1
{
	CHARACTERISTIC_NAME							"Kyonshi"
	CHARACTERISTIC_GENDER						"Female"
	CHARACTERISTIC_ATTACK_SKILL					0.250
	CHARACTERISTIC_WEAPONWEIGHTS				"bots/kyonshi_w.c"
	CHARACTERISTIC_AIM_SKILL					0.250
	CHARACTERISTIC_AIM_ACCURACY					0.250
	CHARACTERISTIC_VIEW_FACTOR					0.250
	CHARACTERISTIC_VIEW_MAXCHANGE				90
	CHARACTERISTIC_REACTIONTIME					2.00

	CHARACTERISTIC_CHAT_FILE					"bots/kyonshi_t.c"
	CHARACTERISTIC_CHAT_NAME					"kyonshi"
	CHARACTERISTIC_CHAT_CPM						400
	CHARACTERISTIC_CHAT_INSULT					0.900
	CHARACTERISTIC_CHAT_MISC					0.750
	CHARACTERISTIC_CHAT_STARTENDLEVEL			0.900
	CHARACTERISTIC_CHAT_ENTEREXITGAME			1.000
	CHARACTERISTIC_CHAT_KILL					1.000
	CHARACTERISTIC_CHAT_DEATH					0.900
	CHARACTERISTIC_CHAT_ENEMYSUICIDE			1.000
	CHARACTERISTIC_CHAT_HITTALKING				0.900
	CHARACTERISTIC_CHAT_HITNODEATH				0.800
	CHARACTERISTIC_CHAT_HITNOKILL				1.000
	CHARACTERISTIC_CHAT_RANDOM					0.900
	CHARACTERISTIC_CHAT_REPLY					1.000

	CHARACTERISTIC_CROUCHER						0.200
	CHARACTERISTIC_JUMPER						0.900
	CHARACTERISTIC_WALKER						0.000
	CHARACTERISTIC_WEAPONJUMPING				0.800
	CHARACTERISTIC_GRAPPLE_USER					0.500

	CHARACTERISTIC_ITEMWEIGHTS					"bots/kyonshi_i.c"
	CHARACTERISTIC_AGGRESSION					0.250
	CHARACTERISTIC_SELFPRESERVATION				0.900
	CHARACTERISTIC_VENGEFULNESS					0.900
	CHARACTERISTIC_CAMPER						0.800

	CHARACTERISTIC_EASY_FRAGGER					1.000
	CHARACTERISTIC_ALERTNESS					0.900

	CHARACTERISTIC_AIM_ACCURACY_MACHINEGUN		0.700
	CHARACTERISTIC_AIM_ACCURACY_SHOTGUN			0.500
	CHARACTERISTIC_AIM_ACCURACY_ROCKETLAUNCHER	0.600
	CHARACTERISTIC_AIM_ACCURACY_GRENADELAUNCHER	0.500
	CHARACTERISTIC_AIM_ACCURACY_LIGHTNING		0.700
	CHARACTERISTIC_AIM_ACCURACY_PLASMAGUN		0.450
	CHARACTERISTIC_AIM_ACCURACY_RAILGUN			0.400
	CHARACTERISTIC_AIM_ACCURACY_BFG10K			0.800
	CHARACTERISTIC_AIM_SKILL_ROCKETLAUNCHER		0.500
	CHARACTERISTIC_AIM_SKILL_GRENADELAUNCHER	0.500
	CHARACTERISTIC_AIM_SKILL_PLASMAGUN			0.500
	CHARACTERISTIC_AIM_SKILL_BFG10K				0.500

	CHARACTERISTIC_FIRETHROTTLE					0.300
}

skill 4
{
	CHARACTERISTIC_NAME							"Kyonshi"
	CHARACTERISTIC_GENDER						"Female"
	CHARACTERISTIC_ATTACK_SKILL					1.000
	CHARACTERISTIC_WEAPONWEIGHTS				"bots/kyonshi_w.c"
	CHARACTERISTIC_AIM_SKILL					1.000
	CHARACTERISTIC_AIM_ACCURACY					1.000
	CHARACTERISTIC_VIEW_FACTOR					0.900
	CHARACTERISTIC_VIEW_MAXCHANGE				240
	CHARACTERISTIC_REACTIONTIME					1.25

	CHARACTERISTIC_CHAT_FILE					"bots/kyonshi_t.c"
	CHARACTERISTIC_CHAT_NAME					"kyonshi"
	CHARACTERISTIC_CHAT_CPM						400
	CHARACTERISTIC_CHAT_INSULT					0.900
	CHARACTERISTIC_CHAT_MISC					0.750
	CHARACTERISTIC_CHAT_STARTENDLEVEL			0.900
	CHARACTERISTIC_CHAT_ENTEREXITGAME			1.000
	CHARACTERISTIC_CHAT_KILL					1.000
	CHARACTERISTIC_CHAT_DEATH					0.900
	CHARACTERISTIC_CHAT_ENEMYSUICIDE			1.000
	CHARACTERISTIC_CHAT_HITTALKING				0.900
	CHARACTERISTIC_CHAT_HITNODEATH				0.800
	CHARACTERISTIC_CHAT_HITNOKILL				1.000
	CHARACTERISTIC_CHAT_RANDOM					0.900
	CHARACTERISTIC_CHAT_REPLY					1.000

	CHARACTERISTIC_CROUCHER						0.100
	CHARACTERISTIC_JUMPER						1.000
	CHARACTERISTIC_WALKER						0.000
	CHARACTERISTIC_WEAPONJUMPING				1.000
	CHARACTERISTIC_GRAPPLE_USER					1.000

	CHARACTERISTIC_ITEMWEIGHTS					"bots/kyonshi_i.c"
	CHARACTERISTIC_AGGRESSION					1.000
	CHARACTERISTIC_SELFPRESERVATION				0.000
	CHARACTERISTIC_VENGEFULNESS					1.000
	CHARACTERISTIC_CAMPER						0.700

	CHARACTERISTIC_EASY_FRAGGER					1.000
	CHARACTERISTIC_ALERTNESS					0.900

	CHARACTERISTIC_AIM_ACCURACY_MACHINEGUN		0.900
	CHARACTERISTIC_AIM_ACCURACY_SHOTGUN			0.900
	CHARACTERISTIC_AIM_ACCURACY_ROCKETLAUNCHER	0.900
	CHARACTERISTIC_AIM_ACCURACY_GRENADELAUNCHER	0.900
	CHARACTERISTIC_AIM_ACCURACY_LIGHTNING		0.900
	CHARACTERISTIC_AIM_ACCURACY_PLASMAGUN		0.900
	CHARACTERISTIC_AIM_ACCURACY_RAILGUN			0.900
	CHARACTERISTIC_AIM_ACCURACY_BFG10K			0.900
	CHARACTERISTIC_AIM_SKILL_ROCKETLAUNCHER		0.900
	CHARACTERISTIC_AIM_SKILL_GRENADELAUNCHER	0.900
	CHARACTERISTIC_AIM_SKILL_PLASMAGUN			0.900
	CHARACTERISTIC_AIM_SKILL_BFG10K				0.900

	CHARACTERISTIC_FIRETHROTTLE					0.300
}

skill 5
{
	CHARACTERISTIC_NAME							"Kyonshi"
	CHARACTERISTIC_GENDER						"Female"
	CHARACTERISTIC_ATTACK_SKILL					1.000
	CHARACTERISTIC_WEAPONWEIGHTS				"bots/kyonshi_w.c"
	CHARACTERISTIC_AIM_SKILL					1.000
	CHARACTERISTIC_AIM_ACCURACY					1.000
	CHARACTERISTIC_VIEW_FACTOR					1.000
	CHARACTERISTIC_VIEW_MAXCHANGE				360
	CHARACTERISTIC_REACTIONTIME					0.00

	CHARACTERISTIC_CHAT_FILE					"bots/kyonshi_t.c"
	CHARACTERISTIC_CHAT_NAME					"kyonshi"
	CHARACTERISTIC_CHAT_CPM						400
	CHARACTERISTIC_CHAT_INSULT					0.900
	CHARACTERISTIC_CHAT_MISC					0.750
	CHARACTERISTIC_CHAT_STARTENDLEVEL			0.900
	CHARACTERISTIC_CHAT_ENTEREXITGAME			1.000
	CHARACTERISTIC_CHAT_KILL					1.000
	CHARACTERISTIC_CHAT_DEATH					0.900
	CHARACTERISTIC_CHAT_ENEMYSUICIDE			1.000
	CHARACTERISTIC_CHAT_HITTALKING				0.900
	CHARACTERISTIC_CHAT_HITNODEATH				0.800
	CHARACTERISTIC_CHAT_HITNOKILL				1.000
	CHARACTERISTIC_CHAT_RANDOM					0.900
	CHARACTERISTIC_CHAT_REPLY					1.000

	CHARACTERISTIC_CROUCHER						0.000
	CHARACTERISTIC_JUMPER						1.000
	CHARACTERISTIC_WALKER						0.000
	CHARACTERISTIC_WEAPONJUMPING				1.000
	CHARACTERISTIC_GRAPPLE_USER					1.000

	CHARACTERISTIC_ITEMWEIGHTS					"bots/kyonshi_i.c"
	CHARACTERISTIC_AGGRESSION					1.000
	CHARACTERISTIC_SELFPRESERVATION				1.000
	CHARACTERISTIC_VENGEFULNESS					1.000
	CHARACTERISTIC_CAMPER						0.000

	CHARACTERISTIC_EASY_FRAGGER					1.000
	CHARACTERISTIC_ALERTNESS					1.000

	CHARACTERISTIC_AIM_ACCURACY_MACHINEGUN		1.000
	CHARACTERISTIC_AIM_ACCURACY_SHOTGUN			1.000
	CHARACTERISTIC_AIM_ACCURACY_ROCKETLAUNCHER	1.000
	CHARACTERISTIC_AIM_ACCURACY_GRENADELAUNCHER	1.000
	CHARACTERISTIC_AIM_ACCURACY_LIGHTNING		1.000
	CHARACTERISTIC_AIM_ACCURACY_PLASMAGUN		1.000
	CHARACTERISTIC_AIM_ACCURACY_RAILGUN			1.000
	CHARACTERISTIC_AIM_ACCURACY_BFG10K			1.000
	CHARACTERISTIC_AIM_SKILL_ROCKETLAUNCHER		1.000
	CHARACTERISTIC_AIM_SKILL_GRENADELAUNCHER	1.000
	CHARACTERISTIC_AIM_SKILL_PLASMAGUN			1.000
	CHARACTERISTIC_AIM_SKILL_BFG10K				1.000

	CHARACTERISTIC_FIRETHROTTLE					0.300
}

