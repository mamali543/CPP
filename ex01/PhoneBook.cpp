#include "PhoneBook.hpp"

void    PhoneBook::add(Contact c)
{
    if (i == 8)
        i = 0;
    _contact[i] = c;
    i++;
    j++;
    std::cout << "Contact added Succesfully!" << std::endl;
}

int     help(std::string s)
{
    int     i;

    i = 0;
    while(s[i])
        i++;
    if (i <= 10)
        return (11 - i);
    std::cout << ".";
    return (0);
}

void    fon(Contact c, int i)
{
    std::cout << i << std::setw(10) << "|";
    std::cout << help1(c.getFname()) << std::setw(help(c.getFname())) << "|";
    std::cout << help1(c.getLname()) << std::setw(help(c.getLname())) << "|";
    std::cout << help1(c.getNname()) << std::setw(help(c.getNname())) << "|" << std::endl;
}

void    PhoneBook::get()
{
    int     i;

    i = 0;
    while(i < j)
    {
        fon(_contact[i], i + 1);
        i++;
    }
}

PhoneBook::PhoneBook()
{
    i = 0;
    j = 0;
}