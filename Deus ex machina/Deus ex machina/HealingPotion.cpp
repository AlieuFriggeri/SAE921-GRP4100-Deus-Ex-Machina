#include "HealingPotion.h"

HealingPotion::HealingPotion()
{
	nameOfKingdom = "dicemania";
	type  = "Healing Potion";
	hpToGive = 10;
}

HealingPotion::HealingPotion(std::string type_, int hpToGive_)
{
	nameOfKingdom = "dicemania";
	type = type_;
	hpToGive = hpToGive_;
}

HealingPotion::~HealingPotion()
{
}

std::string HealingPotion::getNameOfKingdom()
{
	return nameOfKingdom;
}

void HealingPotion::setNameOfKingdom(std::string newNameOfKingdom)
{
	nameOfKingdom = newNameOfKingdom;
}

void HealingPotion::printNameOfKingdom()
{
	std::cout << nameOfKingdom << std::endl;
}

std::string HealingPotion::getType()
{
	return type;
}

void HealingPotion::setType(std::string newType)
{
	type = newType;
}

void HealingPotion::printType()
{
	std::cout << type << std::endl;
}


int HealingPotion::getHpToGive()
{
	return hpToGive;
}

void HealingPotion::setHpToGive(int newHpToGive)
{
	hpToGive = newHpToGive;
}

void HealingPotion::printHpToGive()
{
	std::cout << hpToGive << std::endl;
}

void HealingPotion::Display()
{
	std::cout << type << std::endl;
	std::cout << "this potion gives " << hpToGive << "hp to player" << std::endl;
}


