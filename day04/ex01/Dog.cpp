#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor called\n";
    this->w = new Brain();
}

void Dog::makeSound() const
{
    std::cout << "Dogs are making a lot of noise\n";
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
    delete w;
}

Dog::Dog(const Dog &old_obj)
{
    std::cout << "Dog copy constructor called\n";
    this->w = new Brain();
    this->operator=(old_obj);
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog asignation operator called\n";
    if (this != &other)
    {
        this->_type = _type;
        *w = *(other.w);
    }
    return (*this);
}

const std::string& Dog::getType() const
{
    return (_type);
}

 void Dog::setBrainIdea(const std::string &str , int i)
 {
     w->setideas(str, i);
 }
const std::string &Dog::getBrainIdea(int i) const
{
    return(w->getidea(i));
}