#include    "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int     i;
    Zombie *zombies;

    i = 0;
    zombies = new Zombie[N];
    while (i < N)
    {
        Zombie  *z = new Zombie(name);
        zombies[i] = *z;
        i++;
    }
    return (zombies);
}
