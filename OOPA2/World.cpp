#include <iostream>
#include "World.h"

char** World::getBoard()
{
	return board;
}

World::World()
{
	board = new char*[10];
	for (int i = 0; i < 10; i++)
	{
		board[i] = new char[10];
		for (int j = 0; j < 10; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void World::clear(int x, int y)
{
	board[x][y] = ' ';
}
