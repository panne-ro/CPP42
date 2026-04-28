/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:18:07 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/28 13:18:08 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include "../Color.h"

class ClapTrap
{
private:
	std::string _name;
	int			_HitPoints;
	int			_EnergyPoints;
	int			_AttackDamage;

	int		isAlive();
	int		haveEnergy();
public:
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap& c);
	ClapTrap& operator=(const ClapTrap& c);
	~ClapTrap();
};

#endif