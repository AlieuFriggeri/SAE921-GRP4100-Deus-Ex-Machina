#ifndef WEAPON
#define WEAPON

#include "Item.h"
class Weapon : public Item
{
protected:
	std::string nameOfKingdom;
	std::string type;
	int atk;
	

public:
	Weapon();
	Weapon(std::string nameOfKingdom_, std::string type_, int atk_ );
	~Weapon();

	std::string getNameOfKingdom();
	void setNameOfKingdom(std::string newNameOfKingdom);
	void printNameOfKingdom();

	std::string getType();
	void setType(std::string newType);
	void printType();

	int getAtk();
	void setAtk(int newAtk);
	void printAtk();

	void Display();


};

#endif // !


