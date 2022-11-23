/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:12:34 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 17:11:36 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::cout << "-----Test 1-----" << std::endl;
	{
		std::vector<int>	v1(10);
		for (size_t i = 0; i < 10; i++)
			v1[i] = i;
		try
		{
			std::vector<int>::iterator it = easyfind(v1, 5);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::vector<int>::iterator it = easyfind(v1, 50);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		std::list<float>	l1;
		l1.push_back(1.1);
		l1.push_back(2.2);
		l1.push_back(3.3);
		l1.push_back(4.4);
		l1.push_back(5.5);
		l1.push_back(5.5);
		l1.push_back(1.1);
		l1.push_back(2.2);
		l1.push_back(3.3);
		l1.push_back(4);
		l1.push_back(5.5);
		l1.push_back(5.5);
		try
		{
			std::list<float>::iterator it = easyfind(l1, 4);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		try
		{
			std::list<float>::iterator it = easyfind(l1, 5);
			std::cout << *it << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
