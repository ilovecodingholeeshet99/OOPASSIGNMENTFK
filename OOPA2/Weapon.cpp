#include "Weapon.h"

Weapon::Weapon()
{
	x = rand() % 10;
	y = rand() % 10;
	dpsIncrement = 5;
	symbol = 'W';
	type = 2;
}

int Weapon::getval()
{
	return dpsIncrement;
}