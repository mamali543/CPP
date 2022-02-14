#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <string>

class convert
{
private:
    std::string str;
    int         len;
    int         type;
public:
    convert(std::string s);
    ~convert();
    void init_param(std::string p);
    void parser(std::string p);
    enum types { c, i, d, f, unavailable };
    int is_int();
    int is_float();
    int is_double();
};



#endif