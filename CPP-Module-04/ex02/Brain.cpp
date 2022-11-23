/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:25:21 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 17:23:30 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

Brain::Brain(void)
{
	std::cout << "Brain: constructor called" << std::endl;
	std::stringstream ss;
	for (int i = 0; i < 100; i++)
	{
		static const char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
		std::string tmp_s;
		tmp_s.reserve(10);

		for (int i = 0; i < 10; ++i)
			tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
		ss << i;
		_ideas[i] = "idea ";
		ss >> _ideas[i];
		_ideas[i].append(tmp_s);
	}
	return ;
}

Brain::Brain(Brain const &ref)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
			this->_ideas[i] = ref.get_ideas(i);
	return ;
}

Brain	&Brain::operator=(Brain const &ref)
{
	if (this != &ref)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = ref.get_ideas(i);
	return *this;
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
	return ;
}

std::string	const &Brain::get_ideas(int index) const
{
	return this->_ideas[index];
}
