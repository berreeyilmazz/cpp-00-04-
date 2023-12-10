#include "Zombie.h"

int main()
{
    Zombie *buff = zombieHorde(4, "berre");
    buff[0].announce();
    buff[1].announce();
    buff[2].announce();
    buff[3].announce();
}