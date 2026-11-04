/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:38:47 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/04 19:27:02 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe Tri;
	std::vector<Element> res;
	
	if (Tri.parseInput(argc, argv) == 0)
	{
		res = Tri._sortVector(Tri._startVector, 0);
		for (long unsigned int i = 0; i < res.size(); i++)
		{
			std::cout << res[i].value << "; ";
		}
		std::cout << std::endl;
		return 0;
	}
	return 1;
		
}