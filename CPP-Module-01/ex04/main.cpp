/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 21:58:58 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/14 14:34:11 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <string>
#include <iostream>
#include <fstream>

std::string replace(std::string buff, std::string s1, std::string s2)
{
	std::size_t	i = 0;

	i = buff.find(s1, 0);
	while (i != std::string::npos)
	{
		buff.erase(i, s1.size());
		buff.insert(i, s2);
		i += s2.size();
		i = buff.find(s1.c_str(), i, s1.size());
	}
	return (buff);
}

int	main(int argc, char **argv)
{
	std::string	buff;

	if (argc != 4)
		return (std::cout << "Invalid number of argument" << std::endl, 0);
	Sed sed(argv[1], argv[2], argv[3]);
	if (sed.get_fsin().fail() || sed.get_fsout().fail())
		return (std::cout << "Error: " << sed.get_filename() << " no such file" << std::endl, 1);
	while (getline(sed.get_fsin(), buff, '\0'))
	{
		buff = replace(buff, sed.get_s1(), sed.get_s2());
		sed.get_fsout() << buff.c_str();
	}
	return (0);
}
