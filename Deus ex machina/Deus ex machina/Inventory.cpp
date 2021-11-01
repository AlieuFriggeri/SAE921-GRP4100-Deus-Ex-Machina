#include "Inventory.h"

Inventory::Inventory()
{
	firstItem = HealingPotion("healing potion", 10);
	firstItemPtr = &firstItem;
	inventory.push_back(firstItemPtr);
}

Inventory::Inventory(HealingPotion firstItem_, Item* firstItemPtr_)
{
	firstItem = firstItem_;
	firstItemPtr = firstItemPtr_;
}

Inventory::~Inventory()
{
}

void Inventory::Display()
{
	for (auto itemPtr : inventory)
	{
		itemPtr->Display();
	}

	std::cout << std::endl;
}
