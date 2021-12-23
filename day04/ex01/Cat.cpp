#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called\n";
    a = new Brain();
}

void Cat::makeSound() const
{
    std::cout << "Cats are making a lot of noise\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

Cat::Cat(const Cat &old_obj) : Animal(old_obj)
{
    std::cout << " Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignation operator called\n";
    if (this != &other)
        this->_type = _type;
    return (*this);
}

const std::string& Cat::getType() const
{
    return (_type);
}
