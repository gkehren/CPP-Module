/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:05:29 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/14 22:42:37 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void)
{
	this->_fixed = 0;
	return ;
}


Fixed::Fixed(int const n)
{
	this->_fixed = n << this->_bits;
	return ;
}

Fixed::Fixed(float const n)
{
	this->_fixed = roundf(n * (1 << this->_bits));
	return ;
}

Fixed::Fixed(const Fixed &f)
{
	*this = f;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	if (this != &f)
		this->_fixed = f._fixed;
	return (*this);
}

Fixed::~Fixed(void)
{
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

/*----------------------*/
/* comparative operator */
/*----------------------*/
bool	Fixed::operator>(Fixed const &f) const
{
	return (this->_fixed > f._fixed);
}

bool	Fixed::operator<(Fixed const &f) const
{
	return (this->_fixed < f._fixed);
}

bool	Fixed::operator>=(Fixed const &f) const
{
	return (this->_fixed >= f._fixed);
}

bool	Fixed::operator<=(Fixed const &f) const
{
	return (this->_fixed <= f._fixed);
}

bool	Fixed::operator==(Fixed const &f) const
{
	return (this->_fixed == f._fixed);
}

bool	Fixed::operator!=(Fixed const &f) const
{
	return (this->_fixed != f._fixed);
}

/*---------------------*/
/* arithmetic operator */
/*---------------------*/
Fixed	Fixed::operator+(Fixed const &f)
{
	Fixed	ft(*this);
	ft._fixed += f._fixed;
	return (ft);
}

Fixed	Fixed::operator-(Fixed const &f)
{
	Fixed	ft(*this);
	ft._fixed -= f._fixed;
	return (ft);
}

Fixed	Fixed::operator*(Fixed const &f)
{
	Fixed	ft(this->toFloat() * f.toFloat());
	return (ft);
}

Fixed	Fixed::operator/(Fixed const &f)
{
	Fixed	ft(this->_fixed / f._fixed);
	return (ft);
}

/*----------------------------------------*/
/* increment operator & decrease operator */
/*----------------------------------------*/
Fixed	Fixed::operator++(void)
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	ft(*this);
	_fixed++;
	return (ft);
}

Fixed	Fixed::operator--(void)
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	ft(*this);
	_fixed--;
	return (ft);
}

Fixed const	&Fixed::min(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed const	&Fixed::max(Fixed const &f1, Fixed const &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed	&Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	else
		return (f2);
}

Fixed	&Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	else
		return (f2);
}

