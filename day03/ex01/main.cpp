#include "ScavTrap.hpp"

int     main()
{
    ScavTrap a("one");
    std::cout << std::endl;

    std::cout << std::endl;

    a.attack("test");
    std::cout << std::endl;
    a.guardGate();
    std::cout << std::endl;
}