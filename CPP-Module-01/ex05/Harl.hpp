/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:15:29 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/12 23:59:56 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
	typedef struct s_ptrHarl
	{
		std::string name;
		void(Harl::*ptr)(void);
	}	t_ptrHarl;
public:
	Harl(void);
	~Harl(void);

	void	complain(std::string level);

private:
	t_ptrHarl	ptrHarl[4];
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif
