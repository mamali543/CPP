#include "Zombie.hpp"

int     main()
{
    int     i;

    i = 0;
    Zombie *zs = zombieHorde(5, "reda");
    while (i < 5)
    {
        zs[i].announce();
        i++;
    }
    return (0);
}