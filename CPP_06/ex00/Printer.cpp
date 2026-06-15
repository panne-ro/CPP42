/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printer.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:00:06 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/15 17:07:14 by panne-ro         ###   ########.fr       */
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
}