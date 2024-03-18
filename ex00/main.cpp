/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:09:26 by agan              #+#    #+#             */
/*   Updated: 2024/03/15 12:09:28 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *new_zombie;

	std::cout << "Creating dynamically allocated zombie.\n";
	new_zombie = newZombie("Joe");
	randomChump("Sean");
	delete(new_zombie);
	return 0;
}