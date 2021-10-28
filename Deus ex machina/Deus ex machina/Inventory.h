
#ifndef INVENTORY
#define INVENTORY
#include <vector>
#include "HealingPotion.h"

class Inventory
{
protected:
	std::vector<Item*> inventory;
	HealingPotion firstItem;
	Item* firstItemPtr;

public:
	Inventory();
	Inventory(HealingPotion firstItem, Item* firstItemPtr_);
	~Inventory();

	void Display();
	
};


#endif // !INVENTORY

