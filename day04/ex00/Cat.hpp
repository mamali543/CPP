#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat:public  Animal
{
public:
    Cat& operator=(const Cat &other);
    Cat();
    Cat(const Cat &old_obj);
    ~Cat();
    void makeSound();
};

#endif