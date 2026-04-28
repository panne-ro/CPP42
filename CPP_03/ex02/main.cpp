/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:19:17 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/28 13:19:18 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	Frag("Manu");

	Frag.attack("Pablo le goat");
	Frag.attack("Pablo le goat");
	Frag.attack("Pablo le goat");
	Frag.highFivesGuys("Nico");
	Frag.takeDamage(10);
	Frag.beRepaired(10);
	Frag.takeDamage(10);
	Frag.beRepaired(10);
	Frag.attack("Pablo le goat");
	Frag.takeDamage(100);
	Frag.beRepaired(10);
	return 0;
}