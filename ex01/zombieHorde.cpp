/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:12:25 by agan              #+#    #+#             */
/*   Updated: 2024/03/18 14:12:26 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* zombie_ptr = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombie_ptr[i] = Zombie(name);
		zombie_ptr[i].announce();
	}
	return (zombie_ptr);
}