/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:21:35 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 17:41:10 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{
	std::cout << "Animal: constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string ptype) : type(ptype)
{
	std::cout << "Animal: constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &ref)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Animal	&Animal::operator=(Animal const &ref)
{
	std::cout << "Animal: assignment constructor called" << std::endl;
	if (this != &ref)
		this->type = ref.type;
	return *this;
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
	return ;
}

std::string const	&Animal::getType(void) const
{
	return this->type;
}
