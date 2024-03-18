/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:12:15 by agan              #+#    #+#             */
/*   Updated: 2024/03/18 14:12:17 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>
#include <cstdlib>

class Zombie 
{
public:
	Zombie();
	Zombie(std::string new_name);
	~Zombie();
	void announce( void );

private:
	std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
