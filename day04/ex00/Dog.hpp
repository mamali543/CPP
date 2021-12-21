#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog:public Animal
{
public:
    Dog& operator=(const Dog &other);
    Dog();
    Dog(const Dog &old_obj);
    ~Dog();
    void makeSound();
};


#endif