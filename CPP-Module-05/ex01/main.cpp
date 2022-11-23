/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:47 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 22:43:30 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Test 1-----" << std::endl;
	{
		Bureaucrat	bob0("Bob", 155);
		Bureaucrat	bob1("Bob", 0);
		Form		b00("B00", 155, 155);
		Form		b01("B01", 0, 12);
		Bureaucrat	bob("Bob", 150);
		std::cout << bob << std::endl;
		bob.decreaseGrade();
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		Bureaucrat	patrick("Patrick", 2);
		Form	b02("B02", 1, 1);
		std::cout << patrick << std::endl;
		std::cout << b02 << std::endl;
		b02.beSigned(patrick);
		patrick.increaseGrade();
		std::cout << patrick << std::endl;
		b02.beSigned(patrick);
	}
}
