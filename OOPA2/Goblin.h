#pragma once
#include <iostream>
#include "Character.h"
class Goblin:public Character
{
private:

public:
	Goblin();
	void moveGoblin();
	void spawn(World* spawnGob);
	void pStats() override;
};

