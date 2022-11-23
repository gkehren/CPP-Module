/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 19:27:30 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/10 19:41:24 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{

public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	setName(std::string name);
	void	announce(void);

private:
	std::string	_name;

};

Zombie* zombieHorde(int n, std::string name);

#endif
