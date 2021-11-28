#include "PhoneBook.hpp"

int     ft_isdigit(std::string s)
{
    int     i;
    i = 0;
    while (s[i])
    {
        if (!isdigit(s[i]))
            return (0);
        i++;
    }
    return (1);
}

std::string    fun(std::string a)
{
    std::string b;
    std::cout << "Enter " << a << " : ";
    if (!std::getline(std::cin, b))
        exit(0);
    if (!a.compare("Phone Number"))
    {
        while (b.empty() || !ft_isdigit(b))
        {
            std::cout << a << " must not be empty or non degit\n";
            std::cout  << "Enter " << a << " : ";
            if (!std::getline(std::cin, b))
                exit(0);
        }      
    }
    while (b.empty())
    {
        std::cout << a << " must not be empty\n";
        std::cout << "Enter " << a << " : ";
        if (!std::getline(std::cin, b))
            exit(0);
    }
    return (b);
}

Contact     getParam()
{
    Contact contact;
    contact.setContact(fun("First Name"), fun("Last Name"), fun("Nick Name"), fun("Phone Number"), fun("Dark secret"));
    return (contact);
}

int main()
{
    std::string line;
    PhoneBook   phone;
    Contact     contact;
    std::cout << "cmd> ";
    while (std::getline(std::cin, line))
    {
        if (!line.compare("ADD"))
            phone.add(getParam());
        else if(!line.compare("SEARCH"))
        {
            std::cout << "index | first name | last name | nick name" << std::endl;
            phone.get();
        }
        else if(!line.compare("EXIT"))
            break ;
        std::cout << "cmd> ";
    }
    return (0);
}
