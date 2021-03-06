#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed{
private:
    int                 fp;
    static const int    fb = 8;
public:
    Fixed(const Fixed &old_object);
    ~Fixed();
    Fixed();
    Fixed(const int a);
    Fixed(const float b);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed& operator=(const Fixed &other);
};

std::ostream &operator<< (std::ostream &os, const Fixed &x);

#endif