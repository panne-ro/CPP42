/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Types.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 15:58:30 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/15 16:54:33 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::isSpecial(std::string str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		return 1;
	return 0;
}

int	ScalarConverter::isChar(std::string str)
{
	if (str.length() == 1 && !isdigit(str[0]))
		return (1);
	else if (str.length() == 3 && str[0] == '\'' && str[2] == '\'')
		return (1);
	return (0);
}

int	ScalarConverter::isInt(std::string str)
{
	if (str[0] != '-' && !isdigit(str[0]))
		return (0);
	if (str[0] == '-' && !str[1])
		return (0);
	for (int i = 1; str[i]; i++)
	{
		if (std::isdigit(str[i]) == 0)
			return (0);
	} 
	return (1);
}

int ScalarConverter::isFloat(std::string str, size_t& dot)
{
	int len = str.length();

	for (int i = dot - 1; i >= 0; i--)
	{
		if (i == 0 && !isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (0);
		if (i != 0 && !isdigit(str[i]))
			return (0);
	}
	for (int i = dot + 1; i < len; i++)
	{
		if (!isdigit(str[i]) && str[i] != 'f')
			return (0);
		if (str[i] == 'f' && i != len - 1)
			return (0);
	}
	return (1);
}

int ScalarConverter::isDouble(std::string str, size_t& dot)
{
	int len = str.length();

	for (int i = dot - 1; i >= 0; i--)
	{
		if (i == 0 && !isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (0);
		if (i != 0 && !isdigit(str[i]))
			return (0);
	}
	if (!str[dot + 1])
		return (0);
	for (int i = dot + 1; i < len; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}