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
    bool operator>=( const Fixed &other)const;
    bool operator<=( const Fixed &other)const;
    bool operator<( const Fixed &other)const;
    bool operator>( const Fixed &other)const;
    bool operator==( const Fixed &other)const;
    bool operator!=( const Fixed &other)const;
    Fixed operator+( const Fixed &other)const;
    Fixed operator-( const Fixed &other)const;
    Fixed operator*( const Fixed &other)const;
    Fixed operator/( const Fixed &other)const;
    Fixed&		operator++();
    Fixed&		operator--();
    Fixed		operator++( int );
    Fixed		operator--( int );
    static Fixed &min(Fixed &a , Fixed &b);
    static Fixed &max(Fixed &a , Fixed &b);
    static const Fixed  &max( const Fixed& a, const Fixed& b );
    static const Fixed &min( const Fixed& a, const Fixed& b );

};

std::ostream &operator<< (std::ostream &os, const Fixed &x);

#endif