#include "HumanA.h"

HumanA::HumanA(std::string _name, Weapon &weapon) : weapon(weapon)
{

    this->name = _name;
    this->weapon = weapon;
}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;;
}


