/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 11:06:01 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 10:04:17 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

//constructeur
ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter& b)
{
	if (this == &b)
		return;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& b)
{
	if (this == &b)
		return (*this);
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
}

//method

void	ScalarConverter::convert(std::string str)
{
	e_type	Type = isValid(str);

	switch(Type)
	{
		case INVALID:
			std::cout << "Invalide Input" << std::endl;
			break;
		case CHAR:
			PrintChar(str);
			break;
		case INT:
			PrintInt(str);
			break;
		case FLOAT:
			PrintFloat(str);
			break;
		case DOUBLE:
			PrintDouble(str);
			break;
		case SPECIAL:
			PrintSpecial(str);
			break;
	}
}

e_type ScalarConverter::isValid(std::string str)
{
	size_t  dot = str.find('.');
    size_t  f = str.find('f');
	if (dot == std::string::npos)
	{
		if (isSpecial(str) == 1)
			return SPECIAL;
		if (isChar(str) == 1)
			return CHAR;
		if (isInt(str) == 1)
			return INT;
	}
	if (f != std::string::npos && dot != std::string::npos)
	{
		if (isFloat(str, dot) == 1)
			return FLOAT;
	}
	if (f == std::string::npos && dot != std::string::npos)
	{
		if (isDouble(str, dot) == 1)
			return DOUBLE;
	}
	return (INVALID);
}
