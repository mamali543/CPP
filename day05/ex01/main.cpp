#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat a("reda", 1);
    Bureaucrat c("amali", 100);
    Form    b("rayan", 2, 7);
    Form    d("elias", 99, 98);
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << d << std::endl;

    try
    {
        a.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    std::cout << a.getName() << " : "<< a.getGrade() << std::endl; 
    std::cout << c.getName() << " : "<< c.getGrade() << std::endl;
}