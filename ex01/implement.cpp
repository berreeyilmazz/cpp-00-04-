#include "contact.h"

void Contact::setFirstName(std::string name) {
	this->firstName = name;
}
 
void Contact::setLastName(std::string lName) {
	lastName = lName;
}

void Contact::setNickname(std::string nick) {
	nickname = nick;
}

void Contact::setNumber(std::string number) {
	phoneNumber = number;
}

void Contact::setDarkestSecret(std::string secret) {
	darkestSecret = secret;
}


std::string Contact::getFirstName() {
	return (firstName);
}
 
std::string Contact::getLastName() {
	return (lastName);
}

std::string Contact::getNickname() {
	return (nickname);
}

std::string Contact::getNumber() {
	return (phoneNumber);
}

std::string Contact::getDarkestSecret() {
	return (darkestSecret);
}

void Contact::printInfo() { //****
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}
