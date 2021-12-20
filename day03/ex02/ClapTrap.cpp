#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string s)
{
    std::cout << "ClapTrap constructor called\n";
    name = s;
    Hpoints = 10;
    Epoints = 10;
    Adamage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called\n";
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << this->name << " attack " << target<< " , causing " << this->getAd() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " took a hit of " << this->Hpoints << " Points , causing loss of " << amount  << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " has to wait for " << amount  << " seconds, to be repared and get back his " << this->Epoints << " points!" << std::endl;
}

std::string ClapTrap::getname()
{
    return (name);
}

int ClapTrap::getHp()
{
    return (Hpoints);
}

int ClapTrap::getEp()
{
    return (Epoints);
}

int ClapTrap::getAd()
{
    return(Adamage);
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other) 
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &other)
    {
        this->Adamage = other.Adamage;
        this->Epoints = other.Epoints;
        this->Hpoints = other.Hpoints;
        this->name = other.name;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &old_obj)
{
    std::cout << "ClapTrap Copy constructor called\n";
    this->operator=(old_obj);
}

ClapTrap::ClapTrap()
{

}

void    ClapTrap::setname(std::string n)
{
    name = n;
}