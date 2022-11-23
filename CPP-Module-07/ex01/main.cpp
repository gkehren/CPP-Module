/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:07:56 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/21 16:24:52 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>

int add_one(int n)
{
	return n + 1;
}

std::string	add_bye(std::string s)
{
	s.append("bye");
	return s;
}

int	main(void)
{
	std::cout << std::endl << "-----Test 1-----" << std::endl;
	{
		int	arr[] = {0,1,2,3,4,5,6,7,8,9};
		::iter(arr, 10, &add_one);
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << std::endl;
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		std::string arr[] = {"TEST", "", "hello, "};
		::iter(arr, 3, &add_bye);
		for (int i = 0; i < 3; i++)
			std::cout << arr[i] << std::endl;
	}
}
