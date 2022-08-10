#pragma once
#include <iostream>
#include "object.h"

class Weapon : public object
{
private:
	int dpsIncrement;
public:
	Weapon();
	int getval() override;
};

