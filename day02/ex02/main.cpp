#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed a1;
    Fixed const b( 10 );
    Fixed const c( 42.42f );
    Fixed const d( b );
    a = Fixed( 1 );
    a1 = Fixed( 1 );
    std::cout << "a is " << a << std::endl;
    std::cout << "a is " << a << std::endl;
    std::cout << "a is " << a << std::endl;
    return 0;
}