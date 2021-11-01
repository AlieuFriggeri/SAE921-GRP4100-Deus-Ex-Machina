#ifndef BATTLE

//Generic includes
#include <iostream>
#include <conio.h>
#include <thread>
#include <chrono>

//Game specific includes
#include "Player.h"
#include "Monster.h"


class Battle
{
protected:
	Player* playerPtr;
	Monster* monsterPtr;
	

public:
	Battle();
	Battle(Player* playerPtr_, Monster* monsterPtr_);
	~Battle();

	void Start();
};


#endif // 



