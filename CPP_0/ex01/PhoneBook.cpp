/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:56:07 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/30 15:28:12 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	CutToTen(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void		PhoneBook::PrintIndex(int x)
{
	int idx = x - 1;
	Contacts[idx].displayDetails();
}

int			PhoneBook::ConvertInInt(std::string str)
{
	Contact contact;
	if (contact.IsAllDigit(str) == 0)
	{
		int x = 0;
		for (size_t i = 0; i < str.length(); ++i)
		{
			x = x * 10 + (str[i] - '0');
		}
		if (x < 1 || x > NumberOfContacts)
		{
			std::cout << "Must be a use index" << std::endl;
			return (-1);
		}
		return (x);
	}
	std::cout << "Must be a number between 1 and 8" << std::endl;
	return (-1);
}

void		PhoneBook::Search()
{
	std::cout << "________________________________________________" << std::endl;
	std::cout << "|     INDEX||FIRST NAME|| LAST NAME||  NICKNAME|" << std::endl;
	std::cout << "‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	for (int x = 0; x < NumberOfContacts; x++)
	{
		std::cout << "|" << std::setw(10) << Contacts[x].getIndex() << "|";
		std::cout << "|" << std::setw(10) << CutToTen(Contacts[x].getFirstName()) << "|";
		std::cout << "|" << std::setw(10) << CutToTen(Contacts[x].getLastName()) << "|";
		std::cout << "|" << std::setw(10) << CutToTen(Contacts[x].getNickName()) << "|" << std::endl;
	}
	
	int 		x;
	std::string	field;
	
	x = -1;
	while (x == -1)
	{
		std::cout << "Enter Index: ";
		if (!std::getline(std::cin, field))
			return ;
		x = ConvertInInt(field);
	}
	PhoneBook::PrintIndex(x);
}

void		PhoneBook::AddContact()
{
	Contacts[NextIndex].Add(NextIndex);
	NextIndex = (NextIndex + 1) % 8;
	if (NumberOfContacts < 8)
		NumberOfContacts++;
}

PhoneBook::PhoneBook()
{
	NumberOfContacts = 0;
	NextIndex = 0;
}

PhoneBook::~PhoneBook()
{
	//std::cout << "is destruct" << std::endl;
}