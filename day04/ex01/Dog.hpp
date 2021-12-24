#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog:public Animal
{
private:
    Brain   *w;
public:
    Dog& operator=(const Dog &other);
    Dog();
    Dog(const Dog &old_obj);
    ~Dog();
    void makeSound() const;
    const std::string& getType() const;
     void setBrainIdea(const std::string &str , int i);
    const std::string &getBrainIdea(int i) const;
};


#endif