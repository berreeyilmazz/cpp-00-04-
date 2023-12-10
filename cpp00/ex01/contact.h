#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact () {
		}
		void setFirstName(std::string name);
	    void setLastName(std::string lName);
		void setNickname(std::string nick);
		void setNumber(std::string number);
		void setDarkestSecret(std::string secret);
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getNumber();
		std::string getDarkestSecret();
		void printInfo(int i);
};

#endif
