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
	return (input);
}

void set(Contact person) {
	person.setFirstName(my_print("first name: "));
	person.setLastName(my_print("last name: "));
	person.setNickname(my_print("nickname: "));
	person.setNumber(my_print("phone number: "));
	person.setDarkestSecret(my_print("darkest secret: "));
}

void search(Contact person)
{
	std::cout << ""

	person.getInfo();

}

int main() {
	Contact info;
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
