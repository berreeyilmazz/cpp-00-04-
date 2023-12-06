#include "Contact.h"

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

void Contact::printInfo(int i) { //****
	std::cout << "Index          : " << i  << std::endl;
	std::cout << "First Name     : " << firstName << std::endl;
	std::cout << "Last Name      : " << lastName << std::endl;
	std::cout << "Nickname       : " << nickname << std::endl;
	std::cout << "Phone Number   : " << phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << darkestSecret << std::endl;
}
