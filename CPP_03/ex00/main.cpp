/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:18:15 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/28 13:18:18 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	Claptrap("Manu");

	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.attack("Pablo le goat");
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.takeDamage(4);
	Claptrap.beRepaired(5);
	Claptrap.attack("Pablo le goat");
	Claptrap.takeDamage(10);
	Claptrap.takeDamage(1);
	Claptrap.beRepaired(1000);
	return (0);
}