/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:42:18 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 23:42:08 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include <iostream>

Character::Character(std::string const &name) : _name(name)
{
	std::cout << "Character: constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return ;
}

Character::Character(Character const &ref) : _name(ref.getName())
{
	std::cout << "Character: copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		AMateria const	*tmp = ref.getMateria(i);
		if (tmp != NULL)
			this->_materia[i] = tmp->clone();
		else
			this->_materia[i] = NULL;
	}
	return ;
}

Character	&Character::operator=(Character const &ref)
{
	std::cout << "Character: assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->~Character();
		this->_name = ref.getName();
		for (int i = 0; i < 4; i++)
		{
			AMateria const	*tmp = ref.getMateria(i);
			if (tmp != NULL)
				this->_materia[i] = tmp->clone();
			else
				this->_materia[i] = NULL;
		}
	}
	return *this;
}

Character::~Character(void)
{
	std::cout << "Character: destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	return ;
}

std::string const	&Character::getName(void) const
{
	return this->_name;
}

AMateria const	*Character::getMateria(int index) const
{
	return (this->_materia[index]);
}

void	Character::equip(AMateria *materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] == NULL)
		{
			this->_materia[i] = materia;
			return ;
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_materia[idx] = NULL;
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_materia[idx] != NULL)
		this->_materia[idx]->use(target);
	return ;
}
