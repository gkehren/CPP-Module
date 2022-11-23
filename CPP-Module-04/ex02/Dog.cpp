/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:48:31 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 17:09:29 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog: constructor called" << std::endl;
	_brain = new Brain;
	return ;
}

Dog::Dog(Dog const &ref) : Animal("Dog")
{
	std::cout << "Dog: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Dog	&Dog::operator=(Dog const &ref)
{
	if (this != &ref)
		this->type = ref.type;
	return *this;
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor called" << std::endl;
	delete _brain;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog sound: *wof wof*" << std::endl;
	return ;
}
