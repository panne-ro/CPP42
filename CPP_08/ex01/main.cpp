/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 12:11:17 by panne-ro          #+#    #+#             */
/*   Updated: 2026/06/23 13:43:22 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#include "Span.hpp"

int main()
{
	std::cout << "\n=== Test addManyNumbers (vector) ===" << std::endl;
    Span sp4(100000);
    std::vector<int> v;
    for (int i = 0; i < 100000; i++)
		v.push_back(i);
    sp4.addManyNombers(v);
    sp4.printArray();
	std::cout << "Shortest: " << sp4.shortestSpan() << std::endl; // 1
    std::cout << "Longest:  " << sp4.longestSpan() << std::endl;  // 16

    std::cout << "=== Test basique ===" << std::endl;
    Span sp(5);
    sp.addNumber(1);
    sp.addNumber(26);
    sp.addNumber(17);
    sp.addNumber(35);
    sp.addNumber(9);
    sp.printArray();
    std::cout << "Shortest: " << sp.shortestSpan() << std::endl; // 1
    std::cout << "Longest:  " << sp.longestSpan() << std::endl;  // 16

    std::cout << "\n=== Test addNumber() aleatoire ===" << std::endl;
    Span sp2(5);
    sp2.addNumber();
    sp2.addNumber();
    sp2.addNumber();
    sp2.printArray();

    std::cout << "\n=== Test addManyNumbers (n aleatoires) ===" << std::endl;
    Span sp3(10);
    sp3.addManyNombers(10);
    sp3.printArray();
    std::cout << "Shortest: " << sp3.shortestSpan() << std::endl;
    std::cout << "Longest:  " << sp3.longestSpan() << std::endl;

    std::cout << "\n=== Test exception NoPlace ===" << std::endl;
    try
    {
        Span sp5(2);
        sp5.addNumber(1);
        sp5.addNumber(2);
        sp5.addNumber(3); // trop plein
    }
    catch (Span::NoPlace& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test exception NotEnough ===" << std::endl;
    try
    {
        Span sp6(5);
        sp6.addNumber(1);
        sp6.shortestSpan(); // pas assez d'elements
    }
    catch (Span::NotEnough& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== Test copie ===" << std::endl;
    Span sp7(sp);
    sp7.printArray();

    return 0;
}