/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:46:05 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/09 15:04:28 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook: Constructor called" << std::endl;
	PhoneBook::i = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook: Destructor called" << std::endl;
	return ;
}

void	PhoneBook::add(Contact *directory)
{
	std::cout << "Member function called: add" << std::endl;
	std::string	buff;
	if (PhoneBook::i >= 8)
		PhoneBook::i = 0;
	std::cout << "First name: ";
	std::cin >> buff;
	directory[PhoneBook::i].first_name = buff;
	std::cout << "Last name: ";
	std::cin >> buff;
	directory[PhoneBook::i].last_name = buff;
	std::cout << "Nickname: ";
	std::cin >> buff;
	directory[PhoneBook::i].nickname = buff;
	std::cout << "Phone number: ";
	std::cin >> buff;
	directory[PhoneBook::i].phone_number = buff;
	std::cout << "Darkest secret: ";
	std::cin >> buff;
	directory[PhoneBook::i].darkest_secret = buff;
	std::cout << "Contact "<< directory[i].first_name << " " << directory[i].last_name <<" successfully added" << std::endl;
	PhoneBook::i++;
	return ;
}

static void	print_directory(std::string str)
{
	if (str.length() <= 10)
	{
		std::cout << std::setfill (' ') << std::setw (10);
		std::cout << std::left << str.data();
	}
	else if (str.length() > 10)
	{
		std::string tmp = str.substr(0, 9);
		std::cout << tmp.data() << ".";
	}
	std::cout << "|";
}

void	PhoneBook::search(Contact *directory)
{
	std::string	buff;
	std::cout << "Member function called: search" << std::endl;
	int	i = 0;
	while (directory[i].first_name.compare("") != 0 && i < 8)
	{
		std::cout << i + 1 << "         |";
		print_directory(directory[i].first_name);
		print_directory(directory[i].last_name);
		print_directory(directory[i].nickname);
		std::cout << std::endl;
		i++;
	}
	i = 0;
	std::cout << "Enter an index: ";
	std::cin >> buff;
	if (atoi(buff.data()) <= 0 || atoi(buff.data()) > 8)
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	while (i < 8)
	{
		if (atoi(buff.data()) - 1 == i)
		{
			std::cout << directory[i].first_name << " " << directory[i].last_name << " " << directory[i].nickname << " " << directory[i].phone_number << " " << directory[i].darkest_secret << std::endl;
			return ;
		}
		i++;
	}
	return ;
}
