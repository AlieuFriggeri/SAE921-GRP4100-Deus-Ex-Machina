#include "Inventory.h"

Inventory::Inventory()
{
	maxCapacity = 10;
	firstItem = HealingPotion("healing potion", 10);
	firstItemPtr = &firstItem;
	vectorOfItems.push_back(firstItemPtr);
}

Inventory::Inventory(HealingPotion firstItem_, Item* firstItemPtr_)
{
	maxCapacity = 10;
	firstItem = firstItem_;
	firstItemPtr = firstItemPtr_;
}

Inventory::~Inventory()
{
}

std::vector<Item*> Inventory::getVectorOfItems()
{
	return vectorOfItems;
}

void Inventory::setInventoryItems(std::vector<Item*> newVectorOfItems)
{
	vectorOfItems = newVectorOfItems;
}

int Inventory::getMaxCapacity()
{
	return maxCapacity;
}

void Inventory::setMaxCapacity(int newMaxCapacity)
{
	maxCapacity = newMaxCapacity;
}

void Inventory::printMaxCapacity()
{
	std::cout << maxCapacity << std::endl;
}

void Inventory::Display()
{
	std::cout << "capacity " << vectorOfItems.size() << "/" << maxCapacity << std::endl;
	for (auto itemPtr : vectorOfItems)
	{
		itemPtr->Display();
	}

	std::cout << std::endl;
}

void Inventory::add(Item* itemPtr)
{
	vectorOfItems.push_back(itemPtr);
}

void Inventory::remove(Item* itemPtr)
{
	std::vector<Item*>::iterator it;
	it = vectorOfItems.begin();

	int i = 0;

	while (*it != itemPtr )
	{
		i++;
		it++;
	}

	vectorOfItems.erase(vectorOfItems.begin() + i);
}

