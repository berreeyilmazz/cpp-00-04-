#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.h"

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

void set(Contact *person);
void search(Contact *person, int i);


#endif