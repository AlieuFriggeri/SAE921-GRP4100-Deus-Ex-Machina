// Deus ex machina.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <iostream>

#include "Monster.h"
#include "Player.h"

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "goodbye world" ;

    Monster monster;
    monster.attack();
        monster.defend();
    Player player;
    player.attack();
    player.defend();
    player.displayInventory();
    player.equip();
    player.flee();
    player.heal();
    player.pickUp();
    player.throw_();
    player.useForcePot();
    player.useHealPot();





}


