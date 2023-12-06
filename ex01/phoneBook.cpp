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
    int j = 0;
    while ((contact[j].getFirstName()).size() > 0 && j < 8) {
        search(&contact[j], j);
        j++;  }
    std::cout << ".----------.----------.----------.----------." << std::endl; 
    std::string scf;
    std::cout << "Enter the index of the entry : " ;
	std::getline(std::cin, scf);
    if(scf.empty() == 1 || scf.size() >= 2 || isdigit(scf[0]) == 0) {
        std::cout << "empty or invalid ID" << std::endl;
        return; }
    int i = std::stoi(scf);
    if (i > indx) {
        std::cout << "invalid ID" << std::endl;
        return; }
    if (contact[i - 1].getFirstName().empty() == 0) {
        contact[i - 1].printInfo(i);
        return; }
    else {
        std::cout << "invalid ID" << std::endl;
        return;
    }
    return;

}   

