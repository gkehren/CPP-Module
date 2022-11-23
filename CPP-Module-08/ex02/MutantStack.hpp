/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:30:32 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 22:01:06 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void);
	MutantStack(MutantStack const &ref);
	MutantStack<T>	&operator=(MutantStack<T> const &ref);
	~MutantStack(void);

	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	iterator	begin(void);
	iterator	end(void);

	typedef typename MutantStack<T>::stack::container_type::const_iterator const_iterator;
	const_iterator	cbegin(void) const;
	const_iterator	cend(void) const;

	typedef typename MutantStack<T>::stack::container_type::reverse_iterator reverse_iterator;
	reverse_iterator	rbegin(void);
	reverse_iterator	rend(void);

	typedef typename MutantStack<T>::stack::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator crbegin(void) const;
	const_reverse_iterator crend(void) const;
};

template<typename T>
MutantStack<T>::MutantStack(void) : MutantStack::stack() {}

template<typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &ref) : MutantStack<T>::stack(ref) {}

template<typename T>
MutantStack<T>::~MutantStack(void) {}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack<T> const &ref)
{
	if (this != &ref)
		MutantStack<T>::stack::operator=(ref);
	return *this;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return this->c.end();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cbegin(void) const
{
	return this->c.cbegin();
}

template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::cend(void) const
{
	return this->c.cend();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin(void)
{
	return this->c.rbegin();
}

template<typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend(void)
{
	return this->c.rend();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crbegin(void) const
{
	return this->c.crbegin();
}

template<typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::crend(void) const
{
	return this->c.crend();
}

#endif
