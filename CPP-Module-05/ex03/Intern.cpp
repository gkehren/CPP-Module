/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:49:41 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 21:34:47 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern(void)
{
	std::cout << "Intern: constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const &ref)
{
	std::cout << "Intern: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Intern	&Intern::operator=(Intern const &ref)
{
	std::cout << "Intern: assignment constructor called" << std::endl;
	(void)ref;
	return *this;
}

Intern::~Intern(void)
{
	std::cout << "Intern: destructor called" << std::endl;
	return ;
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	t_formList forms[] =
	{
		{ "presidential pardon", new PresidentialPardonForm(target) },
		{ "robotomy request", new RobotomyRequestForm(target) },
		{ "shrubbery creation", new ShrubberyCreationForm(target) },
		{ "", NULL }
	};
	Form	*resultForm = NULL;

	for (int i = 0; forms[i].formType != NULL; i++)
	{
		if (forms[i].formName == name)
			resultForm = forms[i].formType;
		else
			delete forms[i].formType;
	}
	try
	{
		if (resultForm == NULL)
			throw Form::FormDoesNotExistException();
		else
			std::cout << "Intern creates " << name << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return resultForm;
}
