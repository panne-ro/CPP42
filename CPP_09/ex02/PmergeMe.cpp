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

//constructeur

PmergeMe::PmergeMe()
{
	HasLonely = false;
}

PmergeMe::PmergeMe(PmergeMe& P)
{
	this->vector = P.vector;
	this->deque = P.deque;
	this->HasLonely = P.HasLonely;
	this->PairVector = P.PairVector;
	this->PairDeque = P.PairDeque;
}

PmergeMe& PmergeMe::operator=(PmergeMe& P)
{
	if (this != &P)
	{
		this->vector = P.vector;
		this->deque = P.deque;
		this->HasLonely = P.HasLonely;
		this->PairVector = P.PairVector;
		this->PairDeque = P.PairDeque;
	}
	return (*this);
}

//methodes

void	PmergeMe::ParseArg(char **args)
{
	size = 0;
	long n = 0;
	for (int i = 1; args[i]; i++)
	{
		for (int j = 0; args[i][j]; j++)
		{
			if (!isdigit(args[i][j]))
			{
				std::cout << args[i][j] << std::endl;
				throw std::runtime_error("Error: args must be positive integers");
				return;
			}
		}
		n = std::atol(args[i]);
		if (n <= 2147483647 && n >= -2147483648)
		{
			deque.push_back(n);
			vector.push_back(n);
		}
		else 
		{
			std::cout << args[i] << std::endl;
			throw std::runtime_error("Error: args must be positive integers");
			return;
		}
		size++;
	}
	if (size % 2 != 0)
		HasLonely = true;
}

void	PmergeMe::PrintContainers()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << vector[i] << "; ";
	}
	std::cout << std::endl;
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << deque[i] << "; ";
	//}
	//std::cout << std::endl;
}

void PmergeMe::PairVectorFill()
{
    PairElements(vector, PairVector);
}

void PmergeMe::PairDequeFill()
{
    PairElements(deque, PairDeque);
}

void	PmergeMe::SortPair()
{
	for (int i = 0; i < size - 1; i++)
	{
		if (PairVector[i].Big > PairVector[i+1].Big)
			std::swap(PairVector[i], PairVector[i+1]);
		SortPair();
	}
}	

//destructeur

PmergeMe::~PmergeMe()
{

}