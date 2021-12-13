/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:36:04 by mamali            #+#    #+#             */
/*   Updated: 2021/12/13 18:36:05 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


void HumanA::attack()
{
    std::cout << _name << " attacks with his " << a.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon& wp): a(wp)
{
    _name = name;
}
