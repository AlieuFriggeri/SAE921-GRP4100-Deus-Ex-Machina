// Deus ex machina.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <iostream>

#include "Monster.h"
#include "Player.h"

int main()
{
	std::cout
		<< "Un gigantesque des omnipotent et omniprésent (Deuss), decide de se creer lui meme sous plusieurs formes qui interagissent entre elles (gentils et mechant).\n"
		<< "Les gentils ont un royaume(DiceMania) ou la paix et la democracie sont instaurees.\n"
		<< "Les mechants ont un royaume(Dakhira) et souhaitent conquerir dice mania pour acceder a l'omnipotence de Deuss.\n"
		<< "Afin de contrer dakhira, dicemania monte une armee visant l'espoir de proteger leur nations et lorsque les assaillants se retrouverent au porte de Dicemania, le combat eclata et la guerre fut declaree.\n"
		<< "50 ans plus tard, la guerre fait toujours ravage dans les deux royaumes.\n";

	std::cout << "vous etes un soldat de Dicemania s'appretant a entrer sur un champ de bataille.\n";
	std::cout << "a l'entree, le sergeant major Ded vous demande de vous presenter:\n";
	std::cout << "Quel est ton nom soldat? ";
	




	std::string player_name;
	std::cin >> player_name;

	Player player(player_name, 100, 10);
	HealingPotion healingPotion("healing potion", 10);
	

	std::cout << std::endl;

	std::cout << "Ok "; player.PrintName(); std::cout << ", en position" << std::endl << std::endl;

	std::cout << "votre inventaire: " << std::endl;
	player.displayInventory();
	

	return EXIT_SUCCESS;
}


