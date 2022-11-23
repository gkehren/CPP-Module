/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interpreter.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:23:40 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/22 11:24:41 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERPRETER_HPP
# define INTERPRETER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <cmath>

class Interpreter
{
private:
	Interpreter();

	std::string str;
	int type;

	int status[4];
	int ivalue;
	float fvalue;
	double dvalue;
	char cvalue;

	void parse(void);

	void convert(void);
	void fromInt(void);
	void fromFloat(void);
	void fromDouble(void);
	void fromChar(void);

	void setFlag(int status, int flag);

	enum Type {
		TypeChar,
		TypeInt,
		TypeFloat,
		TypeDouble,
		TypeLong,
		TypeInvalid
	};
public:
	Interpreter(std::string const &value);
	Interpreter(Interpreter const &other);
	~Interpreter();

	static const int isImpossible = 0x00000001;
	static const int nonDisplayable = 0x00000010;

	Interpreter &operator=(Interpreter const &other);

	bool floatIsValue(void) const;
	bool doubleIsValue(void) const;
	bool hasFlag(int status, int flag) const;

	int getAsInt(void) const;
	float getAsFloat(void) const;
	double getAsDouble(void) const;
	char getAsChar(void) const;
	std::string const &getRaw(void) const;
};

std::ostream &operator<<(std::ostream &out, Interpreter const &pr);

#endif
