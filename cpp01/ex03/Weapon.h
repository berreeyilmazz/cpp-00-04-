#ifndef WEAPON_H

#define WEAPON_H

#include <iostream>

class   Weapon{
    private:
        std::string type;
    public:
        Weapon(std::string _type);
        const std::string &getType();
        void setType(std::string _type);
};

#endif