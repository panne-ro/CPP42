/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:23:26 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 17:22:44 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int		Contact::IsAllDigit(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (!std::isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int		Contact::IsEmpty(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

void Contact::AskField(const std::string label, std::string& field)
{
	std::cout << label;
	std::getline(std::cin, field);
	while (IsEmpty(field))
	{
		std::cout << "Field can't be empty\n" << label;
		std::getline(std::cin, field);
	}
}

void	Contact::AskPhoneNumber()
{
	int GoodNumber = 0;
	std::cout << "Phone number : ";
	while (GoodNumber != 1)
	{
		std::getline(std::cin, PhoneNumber);
		if (Contact::IsEmpty(PhoneNumber) == 1)
		{
			std::cout << "Field can't be empty" << std::endl << "Phone number : ";
			continue ;
		}
		else if (Contact::IsAllDigit(PhoneNumber) == 1)
		{
			std::cout << "A phone number contain only digit" << std::endl << "Phone number : ";
			continue ;
		}
		else if (PhoneNumber.length() != 10)
		{
			std::cout << "A phone number contain 10 digit" << std::endl << "Phone number : ";
			continue ;
		}
		else
			GoodNumber = 1;
	}
}

void Contact::Add(int i)
{
	index = i + 1;
	AskField("First name : ", FirstName);
	AskField("Last name : ", LastName);
	AskField("Nickname : ", NickName);
	AskPhoneNumber();
	AskField("Darkest secret : ", DarkestSecret);
}

Contact::Contact()
{
}

Contact::~Contact()
{
}
