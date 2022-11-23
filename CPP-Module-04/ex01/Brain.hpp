/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:25:23 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/16 16:29:46 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
private:
	std::string _ideas[100];

public:
	Brain(void);
	Brain(Brain const &ref);
	Brain	&operator=(Brain const &ref);
	~Brain(void);

	std::string const &get_ideas(int index) const;

};

#endif
