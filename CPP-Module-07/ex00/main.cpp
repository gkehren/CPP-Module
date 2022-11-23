/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:43:41 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/21 16:05:22 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int main(void)
{
	std::cout << "-----Test 0-----" << std::endl;
	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		int	a = 21;
		int	b = 42;
		std::cout << "Max of " << a << " and " << b << " is " << max<int>(a, b) << std::endl;
		std::cout << "Min of " << a << " and " << b << " is " << min<int>(a, b) << std::endl;
		std::cout << "Before swap of " << a << " and " << b << " after ";
		swap<int>(a, b);
		std::cout << a << " and " << b << std::endl;
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		float	a = 21.12;
		float	b = 42.24;
		std::cout << "Max of " << a << " and " << b << " is " << max<float>(a, b) << std::endl;
		std::cout << "Min of " << a << " and " << b << " is " << min(a, b) << std::endl;
		std::cout << "Before swap of " << a << " and " << b << " after ";
		swap<float>(a, b);
		std::cout << a << " and " << b << std::endl;
	}
}
