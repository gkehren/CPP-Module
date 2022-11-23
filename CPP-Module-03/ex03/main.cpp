/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:08:12 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:33:12 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Coplien-----" << std::endl;
	{
		DiamondTrap	j1("Bob");
		DiamondTrap	j2(j1);
		DiamondTrap	j3 = j2;
	}
	std::cout << "-----Test 0-----" << std::endl;
	{
		DiamondTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(95);
		j1.beRepaired(5);
		j1.takeDamage(5);
	}
	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		DiamondTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(95);
		j1.beRepaired(5);
		j1.takeDamage(10);
		j1.beRepaired(1);
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		DiamondTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(100);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		DiamondTrap	j1("Bob");

		for (int i = 0; i < 50; i++)
			j1.beRepaired(0);
		j1.beRepaired(0);
	}
	std::cout << std::endl << "-----Test 4-----" << std::endl;
	{
		DiamondTrap	j1("Bob");

		j1.highFivesGuys();
	}
	std::cout << std::endl << "-----Test 5-----" << std::endl;
	{
		DiamondTrap	j1("Bob");

		j1.whoAmI();
	}
	return 0;
}
