/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:38:25 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/04 18:41:06 by panne-ro         ###   ########.fr       */
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

		void	sort(int argc, char **argv);
		int		parseInput(int argc, char **argv);
		
		std::vector<Element>	_sortVector(std::vector<Element> &order, int c);
		std::vector<Element>	_startVector;
		
	private:
		
		int				*tabInt;
		int				tabSize;
		
		int					_convertToInt(int argc, char **argv);
		std::vector<int>	_fordJohnsonOrder(const std::vector<int> &order) const;
		void 				_sortDeque();
};

#endif