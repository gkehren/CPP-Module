/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 20:49:48 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 21:31:24 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"

class Intern
{
private:
	typedef struct	s_formList
	{
		std::string	formName;
		Form		*formType;
	}				t_formList;
public:
	Intern(void);
	Intern(Intern const &ref);
	Intern	&operator=(Intern const &ref);
	~Intern(void);

	Form	*makeForm(std::string name, std::string target);
};


#endif
