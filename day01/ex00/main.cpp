#include "Zombie.hpp"

int     main()
{
    Zombie  a("reda");
    a.announce();
    Zombie  *b;
    b = newZombie("ader");
    b->announce();
    delete b;
    return (0);
}