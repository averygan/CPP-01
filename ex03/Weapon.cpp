/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 15:17:08 by agan              #+#    #+#             */
/*   Updated: 2024/03/19 15:17:09 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string set_type)
{
	type = set_type;
}

std::string	Weapon::getType(void)
{
	return (type);
}

void Weapon::setType(std::string set_type)
{
	type = set_type;
}
