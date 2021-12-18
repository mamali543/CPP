#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fp = 0;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

//A copy constructor is a member function that initializes an object using another object of the same class
Fixed::Fixed(const Fixed &old_object)
{
    std::cout << "Copy constructor called\n";
    this->operator=(old_object);
}

Fixed& Fixed::operator=(const Fixed &other) 
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
        this->fp = other.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called\n";
    return(this->fp);
}

void Fixed::setRawBits(int const row){
    this->fp = row;
}