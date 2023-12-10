#include "Zombie.h"

Zombie* newZombie(std::string _name) {
    Zombie *a= new Zombie(_name);
    return(a);
}
