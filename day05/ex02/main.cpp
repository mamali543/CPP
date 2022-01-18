#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int     main(void)
{
    Bureaucrat  c("eliass", 10);
    ShrubberyCreationForm   a("reda_home");

    std::cout << "-------------------------------------------\n";
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << "-------------------------------------------\n";
    a.setFormSigned();
    try
    {
        a.execute(c);
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-------------------------------------------\n";
    return(0);
}