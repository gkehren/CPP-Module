/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:44:12 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/21 16:04:56 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
void swap(T &x, T &y)
{
	T	tmp = x;
	x = y;
	y = tmp;
}

template<typename T>
T min(T const x, T const y)
{
	return (x < y ? x : y);
}

template<typename T>
T max(T const x, T const y)
{
	return (x > y ? x : y);
}

#endif
