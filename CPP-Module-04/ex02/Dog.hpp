/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:47:55 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 17:08:59 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain	*_brain;

public:
	Dog(void);
	Dog(Dog const &ref);
	Dog	&operator=(Dog const &ref);
	~Dog(void);

	void	makeSound(void) const;

};

#endif
