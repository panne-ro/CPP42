/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 13:58:33 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/13 18:38:42 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error need 3 args" << std::endl;
		return (1);
	}
	Replace	replace(argv[1]);
	if (replace.fileCanOpen() == 0)
		return (1);
	replace.replaceByS2(argv[2], argv[3]);
	return (0);
}