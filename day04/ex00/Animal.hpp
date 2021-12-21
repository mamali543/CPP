#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal(const Animal &old_obj);
    ~Animal();
    Animal& operator=(const Animal &other);
    Animal(std::string type);
    Animal();
    void makeSound();
};


#endif