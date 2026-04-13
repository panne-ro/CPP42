/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:13:46 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 12:32:41 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* Horde;
	int		N = 10;
	
	Horde = zombieHorde(N, "Foo");

	if(!Horde)
		return (1);
	
	for (int i = 0; i < N; i++)
		Horde[i].announce();
		
	delete[] Horde;
	return (0);
}