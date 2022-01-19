#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string const name;
	int               grade;
public:
	Bureaucrat(std::string const _name, int _grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const & old_obj);
	Bureaucrat &		operator=(Bureaucrat const & other);
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		increment(void);
	void		decrement(void);
	void		signForm(Form & form);
	void		executeForm(Form const & form);
	class GradeTooLowException: public std::exception
	{
		virtual const char* what() const throw();
	};

	class GradeTooHighException: public std::exception
	{
		virtual const char* what() const throw();
	};
	
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & b);

#endif