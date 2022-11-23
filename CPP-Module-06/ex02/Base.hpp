/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 18:06:19 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/20 18:48:17 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
public:
	virtual ~Base(void){};
};

class A : public Base
{};

class B : public Base
{};

class C : public Base
{};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
