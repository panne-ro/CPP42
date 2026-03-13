/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:56:07 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/13 13:35:08 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::Search()
{	
	for (int i = 0; i != 4 ; i++)
		std::cout << "______________";
	std::cout << std::endl;
	for (int i = 0; i != 4 ; i++)
		std::cout << "|" << std::setw(13) << "INDEX" << "|";
	std::cout << std::endl;

}

void	PhoneBook::AddContact()
{
	static int i;

	if (i > 7)
		i = 0;
	Contacts[i].Add(i);
	//std::cout << Contacts[i].index << Contacts[i].PhoneNumber << Contacts[i].FirstName << Contacts[i].DarkestSecret << std::endl;
	i++;
}

PhoneBook::PhoneBook()
{
	//std::cout << "is construct" << std::endl;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "is destruct" << std::endl;
}