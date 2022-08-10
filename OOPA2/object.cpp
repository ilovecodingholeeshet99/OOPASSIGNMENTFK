#include "object.h"

char object::getsymbol()
{
    return symbol;
}

int object::getX() {return x;}
int object::getY() {return y;}
unsigned object::gettype() {return type;}
void object::spawn(World* worlod)
{
	worlod->getBoard()[y][x] = symbol;
}