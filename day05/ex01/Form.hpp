#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string   name;
    bool                is_signed;
    const int           grade_to_sign;
    const int           grade_to_execute;
public:
    Form(std::string _name, int _to_sign, int _to_execute);
    ~Form();
    Form(Form const & old_obj);
	Form &		operator=(Form const & other);
	std::string	getName(void) const;
	int			getgradeTsign(void) const;
	int			getgradeTexecute(void) const;
	bool		getIsigned(void) const;
	Form &		besigned(Bureaucrat & Bureauc);
	void		setFormSigned();
	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw();
	};
};

std::ostream & operator<<(std::ostream& o, const Form & a);

#endif