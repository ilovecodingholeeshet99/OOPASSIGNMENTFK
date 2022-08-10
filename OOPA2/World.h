#pragma once
class World
{
private:
	char** board;
public:
	char** getBoard();
	World();
	void clear(int x, int y);
};

