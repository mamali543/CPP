#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "form.h"

class Form;

class Intern
{
public:
    Intern();
    Intern(Intern const & old_object);
    Intern &		operator=(Intern const & other);
    ~Intern();
    Form*   makeForm(std::string formname, std::string formtarget);
    Form*	PresidentialPardon(std::string name);
    Form*	ShrubberyCreation(std::string name);
    Form*	RobotomyRequest(std::string name);
};

std::ostream & operator<<(std::ostream & o, const Intern & intern);
#endif