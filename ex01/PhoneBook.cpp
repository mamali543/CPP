#include "PhoneBook.hpp"

void    PhoneBook::add(Contact c)
{
    if (i == 8)
    {
        std::cout << i << std::endl;
        i = 0;
    }
    else
        j++;
    _contact[i] = c;
    i++;
    std::cout << "Contact added Succesfully!" << std::endl;
}

int     help(std::string s, int a)
{
    int     i;

    i = 0;
    while(s[i])
        i++;
    if (i < 10)
        return (11 - i);
    if (a == 1)
        std::cout << ".";
    return (0);
}

void    fon(Contact c, int i, int j)
{
    std::cout << i << std::setw(10) << "|";
    std::cout << help1(c.getFname()) << std::setw(help(c.getFname(), 1)) << "|";
    std::cout << help1(c.getLname()) << std::setw(help(c.getLname(), 1)) << "|";
    std::cout << help1(c.getNname()) << std::setw(help(c.getNname(), 1)) << "|";
    if (j == 1)
    {
        std::cout << help1(c.getPn()) << std::setw(help(c.getPn(), 1)) << "|";
        std::cout << help1(c.getDs()) << std::setw(help(c.getDs(), 1)) << "|";
    }
    std::cout << std::endl;
}

void    PhoneBook::FillContact()
{
    int     i;

    i = 0;
    if (j > 8)
        j = 8;
    while(i < j)
    {
        fon(_contact[i], i + 1, 0);
        i++;
    }
}

void    PhoneBook::getContact(std::string p)
{
    int     i;

    i = 0;
    while(i < 8)
    {
        if (i + 1 == std::stoi(p))
            fon(_contact[i], i + 1, 1);
        i++;
    }
}

PhoneBook::PhoneBook()
{
    i = 0;
    j = 0;
}