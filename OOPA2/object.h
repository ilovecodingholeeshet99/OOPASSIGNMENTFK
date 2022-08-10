#pragma once
#include "World.h"

class object
{
    protected:
    int x,y;
    char symbol;
    unsigned type;

    public:
    char getsymbol();
    int getX();
    int getY();
    unsigned gettype();
    void spawn(World* worlod);
    virtual int getval() = 0;
};