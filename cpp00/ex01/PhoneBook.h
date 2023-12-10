#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <sstream>
#include "contact.h"

class PhoneBook {
    private:
        Contact contact[8];
    public:
        int  indx;
        PhoneBook(){
            indx = 0;
        };
        void setContacts();
        void printContacts();
        
};

void add(Contact *person);
void search(Contact *person, int i);


#endif