/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:15:20 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 18:31:02 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice(void);
	Ice(Ice const &ref);
	Ice	&operator=(Ice const &ref);
	~Ice(void);

	AMateria	*clone(void) const;
	void	use(ICharacter &target);

};

#endif
