#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << _name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    std::cout << "     constroctor   " << std::endl;
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << "  has left" << std::endl;
}