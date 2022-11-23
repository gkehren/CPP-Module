/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:05:29 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/14 15:21:01 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _fixed(0)
{
	std::cout << "Fixed: Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Fixed: Copy constructor called" << std::endl;
	*this = f;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Fixed: Copy assignment operator called" << std::endl;
	if (this != &f)
		this->_fixed = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed: destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Fixed: getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "Fixed: setRawBits member function called" << std::endl;
	this->_fixed = raw;
	return ;
}
