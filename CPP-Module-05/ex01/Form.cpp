/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:13:09 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 22:40:46 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return "GradeTooHighException: Grade 1 is the highest grade";
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return "GradeTooLowException: Grade 150 is the lowest grade";
}

Form::Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_exe) : _name(name), _is_sign(false)
{
	std::cout << "Form: constructor called" << std::endl;
	try
	{
		if (grade_to_sign > 150 || grade_to_exe > 150)
			throw GradeTooLowException();
		else if (grade_to_sign < 1 || grade_to_exe < 1)
			throw GradeTooHighException();
		else
		{
			this->_grade_to_sign = grade_to_sign;
			this->_grade_to_exe = grade_to_exe;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return ;
}

Form::Form(Form const &ref) : _name(ref.getName())
{
	std::cout << "Form: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

Form	&Form::operator=(Form const &ref)
{
	std::cout << "Form: assignment constructor called" << std::endl;
	if (this != &ref)
	{
		this->_is_sign = ref._is_sign;
		this->_grade_to_sign = ref._grade_to_sign;
		this->_grade_to_exe = ref._grade_to_exe;
	}
	return *this;
}

Form::~Form(void)
{
	std::cout << "Form: destructor constructor called" << std::endl;
	return ;
}

void	Form::beSigned(Bureaucrat const &ref)
{
	if (ref.getGrade() > this->getGradeToSign())
		std::cout << ref.getName() << " couldn't sign " << this->getName() << " because is grade is too low." << std::endl;
	else
	{
		std::cout << ref.getName() << " signed " << this->getName() << std::endl;
		this->_is_sign = true;
	}
	return ;
}

std::string	const	&Form::getName(void) const
{
	return this->_name;
}

bool	Form::getIsSign(void) const
{
	return this->_is_sign;
}

unsigned int	Form::getGradeToSign(void) const
{
	return this->_grade_to_sign;
}

unsigned int	Form::getGradeToExe(void) const
{
	return this->_grade_to_exe;
}

std::ostream	&operator<<( std::ostream &o, Form const &i)
{
	o << "Form " << i.getName() << ": is signed " << i.getIsSign() << ", required grade to sign " << i.getGradeToSign() << ", required grade to exectute " << i.getGradeToExe();
	return (o);
}
