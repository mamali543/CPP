#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called\n";
}

void Cat::makeSound()
{
    std::cout << "Cats are making a lot of noise\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &old_obj) : Animal(old_obj)
{
    std::cout << "copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "assignation operator called\n";
    if (this != &other)
        this->_type = _type;
    return (*this);
}
