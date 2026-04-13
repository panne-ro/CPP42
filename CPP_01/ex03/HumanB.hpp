/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panne-ro <panne-ro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:06:44 by panne-ro          #+#    #+#             */
/*   Updated: 2026/03/31 14:48:21 by panne-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon*		_weapon;
		
	public:
		void	attack();
		void	setWeapon(Weapon& receive);

		HumanB(std::string Name);
		~HumanB();
};


