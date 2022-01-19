#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "intern.hpp"
#include <random>


int     main(void)
{
    Intern someRandomIntern;
    Form* rrf;
    std::cout << "-------------------------------------------\n";
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << "-------------------------------------------\n";
    std::cout << *rrf << std::endl;
    std::cout << "-------------------------------------------\n";
    return(0);
}