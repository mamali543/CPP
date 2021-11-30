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

int     mysetw(std::string s, int a)
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

void    PrintAgenda(Contact c, int i)
{
    std::cout << i << std::setw(10) << "|";
    std::cout << modifyString(c.getFname()) << std::setw(mysetw(c.getFname(), 1)) << "|";
    std::cout << modifyString(c.getLname()) << std::setw(mysetw(c.getLname(), 1)) << "|";
    std::cout << modifyString(c.getNname()) << std::setw(mysetw(c.getNname(), 1)) << "|";
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
        PrintAgenda(_contact[i], i + 1);
        i++;
    }
}

void    printContact(Contact c, int i)
{
    std::cout << "         **********************        " << std::endl;
    std::cout << "Index        >> " << i << std::endl;
    std::cout << "First Name   >> " << c.getFname() << std::endl;
    std::cout << "Last Name    >> " << c.getLname() << std::endl;
    std::cout << "Nick Name    >> " << c.getNname() << std::endl;
    std::cout << "Phone Number >> " << c.getPn() << std::endl;
    std::cout << "Dark Secret  >> " << c.getDs() << std::endl;
}

void    PhoneBook::getContact(std::string p)
{
    int     i;

    i = 0;
    while(i < 8)
    {
        if (i + 1 == std::stoi(p))
        {
            printContact(_contact[i], i + 1);
            break ;
        }
        i++;
    }
}

PhoneBook::PhoneBook()
{
    i = 0;
    j = 0;
}