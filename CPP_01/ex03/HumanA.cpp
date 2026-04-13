/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:06:34 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 14:46:21 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string Name, Weapon &weapon)
	: _weapon(weapon)
{
	_name = Name;
	_weapon.setType(weapon.getType());
}

HumanA::~HumanA()
{
}