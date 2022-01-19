#include "RobotomyRequestForm.hpp"
#include <random>


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", target, 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called\n";
}

RobotomyRequestForm &				RobotomyRequestForm::operator=(RobotomyRequestForm const & other)
{
	if ( this != &other )
	{

	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, const RobotomyRequestForm & robotomy )
{
	if (robotomy.getIsigned())
		o << robotomy.getName() << " is signed";
	else
		o << robotomy.getName() << " is not signed";
	return o;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getgradeTexecute() < executor.getGrade())
        throw GradeTooLowException();
    else if (this->getIsigned() == false)
        throw NotSignedException();
    else
    {
        if ((rand() % 100) >= 50)
            std::cout << this->getTarget() << " ,has been robotomized successfully!" << std::endl;
        else
            std::cout << this->getTarget() << " ,it's a failure!" << std::endl;
    }
}