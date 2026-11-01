/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:17:41 by panne-ro          #+#    #+#             */
/*   Updated: 2026/07/11 19:49:32 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::_parseInput(int argc, char **argv)
{
	if (argc == 1)
		std::cerr << "Error: Use ./PmergeMe <suite de nombre>" << std::endl;
	for(int j = 1; argv[j]; j++)
	{
		for(int i = 0; argv[j][i]; i++)
		{
			if (std::isdigit(argv[j][i]) == 0 && argv[j][i] != ' ')
				{
					
				}
		}
	}
}