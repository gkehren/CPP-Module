/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:05:56 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/20 18:55:45 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>

Base	*generate(void)
{
	srand((unsigned int)time(NULL));
	switch (rand() % 3)
	{
	case 0:
		return new A();
	case 1:
		return new B();
	case 2:
		return new C();
	default:
		return NULL;
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base &p)
{
	Base	a;
	Base	b;
	Base	c;

	try
	{
		a = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}catch(std::exception & e)
	{}

	try
	{
		b = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}catch(std::exception & e)
	{}

	try
	{
		c = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}catch(std::exception & e)
	{}
}
