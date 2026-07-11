/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 13:38:25 by panne-ro          #+#    #+#             */
/*   Updated: 2026/07/11 19:51:17 by bliblo           ###   ########.fr       */
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

template <typename Container, typename PairContainer>
void PairElements(const Container& input, PairContainer& pair)
{
	int count = input.size() / 2;
	for (int i = 0; i < count; i++)
	{
		Pair P ;
		P.Small = std::min(input[2*i], input[2*i + 1]);
		P.Big = std::max(input[2*i], input[2*i + 1]);
		pair.push_back(P);
		std::cout << "Pair formed: " << P.Small << " " << P.Big << std::endl;
	}
}

class PmergeMe
{
	public:
	PmergeMe();
	PmergeMe(PmergeMe& P);
	PmergeMe& operator=(PmergeMe& P);
	
	void ParseArg(char **args);
	void PrintContainers();
	void SortPair();
	void PairVectorFill();
	void PairDequeFill();

	~PmergeMe();
	private:
	
	std::vector<int>	vector;
	std::vector<Pair>	PairVector;
	std::deque<int>		deque;
	std::deque<Pair>	PairDeque;
	int					size;
	bool				HasLonely;

};

#endif