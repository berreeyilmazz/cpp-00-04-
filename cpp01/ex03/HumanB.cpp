#include "HumanB.h"

HumanB::HumanB(std::string _name)
{
    this->name = _name;
    this->weapon = NULL;
}

void HumanB::attack() {
	if (this->weapon)
    	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl << "yes" << std::endl;
	else
		std::cout << this->name << " attacks with their hands" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

