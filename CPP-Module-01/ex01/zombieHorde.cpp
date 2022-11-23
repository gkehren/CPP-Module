/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:27:32 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/10 19:51:09 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <new>
#include <string>

Zombie* zombieHorde(int n, std::string name)
{
	Zombie	*z;

	if (n <= 0)
		return (NULL);
	z = new Zombie[n];
	for (int i = 0; i < n; i++)
		z[i].setName(name);
	return (z);
}
