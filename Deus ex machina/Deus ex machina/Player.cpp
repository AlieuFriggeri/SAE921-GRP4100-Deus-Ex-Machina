#include "Player.h"

#include <iostream>

Player::Player()
{
	inventoryPtr = nullptr;
	name = "player";
	hp = 100;
	atk = 10;
}

Player::Player(Inventory* inventoryPtr_, std::string name_, int hp_, int atk_)
{
	inventoryPtr = inventoryPtr_;
	name = name_;
	hp = hp_;
	atk = atk_;
}

Player::~Player()
{
}


/*void Player::attack()
{
	std::cout << "player attacks" << std::endl;

}*/

void Player::defend()
{
	std::cout << "player defends" << std::endl;
}

void Player::heal()
{
	std::cout << "player healed" << std::endl;
}

void Player::flee()
{
	std::cout << "player fleed" << std::endl;
}

void Player::pickUp()
{
	std::cout << "player picked up an item" << std::endl;
}

void Player::throw_()
{
	std::cout << "player threw an item" << std::endl;
}

void Player::useHealPot()
{
	std::cout << "player drinked healing potion" << std::endl;
}

void Player::useForcePot()
{
	std::cout << "player drinked force potion" << std::endl;
}

void Player::equip()
{
	std::cout << "player equiped a weapon" << std::endl;
}

void Player::displayInventory()
{
	inventoryPtr->Display();
}

Inventory* Player::getInventoryPtr()
{
	return inventoryPtr;
}

void Player::setInventoryPtr(Inventory* newInventoryPtr)
{
	inventoryPtr = newInventoryPtr;
}

void Player::setHpLost(int hp_lost)
{
	hp -= hp_lost;
}

int Player::getAtk()
{
	return atk;
}

void Player::setAtk(int newAtk)
{
	atk = newAtk;
}

void Player::printAtk()
{
	std::cout << atk << std::endl;
}

int Player::getHp()
{
	return hp;
}

void Player::setHp(int newHp)
{
	hp = newHp;
}

void Player::printHp()
{
	std::cout << hp << std::endl;
}

std::string Player::getName()
{
	return name;
}

void Player::setName(std::string newName)
{
	name = newName;
}

void Player::printName()
{
	std::cout << name << std::endl;
}
