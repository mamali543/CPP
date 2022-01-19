#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
private:

public:
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();
   PresidentialPardonForm(PresidentialPardonForm const & old_object);
   PresidentialPardonForm &	operator=(PresidentialPardonForm const & other);
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream & o, const PresidentialPardonForm & presidential);

#endif