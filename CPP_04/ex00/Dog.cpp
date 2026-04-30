/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:46:10 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/30 16:03:43 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Construct Dog" << std::endl;
	type = "Dog";
	sound = "Whoaf";
}

Dog::Dog(Dog& d)
	:Animal()
{
	std::cout << "Copy Construct Dog" << std::endl;
	type = d.type;
	sound = d.sound;
}

Dog& Dog::operator=(Dog& d)
{
	std::cout << "Copy Assignement Dog" << std::endl;
	if (this != &d)
	{
		type = d.type;
		sound = d.sound;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destruct Dog" << std::endl;
}