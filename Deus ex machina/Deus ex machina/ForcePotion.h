#ifndef FORCE_POTION
#define FORCE_POTION
#include "Item.h"



class ForcePotion :
    public Item
{
  
    std::string type;
    int atkToGive;


public:
    ForcePotion();
    ForcePotion(std::string type_, int atkGoTive_);
    ~ForcePotion();

    void Display();

  
};
#endif // !FORCE_POTION

