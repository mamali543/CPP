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

}

Animal& Animal::operator=(const Animal &other)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

Animal::Animal(const Animal &old_obj)
{
    std::cout << "Copy constructor called\n";
    this->operator=(old_obj);
}

void Animal::makeSound()
{
    std::cout << "Animals are making a lot of noise\n";
}