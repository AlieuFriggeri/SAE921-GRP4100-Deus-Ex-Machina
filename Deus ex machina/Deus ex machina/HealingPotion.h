#ifndef HEALINGPOTION
#define HEALINGPOTION
#include "Potion.h"

class HealingPotion :
    public Item
{
protected:
    std::string type;
    int hpToGive;


public:
    HealingPotion();
    HealingPotion(std::string type_, int hp_);
    ~HealingPotion();

    void Display();


};
#endif
