#include "Form.hpp"

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

/*                 ------constructor-------                   */

Form::Form(std::string _name, std::string _target, int _to_sign, int _to_execute): name(_name), target(_target), is_signed(0), grade_to_sign(_to_sign), grade_to_execute(_to_execute)
{
    std::cout << "Form constructor called" << std::endl;
    try
    {
        if (_to_execute < 1 || _to_sign < 1)
            throw GradeTooHighException();
        else if (_to_execute > 150 || _to_sign > 150)
            throw GradeTooLowException();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

/*                ----------getters----------              */

std::string	Form::getName(void) const
{
    return (this->name);
}

int			Form::getgradeTsign(void) const
{
    return (this->grade_to_sign);
}

int			Form::getgradeTexecute(void) const
{
    return (this->grade_to_execute);
}

bool		Form::getIsigned(void) const
{
    return (this->is_signed);
}

/*           ----------exception what() methode----------            */

const char * Form::GradeTooHighException::what() const throw()
{
    return ("exception caught: grade is too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("exception caught: grade is too low");
}

const char * Form::NotSignedException::what() const throw()
{
    return "exception caught: Form is currently not signed";
}



/*              -----------overload operator----------               */

std::ostream & operator<<(std::ostream& o, const Form & a)
{
    if (a.getIsigned())
        o << "the form: " << a.getName() << " is signed\n";
    else
        o << "the form: " << a.getName() << " is not signed\n";
	o << "grade to exec: " << a.getgradeTexecute() << std::endl;
	o << "grade to sign: " << a.getgradeTsign() << std::endl;
	o << "targeted on  : " << a.getTarget();
    return (o);
}

/*              -----------be_signed function----------               */

Form &		Form::besigned(Bureaucrat & Bureauc)
{
    if (Bureauc.getGrade() > this->getgradeTsign())
        throw GradeTooLowException();
    this->setFormSigned();
    Bureauc.signForm(*this);
    return (*this);
}

/*              -----------setFormSigned----------               */

void		Form::setFormSigned()
{
    this->is_signed = true;
}

/*              -----------getTarget Function----------               */

std::string	Form::getTarget(void) const
{
    return (this->target);
}