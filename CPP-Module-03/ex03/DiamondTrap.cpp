/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:03:54 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:25:22 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
	std::cout << "DiamondTrap: constructor called" << std::endl;
	this->FragTrap::_hp = 100;
	this->ScavTrap::_ep = 50;
	this->FragTrap::_ad = 30;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &ref) : ClapTrap(ref._name), FragTrap(), ScavTrap()
{
	*this = ref;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = ref._hp;
		this->_ep = ref._ep;
		this->_ad = ref._ad;;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: destructor called" << std::endl;
	return ;
}

void	DiamondTrap::attack(std::string const &target)
{
	this->FragTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: " << this->_name << ", ClapTrap: " << ClapTrap::get_name() << std::endl;
}
