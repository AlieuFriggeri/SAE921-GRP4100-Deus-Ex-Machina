#ifndef PLAYER
#define PLAYER
#include "HealingPotion.h"
#include "Weapon.h"
#include "Inventory.h"
class Player
{
protected:
	Inventory* inventoryPtr;
	std::string name;
	int hp;
	int atk;
	
public:

	Player();
	Player(Inventory* inventoryPtr, std::string name_,int hp_, int atk_);
	~Player();

	Inventory* getInventoryPtr();
	void setInventoryPtr(Inventory* newInventoryPtr);
	void displayInventory();

	int getAtk();
	void setAtk(int newAtk);
	void printAtk();

	int getHp();
	void setHp(int newHp);
	void printHp();

	std::string getName();
	void setName(std::string newName);
	void printName();


	//void attack();
	void defend();
	void heal();
	void flee();
	void pickUp();
	void throw_();
	void useHealPot();
	void useForcePot();
	void equip();
	void setHpLost(int hp_lost);
	


};
#endif