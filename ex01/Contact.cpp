#include "Contact.hpp"

std::string Contact::getFname()
{
    return(f_name);
}

std::string help1(std::string p)
{
    int i = 1;
    while (p[i])
        i++;
    if (i <= 10)
        return(p);
    p.resize (9);
    return (p);
}

void    Contact::setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
    f_name = fn;
    l_name = ln;
    n_name = nn;
    phone_number = pn;
    dark_secret = ds;
}