/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:46:10 by panne-ro          #+#    #+#             */
/*   Updated: 2026/05/01 15:37:06 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

void	Dog::makeSound() const
{
	std::cout << "Whouaf" << std::endl;  
}

Dog::Dog()
{
	std::cout << "Construct Dog" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog& d)
	:Animal()
{
	std::cout << "Copy Construct Dog" << std::endl;
	type = d.type;
}

Dog& Dog::operator=(Dog& d)
{
	std::cout << "Copy Assignement Dog" << std::endl;
	if (this != &d)
	{
		type = d.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destruct Dog" << std::endl;
}