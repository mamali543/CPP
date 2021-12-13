#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    const std::string &getType();
    Weapon(std::string type);
    void    setType(std::string type);
};

#endif