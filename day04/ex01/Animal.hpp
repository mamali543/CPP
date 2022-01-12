#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string _type;
public:
    Animal(const Animal &old_obj);
    virtual ~Animal();
    Animal& operator=(const Animal &other);
    Animal(std::string type);
    Animal();
    virtual void makeSound() const;
    virtual const std::string& getType() const;
};

#endif