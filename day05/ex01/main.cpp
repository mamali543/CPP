#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat a("reda", 1);
    Bureaucrat b("ader", 151);
    Bureaucrat c("amali", 100);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    try
    {
        a.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    try
    {
        b.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    try
    {
        c.decrement();
        c.decrement();
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    std::cout << a.getName() << " : "<< a.getGrade() << std::endl; 
    std::cout << b.getName() << " : "<< b.getGrade() << std::endl;
    std::cout << c.getName() << " : "<< c.getGrade() << std::endl;
}