#include "HumanB.h"

HumanB::HumanB(std::string _name)
{
    this->name = _name;
    this->weapon = NULL;
}

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType();
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

