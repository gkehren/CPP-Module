/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:52:17 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:17:39 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:

public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &ref);
	ScavTrap	&operator=(ScavTrap const &ref);
	~ScavTrap(void);

	void	attack(const std::string &target);
	void	guardGate(void);

};

#endif
