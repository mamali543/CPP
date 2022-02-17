#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base::~Base()
{

}

Base * generate(void)
{
    int rd;
    rd = rand() % 100;
    if (rd <= 33)
        return new A();
    else if (rd <= 67)
        return new B(); 
    else
        return new C();
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "C" << std::endl;

}

void identify(Base& p)
{
    try{
        A &a =dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(std::bad_cast e){
        try
        {
            B &b = dynamic_cast<B&>(p);
            (void)b;

            std::cout << "B" << std::endl;
        }
        catch(std::bad_cast e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch(std::bad_cast e)
            {
                std::cout << "mok" << std::endl;
            }
        }
    }
}