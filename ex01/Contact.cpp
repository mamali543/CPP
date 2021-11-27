#include "Contact.hpp"

void Contact::setContact(std::string fn, std::string ln , std::string nn, std::string pn, std::string ds)
{
    f_name = fn;
    l_name = ln;
    n_name = nn;
    phone_number = pn;
    dark_secret = ds;
}
// void Contact::printContact()
// {
//     std::cout << f_name << std::endl;
// }