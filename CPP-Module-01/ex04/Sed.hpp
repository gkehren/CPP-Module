/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:10:39 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/12 15:26:47 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

#include <string>
#include <fstream>

class Sed
{
public:
	Sed(std::string filename, std::string s1, std::string s2);
	~Sed(void);

	std::string		&get_filename(void);
	std::string		&get_s1(void);
	std::string		&get_s2(void);
	std::fstream	&get_fsin(void);
	std::fstream	&get_fsout(void);

private:
	std::string		_filename;
	std::string		_s1;
	std::string		_s2;
	std::fstream	_fsin;
	std::fstream	_fsout;

};

#endif
