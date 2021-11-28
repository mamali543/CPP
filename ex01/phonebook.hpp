#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <ctype.h>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact     _contact[8];
    int         i;
    int         j;
public:
    PhoneBook();
    void    add(Contact c);
    void    get();
};

std::string help1(std::string p);
int     help(std::string s, int a);

#endif