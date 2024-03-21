/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:39:29 by agan              #+#    #+#             */
/*   Updated: 2024/03/21 14:39:46 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

/* Get index of level + 1 so complained can be used in switch statement
Update complained index 
Print messages based on index and above */
void Harl::complain(std::string level)
{
	typedef void(Harl::*Function_ptr)();
	Function_ptr f[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int complained = 0;

	for (int i = 0; i < 4; i++)
	{
		if (level_str[i] == level)
		{
			complained = i + 1;
			break ;
		}
	}
	switch (complained)
	{
		case 1:
			complained -= 1;
			break;
		case 2:
			complained -= 1;
			break;
		case 3:
			complained -= 1;
			break;
		case 4:
			complained -= 1;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	for (int i = complained; i < 4; i++)
	{
		(this->*f[i])();
		if (i != 3)
			std::cout << std::endl;
	}
}

void Harl::debug (void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my " \
	"7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info (void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put " \
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming " \
	"for years whereas you started working here since last month." << std::endl;
}

void Harl::error (void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}