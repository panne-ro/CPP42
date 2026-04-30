/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:18:55 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/30 15:17:47 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (isAlive() == 0 || haveEnergy() == 0)
		return;
	_EnergyPoints--;
	std::cout << CYAN << "ClapTrap " << _name << " attacks " << target << ", ";
	std::cout << CYAN << "causing " << _AttackDamage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0)
	{
		std::cout << MAGENTA << _name << " can't take damage cause he is dead" << std::endl;
		return ;
	}
	_HitPoints -= amount;
	std::cout << RED << _name << " take " << amount << " damages !" << std::endl;
	isAlive();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (isAlive() == 0 || haveEnergy() == 0)
		return;
	if (haveEnergy() == 0)
		return ;
	_EnergyPoints--;
	_HitPoints += amount;
	std::cout << GREEN << _name << " repairs itself of " << amount << " health points !" << std::endl;
}

int	ClapTrap::isAlive()
{
	if (_HitPoints <= 0)
	{
		std::cout << MAGENTA << _name << " is dead" << std::endl;
		return (0);
	}
	else
		return (1);
}

int	ClapTrap::haveEnergy()
{
	if (_EnergyPoints <= 0)
	{
		std::cout << YELLOW << _name << " have not enough energy" << std::endl;
		return (0);
	}
	else
		return (1);
}

ClapTrap::ClapTrap()
{
	_EnergyPoints = 10;
	_HitPoints = 10;
	_AttackDamage = 0;
	_name = "ClapTrap";
	std::cout << WHITE << "ClapTrap is construct" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	_EnergyPoints = 10;
	_HitPoints = 10;
	_AttackDamage = 0;
	_name = name;
	std::cout << WHITE << "ClapTrap " << _name << " is construct" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& c)
{
	std::cout << WHITE << "Copy ClapTrap " << _name << " is construct" << std::endl;
	_name = c._name;
	_HitPoints = c._HitPoints;
	_EnergyPoints = c._EnergyPoints;
	_AttackDamage = c._AttackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c)
{
	std::cout << WHITE << "Copy Assignement ClapTrap " << _name << " is construct" << std::endl;
	if (this != &c)
	{
		_name = c._name;
		_HitPoints = c._HitPoints;
		_EnergyPoints = c._EnergyPoints;
		_AttackDamage = c._AttackDamage;
	}
	return *this; 
}

ClapTrap::~ClapTrap()
{
	std::cout << WHITE << "ClapTrap " << _name << " is destruct" << std::endl;
}