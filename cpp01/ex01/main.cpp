#include "Zombie.h"

int main()
{
    int number = 5;

    Zombie *buff = zombieHorde(number, "berre");
    for (int i = 0; i < number; i++)
        buff[i].announce();
    delete[] buff;
}