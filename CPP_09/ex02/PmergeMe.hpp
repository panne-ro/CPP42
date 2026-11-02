/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:38:25 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/02 15:45:23 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <algorithm>

struct Pair
{
	int a;
	int b;
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
		
		void 				_sortVector();
		
	private:
		std::vector<Pair>	_vectorPairs;
		std::vector<int>	_mainVector;
		std::vector<int>	_pendVector;
		
		std::deque<Pair> _dequePairs;
		
		int				*tabInt;
		int				tabSize;
		
		int					_convertToInt(int argc, char **argv);
		std::vector<int>	_fordJohnsonOrder(const std::vector<int> &order) const;
		void 				_sortDeque();
};

#endif