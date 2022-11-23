/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:52 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 22:04:11 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "GradeTooHighException: Grade 1 is the highest grade";
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "GradeTooLowException: Grade 150 is the lowest grade";
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	std::cout << "Bureaucrat: constructor called" << std::endl;
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &ref) : _name(ref.getName())
{
	std::cout << "Bureaucrat: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &ref)
{
	std::cout << "Bureaucrat: assignment constructor called" << std::endl;
	if (this != &ref)
		this->_grade = ref._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: destructor called" << std::endl;
	return ;
}

std::string	const &Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	Bureaucrat::increaseGrade(void)
{
	try
	{
		if (this->getGrade() == 1)
			throw GradeTooHighException();
		else
			this->_grade--;
	}
	catch(const std::exception& e)
	{
		std::cout << "Impossible to increase " << this->getName() << "'s grade, " << e.what() << std::endl;
	}
	return ;
}

void	Bureaucrat::decreaseGrade(void)
{
	try
	{
		if (this->getGrade() == 150)
			throw GradeTooLowException();
		else
			this->_grade++;
	}
	catch(const std::exception& e)
	{
		std::cout << "Impossible to decrease " << this->getName() << "'s grade, " << e.what() << std::endl;
	}
	return ;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return (o);
}
