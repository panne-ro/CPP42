/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:06:55 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 14:48:17 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << "have no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& receive)
{
	_weapon = &receive;
}

HumanB::HumanB(std::string Name)
	:_name(Name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}