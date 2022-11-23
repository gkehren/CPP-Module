/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:20:19 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 17:33:29 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	std::cout << "-----Test 0-----" << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		int len = 10;
		Animal	*tab[len];
		for (int i = 0; i < len / 2; i++)
			tab[i] = new Dog;
		for (int i = 5; i < len; i++)
			tab[i] = new Cat;
		for (int i = 0; i < len; i++)
			delete tab[i];
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		int len = 10;
		Animal	*tab[len];
		for (int i = 0; i < len / 2; i++)
			tab[i] = new Dog;
		for (int i = 5; i < len; i++)
			tab[i] = new Cat;
		for (int i = 0; i < len; i++)
		{
			tab[i]->makeSound();
			std::cout << "Type:" << tab[i]->getType() << std::endl;
		}
		for (int i = 0; i < len; i++)
			delete tab[i];
	}
}
