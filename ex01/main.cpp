#include "phonebook.hpp"

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

Contact getParam()
{
    std::string  name;
    std::string  lname;
    std::string  nname;
    std::string  pn;
    std::string  ds;
    Contact contact;

    std::cout << "First name: ";
    std::getline(std::cin ,name);
    while (name.empty())
    {
        std::cout << " Invalid args\n";
        std::cout << "First name: ";
        std::getline(std::cin ,name);
    }
    std::cout << "Last name: ";
    std::getline(std::cin ,lname);
    std::cout << "Nick name: ";
    std::getline(std::cin ,nname);
    std::cout << "Phone number: ";
    std::getline(std::cin ,pn);
    std::cout << "Dark secret: ";
    std::getline(std::cin ,ds);
    contact.setContact(name,lname , nname, pn , ds);
    return (contact);
}

int main()
{
    std::string line;
    std::string t;
    PhoneBook phone;
    Contact contact;
    std::cout << "$cmd>" ; 
    while (std::getline(std::cin,line))
    {
        if (line.compare("ADD") == 0)
            phone.add(getParam());
        else if (line.compare("SEARCH") == 0)
            std::cout << line << std::endl;
        else if (line.compare("EXIT") == 0)
            break ;
        std::cout << "$cmd>" ; 
    }
    return (0);
}
