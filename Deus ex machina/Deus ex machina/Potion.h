#ifndef POTION
#define POTION
#include "Item.h"

class Potion :
    public Item
{
    std::string type;
    int hpToGive;
    int atkToGive;
    
public:
    Potion();
    Potion(std::string type_, int hpToGive_, int atkToGive_);
    ~Potion();

    void Display();

};
#endif

