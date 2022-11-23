/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:45:28 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/11 21:45:43 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
	this->_type = type;
	std::cout << "Weapon: " << this->_type << " constructor called" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon: " << this->_type << " destructor called" << std::endl;
	return ;
}

std::string const	&Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
