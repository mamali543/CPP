#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int         Hpoints;
    int         Epoints;
    int         Adamage;
public:
    ClapTrap(std::string s);
    ClapTrap();
    ClapTrap(const ClapTrap &old_obj);
    ~ClapTrap();
    std::string getname();
    int getHp();
    int getEp();
    int getAd();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    ClapTrap& operator=(const ClapTrap &other);
};



#endif