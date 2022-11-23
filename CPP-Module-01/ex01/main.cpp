/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:27:33 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/10 19:51:13 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int main(void)
{
	Zombie *horde = zombieHorde(3, "Bobby");
	horde[0].announce();
	horde[1].announce();
	horde[2].announce();
	delete [] horde;
}
