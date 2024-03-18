/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:12:10 by agan              #+#    #+#             */
/*   Updated: 2024/03/18 14:12:11 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	Zombie* zombie_ptr;
	int N;

	if (argc == 3)
	{
		N = atoi(argv[1]);
		zombie_ptr = zombieHorde(N, argv[2]);
		delete[] zombie_ptr;
	}
	return 0;
}