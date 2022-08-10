#pragma once
#include "Character.h"
#include <random>
class Barbarian:public Character
{
private:
	/*int xpos;
	int ypos;
	int health;
	int damage;*/

public:
	Barbarian();
	int randbarbHP();
	int randbarbDPS();
	//void spawn(World* spawnBarb);
};

