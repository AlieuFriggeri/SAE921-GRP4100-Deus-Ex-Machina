#include "Player.h"

#include <iostream>

Player::Player()
{
	name = "player";
	hp = 100;
	atk = 10;
	//inventory.push_back();
}

Player::Player(std::string name_, int hp_, int atk_)
{
	name = name_;
	hp = hp_;
	atk = atk_;
	HealingPotion healingPotion("healing potion", 10);
	//inventory.push_back(std::make_unique<Item>(HealingPotion("healing pot", 10)));
	
}

Player::~Player()
{
}

void Player::PrintName()
{
	std::cout << name;
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
	inventory.Display();
}

Inventory Player::Get_Inventory()
{
	return inventory;
}

void Player::setHpLost(int hp_lost)
{
	hp -= hp_lost;
}

int Player::getAtk()
{
	return atk;
}

int Player::getHp()
{
	return hp;
}

std::string Player::getName()
{
	return name;
}
