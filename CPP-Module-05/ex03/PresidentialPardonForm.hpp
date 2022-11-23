/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:25:40 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 20:41:49 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public virtual Form
{
private:
	std::string	_target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &ref);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &ref);
	~PresidentialPardonForm(void);

	void	execute(Bureaucrat const &executor) const;
	std::string	getTarget(void) const;
};


#endif
