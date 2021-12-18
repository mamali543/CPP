#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fp = 0;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called\n";
    fp = a << fb;
    std::cout << "here's fp : " << fp << std::endl;
}

Fixed::Fixed(const float b)
{
    std::cout << "Float constructor called\n";
    fp = round(b * (1 << fb));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

//A copy constructor is a member function that initializes an object using another object of the same class
Fixed::Fixed(const Fixed &old_object)
{
    std::cout << "Copy constructor called\n";
    *this = old_object;
    std::cout << " here's this: " << *this << "   " << old_object.fp << std::endl;
}

Fixed& Fixed::operator=(const Fixed &other) 
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
        fp = other.fp;
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called\n";
    return(fp);
}

void Fixed::setRawBits(int const row){
    fp = row;
}

float Fixed::toFloat( void ) const
{
    return (float)fp / (float)(1 << fb);
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

// Fixed Fixed::operator*( const Fixed &other)const
// {
//     Fixed   tmp(*this);

// }

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