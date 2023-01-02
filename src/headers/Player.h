#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player
{
	public:
		int health;
		int courage;
		int empathy;
		int wisedom;

		std::string firstname;
		std::string lastname;
		Player(std::string, std::string);
		Player();
		void getHealth();
		void lumos();
};
#endif 