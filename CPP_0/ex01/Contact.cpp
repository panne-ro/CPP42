/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:23:26 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/28 18:41:31 by panne-ro         ###   ########.fr       */
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

int Contact::AskField(const std::string label, std::string& field)
{
	std::cout << label;
	std::getline(std::cin, field);
	while (IsEmpty(field))
	{
		std::cout << "Field can't be empty\n" << label;
		if (!std::getline(std::cin, field))
			return (1) ;
	}
	return (0);
}

int	Contact::AskPhoneNumber()
{
	int GoodNumber = 0;
	std::cout << "Phone number : ";
	while (GoodNumber != 1)
	{
		if (!std::getline(std::cin, PhoneNumber))
			return (1);
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
	return (0);
}

void Contact::Add(int i)
{
	index = i + 1;
	
	if (AskField("First name : ", FirstName) == 0)
		return ;
	if (AskField("Last name : ", LastName) == 0)
		return ;
	if (AskField("Nickname : ", NickName) == 0)
		return ;
	if (AskPhoneNumber() == 0)
		return ;
	if (AskField("Darkest secret : ", DarkestSecret) == 0)
		return ;
}

Contact::Contact()
{
}

Contact::~Contact()
{
}
