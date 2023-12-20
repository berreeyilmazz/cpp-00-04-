#include "Zombie.h"

void randomChump(std::string _name) {
    Zombie *Zomb;
    Zomb = newZombie(_name);
    Zomb->announce();
    delete Zomb;
}
