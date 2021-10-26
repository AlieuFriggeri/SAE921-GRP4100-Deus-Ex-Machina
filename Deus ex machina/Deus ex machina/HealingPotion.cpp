#include "HealingPotion.h"

HealingPotion::HealingPotion()
{
	name = "Healing Potion";
	hp = 10;
}

HealingPotion::HealingPotion(std::string name_, int hp_)
{
	name = name_;
	hp = hp_;
}

HealingPotion::~HealingPotion()
{
}


