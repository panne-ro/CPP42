/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 10:16:28 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 11:14:58 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	{
		std::vector<int> list;
		
		for (int i = 0 ; i < 10; i++)
		list.push_back(i);
		
		try
		{
			easyfind(list, 6);
		}
		catch (...)
		{
			std::cout << "n not found" << std::endl;
		}
		try
		{
			easyfind(list, 152);
		}
		catch (...)
		{
			std::cout << "n not found" << std::endl;
		}
		std::cout << "\n";
	}
		{
		std::deque<int> list;
		
		for (int i = 20 ; i < 42; i++)
		list.push_back(i);
		try
		{
			easyfind(list, 152);
		}
		catch (...)
		{
			std::cout << "n not found" << std::endl;
		}
		try
		{
			easyfind(list, 21);
		}
		catch (...)
		{
			std::cout << "n not found" << std::endl;
		}
		std::cout << "\n";
	}
		{
		std::list<int> list;
		for (int i = 43 ; i < 45; i++)
			list.push_back(i);
		try
		{
			easyfind(list, 44);
		}
		catch (...)
		{
			std::cout << "n not found" << std::endl;
		}try
		{
			easyfind(list, 152);
		}
		catch (...)
		{
			std::cout << "n not found" << std::endl;
		}
	}
}