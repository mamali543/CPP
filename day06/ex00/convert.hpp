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
    int         test[4];
public:
    char        charc;
    int         ints;
    float       floats;
    double      doubls;
    convert(std::string s);
    ~convert();
    void init_param(std::string p);
    void parser(std::string p);
    enum types { c, i, d, f, unavailable };
    int is_int();
    int is_double(std::string str);
    int is_float_double();
    void    converter();
    std::string write_char();
    std::string  write_int();

};
std::ostream &operator<<( std::ostream &output, convert &D );



#endif