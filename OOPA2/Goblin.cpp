#include "Goblin.h"

Goblin::Goblin()
{
	health = 20;
	damage = rand() % 10 + 1;
	while (true)
	{
		x = rand() % 10;
		y = rand() % 10;
		if (x == 0 && y == 0)
		{
			continue;
		}
		break;
	}
}

void Goblin::pStats()
{
	std::cout << "Goblin Health: " << health << std::endl;
	std::cout << "Goblin Damage: " << damage << std::endl;
}

void Goblin::moveGoblin()
{
}

void Goblin::spawn(World* spawnGob)
{
	symbol = 'G';
	spawnGob->getBoard()[y][x] = symbol;
}
