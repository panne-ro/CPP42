/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:15:28 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/13 13:19:37 by panne-ro         ###   ########.fr       */
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
		std::getline(std::cin, Tmp);
		if (Tmp == "ADD" || Tmp == "add" || Tmp == "Add")
				PhoneBook.AddContact();
		if (Tmp == "SEARCH" || Tmp == "search" || Tmp == "Search")
				PhoneBook.Search();
		if (Tmp == "EXIT" || Tmp == "exit" || Tmp == "Exit")
			break ;
		else
			continue ;
	}
	return (0);
}