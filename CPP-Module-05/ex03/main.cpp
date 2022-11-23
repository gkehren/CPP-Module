/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:47 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 21:47:59 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Test 1-----" << std::endl;
	{
		Intern someRandomIntern;
		Form *rrf;

		rrf = someRandomIntern.makeForm("B496", "Bender");
		if (rrf)
			delete rrf;
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat Bob("Bob", 1);
		Bureaucrat Jean("Jean", 150);
		Form *rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << *rrf << std::endl;
		rrf->beSigned(Jean);
		rrf->beSigned(Bob);
		std::cout << *rrf << std::endl;
		Jean.executeForm(*rrf);
		Bob.executeForm(*rrf);
		delete rrf;
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat Bob("Bob", 1);
		Bureaucrat Jean("Jean", 150);
		Form *rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << *rrf << std::endl;
		rrf->beSigned(Jean);
		rrf->beSigned(Bob);
		std::cout << *rrf << std::endl;
		Jean.executeForm(*rrf);
		Bob.executeForm(*rrf);
		delete rrf;
	}
	std::cout << std::endl << "-----Test 4-----" << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat Bob("Bob", 1);
		Bureaucrat Jean("Jean", 150);
		Form *rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << *rrf << std::endl;
		rrf->beSigned(Jean);
		rrf->beSigned(Bob);
		std::cout << *rrf << std::endl;
		Jean.executeForm(*rrf);
		Bob.executeForm(*rrf);
		delete rrf;
	}
}
