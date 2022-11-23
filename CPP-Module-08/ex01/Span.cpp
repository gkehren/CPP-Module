/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:13:16 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 21:20:36 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char	*Span::SpanIsFullException::what(void) const throw()
{
	return "Impossible to add number span is full";
}

const char	*Span::SearchException::what(void) const throw()
{
	return "Impossible to search span is too little or empty";
}

Span::Span(unsigned int n) : _size(n)
{
	return ;
}

Span::Span(Span const &ref) : _size(ref.getSize())
{
	*this = ref;
	return ;
}

Span	&Span::operator=(Span const &ref)
{
	if (this != &ref)
	{
		this->_size = ref._size;
		this->_v = ref._v;
	}
	return *this;
}

Span::~Span(void)
{
	return ;
}

unsigned int Span::getSize(void) const
{
	return this->_size;
}

void	Span::addNumber(int n)
{
	if (this->_v.size() >= this->_size)
		throw Span::SpanIsFullException();
	this->_v.push_back(n);
	return ;
}

void	Span::addNumber(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end)
{
	int size = std::distance(begin, end);
	if (size > static_cast<int>(this->_size))
		throw Span::SpanIsFullException();
	this->_v.insert(this->_v.end(), begin, end);
}

int	Span::shortestSpan(void) const
{
	if (this->_v.size() < 2)
		throw Span::SearchException();
	std::vector<int> copy_v = this->_v;
	std::sort(copy_v.begin(), copy_v.end());
	std::vector<int>::iterator prev = copy_v.begin();
	std::vector<int>::iterator next = ++copy_v.begin();
	int	shortestSpan = *next - *prev;
	while (next != copy_v.end())
	{
		if (*next - *prev < shortestSpan)
			shortestSpan = *next - *prev;
		prev = next;
		next++;
	}
	return shortestSpan;
}

int	Span::longestSpan(void) const
{
	if (this->_v.size() < 2)
		throw Span::SearchException();
	std::vector<int> copy_v = this->_v;
	std::sort(copy_v.begin(), copy_v.end());
	return copy_v.back() - copy_v.front();
}
