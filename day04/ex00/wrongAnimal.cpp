#include "wrongAnimal.hpp"

wrongAnimal::wrongAnimal(std::string type)
{
    std::cout << "wrongAnimal constructor called\n";
    _type = type;
}

wrongAnimal::~wrongAnimal()
{
    std::cout << "wrongAnimal destructor called\n";
}

wrongAnimal::wrongAnimal()
{

}

wrongAnimal& wrongAnimal::operator=(const wrongAnimal &other)
{
    std::cout << "wrongAnimal Assignation operator called" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

wrongAnimal::wrongAnimal(const wrongAnimal &old_obj)
{
    std::cout << "wrongAnimal Copy constructor called\n";
    this->operator=(old_obj);
}

void wrongAnimal::makeSound() const
{
    std::cout << "wrongAnimals are making a lot of noise\n";
}

const std::string& wrongAnimal::getType() const
{
    return (_type);
}
