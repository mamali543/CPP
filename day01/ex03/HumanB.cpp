/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:35:15 by mamali            #+#    #+#             */
/*   Updated: 2021/12/13 18:39:45 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    _name = name;
}

void HumanB::attack()
{
    std::cout << _name << " attacks with his " << a->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& wp)
{
    a = &wp;
}
