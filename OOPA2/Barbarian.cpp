#include <iostream>
#include "Barbarian.h"

//
Barbarian::Barbarian()
{
	x = 0;
	y = 0;
	symbol = 'B';
	std::cout << "    " << "   " << "   " << "Health" << "  " << "DPS" << std::endl;
	std::cout << "Barbarian| " << " " << health << "    " << damage << std::endl;;
}

int Barbarian::randbarbHP()
{
	health = randbarbHP();
	return ((rand() % 20) + 80);
}

int Barbarian::randbarbDPS()
{
	damage = randbarbDPS();
	return ((rand() % 10) + 10);
}

//void Barbarian::spawn(World* spawnBarb)
//{
//	symbol = 'B';
//	spawnBarb->getBoard()[y][x] = symbol;
//}
