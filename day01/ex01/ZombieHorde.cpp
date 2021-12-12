#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *p;

    p = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Zombie  *s = new Zombie(name);
        p[i] = *s;
    }
    return (p);
}
