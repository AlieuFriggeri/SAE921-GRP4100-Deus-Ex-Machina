#include "Battle.h"

Battle::Battle()
{
	playerPtr = nullptr;
	monsterPtr = nullptr;
}

Battle::Battle(Player* playerPtr_, Monster* monsterPtr_)
{
	playerPtr = playerPtr_;
	monsterPtr = monsterPtr_;
}

Battle::~Battle()
{
}

void Battle::Start()
{
	do
	{
		std::cout << "HP:" << playerPtr->getHp() << std::endl;
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
			monsterPtr->setHpLost(playerPtr->getAtk());
			std::cout << playerPtr->getName() << " inflige " << playerPtr->getAtk() << " de degats a " << monsterPtr->getName() << "(" << (monsterPtr->getHp() <= 0 ? 0 : monsterPtr->getHp()) << "hp)" << std::endl << std::endl;
		}

		else if (scorePlayer < scoreMonster)
		{
			playerPtr->setHpLost(monsterPtr->getAtk());
			std::cout << monsterPtr->getName() << "(" << monsterPtr->getHp() << "hp)" << " pare l'attaque et inflige " << monsterPtr->getAtk() << " de degats a " << playerPtr->getName() << std::endl << std::endl;
		}

		else if (scorePlayer == scoreMonster)
		{
			monsterPtr->setHpLost(playerPtr->getAtk() / 2);
			playerPtr->setHpLost(monsterPtr->getAtk() / 2);
			std::cout << "les coups de " << playerPtr->getName() << " et " << monsterPtr->getName() << " s'entrechoquent!" << std::endl;
			std::cout << monsterPtr->getName() << "(" << monsterPtr->getHp() << "hp)" << " inflige " << monsterPtr->getAtk() / 2 << " de degats a " << playerPtr->getName() << std::endl;
			std::cout << playerPtr->getName() << " inflige " << playerPtr->getAtk() / 2 << " de degats a " << monsterPtr->getName() << std::endl << std::endl;
		}

		std::this_thread::sleep_for(std::chrono::seconds(2));

	} while (monsterPtr->getHp() > 0 && playerPtr->getHp() > 0);

	if (playerPtr->getHp() > 0)
	{
		std::cout << playerPtr->getName() << " remporte le combat" << std::endl;
		std::cout << "hp restants: " << playerPtr->getHp() << std::endl;
	}

	else if (playerPtr->getHp() <= 0)
	{
		std::cout << playerPtr->getName() << " meurt au combat" << std::endl;
	}

}
