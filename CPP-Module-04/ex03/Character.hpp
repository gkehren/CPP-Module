/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:42:16 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 23:03:37 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria	*_materia[4];

public:
	Character(std::string const &name);
	Character(Character const &ref);
	Character	&operator=(Character const &ref);
	~Character(void);

	std::string const	&getName() const;
	AMateria const	*getMateria(int index) const;
	void	equip(AMateria *materia);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);

};

#endif
