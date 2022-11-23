/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:12:50 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/12 18:09:42 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"
#include <string>
#include <iostream>
#include <fstream>

Sed::Sed(std::string filename, std::string s1, std::string s2) : _filename(filename), _s1(s1), _s2(s2)
{
	std::cout << "Sed: constructor called" << std::endl;
	this->_fsin.open(filename.data(), std::fstream::in);
	if (this->_fsin.fail())
		return ;
	this->_fsout.open(filename.append(".replace").c_str(), std::fstream::out | std::fstream::trunc);
	if (this->_fsout.fail())
		return ;
	return ;
}

Sed::~Sed(void)
{
	std::cout << "Sed: destructor called" << std::endl;
	this->_fsin.close();
	this->_fsout.close();
	return ;
}

std::string &Sed::get_filename(void)
{
	return (this->_filename);
}

std::string &Sed::get_s1(void)
{
	return (this->_s1);
}

std::string &Sed::get_s2(void)
{
	return (this->_s2);
}

std::fstream &Sed::get_fsin(void)
{
	return (this->_fsin);
}

std::fstream &Sed::get_fsout(void)
{
	return (this->_fsout);
}
