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

void Harl::complain(std::string level)
{
	typedef void(Harl::*Function_ptr)();
	Function_ptr f[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level_str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < (int)(sizeof(f)/(sizeof(f[0]))); i++)
	{
		if (level == level_str[i])
		{
			(this->*f[i])();
			return;
		}
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