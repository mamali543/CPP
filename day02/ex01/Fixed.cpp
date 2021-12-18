#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fp = 0;
}

Fixed::Fixed(const int a)
{
    std::cout << "Int constructor called\n";
    this->setRawBits(a * (1 << fb));
}

Fixed::Fixed(const float b)
{
    std::cout << "Float constructor called\n";
    this->setRawBits(round(b * (1 << fb)));
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
}

Fixed& Fixed::operator=(const Fixed &other) 
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
        this->fp = other.fp;
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called\n";
    return(this->fp);
}

void Fixed::setRawBits(int const row){
    this->fp = row;
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