#include "Form.hpp"

Form::~Form()
{
    std::cout << "destructor called\n" << std::endl;
}

/*                 ------constructor-------                   */

Form::Form(std::string _name, int _to_sign, int _to_execute): name(_name), to_sign(_to_sign), to_execute(_to_execute), is_signed(0)
{
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

int			Form::getTsign(void) const
{
    return (this->to_sign);
}

int			Form::getTexecute(void) const
{
    return (this->to_execute);
}

bool		Form::getIsigned(void) const
{
    return (this->is_signed);
}

/*           ----------exception what() methode----------            */

const char * Form::GradeTooHighException::what() const throw()
{
    std::cout << "exception caught: grade is too high";
}

const char * Form::GradeTooLowException::what() const throw()
{
    std::cout << "exception caught: grade is too low";
}

/*              -----------overload operator----------               */

std::ostream & operator<<(std::ostream& o, const Form & a)
{
    if (a.getIsigned())
        o << "the form: " << a.getName() << "is signed\n";
    else
        o << "the form: " << a.getName() << "is not signed\n";
	o << "grade to exec: " << a.getTexecute() << std::endl;
	o << "grade to sign: " << a.getTsign();
    return (o);
}

/*              -----------be_signed function----------               */

Form &		Form::besigned(Bureaucrat & Bureauc)
{
    if (Bureauc.getGrade() > this->getTsign())
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
