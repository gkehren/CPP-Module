/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:15:38 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/13 00:05:26 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main(void)
{
	Harl	h;

	std::cout << "Harl debug:" << std::endl;
	h.complain("debug");
	std::cout << std::endl << "Harl info:" << std::endl;
	h.complain("info");
	std::cout << std::endl << "Harl warning:" << std::endl;
	h.complain("warning");
	std::cout << std::endl << "Harl error:" << std::endl;
	h.complain("error");
	return (0);
}
