/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 19:49:45 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 12:28:35 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::giveName(std::string name)
{
	this->_name = name;
}

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << _name << " is destruct" << std::endl;
}