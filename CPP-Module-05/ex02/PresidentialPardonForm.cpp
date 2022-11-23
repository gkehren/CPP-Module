/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:25:29 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 21:40:38 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm: constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &ref) : Form("PresidentialPardonForm", 25, 5), _target(ref.getTarget())
{
	std::cout << "PresidentialPardonForm: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &ref)
{
	std::cout << "PresidentialPardonForm: assignment constructor called" << std::endl;
	if (this != &ref)
		this->_target = ref.getTarget();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm: destructor called" << std::endl;
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->getIsSign() == false)
			throw Form::FormNotSignedException();
		else if (this->getGradeToExe() < executor.getGrade())
			throw Form::FormExecutionGradeException();
		else
		{
			std::cout << executor.getName() << " executed " << this->getName() << std::endl;
			std::cout << this->getTarget() << " was pardoned by Zaphod Beeblebrox" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}
