#include "intern.hpp"

typedef Form* (Intern::*s)(std::string);

Intern::Intern()
{
    std::cout << "Intern constructor called\n";
}

Intern::~Intern()
{
    std::cout << "Intern destructor called\n";
}

Form*	Intern::PresidentialPardon(std::string name)
{
	Form *l = new PresidentialPardonForm(name);
	return(l);
}

Form*	Intern::ShrubberyCreation(std::string name)
{
	Form *l = new ShrubberyCreationForm(name);
	return(l);
}

Form*	Intern::RobotomyRequest(std::string name)
{
	Form *l = new RobotomyRequestForm(name);
	return(l);	
}

Form*   Intern::makeForm(std::string formname, std::string formtarget)
{
    short int   a;
    std::string tab[] = {"robotomy request","shrubbery creation","presidential pardon"};
    s   action[] = { &Intern::RobotomyRequest, &Intern::ShrubberyCreation, &Intern::PresidentialPardon};
    for (int i=0; i < 3; i++)
    {
        a = i;
        if (tab[i] == formname)
            break ;
    }
    if (a < 3)
        std::cout << "Intern create " << formname << " form." << std::endl;
    return ((this->*action[a])(formtarget));
}

std::ostream & operator<<(std::ostream & o, const Intern & intern)
{
    o << "address of intern: " << &intern << std::endl;
    return (o);
}