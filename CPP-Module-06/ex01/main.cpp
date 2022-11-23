/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:42:06 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/20 17:54:10 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

int main(void)
{
	std::cout << "-----Test 1-----" << std::endl;
	{
		Data test;
		test.s = "test";
		test.n = 42;

		uintptr_t out = serialize(&test);
		Data *data = deserialize(out);

		std::cout << "int: " << data->n << std::endl;
		std::cout << "string: " << data->s << std::endl;
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		Data test;
		test.s = "c'est un très long texte";
		test.n = 2000000;

		uintptr_t out = serialize(&test);
		Data *data = deserialize(out);

		std::cout << "int: " << data->n << std::endl;
		std::cout << "string: " << data->s << std::endl;
	}
}
