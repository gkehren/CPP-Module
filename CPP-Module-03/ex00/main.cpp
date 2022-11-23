/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:08:12 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 21:35:40 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "-----Coplien-----" << std::endl;
	{
		ClapTrap	j1("Bob");
		ClapTrap	j2(j1);
		ClapTrap	j3 = j2;
	}
	std::cout  << "-----Test 1-----" << std::endl;
	{
		ClapTrap	j1("Bob");

		j1.attack("Jean");
		j1.takeDamage(10);
		j1.beRepaired(5);
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		ClapTrap	j1("Bob");

		for (int i = 0; i < 10; i++)
			j1.beRepaired(0);
		j1.beRepaired(0);
	}
	return 0;
}
