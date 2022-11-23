/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:15:23 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/13 00:03:00 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl(void)
{
	std::cout << "Harl: constructor called" << std::endl;
	ptrHarl[0].name = "debug";
	ptrHarl[1].name = "info";
	ptrHarl[2].name = "warning";
	ptrHarl[3].name = "error";
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
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
		if (ptrHarl[i].name.compare(level) == 0)
			(this->*(ptrHarl[i].ptr))();
	return ;
}
