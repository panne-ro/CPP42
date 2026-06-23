/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:24:03 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 14:54:27 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	{
		std::cout << "=== Test basique push/pop/top ===" << std::endl;
		MutantStack<int> ms;
		ms.push(1);
		ms.push(2);
		ms.push(3);
		ms.push(4);
		ms.push(5);
		std::cout << "Top: " << ms.top() << std::endl;
		std::cout << "Size: " << ms.size() << std::endl;
		ms.pop();
		std::cout << "Apres pop, top: " << ms.top() << std::endl;

		std::cout << "\n=== Test iterateurs ===" << std::endl;
		MutantStack<int>::iterator it = ms.begin();
		while (it != ms.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test const_iterator ===" << std::endl;
		MutantStack<int>::const_iterator cit = ms.cbegin();
		while (cit != ms.cend())
		{
			std::cout << *cit << " ";
			cit++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test reverse_iterator ===" << std::endl;
		MutantStack<int>::reverse_iterator rit = ms.rbegin();
		while (rit != ms.rend())
		{
			std::cout << *rit << " ";
			rit++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test const_reverse_iterator ===" << std::endl;
		MutantStack<int>::const_reverse_iterator crit = ms.crbegin();
		while (crit != ms.crend())
		{
			std::cout << *crit << " ";
			crit++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test copie ===" << std::endl;
		MutantStack<int> ms2(ms);
		ms2.push(99);
		std::cout << "ms2 top: " << ms2.top() << std::endl;
		std::cout << "ms top (inchange): " << ms.top() << std::endl;

		std::cout << "\n=== Test operator= ===" << std::endl;
		MutantStack<int> ms3;
		ms3 = ms;
		MutantStack<int>::iterator it3 = ms3.begin();
		while (it3 != ms3.end())
		{
			std::cout << *it3 << " ";
			it3++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test avec string ===" << std::endl;
		MutantStack<std::string> ms4;
		ms4.push("hello");
		ms4.push("world");
		ms4.push("42");
		MutantStack<std::string>::iterator its = ms4.begin();
		while (its != ms4.end())
		{
			std::cout << *its << " ";
			its++;
		}
		std::cout << std::endl << "________________________" << std::endl;
	}
	{
		std::cout << "=== Test basique push/pop/top ===" << std::endl;
		std::vector<int> ms;
		ms.push_back(1);
		ms.push_back(2);
		ms.push_back(3);
		ms.push_back(4);
		ms.push_back(5);
		std::cout << "Top: " << ms.back() << std::endl;
		std::cout << "Size: " << ms.size() << std::endl;
		ms.pop_back();
		std::cout << "Apres pop, top: " << ms.back() << std::endl;

		std::cout << "\n=== Test iterateurs ===" << std::endl;
		std::vector<int>::iterator it = ms.begin();
		while (it != ms.end())
		{
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test const_iterator ===" << std::endl;
		std::vector<int>::const_iterator cit = ms.begin();
		while (cit != ms.end())
		{
			std::cout << *cit << " ";
			cit++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test reverse_iterator ===" << std::endl;
		std::vector<int>::reverse_iterator rit = ms.rbegin();
		while (rit != ms.rend())
		{
			std::cout << *rit << " ";
			rit++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test const_reverse_iterator ===" << std::endl;
		std::vector<int>::const_reverse_iterator crit = ms.rbegin();
		while (crit != ms.rend())
		{
			std::cout << *crit << " ";
			crit++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test copie ===" << std::endl;
		std::vector<int> ms2(ms);
		ms2.push_back(99);
		std::cout << "ms2 top: " << ms2.back() << std::endl;
		std::cout << "ms top (inchange): " << ms.back() << std::endl;

		std::cout << "\n=== Test operator= ===" << std::endl;
		std::vector<int> ms3;
		ms3 = ms;
		std::vector<int>::iterator it3 = ms3.begin();
		while (it3 != ms3.end())
		{
			std::cout << *it3 << " ";
			it3++;
		}
		std::cout << std::endl;

		std::cout << "\n=== Test avec string ===" << std::endl;
		std::vector<std::string> ms4;
		ms4.push_back("hello");
		ms4.push_back("world");
		ms4.push_back("42");
		std::vector<std::string>::iterator its = ms4.begin();
		while (its != ms4.end())
		{
			std::cout << *its << " ";
			its++;
		}
		std::cout << std::endl;

		return 0;
	}
}