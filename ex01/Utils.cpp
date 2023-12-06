#include "Contact.h"
#include "PhoneBook.h"

std::string take_input(std::string param)
{
	std::string input;
	label:
	std::cout << "Enter the " <<  param;
	std::getline(std::cin, input);
	if (input.empty())
	{
		std::cout << "Empty field! Try again." << std::endl;
		goto label;
	}
	std::string firstTen = input.substr(0,10);
	if (firstTen.size() >= 10)
	{
		firstTen = firstTen.substr(0,9);
		firstTen.append(1, '.');
	}
	return (firstTen);
}

void set(Contact *person) {
	person->setFirstName(take_input("first name: "));
	person->setLastName(take_input("last name: "));
	person->setNickname(take_input("nickname: "));
	person->setNumber(take_input("phone number: "));
	person->setDarkestSecret(take_input("darkest secret: "));
//	person->getInfo();
}

void search(Contact *person, int i) // METHODAA ÇEVRİLEBİLİR
{
	std::cout << "|";
	for (int j = 0; j < 9; j++) {
		std::cout << " "; }
	std::cout << i + 1 << "|";
	for (int j = 0; j < 10 - (int)person->getFirstName().size(); j++) {
		std::cout << " ";}
	std::cout << person->getFirstName() << "|";
 	for (int j = 0; j < 10 - (int)person->getLastName().size(); j++) {
		std::cout << " "; }
	std::cout << person->getLastName() << "|";
 	for (int j = 0; j < 10 - (int)person->getNickname().size(); j++) {
		std::cout << " "; }		
	std::cout << person->getNickname() << "|" << std::endl;
}

