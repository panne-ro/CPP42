/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:56:07 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 17:16:32 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::AddContact()
{
	static int i;

	if (i > 7)
		i = 0;
	Contacts[i].Add(i);
	std::cout << Contacts[i].index << Contacts[i].PhoneNumber << Contacts[i].FirstName << Contacts[i].DarkestSecret << std::endl;
}

PhoneBook::PhoneBook()
{
	std::cout << "is construct" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "is destruct" << std::endl;
}