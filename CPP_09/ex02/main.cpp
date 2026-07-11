/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:38:47 by panne-ro          #+#    #+#             */
/*   Updated: 2026/07/11 19:45:44 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	if (argc < 3)
		return (1);
	PmergeMe Merge;
	try
	{
		Merge.ParseArg(argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Before: ";
	Merge.PrintContainers();
	Merge.PairVectorFill();
	Merge.PrintContainers();
}