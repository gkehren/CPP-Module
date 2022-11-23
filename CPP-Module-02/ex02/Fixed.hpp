/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:05:27 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/14 22:08:09 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &f);
	~Fixed(void);

	Fixed	&operator=(Fixed const &f); // assignment operator

	// comparative operator
	bool	operator>(Fixed const &f) const;
	bool	operator<(Fixed const &f) const;
	bool	operator>=(Fixed const &f) const;
	bool	operator<=(Fixed const &f) const;
	bool	operator==(Fixed const &f) const;
	bool	operator!=(Fixed const &f) const;

	// arithmetic operator
	Fixed	operator+(Fixed const &f);
	Fixed	operator-(Fixed const &f);
	Fixed	operator*(Fixed const &f);
	Fixed	operator/(Fixed const &f);

	// increment operator & decrease operator
	Fixed	operator++(void);
	Fixed	operator++(int);
	Fixed	operator--(void);
	Fixed 	operator--(int);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed const	&min(Fixed const &f1, Fixed const &f2);
	static Fixed const	&max(Fixed const &f1, Fixed const &f2);
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);

private:
	int _fixed;
	static const int _bits = 8;

};

std::ostream	&operator<<( std::ostream &o, Fixed const &i);

#endif
