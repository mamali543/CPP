#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", target, 25, 5)
{
    std::cout << "PredentialPardonForm constructor called\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called\n";
}

PresidentialPardonForm &				PresidentialPardonForm::operator=(PresidentialPardonForm const & other)
{
	if ( this != &other )
	{

	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, const PresidentialPardonForm & robotomy )
{
	if (robotomy.getIsigned())
		o << robotomy.getName() << " is signed";
	else
		o << robotomy.getName() << " is not signed";
	return o;
}

void PresidentialPardonForm::execute(Bureaucrat const & presidential) const
{
    if (this->getgradeTexecute() < presidential.getGrade())
        throw GradeTooLowException();
    else if (this->getIsigned() == false)
        throw NotSignedException();
    else
        std::cout << this->getTarget() << " , has been pardoned by Zafod Beeblebrox!." << std::endl;
}