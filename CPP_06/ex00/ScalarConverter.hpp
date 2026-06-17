/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 11:05:59 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 10:03:16 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>
#include <cmath>

#define INT_MIN std::numeric_limits<int>::min()
#define INT_MAX std::numeric_limits<int>::max()
#define MIN_FLOAT std::numeric_limits<float>::min()
#define MAX_FLOAT std::numeric_limits<float>::max()
#define MIN_DOUBLE std::numeric_limits<double>::min()
#define MAX_DOUBLE std::numeric_limits<double>::max()

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
	ScalarConverter(ScalarConverter& b);
	ScalarConverter& operator=(const ScalarConverter& b);
	~ScalarConverter();
	
	static e_type	isValid(std::string str);
	
	static int 		isSpecial(std::string str);
	static int		isChar(std::string str);
	static int 		isInt(std::string str);
	static int 		isFloat(std::string str, size_t& dot);
	static int 		isDouble(std::string str, size_t& dot);
	
	static void		PrintChar(std::string str);
	static void		PrintInt(std::string str);
	static void		PrintFloat(std::string str);
	static void		PrintDouble(std::string str);
	static void		PrintSpecial(std::string str);
};

#endif