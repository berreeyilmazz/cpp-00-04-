#include "Zombie.h"

Zombie::Zombie() {
	return;
}

Zombie::~Zombie() {
	return;
}

Zombie::Zombie(std::string _name){
    this->name = _name;
}

void Zombie::announce(void) {
   std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string _name) {
    this->name = _name;
}

