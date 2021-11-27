#ifndef Contact_HPP
#define Contact_HPP
#include <iostream>
#include <string>

class Contact
{
    private:
        std::string	f_name;
        std::string	l_name;
        std::string	n_name;
        std::string	phone_number;
        std::string  dark_secret;  
    public:
        void setContact(std::string fn, std::string ln , std::string nn, std::string pn, std::string ds);
        void printContact(void);
};

#endif