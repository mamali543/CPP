#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <iostream>
#include <ctype.h>
#include "Contact.hpp"
#include <string>

class PhoneBook{
	private:
		Contact _contact[8];
	public:
		void add(Contact c);
};

#endif