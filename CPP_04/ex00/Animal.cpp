/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:46:01 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/30 16:01:57 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

std::string Animal::getType()
{
	return (type);
}

void Animal::setType(std::string t)
{
	type = t;
}

void Animal::makeSound()
{
	std::cout << sound << std::endl;
}

Animal::Animal()
{
	std::cout << "Construct Animal" << std::endl;
	type = "animal";
	sound = "Animal sound";
}

Animal::Animal(Animal& a)
{
	std::cout << "Copy Construct Animal" << std::endl;
	type = a.type;
	sound = a.sound;
}

Animal& Animal::operator=(const Animal& a)
{
	std::cout << "Copy Assigenement Animal" << std::endl;
	if (this != &a)
	{
		type = a.type;
		sound = a.sound;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal is destruct" << std::endl;
}