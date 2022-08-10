#include "Function.h"
#include <iostream>
#include "Archer.h"
#include "Barbarian.h"

void askPlayer(Character* &playerSelection)
{
	char userInput;
	std::cout << "(B)arbarian or (A)rcher?:  " << std::endl;
	std::cin >> userInput;
	if (userInput == 'B' || userInput == 'b')
	{
		playerSelection = new Barbarian;
	}
	if (userInput == 'A' || userInput == 'a')
	{
		playerSelection = new Archer;
	}
}

void drawBoard(World* ptr)
{
	system("CLS");
	std::cout << "   ";
	for (int i = 1; i < 11; i++)
	{
		std::cout << " " << "  ";
		std::cout << i;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
	//	for (int row = 0; row < 10; row++)  // Delete all the left over dupes
	//{
	//	for (int column = 0; column < 10; column++)
	//	{
	//		ptr->getBoard()[column][row] = ' ';
	//	}
	/*}*/
		if (i != 9)
		std::cout << i+1 << "||";
		else
		{
			std::cout << i + 1 << "|";
		}
		for (int j = 0; j < 10; j++)
		{
			if (i != 9 )
			{
				std::cout << "  "  ;
			}
			else
			{
				std::cout << "  ";

			}
			std::cout << " ";
			std::cout << ptr->getBoard()[i][j];

		}
	std::cout << std::endl;
	}
	//for (int row = 0; row < 10; row++)  // Delete all the left over dupes
	//{
	//	for (int column = 0; column < 10; column++)
	//	{
	//		ptr->getBoard()[column][row] = ' ';
	//	}
	//}
	//
}


void clear(World* ptr, int x , int y)	
{
	ptr->getBoard()[y][x] = ' ';
}

void ItemPickupCheck(Character* player, object** oebjects)
{
	for (int i = 0; i < 3; i++)
	{
		if (oebjects[i] == nullptr)
			continue;
		if (player->getX() == oebjects[i]->getX() && player->getY() == oebjects[i]->getY())
		{
			switch (oebjects[i]->gettype())
			{
				case 1:
				player->setHealth(player->getHealth() + oebjects[i]->getval());
				case 2:
				player->setDamage(player->getDamage() + oebjects[i]->getval());
			}
			delete oebjects[i];
			oebjects[i] = nullptr;
		}
	}
}
