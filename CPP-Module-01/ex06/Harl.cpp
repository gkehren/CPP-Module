/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 14:11:21 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/14 14:49:17 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void)
{
	std::cout << "Harl: constructor called" << std::endl;
	ptrHarl[0].name = "DEBUG";
	ptrHarl[1].name = "INFO";
	ptrHarl[2].name = "WARNING";
	ptrHarl[3].name = "ERROR";
	ptrHarl[0].ptr = &Harl::debug;
	ptrHarl[1].ptr = &Harl::info;
	ptrHarl[2].ptr = &Harl::warning;
	ptrHarl[3].ptr = &Harl::error;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Harl: destructor called" << std::endl;
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	int	i = 0;
 	while (ptrHarl[i].name.compare(level) != 0 && i < 4)
	{
		i++;
		if (i == 4)
			break;
	}
	switch (i)
	{
	case 0:
		(this->*(ptrHarl[0].ptr))();
		__attribute__ ((fallthrough));
	case 1:
		(this->*(ptrHarl[1].ptr))();
		__attribute__ ((fallthrough));
	case 2:
		(this->*(ptrHarl[2].ptr))();
		__attribute__ ((fallthrough));
	case 3:
		(this->*(ptrHarl[3].ptr))();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
	return ;
}
