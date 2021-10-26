#ifndef HEALINGPOTION
#define HEALINGPOTION
#include "Potion.h"

class HealingPotion :
    public Potion
{
    std::string name;
    int hp;


public:
    HealingPotion();
    HealingPotion(std::string name_, int hp_);
    ~HealingPotion();



};
#endif
