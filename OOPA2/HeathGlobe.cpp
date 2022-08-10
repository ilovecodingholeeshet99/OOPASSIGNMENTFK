#include "HeathGlobe.h"

HeathGlobe::HeathGlobe()
{
	x = rand()%10;
	y = rand()%10;
	healthIncrement = 20;
	symbol = 'H';
	type = 1;
}

int HeathGlobe::getval() {return healthIncrement;}
