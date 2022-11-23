/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:25:03 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 18:32:30 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public virtual Form
{
private:
	std::string	_target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &ref);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &ref);
	~ShrubberyCreationForm(void);

	void	execute(Bureaucrat const &executor) const;
	std::string	getTarget(void) const;
};


#endif
