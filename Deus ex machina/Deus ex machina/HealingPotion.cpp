#include "HealingPotion.h"

HealingPotion::HealingPotion()
{
	type  = "Healing Potion";
	hpToGive = 10;
}

HealingPotion::HealingPotion(std::string type_, int hpToGive_)
{
	type = type_;
	hpToGive = hpToGive_;
}

HealingPotion::~HealingPotion()
{
}

void HealingPotion::Display()
{
	std::cout << type << std::endl;
	std::cout << "this potion gives " << hpToGive << "hp to player" << std::endl;
}


