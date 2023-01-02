#include "headers/Player.h"

Player::Player(std::string firstname, std::string lastname) {
	this->firstname = firstname;
	this->lastname = lastname;

	this->courage = 10;
	this->empathy = 20;
	this->health = 1000;
	this->wisedom = 20;
	
};

void Player::getHealth() {
	std::cout << this->firstname << std::endl;
	std::cout << "Health : " + this->health << std::endl;
}
Player::Player() {
	this->firstname = "firstname";
	this->lastname = "lastname";

	this->courage = 10;
	this->empathy = 20;
	this->health = 1000;
	this->wisedom = 20;
}

void Player::lumos() {
	std::cout << "LUMOS MAXIMA !" << std::endl;
	std::cout << "..." << std::endl;
	std::cout << "It had no effect what so ever on the enemy" << std::endl;
}

