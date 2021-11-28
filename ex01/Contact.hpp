#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <ctype.h>
#include <string>
#include <cstring>

class Contact
{
private:
    std::string  f_name;
    std::string  l_name;
    std::string  n_name;
    std::string  phone_number;
    std::string  dark_secret;
public:
    void setContact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
    std::string getFname();
    std::string getLname()
    {
        return(l_name);
    }
    std::string getNname()
    {
        return(n_name);
    }
    std::string getPn()
    {
        return(phone_number);
    }
    std::string getDs()
    {
        return(dark_secret);
    }

};


#endif