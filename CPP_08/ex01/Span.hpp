/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 11:45:01 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 13:27:53 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

class Span
{
	public:
	Span();
	Span(unsigned int N);
	Span(Span& S);

	Span& operator=(Span& S);
	
	void 	addNumber();
	void 	addNumber(int n);
	int		shortestSpan() const;
	int		longestSpan() const;
	void	addManyNombers(int n);
	void	addManyNombers(std::vector<int> tmp);
	void	printArray() const;

	~Span();

	class NoPlace : public std::exception
	{
		public:
			const char* what() const throw();
	};

	class NotEnough : public std::exception
	{
		public:
			const char* what() const throw();
	};

	private:
	unsigned int		_Size;
	std::vector<int> 	_Array;
};

#endif