#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat a("reda", 1);
    Bureaucrat c("amali", 100);
    std::cout << "-------------------------------------------\n";
    Form    b("S.V.D", 2, 7);
    Form    d("B.B.B", 99, 98);
    std::cout << "-------------------------------------------\n";
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << "-------------------------------------------\n";
    std::cout << b << std::endl;
    std::cout << d << std::endl;
    std::cout << "-------------------------------------------\n";
    try
    {
        b.besigned(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    try
    {
        d.besigned(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    std::cout << "-------------------------------------------\n";
    std::cout << "Form name: " << b.getName() << " ,Grade to execute: " << b.getgradeTexecute() << " ,Grade to sign: "<< b.getgradeTsign()  << " ,signing status: " << b.getIsigned() << std::endl;
    std::cout << "Form name: " << d.getName() << " ,Grade to execute: " << d.getgradeTexecute() << " ,Grade to sign: "<< d.getgradeTsign()  << " ,signing status: " << d.getIsigned() << std::endl;
    std::cout << "-------------------------------------------\n";
    a.signForm(b);
    c.signForm(d);
    std::cout << "-------------------------------------------\n";
   try
    {
        a.increment();
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
    std::cout << "-------------------------------------------\n";
    return(0);
}