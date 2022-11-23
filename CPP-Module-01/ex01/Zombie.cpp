/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:27:27 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/10 19:54:11 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << "Zombie: " << this->_name << " constructor called" << std::endl;
	return ;
}

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie: " << name << " constructor called" << std::endl;
	_name = name;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie: " << this->_name << " destructor called" << std::endl;
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
