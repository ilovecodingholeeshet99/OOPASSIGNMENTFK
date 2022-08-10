#pragma once
#include <iostream>
#include "Character.h"
#include "World.h"
class Archer: public Character
{
private:
	/*int xpos;
	int ypos;
	int health;
	int damage;*/
public:
	Archer();
	void SetHealth();
	int randarchHP();
	int randarchDPS();
	void attack(World* ptr, Character** gob);
	void move(char dir);
	/*void spawn(World* spawnArch);*/

	


};

