/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/17 15:48:15 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/17 16:42:37 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int& i)
{
	i = i + 1;
}

int main()
{
	{
		char		array[10];
		char		c = 'a';
		for (int i = 0; i < 10; i++)
			array[i] = c++;

		iter(array, 10, Print<char>);
		std::cout << std::endl;
	}
	{
		int n[12];
		
		for (int i = 0; i < 12; i++)
		{
			n[i] = i;
			std::cout << n[i] << std::endl;
		}
		std::cout << std::endl;
		iter(n, 12, increment);
		for (int i = 0; i < 12; i++)
			std::cout << n[i] << std::endl;
	}
}