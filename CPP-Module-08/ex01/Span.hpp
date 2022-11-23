/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:13:09 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 21:18:56 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>

class Span
{
private:
	unsigned int	_size;
	std::vector<int>	_v;
public:
	Span(unsigned int n);
	Span(Span const &ref);
	Span	&operator=(Span const &ref);
	~Span(void);

	unsigned int getSize(void) const;
	void	addNumber(int n);
	void	addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);

	int	shortestSpan(void) const;
	int	longestSpan(void) const;

	class SpanIsFullException : public std::exception
	{
		public:
			const char	*what(void) const throw();
	};

	class SearchException : public std::exception
	{
		public:
			const char	*what(void) const throw();
	};

};

#endif
