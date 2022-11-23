/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:21:25 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/09 00:09:14 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "PhoneBook.hpp"
# include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact: Constructor called" << std::endl;
	first_name.assign("");
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact: Destructor called" << std::endl;
	return ;
}
