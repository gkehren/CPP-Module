/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:38:31 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 16:15:30 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat: constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &ref) : Animal("Cat")
{
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Cat	&Cat::operator=(Cat const &ref)
{
	if (this != &ref)
		this->type = ref.type;
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Cat: destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat sound: *miaou miaou*" << std::endl;
	return ;
}
