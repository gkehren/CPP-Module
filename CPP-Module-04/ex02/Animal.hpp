/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:21:37 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 17:41:36 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string	type;

public:
	Animal(void);
	Animal(std::string ptype);
	Animal(Animal const &ref);
	Animal	&operator=(Animal const &ref);
	virtual ~Animal(void);

	virtual void		makeSound(void) const = 0;
	std::string	const	&getType(void) const;

};

#endif
