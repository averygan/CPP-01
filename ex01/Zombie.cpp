/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:12:19 by agan              #+#    #+#             */
/*   Updated: 2024/03/18 14:12:20 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." 
		<< std::endl;
}

Zombie::Zombie() {}

Zombie::Zombie(std::string new_name) : name(new_name) {}

Zombie::~Zombie(void)
{
	std::cout << "Destroying " << name << std::endl;
}
