#include "PhoneBook.h"

int main() {
	PhoneBook	info;
	std::string	comm;

	while (!std::cin.eof()) {
		std::cout << "Enter one of them: ADD/SEARCH/EXIT : " ;
		getline(std::cin, comm);
		if (comm == "ADD")
			info.setContacts();
		else if (comm == "SEARCH")
			info.printContacts();
		else if (comm == "EXIT")
			break;
		else if (std::cin.eof())
			break;
		else
			std::cout << "Wrong command, try again!" << std::endl;
	}
	return (0);
}
