/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:10:34 by panne-ro          #+#    #+#             */
/*   Updated: 2026/05/01 15:30:41 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::setType(std::string t)
{
	type = t;
}
void		WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}
	
WrongAnimal::WrongAnimal()
{
	std::cout << "Construct WrongAnimal" << std::endl;
	type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal& a)
{
	std::cout << "Copy Construct WrongAnimal" << std::endl;
	type = a.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	std::cout << "Copy Assigenement WrongAnimal" << std::endl;
	if (this != &a)
		type = a.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal is destruct" << std::endl;
}
