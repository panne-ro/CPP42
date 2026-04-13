/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:54:22 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 14:39:29 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string	_type;
		
	public:
		const std::string&	getType();
		void				setType(std::string newType);
		
		Weapon(std::string startType);
		~Weapon();
};

#endif