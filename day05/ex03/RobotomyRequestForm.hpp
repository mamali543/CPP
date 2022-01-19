#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm : public Form
{
public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    RobotomyRequestForm( RobotomyRequestForm const & old_object);
    RobotomyRequestForm &	operator=( RobotomyRequestForm const & other);
	virtual void execute(Bureaucrat const & executor) const;
};

std::ostream & operator<<(std::ostream & o, const RobotomyRequestForm & robotomy);

#endif