#include <iostream>
#include <string>


int     main()
{
    std::string p = "HI THIS IS BRAIN";
    std::string *stringPTR = &p;
    std::string& stringREF = p;

    std::cout << &p << "  " << stringPTR << "  " << &stringREF << std::endl;
    std::cout << *stringPTR << "  " << stringREF << std::endl;

    return (0);
}