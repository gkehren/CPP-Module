/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:15:17 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 23:33:13 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice: constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const &ref) : AMateria("ice")
{
	std::cout << "Ice: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Ice	&Ice::operator=(Ice const &ref)
{
	std::cout << "Ice: assignment constructor called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

Ice::~Ice(void)
{
	std::cout << "Ice: destructor called" << std::endl;
	return ;
}

AMateria	*Ice::clone(void) const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	this->AMateria::use(target);
	return ;
}
