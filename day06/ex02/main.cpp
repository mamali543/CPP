#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <time.h>

int main ()
{
    srand ( time(NULL) );
    Base* mok = new A(); 
    Base& test = *mok; 
    // generate();
    identify(mok);
    identify(test);

}