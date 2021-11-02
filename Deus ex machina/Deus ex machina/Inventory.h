
#ifndef INVENTORY
#define INVENTORY
#include <vector>
#include "HealingPotion.h"

class Inventory
{
protected:
	std::vector<Item*> vectorOfItems;
	int maxCapacity;
	HealingPotion firstItem;
	Item* firstItemPtr;

public:
	Inventory();
	Inventory(HealingPotion firstItem, Item* firstItemPtr_);
	~Inventory();

	std::vector<Item*> getVectorOfItems();
	void setInventoryItems(std::vector<Item*> newVectorOfItems);
	/* here, method "Display() is like "printVectorOfItems" */

	int getMaxCapacity();
	void setMaxCapacity(int newMaxCapacity);
	void printMaxCapacity();

	void Display();
	void add(Item* itemPtr);
	void remove(Item* itemPtr);

	

	
};


#endif // !INVENTORY

