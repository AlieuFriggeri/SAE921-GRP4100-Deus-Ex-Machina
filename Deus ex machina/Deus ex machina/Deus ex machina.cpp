// Deus ex machina.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <iostream>
#include <conio.h>
#include <thread>
#include "Battle.h"



int main()
{
	//VARIABLES PRE EXISTANTES AU JEU
	srand(time(NULL));
	Monster monster("grimgor", 50, 10);
	Monster* monsterPtr = &monster;


	//HISTOIRE
	std::cout
		<< "Un gigantesque des omnipotent et omniprésent (Deuss), decide de se creer lui meme sous plusieurs formes qui interagissent entre elles (gentils et mechant).\n"
		<< "Les gentils ont un royaume(DiceMania) ou la paix et la democracie sont instaurees.\n"
		<< "Les mechants ont un royaume(Dakhira) et souhaitent conquerir dice mania pour acceder a l'omnipotence de Deuss.\n"
		<< "Afin de contrer dakhira, dicemania monte une armee visant l'espoir de proteger leur nations et lorsque les assaillants se retrouverent au porte de Dicemania, le combat eclata et la guerre fut declaree.\n"
		<< "50 ans plus tard, la guerre fait toujours ravage dans les deux royaumes.\n";

	std::cout << "vous etes un soldat de Dicemania s'appretant a entrer sur un champ de bataille.\n";
	std::cout << "a l'entree, le sergeant major Ded vous demande de vous presenter:\n\n";
	std::cout << "Quel est ton nom soldat? ";
	
	std::string player_name;
	std::cin >> player_name;

	Player player(player_name, 50, 15);
	Player* playerPtr = &player;
	HealingPotion healingPotion("healing potion", 10);

	std::cout << std::endl;

	std::cout << "Ok "; player.PrintName(); std::cout << ", en position" << std::endl << std::endl;

	std::cout << "votre inventaire: " << std::endl;
	player.displayInventory();

	std::cout << std::endl << std::endl;


	//EXPERIENCE DE JEU
	std::cout << "Entrer dans le champ de bataille (y/other) " << std::endl;
	char c = _getch();
	
	//Battle 1
	if (c == 'y')
	{
		Battle battle(playerPtr, monsterPtr);
		battle.Start();
	}
	else
	{

		std::cout << "Si tu desertes, tu seras execute." << std::endl;
		std::cout << "Tu veux toujours deserter? (y/..) " << std::endl;
		char c = _getch();

		if (c == 'y')
		{
			std::cout << player.getName() << " meurt execute" << std::endl;
			return EXIT_FAILURE;
		}


		else if (c == 'n')
		{
			std::cout << "Quelle surprise! Allez soldat, va te battre pour Dicemania!" << std::endl << std::endl;

			Battle firstBattle(playerPtr, monsterPtr);
			firstBattle.Start();
		}
	}

	//If player is dead, then end program
	if (playerPtr->getHp() <= 0)
		return EXIT_FAILURE;

	/* if player is still alive
	-if he has loots
		- add loots to inventory
		- show him

	-if no loots
		- ask
			- access inventory?
				std::cout << "votre inventaire: " << std::endl;
				player.displayInventory();
				1 drink heal pot
				2 drink force pot
				3 throw item
				4 leave inventory

			- or continue
				- std::cout << "Acceder a la prochaine zone (y/other)\n";

				char c_ = _getch();
				if (c_ == 'y')
				{
					std::cout << "go" << std::endl;
				}
	*/

	return EXIT_SUCCESS;
}

