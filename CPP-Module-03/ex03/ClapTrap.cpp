/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:08:09 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:28:11 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap() : _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap: default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _ad(0)
{
	std::cout << "ClapTrap: constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &ref)
{
	std::cout << "ClapTrap: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ref)
{
	std::cout << "ClapTrap: assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = ref._hp;
		this->_ep = ref._ep;
		this->_ad = ref._ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_hp <= 0)
	{
		std::cout << this->_name << " can't attack, he died" << std::endl;
		return ;
	}
	if (this->_ep <= 0)
	{
		std::cout << this->_name << " can't attack, he is tired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_ad << " points of damage!" << std::endl;
	this->_ep--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap: member function takeDamage called" << std::endl;
	if (amount >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap: member function beRepaired called" << std::endl;
	if (this->_hp <= 0)
	{
		std::cout << this->_name << " can't be repaired, he died" << std::endl;
		return ;
	}
	if (this->_ep <= 0)
	{
		std::cout << this->_name << " can't be repaired, he is tired" << std::endl;
		return ;
	}
	this->_hp += amount;
	this->_ep--;
	return ;
}

std::string	ClapTrap::get_name(void) const
{
	return this->_name;
}
