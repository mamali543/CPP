#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    Weapon& a;
    std::string _name;;
public:
    HumanA(std::string name, Weapon& wp);
    void    attack();
};

#endif