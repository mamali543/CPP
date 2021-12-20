#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap
{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(const ScavTrap &old_obj);
    void guardGate();
    ScavTrap(std::string s);
    ScavTrap& operator=(const ScavTrap &other);
    void attack(std::string const & target);
};

#endif