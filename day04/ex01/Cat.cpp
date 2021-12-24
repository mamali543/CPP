#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor called\n";
    this->a = new Brain();
}

void Cat::makeSound() const
{
    std::cout << "Cats are making a lot of noise\n";
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
    delete a;
}

Cat::Cat(const Cat &old_obj)
{
    std::cout << " Cat copy constructor called\n";
    this->a = new Brain();
    this->operator=(old_obj);
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignation operator called\n";
    if (this != &other)
    {
        this->_type = _type;
        *a = *(other.a);

    }
    return (*this);
}

const std::string& Cat::getType() const
{
    return (_type);
}

void Cat::setBrainIdea(const std::string &str , int i)
 {
     a->setideas(str, i);
 }
const std::string &Cat::getBrainIdea(int i) const
{
    return(a->getidea(i));
}