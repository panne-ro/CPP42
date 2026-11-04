/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:17:41 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/04 19:28:03 by panne-ro         ###   ########.fr       */
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
	
	for (int i = 0; i < tabSize; i++)
	{
		Element nb;
		nb.value = tabInt[i];
		nb.id = i;
		this->_startVector.push_back(nb);
	}
	
	return 0;
}

std::vector<Element>	PmergeMe::_sortVector(std::vector<Element> &order, int c)
{
	if (order.size() <= 1)
		return order;
	
	bool hasStraggler = false;
	Element straggler;
	if (order.size() % 2 != 0)
	{
		hasStraggler = true;
		straggler = order.back();
		order.pop_back();
	}

	std::vector<Element>	a;
	std::vector<Lower>		b;
	for (long unsigned int i = 0; i < order.size(); i += 2)
	{
		Lower pending;

		if (order[i].value < order[i+1].value)
		{
			a.push_back(order[i+1]);
			pending.lower = order[i];
			pending.biggerId = order[i+1].id;
		}
		else
		{
			a.push_back(order[i]);
			pending.lower = order[i+1];
			pending.biggerId = order[i].id;
		}
		b.push_back(pending);
	}
	
	order = _sortVector(a, c);
	
	std::vector<Lower> orderedB;
	for (int i = 0; i < static_cast<int>(order.size()); i++)
	{
		for (int j = 0; j < static_cast<int>(b.size()); j++)
		{
			if (b[j].biggerId == order[i].id)
			{
				orderedB.push_back(b[j]);
				break ;
			}
		}
	}
	b.swap(orderedB);
	
	order.insert(order.begin(), b[0].lower);
	int previousjac = 1;
	int currentjac = 3;
	while (previousjac < static_cast<int>(b.size()))
	{
		int end = currentjac;
		if (end > static_cast<int>(b.size()))
			end = static_cast<int>(b.size());
		for (int jac = end; jac > previousjac; --jac)
		{
			int idx = jac - 1;
			Element	bi = b[idx].lower;
			std::vector<Element>::iterator partner = order.begin();
			while (partner != order.end() && partner->id != b[idx].biggerId)
				partner++;
			
			std::vector<Element>::iterator first = order.begin();
			std::vector<Element>::iterator last = partner + 1;
			while (first != last)
			{
				std::vector<Element>::iterator middle = first + (last - first) / 2;
				if (middle->value < bi.value)
					first = middle + 1;
				else
					last = middle;
			}
			order.insert(first, bi);
		}
		int nextjac = currentjac + 2 * previousjac;
		previousjac = currentjac;
		currentjac = nextjac;
	}
	
	if (hasStraggler == true)
	{
		std::vector<Element>::iterator	first = order.begin();
		std::vector<Element>::iterator	last = order.end();
		while (first != last)
		{
			std::vector<Element>::iterator middle = first + (last - first) / 2;
			if (middle->value < straggler.value)
					first = middle + 1;
			else
					last = middle;
		}
		order.insert(first, straggler);
	}

	return (order);
}
