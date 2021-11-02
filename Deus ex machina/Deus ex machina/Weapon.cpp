#include "Weapon.h"

Weapon::Weapon()
{
	this->nameOfKingdom = "deikmos";
	this->type = "weapon";
	this->atk = 10;
}

Weapon::Weapon(std::string nameOfKingdom_, std::string type_, int atk_)
{
	nameOfKingdom = nameOfKingdom_;
	type = type_;
	atk = atk_;
}

Weapon::~Weapon()
{
}

std::string Weapon::getNameOfKingdom()
{
	return nameOfKingdom;
}

void Weapon::setNameOfKingdom(std::string newNameOfKingdom)
{
	nameOfKingdom = newNameOfKingdom;
}

void Weapon::printNameOfKingdom()
{
	std::cout << atk << std::endl;
}

std::string Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string newType)
{
	type = newType;
}

void Weapon::printType()
{
	std::cout << type << std::endl;
}

int Weapon::getAtk()
{
	return atk;
}

void Weapon::setAtk(int newAtk)
{
	atk = newAtk;
}

void Weapon::printAtk()
{
	std::cout << atk << std::endl;
}

void Weapon::Display()
{
	std::cout << type << std::endl;
	std::cout << "this " << type << " was crafted in the kingdom of " << nameOfKingdom << std::endl;
	std::cout << "it gives " << atk << " atk to whoever using it " << std::endl;
}
