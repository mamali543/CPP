#include "phonebook.hpp"

void PhoneBook::add(Contact c)
{
    _contact[_i] = c;
    _i++;
    std::cout << "Contact added !\n";
}

 PhoneBook::PhoneBook()
{
    _i = 0;
}