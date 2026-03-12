/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bliblo <bliblo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 11:56:07 by bliblo            #+#    #+#             */
/*   Updated: 2026/03/12 14:09:31 by bliblo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::Add(int i)
{
	Contacts[i].index = i + 1;
	std::cout << "First Name : ";
	std::cin >> Contacts[i].FirstName;
	std::cout << std::endl << "ID = " << Contacts[i].index << "First Name = " << Contacts[i].FirstName << std::endl;
	return ;
}

PhoneBook::PhoneBook()
{
	std::cout << "is construct" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "is destruct" << std::endl;
}