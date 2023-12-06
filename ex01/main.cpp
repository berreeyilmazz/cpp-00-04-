#include "PhoneBook.h"

int main() {
	PhoneBook *info = new PhoneBook();
	std::string comm;

	while (1) {
		std::cout << "Enter one of them: ADD/SEARCH/EXIT : " ;
		getline(std::cin, comm);
		if (comm == "ADD")
		{
			info->setContacts();
		}
		else if (comm == "SEARCH")
		{
			info->printContacts();
			system("leaks PhoneBook");

		}
		else if (comm == "EXIT")
			exit(0);
		else
			std::cout << "Wrong command, try again!" << std::endl;
	}
}
