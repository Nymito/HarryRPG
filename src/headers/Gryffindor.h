#ifndef GRYFFINDOR_H
#define GRYFFINDOR_H

#include <iostream>
#include "Player.h"

class Gryffindor : public Player
{

	public:
	
		Gryffindor();
		Gryffindor(std::string firstname, std::string lastname);

		void stupefix(Player* enemy);
};
#endif 