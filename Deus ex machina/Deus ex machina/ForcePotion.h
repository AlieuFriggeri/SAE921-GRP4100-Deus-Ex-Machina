#ifndef FORCE_POTION
#define FORCE_POTION
#include "Item.h"

class ForcePotion :  public Item
{
protected:
    std::string type;
    int atkToGive;

public:
    ForcePotion();
    ForcePotion(std::string type_, int atkGoTive_);
    ~ForcePotion();


    std::string getNameOfKingdom();
    void setNameOfKingdom(std::string newNameOfKingdom);
    void printNameOfKingdom();

    std::string getType();
    void setType(std::string newType);
    void printType();

    int getAtkToGive();
    void setAtkToGive(int newAtkToGive);
    void printAtkToGive();

    void Display();

  
};
#endif // !FORCE_POTION

