/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:13:02 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/17 22:31:24 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
private:
	std::string const	_name;
	bool				_is_sign;
	unsigned int		_grade_to_sign;
	unsigned int		_grade_to_exe;

public:
	Form(std::string name, unsigned int grade_to_sign, unsigned int grade_to_exe);
	Form(Form const &ref);
	Form	&operator=(Form const &ref);
	~Form(void);

	void	beSigned(Bureaucrat const &ref);

	std::string const &getName(void) const;
	bool			getIsSign(void) const;
	unsigned int	getGradeToSign(void) const;
	unsigned int	getGradeToExe(void) const;

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

std::ostream	&operator<<( std::ostream &o, Form const &i);

#endif
