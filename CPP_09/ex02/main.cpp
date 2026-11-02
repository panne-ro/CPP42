/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:38:47 by panne-ro          #+#    #+#             */
/*   Updated: 2026/11/02 14:10:10 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe Tri;
	
	if (Tri.parseInput(argc, argv) == 0)
	{
		Tri._addToVector();
		Tri._sortVector();
		return 0;
	}
	return 1;
		
}