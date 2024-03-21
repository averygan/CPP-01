/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:39:27 by agan              #+#    #+#             */
/*   Updated: 2024/03/21 14:39:28 by agan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>
#include <vector>

class Harl 
{
public:
	void complain(std::string level);

private:
	void debug (void);
	void info (void);
	void warning(void);
	void error (void);
};

#endif