#ifndef ITEM
#define ITEM
#include <iostream>

class Item
{
protected:
	std::string type;
public:
	Item();
	Item(std::string type_);
	~Item();

	virtual void Display() = 0;
};

#endif