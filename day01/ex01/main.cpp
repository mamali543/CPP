#include "Zombie.hpp"

int main()
{
    Zombie *h;
    int     N = 10;
    h = zombieHorde(N, "reda");
    for (int i = 0; i < N; i++)
    {
        h[i].announce();
        std::cout << &h[i] << std::endl;
        std::cout << "----------------\n";
    }
    delete[]h;
    return (0);
}