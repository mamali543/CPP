#include "convert.hpp"

convert::convert(std::string s)
{
    this->init_param(s);
    this->parser(s);
    std::cout << type << std::endl;

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

int convert::is_float()
{
    size_t  n;
    
    n = this->str.find(".", 0);
    if (n != std::string::npos)
    {
        n = this->str.find(".", n+1);
        if (n != std::string::npos)
        {

            return 0;
        }
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
    if (is_float() == 1)
        type = this->f;
    else if (is_float() == -1)
        type = this->d;

}

void convert::init_param(std::string p)
{
    this->str = p;
    this->len = p.size();
    this->type = -1;
}
