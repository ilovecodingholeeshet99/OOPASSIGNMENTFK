#include <iostream>
#include "Function.h"
#include "Archer.h" 
#include "Goblin.h"
#include "World.h"
#include "HeathGlobe.h"
#include "Weapon.h"
#include "Character.h"
#include <random>

#define print(x) std::cout << x << std::endl;

// Prob: prints a new set of goblin, weapon and health globe everytime when map is printed
int main(void)
{
	srand(time(NULL));
	// ---- Creation of objects ----
	Character* player; // new Character type pointer
	Character** gob = new Character*[3];
	for (int i = 0; i < 3; i++)
	{
		gob[i] = new Goblin;
	}
	object** objectBox = new object*[3];
	for (int i = 0; i < 2; i++)
	{
		objectBox[i] = new HeathGlobe;
	}
	objectBox[2] = new Weapon;
	askPlayer(player); // Ask player whether barbarian or archer // askplayer function in function.cpp
	std::cout << std::endl;
	World* drawWorld = new World; // new drawWorld object of type World
	while (true)
	{
		// ---- Actual Gameplay ------
		// Ask Player to Move
		// Spawn Characters at New Locations
		player->spawn(drawWorld);//Barb or Arch
		for (int i = 0; i < 3; i++)
		{
			if (gob[i] == nullptr)
				continue;
			gob[i]->spawn(drawWorld);
		}
		for (int i = 0; i < 3; i++)
		{
			if (objectBox[i] == nullptr)
				continue;
			objectBox[i]->spawn(drawWorld);
		}

		//Draw Board After Spawn
		drawBoard(drawWorld);
		// askto move
		player->pMove(gob); // point pointer to ask user whether to press WASD
		ItemPickupCheck(player, objectBox);
		// clear old positiono
		//draw board again
		drawBoard(drawWorld);
		//askto attack
		player->attack(drawWorld, gob);
		// REPEAT FROM TOP
		clear(drawWorld, player->getOldX(), player->getOldY());
	}
	



	return 0;
}
