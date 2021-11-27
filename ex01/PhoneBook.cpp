#include "phonebook.hpp"

void PhoneBook::add(Contact c)
{
    _contact[0] = c;
    std::cout << "Contact added !\n";
}