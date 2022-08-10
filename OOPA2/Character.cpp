#include <iostream>
#include "Character.h"
Character::Character()
{
    x = 0;
    y = 0;
    symbol = 'C';
    health = 80;
    damage = 10;
    range = 1;
    answer = 'w';
    oldX = 0;
    oldY = 0;
}

void Character::pMove(Character** gob)
{
    oldX = x;
    oldY = y;
    char pAns;
    std::cout << "Player option move (W)(A)(S)(D)" << "  " << std::endl;
    std::cin >> pAns;
    switch (pAns)
    {
    case 'w':
        if (y > 0)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x && gob[i]->getY() == y - 1)
                    break;
                y--;
                break;
            }
        }
        break;
    case 's':
        if (y < 9)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x && gob[i]->getY() == y + 1)
                    break;
                y++;
                break;
            }
        }
    break;
    case 'a':
        if (x > 0)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x - 1 && gob[i]->getY() == y)
                    break;
                x--;
                break;
            }
        }
        break;
    case 'd':
        if (x < 9)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x + 1 && gob[i]->getY() == y)
                    break;
                x++;
                break;
            }
        }
        break;

    case 'W':
        if (y > 0)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x && gob[i]->getY() == y - 1)
                    break;
                y--;
                break;
            }
        }
        break;
    case 'S':
        if (y < 9)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x && gob[i]->getY() == y + 1)
                    break;
                y++;
                break;
            }
        }
        break;
    case 'A':   
        if (x > 0)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x - 1 && gob[i]->getY() == y)
                    break;
                x--;
                break;
            }
        }
        break;
    case 'D':
        if (x < 9)
        {
            for (int i = 0; i < 3; i++)
            {
                if (gob[i]->getX() == x + 1 && gob[i]->getY() == y)
                    break;
                x++;
                break;
            }
        }
        break;
    }
}

void Character::pStats()
{
    std::cout << x << y << std::endl;
}


//void spawn(World* spawnArch, int x, int y)
//{
//    spawnArch->getBoard()[y][x] = symbol;
//
//
//}

void Character::spawn(World* spawn)
{
    spawn->getBoard()[y][x] = symbol;
}

int Character::getHealth() { return health; }
int Character::getDamage() { return damage; }
void Character::setDamage(int newdmg) { damage = newdmg; }
void Character::setHealth(int hpez) { health = hpez; }

void Character::attack(World* ptr, Character** gob)
{
    char pAttack;
    std::cout << "Attack(I)(J)(K)(L) Enter Incorrect to Skip" << std::endl;
    std::cin >> pAttack;
    switch (pAttack)
    {
    case 'I':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y - 1 && gob[i]->getX() == x)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;
    case 'J':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y && gob[i]->getX() == x - 1)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;
    case 'K':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y + 1 && gob[i]->getX() == x)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;
    case 'L':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y && gob[i]->getX() == x + 1)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;

    case 'i':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y - 1 && gob[i]->getX() == x)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;
    case 'j':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y && gob[i]->getX() == x - 1)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;
    case 'k':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y + 1 && gob[i]->getX() == x)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;
    case 'l':
        for (int i = 0; i < 3; i++)
        {
            if (gob[i]->getY() == y && gob[i]->getX() == x + 1)
            {
                gob[i]->damageP(5);
                gob[i]->pStats();
            }
        }
        break;
    default:
    std::cout << "Skipping Attack Turn" << std::endl;
        break;
    }
}

int Character::getX()
{
    return x;
}

int Character::getY()
{
    return y;
}

void Character::damageP(int damageperHit)
{
    health -= damageperHit;
}

int Character::getOldX()
{
    return oldX;
}

int Character::getOldY()
{
    return oldY;
}

