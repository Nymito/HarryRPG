#ifndef SLYTHERIN_H
#define SLYTHERIN_H

#include <iostream>
#include "Player.h"

class Slytherin : public Player
{

	public:

		Slytherin();
		Slytherin(std::string firstname, std::string lastname);

		void avadakedara(Player* enemy);
};
#endif 