#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
   
}

ScavTrap::ScavTrap(std::string s) : ClapTrap(s)
{
    std::cout <<  "ScavTrap constructor called\n";
    this->Adamage = 20;
    this->Epoints = 50;
    this->Hpoints = 100;
}

ScavTrap::ScavTrap(const ScavTrap &old_obj): ClapTrap(old_obj)
{
    std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
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

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap have enterred in Gate keeper moode.\n";
}

void ScavTrap::attack(std::string const & target)
{
    std::cout << "ScavTrap " << this->name << " attack " << target<< " , causing " << this->getAd() << " points of damage!" << std::endl;
}
