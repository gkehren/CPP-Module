/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:05:29 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/14 21:35:54 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	std::cout << "Fixed: Default constructor called" << std::endl;
	this->_fixed = 0;
	return ;
}


Fixed::Fixed(int const n)
{
	std::cout << "Fixed: Int constructor called" << std::endl;
	this->_fixed = n << this->_bits;
	return ;
}

Fixed::Fixed(float const n)
{
	std::cout << "Fixed: Float constructor called" << std::endl;
	this->_fixed = roundf(n * (1 << this->_bits));
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
		this->_fixed = f._fixed;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed: destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixed / (float)(1 << _bits)));
}

int	Fixed::toInt(void) const
{
	return (this->_fixed >> _bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &f)
{
	o << f.toFloat();
	return (o);
}
