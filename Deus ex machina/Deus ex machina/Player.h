#ifndef PLAYER
#define PLAYER
#include "HealingPotion.h"
#include "Weapon.h"
#include "Inventory.h"
class Player
{
	std::string name;
	int hp;
	int atk;
	Inventory inventory;
public:

	Player();
	Player(std::string name_,int hp_, int atk_);
	~Player();

	void PrintName();
	//void attack();
	void defend();
	void heal();
	void flee();

	 void pickUp() ;
	 void throw_();
	 void useHealPot();
	 void useForcePot();
	 void equip();
	 void displayInventory();
	 Inventory Get_Inventory();

	 void setHpLost(int hp_lost);
	 int getAtk();
	 int getHp();
	 std::string getName();





};

#endif