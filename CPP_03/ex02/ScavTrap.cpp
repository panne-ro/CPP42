/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:19:22 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/28 13:19:23 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string &target)
{
	if (!haveEnergy())
	{
		std::cout << "ScavTrap " << _name << " has no energy to attack!" << std::endl;
		return ;
	}
	_EnergyPoints -= 1;
	std::cout << CYAN << "ScavTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage! " << _EnergyPoints << " energy points remains" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << CYAN << _name << " is now in gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap()
{
	_EnergyPoints = 100;
	_HitPoints = 50;
	_AttackDamage = 20;
	_name = "ScavTrap";
	std::cout << WHITE << "ScavTrap is construct" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	:ClapTrap(name)
{
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << WHITE << "ScavTrap " << _name << " is construct" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& s)
{
	std::cout << WHITE << "Copy ScavTrap " << _name << " is construct" << std::endl;
	_name = s._name;
	_HitPoints = s._HitPoints;
	_EnergyPoints = s._EnergyPoints;
	_AttackDamage = s._AttackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& s)
{
	std::cout << WHITE << "Copy Assignement ScavTrap " << _name << " is construct" << std::endl;
	if (this != &s)
	{
		_name = s._name;
		_HitPoints = s._HitPoints;
		_EnergyPoints = s._EnergyPoints;
		_AttackDamage = s._AttackDamage;
	}
	return *this; 
}

ScavTrap::~ScavTrap()
{
	std::cout << WHITE << "ScavTrap " << _name << " is destruct" << std::endl;
}