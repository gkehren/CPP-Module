/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:45:31 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/11 21:32:31 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon(void);

	std::string const	&getType();
	void				setType(std::string type);

private:
	std::string _type;

};

#endif
