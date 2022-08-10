#pragma once
#include "World.h"

class Character
{
	int oldX;
	int oldY;
protected:
	int x;
	int y;
	int health;
	int damage;
	char symbol;
	int range;
public:
	char answer;
	//Move function
	Character();
	// in the move function, we need to take in the parameters of the answer and x and  
	void pMove(Character** gob);
	virtual void pStats();
	virtual void spawn(World*);
	virtual void attack(World* ptr, Character** gob);
	int getX(); // getter
	int getY(); // getter
	int getOldX();
	int getOldY();
	int getHealth();
	int getDamage();
	void setDamage(int newdmg);
	void setHealth(int hpez);
	void damageP(int damageperHit); // || Damage and decrease health



};

