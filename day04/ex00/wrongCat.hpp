#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "wrongAnimal.hpp"

class wrongCat:public wrongAnimal
{
public:
    wrongCat(const wrongCat &old_obj);
    ~wrongCat();
    wrongCat& operator=(const wrongCat &other);
    wrongCat(std::string type);
    wrongCat();
    void makeSound() const;
    std::string& getType();
};


#endif