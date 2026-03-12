/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:15:28 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 14:12:14 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	int i = 0;
	PhoneBook	PhoneBook;
	std::string	Tmp;
	
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> Tmp;
		if (Tmp == "ADD")
			PhoneBook.Add(i);
		else
			return (0);
	}
	return (0);
}