#include "contact.h"

void Contact::setFirstName(std::string name) {
	firstName = name;
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

void Contact::getInfo() {
	std::cout << firstName << std::endl;
	std::cout << lastName << std::endl;
	std::cout << nickname << std::endl;
	std::cout << phoneNumber << std::endl;
	std::cout << darkestSecret << std::endl;
}
