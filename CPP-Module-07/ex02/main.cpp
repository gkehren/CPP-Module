/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 20:28:12 by gkehren           #+#    #+#             */
/*   Updated: 2022/11/21 21:45:42 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	Array<int>			intArray;
	Array<float>		floatArray(20);
	Array<std::string>	stringArray(10);
	Array<std::string>	otherStringArray;

	floatArray[0] = 1; floatArray[1] = 2; floatArray[2] = 3; floatArray[3] = 4; floatArray[4] = 5; floatArray[5] = 6;
	floatArray[6] = 7; floatArray[7] = 8; floatArray[8] = 9; floatArray[9] = 10; floatArray[10] = 11; floatArray[12] = 11;
	stringArray[0] = "string0";
	stringArray[1] = "string1";
	stringArray[2] = "string2";
	stringArray[3] = "string3";
	stringArray[4] = "string4";
	stringArray[5] = "string5";
	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "floatArray.size() = " << floatArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
	otherStringArray = stringArray;
	otherStringArray[3] = "otherstring3";
	std::cout << std::endl << "floatArray: " << std::endl;
	for (int i = 0; i < 11; i++)
		std::cout << floatArray[i] << std::endl;
	std::cout << std::endl << "stringArray: " << std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << stringArray[i] << std::endl;
	std::cout << std::endl << "OtherStringArray: " << std::endl;
	for (int i = 0; i < 6; i++)
		std::cout << otherStringArray[i] << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
