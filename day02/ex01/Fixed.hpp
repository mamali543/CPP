#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed{
private:
    int                 fp;
    static const int    fb = 8;
public:
    Fixed(const Fixed &old_object);
    ~Fixed();
    Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed& operator=(const Fixed &other);
};
#endif