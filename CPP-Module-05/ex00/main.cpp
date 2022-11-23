/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:47 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 22:12:45 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Test 1-----" << std::endl;
	{
		Bureaucrat	bob0("Bob", 155);
		Bureaucrat	bob1("Bob", 0);
		Bureaucrat	bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.decreaseGrade();
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		Bureaucrat	don("Don", 1);
		std::cout << don << std::endl;
		don.increaseGrade();
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		Bureaucrat	patrick("patrick", 32);
		std::cout << patrick << std::endl;
		patrick.decreaseGrade();
		patrick.decreaseGrade();
		std::cout << patrick << std::endl;
		patrick.increaseGrade();
		std::cout << patrick << std::endl;
	}
}
