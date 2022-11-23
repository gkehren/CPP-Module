/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 21:30:26 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 22:13:47 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int	main(void)
{
	std::cout << "-----Test 1-----" << std::endl;
	{
		std::cout << "--MutantStack--" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);

		std::cout << std::endl << "--list--" << std::endl;
		std::list<int> list;
		list.push_back(5);
		list.push_back(17);
		std::cout << list.back() << std::endl;
		list.pop_back();
		std::cout << list.size() << std::endl;
		list.push_back(3);
		list.push_back(5);
		list.push_back(737);
		//[...]
		list.push_back(0);
		std::list<int>::iterator list_it = list.begin();
		std::list<int>::iterator list_ite = list.end();
		++it;
		--it;
		while (list_it != list_ite)
		{
			std::cout << *list_it << std::endl;
			++list_it;
		}
	}
	std::cout << std::endl << "-----Test 2-----" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int> s_copy(mstack);
		MutantStack<int> s_oper = mstack;
		MutantStack<int>::iterator c_iter = s_copy.begin();
		for (; c_iter != s_copy.end(); c_iter++)
		{
			std::cout << *c_iter << std::endl;
		}
		std::cout << "-------------------------------------------------------" << std::endl;
		MutantStack<int>::iterator o_iter = s_oper.begin();
		for (; o_iter != s_oper.end(); o_iter++)
		{
			std::cout << *o_iter << std::endl;
		}
	}
	std::cout << std::endl << "-----Test 3-----" << std::endl;
	{
		MutantStack<int> reverse;
		reverse.push(1);
		reverse.push(2);
		reverse.push(3);
		reverse.push(4);
		reverse.push(5);

		MutantStack<int>::reverse_iterator r_iter = reverse.rbegin();

		for (; r_iter != reverse.rend(); r_iter++)
		{
			std::cout << "value : " << *r_iter << std::endl;
		}
	}
}
