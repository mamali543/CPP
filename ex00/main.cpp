#include "Zombie.hpp"

int     main()
{
    Zombie a("reda");
    a.announce();
    Zombie *b = newZombie("saad");
    b->announce();
    randomChump("floki");
    delete(b);
    return (0);
}