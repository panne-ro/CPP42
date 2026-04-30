/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 14:46:06 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/30 16:02:39 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Construct Cat" << std::endl;
	type = "Cat";
	sound = "Miaou";
}

Cat::Cat(Cat& c)
	:Animal()
{
	std::cout << "Copy Construct Cat" << std::endl;
	type = c.type;
	sound = c.sound;
}

Cat& Cat::operator=(Cat& c)
{
	std::cout << "Copy Assignement Cat" << std::endl;
	if (this != &c)
	{
		type = c.type;
		sound = c.sound;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Destruct Cat" << std::endl;
}
