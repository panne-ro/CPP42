/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:17:41 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/02 15:45:35 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <cctype>

PmergeMe::PmergeMe()
	: tabInt(NULL), tabSize(0)
{
}

PmergeMe::~PmergeMe()
{
	delete [] tabInt;
}

int		PmergeMe::parseInput(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cerr << "Error: Use ./PmergeMe <suite de nombre>" << std::endl;
		return 1;
	}
	for (int j = 1; argv[j]; j++)
	{
		int i = 0;
		bool hasNumber = false;
		while (argv[j][i])
		{
			while (argv[j][i] && std::isspace(static_cast<unsigned char>(argv[j][i])))
				i++;
			if (!argv[j][i])
				break;
			hasNumber = true;
			bool hasNonZeroDigit = false;
			while (argv[j][i] && !std::isspace(static_cast<unsigned char>(argv[j][i])))
			{
				if (!std::isdigit(static_cast<unsigned char>(argv[j][i])))
				{
					std::cerr << "Error: Use only positive integers not signed" << std::endl;
					return 1;
				}
				if (argv[j][i] != '0')
					hasNonZeroDigit = true;
				i++;
			}
			if (!hasNonZeroDigit)
			{
				std::cerr << "Error: Numbers must be positive" << std::endl;
				return 1;
			}
		}
		if (!hasNumber)
		{
			std::cerr << "Error: Empty argument" << std::endl;
			return 1;
		}
	}
	if (_convertToInt(argc, argv) == 1)
		return 1;
	return 0;
}

int		PmergeMe::_convertToInt(int argc, char **argv)
{
	int count = 0;
	for (int j = 1; j < argc; j++)
	{
		int i = 0;
		while (argv[j][i])
		{
			while (argv[j][i] && std::isspace(static_cast<unsigned char>(argv[j][i])))
				i++;
			if (argv[j][i])
			{
				count++;
				while (argv[j][i] && !std::isspace(static_cast<unsigned char>(argv[j][i])))
					i++;
			}
		}
	}
	tabInt = new int[count];
	tabSize = count;
	int index = 0;
	for (int j = 1; j < argc; j++)
	{
		int i = 0;
		while (argv[j][i])
		{
			while (argv[j][i] && std::isspace(static_cast<unsigned char>(argv[j][i])))
				i++;
			if (argv[j][i])
			{
				long int value = 0;
				while (argv[j][i] && !std::isspace(static_cast<unsigned char>(argv[j][i])))
				{
					value = value * 10 + (argv[j][i] - '0');
					i++;
				}
				if (value > 2147483647)
				{
					std::cerr << "Error: Not use an numbers bigger than 2147483647" << std::endl;
					return 1;
				}
				tabInt[index++] = value;
			}
		}
	}
	if (tabSize == 1)
	{
		std::cerr << "Error: Test with more numbers" << std::endl;
		return 1;
	}
	return 0;
}

void	PmergeMe::_sortVector()
{
	for int 
	
}

