#include "Item.h"

Item::Item()
{
	//name = "item";
	type = Type::healingPotion;
}

Item::Item(Type type_)
{
	//name = name_;
	type = type_;
}

Item::~Item()
{
}
