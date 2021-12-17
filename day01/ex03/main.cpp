/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:35:58 by mamali            #+#    #+#             */
/*   Updated: 2021/12/15 04:14:48 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    std::cout << "-----------------\n";
    Weapon clubb = Weapon("crude spiked clubb");
    HumanB jim("Jim");
    jim.setWeapon(clubb);
    jim.attack();
    clubb.setType("some other type of clubb");
    jim.attack();
}
