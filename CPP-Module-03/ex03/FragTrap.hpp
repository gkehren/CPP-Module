/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:35:21 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 23:17:31 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const &ref);
	FragTrap	&operator=(FragTrap const &ref);
	~FragTrap(void);

	void	attack(const std::string &target);
	void	highFivesGuys(void);

};

#endif
