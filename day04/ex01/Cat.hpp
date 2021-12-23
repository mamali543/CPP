#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public  Animal
{
private:
    Brain *a;
public:
    Cat& operator=(const Cat &other);
    Cat();
    Cat(const Cat &old_obj);
    ~Cat();
    void makeSound() const;
    const std::string& getType() const;
};

#endif