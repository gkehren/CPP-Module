/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:28:11 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/10 17:54:33 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{

public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);

private:
	std::string	_name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
