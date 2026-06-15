/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 11:05:59 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/15 16:57:28 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <cstdlib>
#include <climits>

enum	e_type
{
	CHAR = 0,
	INT = 1,
	FLOAT = 2,
	DOUBLE = 3,
	SPECIAL = 4,
	INVALID = -1,
};

class ScalarConverter
{
	public:
	static void convert(std::string str);

	private:
	ScalarConverter();
	/*
	ScalarConverter(std::string str);
	ScalarConverter(ScalarConverter& b);
	ScalarConverter& operator=(const ScalarConverter& b);
	*/
	
	static e_type	isValid(std::string str);
	
	static int 		isSpecial(std::string str);
	static int		isChar(std::string str);
	static int 		isInt(std::string str);
	static int 		isFloat(std::string str, size_t& dot);
	static int 		isDouble(std::string str, size_t& dot);
	
	static void		PrintChar(std::string str);
	static void		PrintInt(std::string str);
	static void		PrintFloat(std::string str);
};

#endif