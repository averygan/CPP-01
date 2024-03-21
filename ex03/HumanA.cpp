/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:56:47 by agan              #+#    #+#             */
/*   Updated: 2024/03/19 15:56:48 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string set_name)
{
	Weapon club = Weapon("default club");
	name = set_name;
	weapon = &club;
}

HumanA::HumanA(std::string set_name, Weapon& default_weapon)
{
	name = set_name;
	weapon = &default_weapon;
}

HumanA::~HumanA() {}

void HumanA::setWeapon(Weapon& set_weapon)
{
	weapon = &set_weapon;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
