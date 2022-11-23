/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:23:35 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 00:00:30 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource: constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &ref)
{
	std::cout << "MateriaSource: copy constructor called" << std::endl;
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

MateriaSource	&MateriaSource::operator=(MateriaSource const &ref)
{
	std::cout << "MateriaSource: assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->~MateriaSource();
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

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource: destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	return ;
}

AMateria	*MateriaSource::getMateria(int index) const
{
	return (this->_materia[index]);
}

void	MateriaSource::learnMateria(AMateria *materia)
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

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
		if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
			return (this->_materia[i]->clone());
	return NULL;
}
