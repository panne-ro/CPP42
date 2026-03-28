/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:15:28 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/28 18:36:32 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	PhoneBook;
	std::string	Tmp;
	
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, Tmp))
			break ;
		if (Tmp == "ADD")
				PhoneBook.AddContact();
		if (Tmp == "SEARCH")
				PhoneBook.Search();
		if (Tmp == "EXIT")
			break ;
		else
			continue ;
	}
	return (0);
}