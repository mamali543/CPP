#include "HumanA.hpp"

void    HumanA::attack()
{
    std::cout << _name << " attacks with his " << a.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& wp): a(wp){
    _name = name;
}