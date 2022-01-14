#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>


class Form
{
private:
    const std::string   name;
    bool                is_signed;
    const int           to_sign;
    const int           to_execute;
public:
    Form(std::string _name, int _to_sign, int _to_execute);
    ~Form();
    Form(Form const & old_obj);
	Form &		operator=(Form const & other);
	std::string	getName(void) const;
	int			getGrade(void) const;
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