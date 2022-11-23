/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:56:11 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 23:27:23 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>

class AMateria
{

protected:
	std::string _type;

public:
	AMateria(std::string const &type);
	AMateria(AMateria const &ref);
	AMateria	&operator=(AMateria const &ref);
	virtual ~AMateria(void);

	std::string const	&getType(void) const; //Returns the materia type

	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter &target);

};

#endif
