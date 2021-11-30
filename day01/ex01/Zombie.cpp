#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name << " has left!" << std::endl;
}

void    Zombie::announce()
{
    std::cout << _name << "  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{

}