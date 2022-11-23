/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:25:01 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 21:30:42 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &ref) : Form("ShrubberyCreationForm", 145, 137), _target(ref.getTarget())
{
	std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
	*this = ref;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ref)
{
	std::cout << "ShrubberyCreationForm: assignment constructor called" << std::endl;
	if (this != &ref)
		this->_target = ref.getTarget();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
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
			std::string	file = this->getTarget() + "_shrubbery";
			std::ifstream readFile;
			std::ofstream writeFile(file.c_str());
			for (int i = 0; i < 10; i++)
			{
				writeFile   <<	"       _-_" << std::endl
						<<	"    /~~   ~~\\" << std::endl
						<<	" /~~         ~~\\" << std::endl
						<<	"{               }" << std::endl
						<<	" \\  _-     -_  /" << std::endl
						<<	"  ~  \\   /  ~" << std::endl
						<<	"_- -  | | _- _" << std::endl
						<<	"_ -   | |   -_" << std::endl
						<<	"     // \\\\" << std::endl
						<< std::endl;
			}
			writeFile.close();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return ;
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}
