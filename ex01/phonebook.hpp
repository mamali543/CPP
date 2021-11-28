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
	void    FillContact();
	void    getContact(std::string p);
	int     getNContact()
	{
		return (j);
	}
};

std::string modifyString(std::string p);
int			mysetw(std::string s, int a);

#endif