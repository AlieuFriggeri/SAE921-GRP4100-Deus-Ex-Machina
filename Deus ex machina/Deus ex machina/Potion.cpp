#include "Potion.h"

Potion::Potion()
{
	type = "potion";
	hpToGive = 0;
	atkToGive = 0;
}

Potion::Potion(std::string type_, int hpToGive_, int atkToGive_)
{
	type = type_;
	hpToGive = hpToGive_;
	atkToGive = atkToGive_;
}

Potion::~Potion()
{
}

void Potion::Display()
{
	std::cout << type << std::endl;
	//std::cout << "this potion gives " << hpToGive << 

}

