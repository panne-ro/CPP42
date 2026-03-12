/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:15:28 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 17:14:02 by bliblo           ###   ########.fr       */
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
		if (Tmp == "EXIT" || Tmp == "exit" || Tmp == "Exit")
			break ;
		else
			continue ;
	}
	return (0);
}