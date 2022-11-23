/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:35:21 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/15 21:23:01 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &ref);
	FragTrap	&operator=(FragTrap const &ref);
	~FragTrap(void);

	void	attack(const std::string &target);
	void	highFivesGuys(void);

};

#endif
