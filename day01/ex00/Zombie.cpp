#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
    std::cout << _name << " left!" << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

