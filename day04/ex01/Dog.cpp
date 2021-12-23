#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called\n";
}

void Dog::makeSound() const
{
    std::cout << "Dogs are making a lot of noise\n";
}

Dog::~Dog()
{
    std::cout << "Dog deconstructor called\n";
}

Dog::Dog(const Dog &old_obj) : Animal(old_obj)
{
    std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog asignation operator called\n";
    if (this != &other)
        this->_type = _type;
    return (*this);
}

const std::string& Dog::getType() const
{
    return (_type);
}
