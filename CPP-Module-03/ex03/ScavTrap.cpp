/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:52:26 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:20:54 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap: default constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 50;
	this->_ad = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref._name)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ref)
{
	std::cout << "ScavTrap: assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = ref._hp;
		this->_ep = ref._ep;
		this->_ad = ref._ad;;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap: member function attack called" << std::endl;
	this->ClapTrap::attack(target);
	return ;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap: enter in Gate keeper mode" << std::endl;
	return ;
}
