/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:38:25 by panne-ro          #+#    #+#             */
/*   Updated: 2026/07/09 17:20:15 by panne-ro         ###   ########.fr       */
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
	int Big;
	int Small;
};

class PmergeMe
{
	public:
	PmergeMe();
	PmergeMe(PmergeMe& P);
	PmergeMe& operator=(PmergeMe& P);
	
	void ParseArg(char **args);
	void PrintContainers();
	void PairElements();
	
	~PmergeMe();
	private:
	
	std::vector<int>	vector;
	std::vector<Pair>	PairVector;
	std::deque<int>		deque;
	std::deque<Pair>	PairDeque;
	int					size;
	int					Lonely;
	bool				HasLonely;

};

#endif