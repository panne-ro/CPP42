/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:18:34 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/28 13:18:35 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	Scav("Manu");

	Scav.attack("Pablo le goat");
	Scav.attack("Pablo le goat");
	Scav.attack("Pablo le goat");
	Scav.guardGate();
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.takeDamage(10);
	Scav.beRepaired(10);
	Scav.attack("Pablo le goat");
	Scav.takeDamage(100);
	Scav.beRepaired(10);
	return 0;
}