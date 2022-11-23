/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:23:37 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 00:00:13 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*_materia[4];

public:
	MateriaSource(void);
	MateriaSource(MateriaSource const &ref);
	MateriaSource	&operator=(MateriaSource const &ref);
	~MateriaSource(void);

	AMateria	*getMateria(int index) const;
	void	learnMateria(AMateria *materia);
	AMateria	*createMateria(std::string const &type);

};

#endif
