/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:15:17 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 23:44:02 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure: constructor called" << std::endl;
	return ;
}

Cure::Cure(Cure const &ref) : AMateria("cure")
{
	std::cout << "Cure: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Cure	&Cure::operator=(Cure const &ref)
{
	std::cout << "Cure: assignment constructor called" << std::endl;
	if (this != &ref)
		this->_type = ref._type;
	return *this;
}

Cure::~Cure(void)
{
	std::cout << "Cure: destructor called" << std::endl;
	return ;
}

AMateria	*Cure::clone(void) const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	this->AMateria::use(target);
	return ;
}
