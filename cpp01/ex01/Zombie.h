#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string _name);
        Zombie() {};
        ~Zombie() {}; //ekleme yapılabilir
        void announce(void);
        void setName(std::string _name);
};

Zombie *zombieHorde(int N, std::string _name);

#endif

