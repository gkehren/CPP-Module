/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:25:19 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 21:39:51 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm: constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &ref) : Form("RobotomyRequestForm", 72, 45), _target(ref.getTarget())
{
	std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &ref)
{
	std::cout << "RobotomyRequestForm: assignment constructor called" << std::endl;
	if (this != &ref)
		this->_target = ref.getTarget();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm: destructor called" << std::endl;
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
			std::cout << "*Drrrrrrrrr...........Drrrrrrrrr*" << std::endl;
			srand (time(NULL));
			if ((rand() % 2) + 1 == 2)
				std::cout << this->getTarget() << " has been robotomized" << std::endl;
			else
				std::cout << "robotomy failed" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}
