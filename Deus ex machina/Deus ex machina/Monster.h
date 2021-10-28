#ifndef MONSTER
#define MONSTER

#include <iostream>

class Monster
{
	std::string name;
	int hp;
	int atk;

public:
	Monster();
	Monster(std::string name_, int hp_, int atk_);
	~Monster();

	void defend();
	void setHpLost(int hp_lost);
	int getAtk();
	int getHp();
	std::string getName();

};

#endif