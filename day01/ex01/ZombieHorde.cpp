#include    "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int     i;

    i = 0;
    Zombie  *zombies;
    zombies = new Zombie[N];

    while (i < N)
    {
        Zombie  *z = new Zombie(name);
        zombies[i] = *z;
        i++;
    }
    return (zombies);
}