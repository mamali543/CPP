#include "wrongCat.hpp"

wrongCat::wrongCat() : wrongAnimal("wrongCat")
{
    std::cout << "wrongCat constructor called\n";
}

void wrongCat::makeSound() const
{
    std::cout << "wrongCats are making a lot of noise\n";
}

wrongCat::~wrongCat()
{
    std::cout << "wrongCat destructor called\n";
}

wrongCat::wrongCat(const wrongCat &old_obj) : wrongAnimal(old_obj)
{
    std::cout << " wrongCat copy constructor called\n";
}

wrongCat& wrongCat::operator=(const wrongCat &other)
{
    std::cout << "wrongCat assignation operator called\n";
    if (this != &other)
        this->_type = _type;
    return (*this);
}

std::string& wrongCat::getType()
{
    return (_type);
}
