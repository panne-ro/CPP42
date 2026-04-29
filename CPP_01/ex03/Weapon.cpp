/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:54:52 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/29 16:18:22 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	const std::string &typeREF = _type;
	return (typeREF);
}

void	Weapon::setType(std::string newType)
{
	_type = newType;
}

Weapon::Weapon(std::string startType)
{
	_type = startType;
}

Weapon::~Weapon()
{
}