#include "Zombie.h"

Zombie::Zombie(std::string _name){
    this->name = _name;
}

void Zombie::announce(void) {
   std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl; //endl \n farkı ne bak
}

void Zombie::setName(std::string _name) {
    this->name = _name;
}
