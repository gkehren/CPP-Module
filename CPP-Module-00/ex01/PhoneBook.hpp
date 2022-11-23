/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:49:02 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/09 02:12:56 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "PhoneBook.hpp"
# include "Contact.hpp"

class	PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		i;
	Contact	directory[8];
	void	add(Contact *directory);
	void	search(Contact *directory);

};

#endif
