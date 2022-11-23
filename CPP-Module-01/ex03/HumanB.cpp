/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:45:41 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/11 21:44:48 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : _weapon(NULL)
{
	this->_name = name;
	std::cout << "HumanB: " << _name << " constructor called" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB: " << _name << " destructor called" << std::endl;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}
