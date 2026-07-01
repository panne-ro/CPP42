/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:09:38 by panne-ro          #+#    #+#             */
/*   Updated: 2026/07/01 15:14:21 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	RPN	calcul;
	
	if (argc != 2)
	{
		std::cout << "Error: Input must be one calcul in Reverse Polish Notation" << std::endl;
		return 1;
	}
	if (calcul.Resolve(argv[1]) == true)
		std::cout << calcul.GetResult() << std::endl;
	else
		return 1;
	return 0;
}