#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
protected:
   std::string ideas[100];
public:
    Brain(const Brain &old_obj);
    ~Brain();
    Brain& operator=(const Brain &other);
    Brain(std::string type);
    Brain();
};


#endif