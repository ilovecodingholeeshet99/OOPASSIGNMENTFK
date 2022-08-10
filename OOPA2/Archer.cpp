#include "Archer.h"
#include "World.h"

// Archer default constructor handles printing the randomised stats of Archer 
Archer::Archer()
{
	x = 0;
	y = 0;
	symbol = 'A';
	range = 2;
	std::cout << "    " << "   " << "Health" << "  " <<  "DPS" << std::endl;
	std::cout << "Archer| " << " " << health << "    " << damage << std::endl;
}


//Setter function setting health of a archer
void Archer::SetHealth()
{
	health = randarchHP();
	std::cout << health << std::endl;
}


//Returns a number between 60 and 80
int Archer::randarchHP()
{
	damage = randarchDPS();
	return ((rand() % 20) + 60);
}

//Returns a number between 1-10
int Archer::randarchDPS()
{
	return (rand() % 10) +1;
}

void Archer::move(char dir)
{
	

}

void Archer::attack(World* ptr, Character** gob)
{
    char pAttack;
    std::cout << "Attack(I)(J)(K)(L) Enter Incorrect to Skip" << std::endl;
    std::cin >> pAttack;
    switch (pAttack)
    {
    case 'I':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y - i && gob[i]->getX() == x)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;
    case 'J':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y && gob[i]->getX() == x - i)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;
    case 'K':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y + i && gob[i]->getX() == x)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;
    case 'L':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y && gob[i]->getX() == x + i)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;

    case 'i':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y - i && gob[i]->getX() == x)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;
    case 'j':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y && gob[i]->getX() == x - i)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;
    case 'k':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y + i && gob[i]->getX() == x)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;
    case 'l':
        for (int i = 0; i < 3; i++)
        {
			for (int i = 1; i <= range; i++)
			{
				if (gob[i]->getY() == y && gob[i]->getX() == x + i)
				{
					gob[i]->damageP(5);
					gob[i]->pStats();
				}
			}
        }
        break;
    default:
    std::cout << "Skipping Attack Turn" << std::endl;
        break;
    }
}

//void Archer::spawn(World* spawnArch)
//{
//	symbol = 'A';
//	spawnArch->getBoard()[0][0] = symbol;
//}
