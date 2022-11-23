/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:12:45 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 17:07:48 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <list>
#include <string>
#include <iostream>

class OutOfRangeException : public std::exception
	{
		public:
			const char	*what(void) const throw()
			{
				return "Out of range";
			}
	};

template<class T>
typename T::iterator easyfind(T &t1, int n)
{
	typename T::iterator it = std::find(t1.begin(), t1.end(), n);
	if (it == t1.end())
		throw OutOfRangeException();
	return it;
}

#endif
