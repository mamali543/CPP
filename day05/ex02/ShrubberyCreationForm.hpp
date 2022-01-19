#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public Form
{
public:
    ShrubberyCreationForm(std::string   target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm( ShrubberyCreationForm const & old_object);
    ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & other);
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream & o, const ShrubberyCreationForm & shrubbery);

#endif