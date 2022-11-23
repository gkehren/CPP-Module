/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:08:12 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 22:46:22 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Coplien-----" << std::endl;
	{
		ScavTrap	j1("Bob");
		ScavTrap	j2(j1);
		ScavTrap	j3 = j2;
	}
	std::cout  << "-----Test 1-----" << std::endl;
	{
		ScavTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(100);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		ScavTrap	j1("Bob");

		for (int i = 0; i < 50; i++)
			j1.beRepaired(0);
		j1.beRepaired(0);
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		ScavTrap	j1("Bob");

		j1.guardGate();
	}
	return 0;
}
