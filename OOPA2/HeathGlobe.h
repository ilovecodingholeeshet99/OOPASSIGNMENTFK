#pragma once
#include <iostream>
#include "object.h"

class HeathGlobe : public object
{
private:
	int healthIncrement;
public:
	HeathGlobe();
	int getval() override;
};

