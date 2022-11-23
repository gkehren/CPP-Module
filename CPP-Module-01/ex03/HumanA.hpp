/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:45:44 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/11 21:32:00 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	void	attack(void);

private:
	std::string	_name;
	Weapon		&_weapon;

};

#endif
