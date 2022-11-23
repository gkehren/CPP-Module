/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:08:05 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/21 16:29:58 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template<typename A, typename S, typename F>
void	iter(A array, S size, F *function)
{
	for (S i = 0; i < size; i++)
		array[i] = function(array[i]);
}

#endif
