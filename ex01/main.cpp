#include "contact.h"

std::string my_print(std::string param)
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
	return (firstTen);
}

void set(Contact *person) {
	person->setFirstName(my_print("first name: "));
	person->setLastName(my_print("last name: "));
	person->setNickname(my_print("nickname: "));
	person->setNumber(my_print("phone number: "));
	person->setDarkestSecret(my_print("darkest secret: "));
	person->getInfo();
}

void search(Contact *person)
{
	int i = 0;
	std::cout << ".----------.----------.----------.----------.----------." << std::endl;
	std::cout << "|First Name|Last Name | Nickname |Phone Num.|  Secret  |"  << std::endl;
	std::cout << "|";
	std::cout << person->getFirstName();
	while (i < 10 - (int)person->getFirstName().size()) {
		std::cout << " ";
		i++; }
	i = 0;
	std::cout << "|" << person->getLastName();
 	while (i < 10 - (int)person->getLastName().size()) {
		std::cout << " ";
		i++; }
	i = 0;
	std::cout << "|" << person->getNickname();
 	while (i < 10 - (int)person->getNickname().size()) {
		std::cout << " ";
		i++;}		
	i = 0 ;
	std::cout << "|" << person->getNumber();
	while (i < 10 - (int)person->getNumber().size()) {
		std::cout << " ";
		i++; }
	i = 0;
	std::cout << "|" << person->getDarkestSecret();
	while (i < 10 - (int)person->getDarkestSecret().size()) {
		std::cout << " ";
		i++; }
	std::cout << "|" << std::endl;
}

int main() {
	Contact *info = new Contact();
	std::string comm;

	while (1) {
		std::cout << "Enter one of them: ADD/SEARCH/EXIT : " ;
		std::cin >> comm;
		if (comm == "ADD")
			set(info);
		else if (comm == "SEARCH")
			search(info);
		else
			std::cout << "Wrong command, try again!" << std::endl;
	}
}
