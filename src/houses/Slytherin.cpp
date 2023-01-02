#include "../headers/Slytherin.h"

Slytherin::Slytherin(std::string firstname, std::string lastname) {

	this->firstname = firstname;
	this->lastname = lastname;

	this->courage = 10;
	this->empathy = -80;
	this->health = 1000;
	this->wisedom = 350;
};

Slytherin::Slytherin() {
	this->empathy += -100;
	this->wisedom += 150;
	std::cout << this->firstname + " is now part of Slytherin." << std::endl;
};

void Slytherin::avadakedara(Player* enemy) {
	std::cout << this->firstname + " used AVADAKERA on " + enemy->firstname + "! ( -3 000 000 HP )" << std::endl;
	enemy->health -= 3000000;
	this->getHealth();
}