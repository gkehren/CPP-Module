/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:37:45 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/08 21:25:01 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdlib.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void)
{
	PhoneBook My_Awesome_PhoneBook;
	std::string buff;

	while (1)
	{
		std::cin >> buff;
		if (buff.compare("ADD") == 0)
			My_Awesome_PhoneBook.add(My_Awesome_PhoneBook.directory);
		else if (buff.compare("SEARCH") == 0)
			My_Awesome_PhoneBook.search(My_Awesome_PhoneBook.directory);
		else if (buff.compare("EXIT") == 0)
			exit(0);
	}
}
