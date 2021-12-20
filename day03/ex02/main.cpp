#include "FragTrap.hpp"

int     main()
{
    FragTrap    a("yayba");
    FragTrap    b( a );
    // a.takeDamage(8000);
    b.attack("reda");
    b.takeDamage(9000);
    b.beRepaired(8000000);
    FragTrap c("one");
    std::cout << std::endl;
    FragTrap d(c);
    d.attack("test");
    d.setname("reda");
    d.attack("test");
    std::cout << std::endl;
    d.highFivesGuys();
    std::cout << std::endl;
}