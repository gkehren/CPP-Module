/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:05:27 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/14 15:18:19 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &f);
	Fixed	&operator=(Fixed const &f);
	~Fixed(void);

	int getRawBits( void ) const;
	void setRawBits( int const raw );

private:
	int _fixed;
	static const int _bits = 8;

};

#endif
