/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 11:52:45 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 13:39:49 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

//constucteur

Span::Span()
{
	_Size = 0;
	srand(time(NULL));
}

Span::Span(unsigned int N)
{
	_Size = N;
	srand(100000);
}

Span::Span(Span& S)
{
	_Size = S._Size;
	_Array = S._Array;
	srand(100000);
}

//operator

Span&	Span::operator=(Span& S)
{
	if (this != &S)
	{
		_Size = S._Size;
		_Array = S._Array;
	}
	return (*this);
}

//Methodes

void	Span::addNumber()
{
	if (_Array.size() >= _Size)
		throw NoPlace();	
	_Array.push_back(rand());
}

void	Span::addNumber(int n)
{
	if (_Array.size() >= _Size)
		throw NoPlace();
	_Array.push_back(n);
}

int		Span::shortestSpan() const
{
	if (_Array.size() <= 1)
		throw NotEnough();
		
	std::vector<int>	copy = _Array;
	std::sort(copy.begin(), copy.end());

	int shortest = copy[1] - copy[0];
	int	gap = 0;
	for (unsigned long i = 0; i < copy.size() - 1; i++)
	{
		gap = copy[i+1] - copy[i];
		if (gap < shortest)
			shortest = gap;
	}
	return (shortest);
}

int		Span::longestSpan() const
{
	if (_Array.size() <= 1)
		throw NotEnough();
		
	int min = *std::min_element(_Array.begin(), _Array.end());
	int max = *std::max_element(_Array.begin(), _Array.end());
	
	return (max - min);
}

void	Span::addManyNombers(int n)
{
	std::vector<int> tmp;

	if (_Array.size() + n > _Size)
		throw NoPlace();
	for (int i = 0; i < n; i++)
		tmp.push_back(rand());
	for (unsigned long i = 0; i < tmp.size(); i++)
		_Array.push_back(tmp.at(i));
}

void	Span::addManyNombers(std::vector<int> tmp)
{
	if (_Array.size() + tmp.size() > _Size)
		throw NoPlace();
	for (unsigned long i = 0; i < tmp.size(); i++)
		_Array.push_back(tmp.at(i));
}

void	Span::printArray() const
{
	for (unsigned int i = 0; i < _Array.size() - 1; i++)
		std::cout << _Array.at(i) << "; ";
	std::cout << _Array.at(_Array.size() - 1) << std::endl;
}


//Destructeur

Span::~Span()
{	
}

//execption

const char*	Span::NoPlace::what() const throw()
{
	return ("No place for add number");
}

const char*	Span::NotEnough::what() const throw()
{
	return ("Not enough element");
}