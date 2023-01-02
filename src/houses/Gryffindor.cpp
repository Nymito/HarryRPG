#include "../headers/Gryffindor.h"

Gryffindor::Gryffindor(std::string firstname, std::string lastname) {

	this->firstname = firstname;
	this->lastname = lastname;

	this->courage = 60;
	this->empathy = 40;
	this->health = 1000;
	this->wisedom = 20;
	std::cout << this->firstname << " is now part of Gryffindor." << std::endl;
};

Gryffindor::Gryffindor(){
	this->courage += 50;
	this->empathy += 20;
	std::cout << this->firstname << " is now part of Gryffindor." << std::endl;

};

void Gryffindor::stupefix(Player* enemy) {
	std::cout << this->firstname + " used Stupefix on " + enemy->firstname + "! ( -100 Health Points )" << std::endl;
	enemy->health -= 100;
	this->getHealth();
}