#include "PhoneBook.h"

void PhoneBook::setContacts() {
    set(&contact[indx]);
    indx++;
    if (indx == 8)
        indx = 0;
}

void PhoneBook::printContacts() {
    std::cout << ".----------.----------.----------.----------." << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    int i = 0;
    while ((contact[i].getFirstName()).size() > 0 && i < 8) {
        search(&contact[i], i);
        i++;  }
    std::cout << ".----------.----------.----------.----------." << std::endl; 
    std::string scf;
    std::cout << "Enter the index of the entry : " ;
	std::getline(std::cin, scf);
    if(scf.empty() == 1 || scf.size() >= 2 || isdigit(scf[0]) == 0) {
        std::cout << "empty or invalid ID" << std::endl;
        return; }
    int indx = std::stoi(scf);
    if (contact[indx - 1].getFirstName().empty() == 0)  {
        contact[indx - 1].printInfo(indx);
        return; }
    else {
        std::cout << "invalid ID" << std::endl;
        return;
    }
    return;

}   

