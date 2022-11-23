/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:03:47 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:06:00 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &ref);
	DiamondTrap	&operator=(DiamondTrap const &ref);
	~DiamondTrap(void);

	void	attack(std::string const &target);
	void	whoAmI(void);
};


#endif
