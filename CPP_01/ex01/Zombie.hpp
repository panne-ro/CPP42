/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 19:46:44 by panne-ro          #+#    #+#             */
/*   Updated: 2026/04/29 15:41:45 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

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

#endif