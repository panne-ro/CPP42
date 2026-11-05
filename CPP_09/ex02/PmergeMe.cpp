/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:17:41 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/05 15:08:15 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <cctype>
#include <ctime>

PmergeMe::PmergeMe()
	: tabInt(NULL), tabSize(0)
{
}

PmergeMe::PmergeMe(const PmergeMe &other)
	: tabInt(NULL), tabSize(other.tabSize),
	  _startVector(other._startVector), _startDeque(other._startDeque)
{
	if (tabSize > 0)
	{
		tabInt = new int[tabSize];
		std::copy(other.tabInt, other.tabInt + tabSize, tabInt);
	}
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	if (this != &other)
	{
		PmergeMe copy(other);
		std::swap(tabInt, copy.tabInt);
		std::swap(tabSize, copy.tabSize);
		_startVector.swap(copy._startVector);
		_startDeque.swap(copy._startDeque);
	}
	return *this;
}

PmergeMe::~PmergeMe()
{
	delete [] tabInt;
}

int						PmergeMe::sort(int argc, char **argv)
{	
	if (_parseInput(argc, argv) == 0)
	{
		std::vector<Element>	vecRes;
		std::deque<Element>		deqRes;
	
		std::cout << "Before:	";
		for (int i = 0; i < 50 && i < tabSize; i++)
			std::cout << tabInt[i] << " ";
		if (tabSize > 50)
			std::cout << "[...]" << std::endl;
		else
			std::cout << std::endl;
		
		std::clock_t vecstart = std::clock();
		vecRes = _sortVector(_startVector);
		std::clock_t vecend = std::clock();
		
		std::clock_t deqstart = std::clock();
		deqRes = _sortDeque(_startDeque);
		std::clock_t deqend = std::clock();
		
		std::cout << "After:	";
		for (int i = 0; i < 50 && i < static_cast<int>(vecRes.size()); i++)
		std::cout << vecRes[i].value << " ";
		if (tabSize > 50)
		std::cout << "[...]" << std::endl;
		else
		std::cout << std::endl;
		
		double vecTime = static_cast<double>(vecend - vecstart) * 1000000.0 / CLOCKS_PER_SEC;
		double deqTime = static_cast<double>(deqend - deqstart) * 1000000.0 / CLOCKS_PER_SEC;
		std::cout << "Time to process a range of " << tabSize << " elements with std::vector:	" << vecTime << " us" << std::endl;
		std::cout << "Time to process a range of " << tabSize << " elements with std::deque:	" << deqTime << " us" << std::endl;
		//_isOrdoned(vecRes, deqRes);
		return 0;
	}
	return 1;
}

int						PmergeMe::_parseInput(int argc, char **argv)
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

int						PmergeMe::_convertToInt(int argc, char **argv)
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
		this->_startDeque.push_back(nb);
	}
	
	return 0;
}

std::vector<Element>	PmergeMe::_sortVector(std::vector<Element> &order)
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
	
	order = _sortVector(a);
	
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

std::deque<Element>		PmergeMe::_sortDeque(std::deque<Element> &order)
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
	
	std::deque<Element>	a;
	std::deque<Lower>	b;
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
	
	order = _sortDeque(a);
	std::deque<Lower> orderedB;
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
	
	order.push_front(b[0].lower);
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
			std::deque<Element>::iterator partner = order.begin();
			while (partner != order.end() && partner->id != b[idx].biggerId)
				partner++;
			
			std::deque<Element>::iterator first = order.begin();
			std::deque<Element>::iterator last = partner + 1;
			while (first != last)
			{
				std::deque<Element>::iterator middle = first + (last - first) / 2;
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
		std::deque<Element>::iterator	first = order.begin();
		std::deque<Element>::iterator	last = order.end();
		while (first != last)
		{
			std::deque<Element>::iterator middle = first + (last - first) / 2;
			if (middle->value < straggler.value)
					first = middle + 1;
			else
					last = middle;
		}
		order.insert(first, straggler);
	}

	return (order);
}

int						PmergeMe::_isOrdoned(std::vector<Element> vecRes, std::deque<Element> deqRes)
{
	for (long unsigned int i = 0; i < vecRes.size() - 1; i++)
	{
		if (vecRes[i].value > vecRes[i+1].value || deqRes[i].value > deqRes[i+1].value)
		{
			std::cout << "Error: Element is not sort at: " << i << std::endl;
			std::cout << vecRes[i].value << " et " << vecRes[i].value << std::endl;
			std::cout << deqRes[i].value << " et " << deqRes[i].value << std::endl;
			return (1);
		}
	}
	std::cout << "Element is sort" << std::endl;
	return (0);
}