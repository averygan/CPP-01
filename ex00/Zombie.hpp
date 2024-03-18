/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:09:32 by agan              #+#    #+#             */
/*   Updated: 2024/03/15 12:09:33 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <iostream>

class Zombie 
{
public:
	Zombie(std::string new_name);
	~Zombie();
	void announce( void );

private:
	std::string name;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
