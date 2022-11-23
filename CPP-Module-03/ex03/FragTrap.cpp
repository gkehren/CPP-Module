/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:35:12 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:18:26 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap: default constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: constructor called" << std::endl;
	this->_hp = 100;
	this->_ep = 100;
	this->_ad = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &ref) : ClapTrap(ref._name)
{
	*this = ref;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &ref)
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

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: destructor called" << std::endl;
	return ;
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap: member function attack called" << std::endl;
	this->ClapTrap::attack(target);
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: would you hight fives ?" << std::endl;
	return ;
}
