#include "ClapTrap.hpp"

int     main()
{
    ClapTrap    a("yayba");
    ClapTrap    b( a );
    // a.attack("reda");
    // a.takeDamage(8000);
    // a.beRepaired(7000000);
    // ClapTrap b("yayba");

    // b = a;
    b.attack("reda");
    b.takeDamage(9000);
    b.beRepaired(8000000);
    return (0);
}