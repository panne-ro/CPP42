/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 19:46:44 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 12:28:47 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie
{
	private :
	std::string _name;
	
	public :
	void	giveName(std::string name);
	void	announce(void);		
	Zombie(void);
	~Zombie(void);
};

Zombie* zombieHorde(int N, std::string name);