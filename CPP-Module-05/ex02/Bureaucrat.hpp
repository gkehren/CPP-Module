/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 14:38:49 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/18 17:47:40 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Form.hpp"
#include <string>
#include <exception>

class Form;

class Bureaucrat
{
private:
	std::string const	_name;
	unsigned int		_grade;

public:
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const &ref);
	Bureaucrat	&operator=(Bureaucrat const &ref);
	~Bureaucrat(void);

	std::string const	&getName(void) const;
	unsigned int		getGrade(void) const;
	void				increaseGrade(void);
	void				decreaseGrade(void);
	void				executeForm(Form const &form);

	class GradeTooHighException : public std::exception
	{
		public:
			const char	*what(void) const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char	*what(void) const throw();
	};

};

std::ostream	&operator<<( std::ostream &o, Bureaucrat const &i);

#endif
