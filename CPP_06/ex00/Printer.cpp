/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:00:06 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 09:50:55 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void	ScalarConverter::PrintChar(std::string str)
{
	char c;
	int len = str.length();

	if (len == 1)
		c = str[0];
	else
		c = str[1];

	if (isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::PrintInt(std::string str)
{
	long l = atol(str.c_str());

	if (l < 0 || l > 126)
		std::cout << "char: Impossible" << std::endl;
	else if (l >= 32 && l <= 126)
		std::cout << "char: '" << static_cast<char>(l) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	
	if (l > INT_MAX || l < INT_MIN)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << l << std::endl;
	std::cout << "float: " << static_cast<float>(l) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(l) << ".0" << std::endl;
}

void	ScalarConverter::PrintFloat(std::string str)
{
	float f = atof(str.c_str());
	long  l = static_cast<long>(f);

	if (f < 0 || f > 126)
		std::cout << "char: Impossible" << std::endl;
	else if (f >= 32 && f <= 126)
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (l > INT_MAX || l < INT_MIN)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << l << std::endl;
	
	if (f > MAX_FLOAT || f < MIN_FLOAT)
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	ScalarConverter::PrintDouble(std::string str)
{
	float d = atof(str.c_str());
	long  l = static_cast<long>(d);

	if (d < 0 || d > 126)
		std::cout << "char: Impossible" << std::endl;
	else if (d >= 32 && d <= 126)
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;

	if (l > INT_MAX || l < INT_MIN)
		std::cout << "int: Impossible" << std::endl;
	else
		std::cout << "int: " << l << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	if (d > MAX_DOUBLE || d < MIN_DOUBLE)
		std::cout << "double: Impossible" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::PrintSpecial(std::string str)
{
	if (str == "nan" || str == "nanf")
	{
		std::cout << "char: impossible" << std::endl; 
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (str == "+inf" || str == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (str == "-inf" || str == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
}