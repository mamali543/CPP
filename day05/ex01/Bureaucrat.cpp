#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    // std::cout << "hey there \n" << std::endl;
    return("grade is toooooooo high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("grade is too Low");
}

Bureaucrat::Bureaucrat(std::string const _name, int _grade) : name(_name)
{
    std::cout << "Bureaucrat constructor called\n";
    try {
		if (_grade <= 0)
			throw GradeTooHighException();
		else if (_grade > 150)
			throw GradeTooLowException();
	}
	catch (const std::exception& e) {
		std::cout << "exception caught: " << e.what() << std::endl;
	}
    this->grade = _grade;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called\n";
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (this->grade);
}

void	Bureaucrat::increment(void)
{
    if (this->grade - 1 < 1)
        throw GradeTooHighException();
    this->grade--;
}

void	Bureaucrat::decrement(void)
{
    if (this->grade + 1 > 150)
        throw GradeTooLowException();
    this->grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & b)
{
    o << b.getName() << " , bureaucrat grade: " << b.getGrade() << ".";
    return (o);
}
