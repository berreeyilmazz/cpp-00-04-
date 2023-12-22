#include "Zombie.h"

Zombie::Zombie(std::string _name){
    this->name = _name;
}

Zombie::~Zombie() {
//    std::cout << std::endl << "Zombie deleted." << std::endl;
    return;
}

void Zombie::announce(void) {
   std::cout << Zombie::name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}
