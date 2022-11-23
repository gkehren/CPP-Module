/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:27:33 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/10 19:14:00 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	randomChump("Bob"); // annonce un zombie "Bob"
	randomChump("Jean"); // annonce un zombie "Jean"
	Zombie zombie1("Francois"); // créer une instance zombie1 "Francois"
	zombie1.announce(); // annonce le zombie1
	Zombie *zombie2 = newZombie("Patrick"); // créer une instance zombie2 "Patrick" alloué dynamiquement
	zombie2->announce(); // annonce le zombie2
	delete zombie2;
}
