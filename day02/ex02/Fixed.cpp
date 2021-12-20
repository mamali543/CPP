#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fp = 0;
}

Fixed::Fixed(const int a)
{
    fp = a << fb;
}

Fixed::Fixed(const float b)
{
    fp = round(b * (1 << fb));
}

Fixed::~Fixed()
{
}

//A copy constructor is a member function that initializes an object using another object of the same class
Fixed::Fixed(const Fixed &old_object)
{
    *this = old_object;
}

Fixed& Fixed::operator=(const Fixed &other) 
{
    if (this != &other)
        fp = other.fp;
    return *this;
}

int Fixed::getRawBits(void) const{
    return(fp);
}

void Fixed::setRawBits(int const row){
    fp = row;
}

float Fixed::toFloat( void ) const
{
    return ((float)fp / (float)(1 << fb));
}

int Fixed::toInt( void ) const
{
    return (fp >> 8);
}

std::ostream &operator<<(std::ostream &os, const Fixed &x)
{ 
    os << x.toFloat();
    return (os);
}

bool Fixed::operator>=( const Fixed &other)const
{
    return (fp >= other.fp);
}
bool Fixed::operator<=(const Fixed &other)const
{
    return (fp <= other.fp);
}
bool Fixed::operator<(const Fixed &other)const
{
    return (fp < other.fp);
}
bool Fixed::operator>(const Fixed &other)const
{
    return (fp > other.fp);
}
bool Fixed::operator==(const Fixed &other)const
{
    return (fp == other.fp);
}
bool Fixed::operator!=(const Fixed &other)const
{
    return (fp != other.fp);
}

Fixed Fixed::operator+( const Fixed &other)const
{
    Fixed   tmp(*this);
    tmp.setRawBits(this->getRawBits() + other.getRawBits());
    return (tmp);
}

Fixed Fixed::operator-( const Fixed &other)const
{
    Fixed   tmp(*this);
    tmp.setRawBits(this->getRawBits() - other.getRawBits());
    return (tmp);
}

Fixed Fixed::operator*( const Fixed &other)const
{
    Fixed   tmp(*this);
    tmp.setRawBits((this->toFloat() * other.toFloat()) * (1 << fb));
    return (tmp);
}

Fixed Fixed::operator/( const Fixed &other)const
{
    Fixed   tmp(*this);
    tmp.setRawBits((this->toFloat() / other.toFloat()) * (1 << fb));
    return (tmp);
}

Fixed&		Fixed::operator++()
{
    this->fp++;
    return *this;
}

Fixed		Fixed::operator++( int )
{
    Fixed tmp = *this;
    ++*this;
    return (tmp);
}

Fixed&		Fixed::operator--()
{
    this->fp--;
    return *this;
}

Fixed		Fixed::operator--( int )
{
    Fixed tmp = *this;
    --*this;
    return (tmp);
}

Fixed &Fixed::max(Fixed &a , Fixed &b){
    if (a > b)
        return(a);
    return (b);
}

const Fixed  &	Fixed::max( const Fixed& a, const Fixed& b )
{
    if (a < b)
        return b;
    return a;
}

Fixed &	Fixed::min( Fixed& a, Fixed& b )
{
    if (a < b)
        return a;
    return b;
}

const Fixed &	Fixed::min( const Fixed& a, const Fixed& b )
{
    if (a.toFloat() < b.toFloat())
        return a;
    return b;
}
