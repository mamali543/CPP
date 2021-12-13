#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
private:
    Weapon  *a;
    std::string _name;
public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon &wp);
};

#endif