/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:30:03 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/20 14:05:29 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl Harl;
	if (argc != 2)
	{
		std::cout << "Need 1 Argument" << std::endl;
		return (1);
	}
	Harl.complain(argv[1]);
	return (0);
}