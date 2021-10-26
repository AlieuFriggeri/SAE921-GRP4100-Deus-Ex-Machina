#ifndef ITEM
#define ITEM
#include <string>

class Item
{
public:
	enum class Type
	{
		healingPotion,
		forcePotion,
		sword,
		bow
	};
private:
	//std::string name;

	Type type;
public:
	Item();
	Item(Type type_);
	~Item();




};

#endif