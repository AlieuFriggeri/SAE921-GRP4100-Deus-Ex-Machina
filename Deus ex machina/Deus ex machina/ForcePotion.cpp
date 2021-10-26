#include "ForcePotion.h"

ForcePotion::ForcePotion()
{
	type = "force potion";
	atkToGive = 10;
}

ForcePotion::ForcePotion(std::string type_, int atkToGive_)
{
	type = type_;
	atkToGive = atkToGive_;
}

ForcePotion::~ForcePotion()
{
}

void ForcePotion::Display()
{
	std::cout << type << std::endl;
	std::cout << "this potion gives " << atkToGive << " atk to player" << std::endl;
}
