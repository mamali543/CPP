#include "FragTrap.hpp"

FragTrap::FragTrap(std::string s) : ClapTrap(s)
{
    std::cout << "FragTrap constructor called\n";
    this->Hpoints = 100;
    this->Epoints = 100;
    this->Adamage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high fives fives\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called\n";
}

FragTrap& FragTrap::operator=(const FragTrap &other)
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

FragTrap::FragTrap(const FragTrap &old_obj): ClapTrap(old_obj)
{
    std::cout << "FragTrap Copy constructor called\n";
}

void FragTrap::attack(std::string const & target)
{
    std::cout << "FragTrap " << this->name << " attack " << target<< " , causing " << this->getAd() << " points of damage!" << std::endl;
}
