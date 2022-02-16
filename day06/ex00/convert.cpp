#include "convert.hpp"

convert::convert(std::string s)
{
    this->init_param(s);
    this->parser(s);
    this->converter();
}

convert::~convert()
{

}

int convert::is_int()
{
    for (int i=0; i < len; i++)
    {
        if (!isdigit(this->str[i]))
            return (0);
    }
    return(1);
}

int     is_float(std::string str)
{
    if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
        return (1);
    return (0);
}

int    convert::is_double(std::string str)
{
    if (!str.compare("-inf") || !str.compare("+inf") || !str.compare("nan"))
    {
        test[this->c] = 1;
        test[this->i] = 1;
        return (1);
    }
    return (0);
}

int convert::is_float_double()
{
    if (is_float(this->str))
    {
        var = 1;
        return (1);
    }
    if (is_double(this->str))
    {
        var = 1;
        return (-1);
    }
    size_t  n;
    n = this->str.find(".", 0);
    if (n != std::string::npos)
    {
        n = this->str.find(".", n+1);
        if (n != std::string::npos)
            return 0;
    }
    for (int i=0; i < len - 1; i++)
    {
        if (!isdigit(this->str[i]))
        {
            if (this->str[i] != '.')
                return (0);
        }
    }
    if (this->str[len-1] != 'f')
        return (-1);
    return 1;
}

void convert::parser(std::string p)
{
    if (len == 1 && !isdigit(p[0]))
        type = this->c;
    else if (is_int())
        type = this->i;
    else if (is_float_double() == 1)
        type = this->f;
    else if (is_float_double() == -1)
        type = this->d;
}

void convert::init_param(std::string p)
{
    this->str = p;
    this->len = p.size();
    this->type = -1;
    for (int i = 0; i < 4  ; i++ )
        test[i] = 0;
    this->var = 0;
}
void convert::converter()
{
    if (this->type == this->c)
    {
        charc =  str[0];
        ints = static_cast<int>(charc);
        doubls =  static_cast<double>(charc);
        floats =  static_cast<float>(charc);
    }
    else if (this->type == this->i)
    {
        ints = stoi(this->str);
        charc =  static_cast<char>(ints);
        doubls =  static_cast<double>(ints);
        floats =  static_cast<float>(ints);
    }
    else if (this->type == this->d)
    {
        if (str.compare("-inf") && str.compare("+inf") && str.compare("nan"))
            doubls = stoi(this->str);
        charc  =    static_cast<char>(doubls);
        ints   =    static_cast<int>(doubls);
        floats =    static_cast<float>(doubls);
    }
    else if (this->type == this->f)
    {
        floats = stoi(this->str);
        charc =  static_cast<char>(floats);
        ints =  static_cast<int>(floats);
        doubls =  static_cast<double>(floats);
    }
}

std::ostream &operator<<( std::ostream &output, convert &D ) { 
    output << "char:   " << D.write_char() << std::endl;
    output << "int:    " << D.write_int() << std::endl;
    output << "float:  " << D.write_float() << std::endl;
    output << "double: " << D.write_double();
    return output;            
}

std::string  convert::write_char()
{

    if (test[this->c] == 1)
        return ("impossible");
    else if (isprint(charc))
        std::cout <<"'" << charc << "'";
    else 
        return ("Non displayable");
    return ("");
}

std::string  convert::write_int()
{

    if (test[this->i] == 1)
        return ("impossible");
    else
        std::cout << ints;
    return ("");
}

std::string  convert::write_float()
{

    if (test[this->f] == 1)
        return ("impossible");
    else if (var == 1)
        std::cout << "nanf";
    else
        std::cout << floats << ".0f";
    return ("");
}

std::string  convert::write_double()
{
    if (test[this->d] == 1)
        return ("impossible");
    else if (var == 1)
        std::cout << "nan";
    else
        std::cout << doubls << ".0";
    return ("");
}