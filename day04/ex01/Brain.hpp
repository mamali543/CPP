#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
protected:
   std::string ideas[100];
public:
    void setideas(const std::string& str, int i);
    const std::string& getidea(int i) const;
    Brain(const Brain &old_obj);
    ~Brain();
    Brain& operator=(const Brain &other);
    Brain();
};

#endif