/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:38:25 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/05 14:30:52 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <algorithm>

struct Element
{
	int value;
	int id;
};

struct Lower
{
	Element lower;
	int		biggerId;
};


class PmergeMe
{
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();

		int		sort(int argc, char **argv);

		private:
		
		int				*tabInt;
		int				tabSize;
		
		std::vector<Element>	_startVector;
		std::deque<Element>		_startDeque;
		
		int						_parseInput(int argc, char **argv);
		int						_convertToInt(int argc, char **argv);
		
		std::vector<Element>	_sortVector(std::vector<Element> &order);
		std::deque<Element> 	_sortDeque(std::deque<Element> &order);
		
		int						_isOrdoned(std::vector<Element> vecRes, std::deque<Element> deqRes);
};

#endif