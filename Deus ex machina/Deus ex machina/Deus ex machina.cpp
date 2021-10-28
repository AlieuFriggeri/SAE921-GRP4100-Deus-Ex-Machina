// Deus ex machina.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <iostream>
#include <conio.h>
#include <thread>
#include "Monster.h"
#include "Player.h"

int main()
{
	//VARIABLES PRE EXISTANTES AU JEU
	srand(time(NULL));
	Monster monster("grimgor", 50, 10);

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
	HealingPotion healingPotion("healing potion", 10);

	std::cout << std::endl;

	std::cout << "Ok "; player.PrintName(); std::cout << ", en position" << std::endl << std::endl;

	std::cout << "votre inventaire: " << std::endl;
	player.displayInventory();

	std::cout << std::endl << std::endl;


	//EXPERIENCE DE JEU
	std::cout << "Entrer dans le champ de bataille (y/..) " << std::endl;
	char c = _getch();

	if (c == 'y')
	{
		do
		{
			std::cout << "HP:" << player.getHp() << std::endl;
			std::cout << "Attaquer (a) ";

			char c = _getch();

			while (c != 'a')
			{
				std::cout << std::endl <<  "Attaquer (a) " << std::endl;
				c = _getch();
			}

			std::cout << std::endl;
			
			int scorePlayer = rand() % 10;
			int scoreMonster = rand() % 10;

			if (scorePlayer > scoreMonster)
			{
				monster.setHpLost(player.getAtk());
				std::cout << player.getName() << " inflige " << player.getAtk() << " de degats a " << monster.getName() << "(" << (monster.getHp() <=0 ? 0 : monster.getHp()) << "hp)" <<  std::endl << std::endl;
			}

			else if (scoreMonster > scorePlayer)
			{
				player.setHpLost(monster.getAtk());
				std::cout << monster.getName() << "(" << monster.getHp() << "hp)" << " inflige " << monster.getAtk() << " de degats a " << player.getName() << std::endl << std::endl;
			}

			else if (scorePlayer == scoreMonster)
			{
				monster.setHpLost(player.getAtk() / 2);
				player.setHpLost(monster.getAtk()  / 2);
				std::cout << monster.getName() << "(" << monster.getHp() << "hp)" << " inflige " << monster.getAtk() / 2 << " de degats a " << player.getName() << std::endl << std::endl;
				std::cout << player.getName() << " inflige " << player.getAtk() / 2 << " de degats a " << monster.getName() << std::endl;	
			}

			std::this_thread::sleep_for(std::chrono::seconds(2));

		} while (monster.getHp() > 0 && player.getHp() > 0);

		if (player.getHp() > 0)
		{
			std::cout << player.getName() << " remporte le combat" << std::endl;
			std::cout << "hp restants: " << player.getHp() << std::endl;
		}

		else if (player.getHp() < 0)
		{
			std::cout << player.getName() << " meurt au combat" << std::endl;
			return EXIT_FAILURE;
		}
		
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
			do
			{
				std::cout << "HP:" << player.getHp() << std::endl;
				std::cout << "Attaquer (a) ";

				char c = _getch();

				while (c != 'a')
				{
					std::cout << std::endl << "Attaquer (a) " << std::endl;
					c = _getch();
				}

				std::cout << std::endl;

				int scorePlayer = rand() % 10;
				int scoreMonster = rand() % 10;

				if (scorePlayer > scoreMonster)
				{
					monster.setHpLost(player.getAtk());
					std::cout << player.getName() << " inflige " << player.getAtk() << " de degats a " << monster.getName() << "(" << (monster.getHp() <= 0 ? 0 : monster.getHp()) << "hp)" << std::endl << std::endl;
				}

				else if (scoreMonster > scorePlayer)
				{
					player.setHpLost(monster.getAtk());
					std::cout << monster.getName() << "(" << monster.getHp() << "hp)" << " inflige " << monster.getAtk() << " de degats a " << player.getName() << std::endl << std::endl;
				}

				else if (scorePlayer == scoreMonster)
				{
					monster.setHpLost(player.getAtk() / 2);
					player.setHpLost(monster.getAtk() / 2);
					std::cout << monster.getName() << "(" << monster.getHp() << "hp)" << " inflige " << monster.getAtk() / 2 << " de degats a " << player.getName() << std::endl << std::endl;
					std::cout << player.getName() << " inflige " << player.getAtk() / 2 << " de degats a " << monster.getName() << std::endl;
				}

				std::this_thread::sleep_for(std::chrono::seconds(2));

			} while (monster.getHp() > 0 && player.getHp() > 0);

			if (player.getHp() > 0)
			{
				std::cout << player.getName() << " remporte le combat" << std::endl;
				std::cout << "hp restants :" << player.getHp() << std::endl;
			}

			else if (player.getHp() < 0)
			{
				std::cout << player.getName() << " meurt au combat" << std::endl;
				return EXIT_FAILURE;
			}
		}
	}

	return EXIT_SUCCESS;
}

