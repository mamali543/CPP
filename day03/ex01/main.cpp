#include "ScavTrap.hpp"

int     main()
{
    ScavTrap a("one");
    std::cout << std::endl;
    ScavTrap b(a);
    b.attack("test");
    b.setname("reda");
    b.attack("test");
    b.takeDamage(7000);
    b.beRepaired(7000);
    std::cout << std::endl;
    b.guardGate();
    std::cout << std::endl;
}