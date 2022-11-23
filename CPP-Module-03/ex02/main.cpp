/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:08:12 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:34:32 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Coplien-----" << std::endl;
	{
		FragTrap	j1("Bob");
		FragTrap	j2(j1);
		FragTrap	j3 = j2;
	}
	std::cout << "-----Test 0-----" << std::endl;
	{
		FragTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(95);
		j1.beRepaired(5);
		j1.takeDamage(5);
	}
	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		FragTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(95);
		j1.beRepaired(5);
		j1.takeDamage(10);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		FragTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(100);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		FragTrap	j1("Bob");

		for (int i = 0; i < 100; i++)
			j1.beRepaired(0);
		j1.beRepaired(0);
	}
	std::cout << std::endl << "-----Test 4-----" << std::endl;
	{
		FragTrap	j1("Bob");

		j1.highFivesGuys();
	}
	return 0;
}
