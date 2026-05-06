/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 15:23:45 by panne-ro          #+#    #+#             */
/*   Updated: 2026/05/01 15:31:06 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Construct WrongCat" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& c)
	:WrongAnimal()
{
	std::cout << "Copy Construct WrongCat" << std::endl;
	type = c.type;
}

WrongCat& WrongCat::operator=(WrongCat& c)
{
	std::cout << "Copy Assignement WrongCat" << std::endl;
	if (this != &c)
		type = c.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destruct WrongCat" << std::endl;
}
