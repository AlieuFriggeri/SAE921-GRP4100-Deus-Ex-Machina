#ifndef PLAYER
#define PLAYER
#include <vector>
#include "HealingPotion.h"
#include "Weapon.h"
class Player
{
	std::string name;
	int hp;
	int atk;
	std::vector<Item*> inventory;

public:

	Player();
	Player(std::string name_,int hp_, int atk_);
	~Player();

	void PrintName();
	void attack();
	void defend();
	void heal();
	void flee();

	 void pickUp() ;
	 void throw_();
	 void useHealPot();
	 void useForcePot();
	 void equip();
	 void displayInventory();
	 std::vector<Item*> Get_Inventory();





};

#endif