#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class wrongAnimal
{
protected:
    std::string _type;
public:
    wrongAnimal(const wrongAnimal &old_obj);
    ~wrongAnimal();
    wrongAnimal& operator=(const wrongAnimal &other);
    wrongAnimal(std::string type);
    wrongAnimal();
    void makeSound() const;
    const std::string& getType() const;
};


#endif