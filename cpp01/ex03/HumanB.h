#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB {
    private:
        Weapon      *weapon;
        std::string name;
    public:
        HumanB(std::string _name);
        void attack();
        void setWeapon(Weapon &weapon);
};


#endif
