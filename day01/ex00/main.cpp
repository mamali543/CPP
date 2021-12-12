#include "Zombie.hpp"

int     main()
{
    Zombie  a("reda");
    a.announce();
    return (0);
    Zombie  *b;
    b = newZombie("ader");
    b->announce();
    delete b;
}