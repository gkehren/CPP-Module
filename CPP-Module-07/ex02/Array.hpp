/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:28:27 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/21 21:32:23 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename A>
class Array
{
private:
	A				*_array;
	unsigned int	_size;

public:
	Array(void)
	{
		this->_array = new A[0];
		this->_size = 0;
	};
	Array(unsigned int n)
	{
		this->_array = new A[n];
		this->_size = n;
	};
	Array(Array const &ref)
	{
		this->_size = ref.size();
		this->_array = new A[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = ref._array[i];
	};
	Array	&operator=(Array const &ref)
	{
		if (this != &ref)
		{
			this->~Array();
			this->_size = ref.size();
			this->_array = new A[this->_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = ref._array[i];
		}
		return *this;
	};
	A	&operator[](unsigned int i) const
	{
		if (i > this->_size)
			throw Array::InvalidIndexException();
		return this->_array[i];
	}
	A	&operator[](unsigned int i)
	{
		if (i > this->_size)
			throw Array::InvalidIndexException();
		return this->_array[i];
	}
	~Array(void)
	{
		delete [] this->_array;
	}

	unsigned int size(void) const {
		return this->_size;
	};

	class InvalidIndexException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "Invalid index";
		}
	};
};

#endif
