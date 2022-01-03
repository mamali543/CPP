#include "Dog.hpp"

Animal::Animal(std::string type)
{
    std::cout << "Animal constructor called\n";
    _type = type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal()
{
    std::cout << "Animal default constructor called\n";
}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

Animal::Animal(const Animal &old_obj)
{
    std::cout << "Animal Copy constructor called\n";
    this->operator=(old_obj);
}

void Animal::makeSound() const
{
    std::cout << "Animals are making a lot of noise\n";
}

const std::string& Animal::getType() const
{
    return (_type);
}
