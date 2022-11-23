/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:47 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 20:45:55 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Test 1-----" << std::endl;
	{
		Form *arbre = new ShrubberyCreationForm("jardin");
		Bureaucrat Patrick("Patrick", 146);
		Bureaucrat Bob("Bob", 138);
		std::cout << *arbre << std::endl;
		arbre->beSigned(Patrick);
		arbre->beSigned(Bob);
		std::cout << *arbre << std::endl;
		arbre->execute(Patrick);
		arbre->execute(Bob);
		Patrick.executeForm(*arbre);
		Bob.executeForm(*arbre);
		delete arbre;
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		Form *arbre = new ShrubberyCreationForm("jardin");
		Bureaucrat Patrick("Patrick", 1);
		std::cout << *arbre << std::endl;
		arbre->beSigned(Patrick);
		std::cout << *arbre << std::endl;
		arbre->execute(Patrick);
		Patrick.executeForm(*arbre);
		delete arbre;
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		Form *robot = new RobotomyRequestForm("Robocop");
		Bureaucrat Patrick("Patrick", 79);
		Bureaucrat Bob("Bob", 55);
		std::cout << *robot << std::endl;
		robot->beSigned(Patrick);
		robot->beSigned(Bob);
		std::cout << *robot << std::endl;
		robot->execute(Patrick);
		robot->execute(Bob);
		Patrick.executeForm(*robot);
		Bob.executeForm(*robot);
		delete robot;
	}
	std::cout << std::endl << "-----Test 4-----" << std::endl;
	{
		Form *robot = new RobotomyRequestForm("RoboCop");
		Bureaucrat Patrick("Patrick", 1);
		std::cout << *robot << std::endl;
		robot->beSigned(Patrick);
		std::cout << *robot << std::endl;
		robot->execute(Patrick);
		Patrick.executeForm(*robot);
		delete robot;
	}
	std::cout << std::endl << "-----Test 5-----" << std::endl;
	{
		Form *pardon = new PresidentialPardonForm("Jean");
		Bureaucrat Patrick("Patrick", 30);
		Bureaucrat Bob("Bob", 20);
		std::cout << *pardon << std::endl;
		pardon->beSigned(Patrick);
		pardon->beSigned(Bob);
		std::cout << *pardon << std::endl;
		pardon->execute(Patrick);
		pardon->execute(Bob);
		Patrick.executeForm(*pardon);
		Bob.executeForm(*pardon);
		delete pardon;
	}
	std::cout << std::endl << "-----Test 6-----" << std::endl;
	{
		Form *pardon = new PresidentialPardonForm("Jean");
		Bureaucrat Patrick("Patrick", 1);
		std::cout << *pardon << std::endl;
		pardon->beSigned(Patrick);
		std::cout << *pardon << std::endl;
		pardon->execute(Patrick);
		Patrick.executeForm(*pardon);
		delete pardon;
	}
}
