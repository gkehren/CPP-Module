/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:25:13 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 20:02:50 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public virtual Form
{
private:
	std::string	_target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &ref);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &ref);
	~RobotomyRequestForm(void);

	void	execute(Bureaucrat const &executor) const;
	std::string	getTarget(void) const;
};


#endif
