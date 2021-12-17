#include "Karen.hpp"

int     main()
{
    Karen   s;
    std::string tab[] = {"debug", "warning", "info", "error"};
    for (int i =0; i < 4; i++)
    {
        s.complain(tab[i]);
    }
    return (0);
}