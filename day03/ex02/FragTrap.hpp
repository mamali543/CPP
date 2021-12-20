#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string s);
    FragTrap(const FragTrap &old_obj);
    FragTrap& operator=(const FragTrap &other);
    ~FragTrap();
    void attack(std::string const & target);
    void highFivesGuys(void);
};


#endif