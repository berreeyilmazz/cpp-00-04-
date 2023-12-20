#include "Zombie.h"

Zombie *zombieHorde(int N, std::string name) {
    Zombie *zomb = new Zombie[N];
    zomb[0].setName(name);
    int i = 1;
    std::string _name;
    while (i < N) {
        std::cout << "Enter the name of " << i + 1 << "th zombie: ";
        std::cin >> _name;
        zomb[i].setName(_name);
        i++;
    }
    return(zomb);
}
