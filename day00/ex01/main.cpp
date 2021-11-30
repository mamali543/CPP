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

std::string    fun(std::string a, int i)
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
    else if (!a.compare("Index: "))
    {
        while (b.empty() || !ft_isdigit(b) || std::stoi(b) > i || std::stoi(b) <= 0)
        {
            if (i > 0)
            {
                std::cout << "Invalid " << a << "\n";
                std::cout  << "Enter " << a << " : ";
                if (!std::getline(std::cin, b))
                    exit(0);
            }
            else
            {
                std::cout << "No Contact has been added yet!, Pleas try to add a contact"<< "\n";
                break ;
            }
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
    contact.setContact(fun("First Name", 0), fun("Last Name", 0), fun("Nick Name", 0), fun("Phone Number", 0), fun("Dark secret", 0));
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
            std::string p;
            std::cout << "index" << std::setw(mysetw("index", 0)) << "|";
            std::cout << "first name" << std::setw(mysetw("first name", 0)) << "|";
            std::cout << "last name" << std::setw(mysetw("last name", 0)) << "|";
            std::cout << "nick name" << std::setw(mysetw("nick name", 0)) << "|" << std::endl;
            phone.FillContact();
            p = fun("Index: ", phone.getNContact());
            if (phone.getNContact() > 0)
                phone.getContact(p);
            else
            {
                std::cout << "cmd> ";
                continue;
            }
        }
        else if(!line.compare("EXIT"))
            break ;
        std::cout << "cmd> ";
    }
    return (0);
}
