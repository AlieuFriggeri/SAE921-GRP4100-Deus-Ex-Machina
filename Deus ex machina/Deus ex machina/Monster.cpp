#include "Monster.h"

Monster::Monster()
{
	name = "monster";
	hp = 50;
	atk = 6;
}

Monster::Monster(std::string name_, int hp_, int atk_)
{
	name = name_;
	hp = hp_;
	atk = atk_;
}

Monster::~Monster()
{
}

/*void Monster::attack()
{
	std::cout << "Monster attacked" << std::endl;
}
*/
void Monster::defend()
{
	std::cout << "Monster defended" << std::endl;
}

void Monster::setHpLost(int hp_lost)
{
	hp -= hp_lost;
}

int Monster::getAtk()
{
	return atk;
}

int Monster::getHp()
{
	return hp;
}

std::string Monster::getName()
{
	return name;
}

