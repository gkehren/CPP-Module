/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:23:19 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 01:23:19 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interpreter.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return std::cout << "Error: number of argument invalid" << std::endl, 0;
	Interpreter	interpreter(argv[1]);
	std::cout << interpreter << std::endl;
	return 0;
}
