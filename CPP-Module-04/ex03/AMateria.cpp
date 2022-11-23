/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:56:09 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 00:04:11 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria: constructor called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &ref)
{
	std::cout << "AMateria: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

AMateria	&AMateria::operator=(AMateria const &ref)
{
	std::cout << "AMateria: assignment constructor called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: destructor called" << std::endl;
	return ;
}

std::string const	&AMateria::getType(void) const
{
	return this->_type;
}

void	AMateria::use(ICharacter &target)
{
	if (this->_type == "ice")
		std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
