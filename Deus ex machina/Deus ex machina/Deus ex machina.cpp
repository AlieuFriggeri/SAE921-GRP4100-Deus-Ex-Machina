// Deus ex machina.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//


#include <iostream>
#include <conio.h>
#include <thread>
#include "Battle.h"
#include "ForcePotion.h"



int main()
{
	//VARIABLES PRE EXISTANTES AU JEU
	srand(time(NULL));
	Monster monster("enemy soldier", 50, 10);
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

	Inventory playerInventory;
	Inventory* playerInventoryPtr = &playerInventory;

	Player player(playerInventoryPtr, player_name, 100, 30);
	Player* playerPtr = &player;
	HealingPotion healingPotion("healing potion", 10);

	std::cout << std::endl;

	std::cout << "Ok " << player.getName() << ", en position" << std::endl << std::endl;

	std::cout << "votre inventaire: " << std::endl;
	player.displayInventory();

	std::cout << std::endl << std::endl;


	//EXPERIENCE DE JEU
	std::cout << "Entrer dans le champ de bataille (y/other) " << std::endl;
	char adventureChoice = _getch();
	
	//Battle 1
	if (adventureChoice == 'y')
	{
		Battle battle(playerPtr, monsterPtr);
		battle.Start();
	}
	else
	{

		std::cout << "Si tu desertes, tu seras execute." << std::endl;
		std::cout << "Tu veux toujours deserter? (y/..) " << std::endl;
		char adventureChoice_ = _getch();

		if (adventureChoice_ == 'y')
		{
			std::cout << player.getName() << " meurt execute" << std::endl;
			return EXIT_FAILURE;
		}


		else if (adventureChoice_ == 'n')
		{
			std::cout << "Quelle surprise! Allez soldat, va te battre pour Dicemania!" << std::endl << std::endl;

			Battle firstBattle(playerPtr, monsterPtr);
			firstBattle.Start();
		}
	}

	//If player is dead, then end program
	if (playerPtr->getHp() <= 0)
	{
		std::cout << playerPtr->getName() << " meurt au combat " << std::endl;
		return EXIT_FAILURE;
	}

	std::cout << playerPtr->getName() << " remporte le combat!" << std::endl;
	std::cout << "hp restants: " << playerPtr->getHp() << std::endl;

	//loot phase
	int luckyLoot = rand() % 5;
	if (luckyLoot > 0)
	{

		//item pointer
		Item* lootPtr = nullptr;

		//all possible items that can be looted
		HealingPotion healingPot;
		ForcePotion forcePot;
		Weapon bow;
		Weapon sword;
		Weapon epicHammer("muutopia", "epic hammer", 30);

		

		std::cout << playerPtr->getName() << " a recupere cet item sur son adversaire: " << std::endl;
		
		int normalLoot = rand() % 5;
	
		if (normalLoot == 0)
		{	
			lootPtr = &healingPot;
		}

		else if (normalLoot == 1)
		{
			lootPtr = &forcePot;	
		}

		else if (normalLoot == 2)
		{
			
			lootPtr = &bow;
		}

		else if (normalLoot == 3)
		{
			
			lootPtr = &sword;
		}

		else if (normalLoot == 4)
		{
			int epicLoot = rand() % 11;
			if (epicLoot == 10)
			{
				lootPtr = &epicHammer;
			}

			else
			{
				lootPtr = &healingPot;
			}
		}

		lootPtr->Display();

		std::cout << "Voulez-vous le ramasser? (y/other) " << std::endl;
		playerPtr->getInventoryPtr()->setMaxCapacity(1);

		char lootPhaseChoice = _getch();
		if (lootPhaseChoice == 'y')
		{
			//if player inventory has a slot available
			if (playerPtr->getInventoryPtr()->getVectorOfItems().size() + 1 <= playerPtr->getInventoryPtr()->getMaxCapacity())
			{
				//add item
				playerPtr->getInventoryPtr()->add(lootPtr);
				
				//show inventory
				playerPtr->displayInventory();

			}
			
			else
			{
				std::cout << "player inventory is full" << std::endl;

				//show options
				std::cout << "(1) throw an item" << std::endl;
				std::cout << "(2) leave" << std::endl;

				char inventoryChoice = _getch();

				//if player choose to throw an item
				if (inventoryChoice == '1')
				{
					//show inventory content
					playerPtr->displayInventory();

					//player has to choose which item he wants to throw
					std::cout << "enter the name of the kingdom from where comes the item you wish to throw: ";

					std::string nameOfKingdom;
					std::cin >> nameOfKingdom;

					bool itemFound = false;

					for (auto itemPtr : playerPtr->getInventoryPtr()->getVectorOfItems())
					{
						if (itemPtr->getNameOfKingdom() == nameOfKingdom)
						{
							itemFound = true;
							playerPtr->getInventoryPtr()->remove(itemPtr);
						}
					}

					if (!itemFound)
					{
						char inventoryChoice_;

						do
						{
							std::cout << "there is no kingdom with such name, try again, or leave (t/l) \n";

							inventoryChoice_ = _getch();

							if (inventoryChoice_ == 't')
							{
								std::cout << "kingdom name: ";

								std::string nameOfKingdom;
								std::cin >> nameOfKingdom;

								for (auto itemPtr : playerPtr->getInventoryPtr()->getVectorOfItems())
								{
									if (itemPtr->getNameOfKingdom() == nameOfKingdom)
									{
										itemFound = true;
										playerPtr->getInventoryPtr()->remove(itemPtr);
										playerPtr->getInventoryPtr()->add(lootPtr);
									}
								}

							}
						} while (!itemFound && inventoryChoice_ == 't');
					}

					std::cout << "votre inventaire:" << std::endl;
					playerPtr->displayInventory();
				}
			}
			
		}
	}

	
	std::cout << "votre inventaire: " << std::endl;
	playerPtr->displayInventory();

	//Inventory menu
	char inventoryChoice;
	do
	{
			std::cout
			<< "(1)continue"
			<< "(2)drink force potion\n"
			<< "(3)drink heal potion\n"
			<< "(4)equip weapon\n"
			<< "(5)desequip weapon\n"
			<< "(6)throw an item\n";

			inventoryChoice = _getch();

			if (inventoryChoice == '2')
			{
				//find first heal potion and use it 
			}

			else if(inventoryChoice == '3')
			{
				//find first force potion and use it
			}

			else if (inventoryChoice == '4')
			{
				//equip weapon code
			}

			else if (inventoryChoice == '5')
			{
				//desequip weapon code
			}

			else if (inventoryChoice == '6')
			{
				//throw item code
			}

	} while (inventoryChoice != '1');
	
	return EXIT_SUCCESS;
}
