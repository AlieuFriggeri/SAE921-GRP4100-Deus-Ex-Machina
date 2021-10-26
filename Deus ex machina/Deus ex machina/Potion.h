#ifndef POTION
#define POTION
#include "Item.h"

class Potion :
    public Item
{
    std::string name;


public:
    Potion();
    Potion(std::string name_);
    ~Potion();




};
#endif

