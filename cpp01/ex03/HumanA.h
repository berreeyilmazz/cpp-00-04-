#pragma once

#include "Weapon.h"

class HumanA {
    private:
        Weapon      &weapon;
        std::string name;
    public:
        HumanA(std::string name, Weapon &weap);
        void attack();
};
